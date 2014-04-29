void OnOpenCB0 (const char* connectionID,
				  const char * AccumulatedHeadersStr,
				  int AccumulatedHeadersLen)
{
	// Instead of lr_end_transaction("T03_Connect",LR_AUTO);
	dTime_elapsed = lr_end_timer(timer);
	lr_message("!!! connected at: [%s]",lr_eval_string("{ts}"));
	lr_set_transaction("T03_Connect", dTime_elapsed, LR_PASS); // Create successful transaction with a duration of seconds.

	lr_save_timestamp("timestamp", "DIGITS=16", LAST );
	lr_message(">> T03_Connect of WebSocket ID=%s after %.0f seconds at timestamp=%s [in OnOpenCB0()]"
	           ,connectionID ,dTime_elapsed ,lr_eval_string("{timestamp}"));

		lr_save_param_regexp (AccumulatedHeadersStr,
							  AccumulatedHeadersLen,
							  "RegExp=Sec-WebSocket-Accept: (.+)\\r\\n",
							  "ResultParam=Accept",
							  LAST );
		lr_output_message(">> Sec-WebSocket-Accept = [%s]",
						  lr_eval_string("{Accept}"));

	timer = lr_start_timer(); // instead of lr_start_transaction("T05_CB0_Updates") 
	OnMessageCB0_entries = 0;
}

void OnMessageCB0 (const char* connectionID,
				  int isbinary,
				  const char * data,
				  int length)
{

int isupdate;

	
//		if (isbinary) {
//			lr_output_message("WebSocket ID = %s. [%d] bytes binary message received.", connectionID, length);
//		}
//		else {
//			lr_output_message("WebSocket ID = %s. [%d] bytes text message received.", connectionID, length);
//			lr_output_message("\r\n===\r\n%s\r\n===", data);
//		}

	OnMessageCB0_entries = OnMessageCB0_entries + 1;

// The first response after connect downloads JavaScript:  function setPhase,  c,d,z,n,r,p, error(cod, ph, tbl, msg), start, end, loop, retry, bw, convert.

   isupdate = strncmp(data,"d(",2); // as in data=d(1,8,1,'5.57','00:45:50','4.89','19500','5.57','5.58','25000',4);
if(isupdate != 0) {
   		// Display what is NOT handled as a message:
		lr_output_message(">> Among %d entries, OnMessageCB0_updates=%d with data=%s [at OnMessageCB0]"
		                  , OnMessageCB0_entries, OnMessageCB0_updates, data);
   }else{
	// message= z(1,10,'ELE Manufacturing','7.37','00:45:47','-3.15','49500','7.37','7.38','18000','5.97','9.11','7.61','7.7');
	//		    z(1,2,'Ations Europe','14.91','00:45:47','-7.33','47500','14.91','14.93','35000','12.62','19.43','16.09','16.2');
	
	    OnMessageCB0_updates = OnMessageCB0_updates + 1;
	if( OnMessageCB0_updates == 1 ){
		lr_set_transaction("T04_first_CB0_update", dTime_elapsed, LR_PASS); // Create successful transaction with a duration of seconds.
		lr_output_message(">> Among %d entries, OnMessageCB0_updates=%d with data=%s [at OnMessageCB0]"
		                  , OnMessageCB0_entries, OnMessageCB0_updates, data);
	}

	lr_save_param_regexp (
        			data,
        			length,
					myvalue_regexp,	
					"Ordinal=All",					
        			"ResultParam=myValue",
        			LAST );	
			
	if (atoi(lr_eval_string("{myValue_count}"))>0) {
		lr_message(">> [%s]: '%s'= [%s]$"
	    	           ,lr_eval_string("{ts}")
	    	           ,lr_eval_string("{COMPANY}")
	    	           ,lr_eval_string("{myValue_1}")
	    	          );
		lr_user_data_point(lr_eval_string("{COMPANY} stock value")
	    	           ,atof(lr_eval_string("{myValue_1}"))
	    	           );
	}
}
	
}

void OnErrorCB0 (const char* connectionID,
				  const char * message,
				  int length)
{
		lr_error_message(">> WebSocket ID=%s error occured. Error message = %s [at OnErrorCB0]"
	                  , connectionID, message);
}

void OnCloseCB0 (const char* connectionID,
				  int isClosedByClient,
				  int code,
				  const char* reason,
				  int length)
{
	
		lr_output_message(">> WebSocket ID=%s closed. CloseCode= %d, CloseReason=%s  [at OnCloseCB0]"
	                  , connectionID, code, reason);
}

