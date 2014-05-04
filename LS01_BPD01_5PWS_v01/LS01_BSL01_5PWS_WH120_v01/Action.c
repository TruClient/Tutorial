Action()
{
	iActionIterations = iActionIterations + 1;
	
	// Table is used because stock names are embedded in JavaScript:
	sprintf(mycompany_regexp,"RegExp=z\\([0-9]+,([0-9]+),'%s'"
	        ,lr_eval_string("{COMPANY}")
	       );
	sprintf(myvalue_regexp  ,"RegExp=d\\(1,%s,1,'([0-9]*\\.?[0-9]*)',"
	        ,lr_eval_string("{INDEX}")
	       );
	lr_message(">> Stock values for :[%s][%s]"
	        ,lr_eval_string("{COMPANY}")
	        ,lr_eval_string("{INDEX}")
	       );

	// Programmatically avoid verbose:
		lr_set_debug_message(LR_MSG_CLASS_JIT_LOG_ON_ERROR , LR_SWITCH_OFF);
		lr_set_debug_message(0, LR_SWITCH_ON);

	lr_start_transaction("T01_landing");
	web_url("StockListDemo_Basic", 
		"URL=http://{server}/demos/StockListDemo_Basic/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);
	lr_end_transaction("T01_landing",LR_AUTO);
	// GET /demos/StockListDemo_Basic/lightstreamer.js
	// GET /demos/StockListDemo_Basic/css/table.css
	// GET /demos/StockListDemo_Basic/require.js
	// GET /demos/StockListDemo_Basic/images/logo.png


/*Correlation comment - Do not change!  Original value='Se0242becabc00d66T1805176' Name ='LS_session' Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=LS_session",
		"LB=start('",
		"RB='",
		SEARCH_FILTERS,
		"Scope=Body",
		LAST);
	lr_start_transaction("T02_create_LS_session");
	web_submit_data("create_session.js", 
		"Action=http://{server}/lightstreamer/create_session.js", 
		"Method=POST", 
		"RecContentType=text/javascript", 
		"Referer=http://{server}/demos/StockListDemo_Basic/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=LS_phase", "Value=301", ENDITEM, 
		"Name=LS_cause", "Value=new.api", ENDITEM, 
		"Name=LS_polling", "Value=true", ENDITEM, 
		"Name=LS_polling_millis", "Value=0", ENDITEM, 
		"Name=LS_idle_millis", "Value=0", ENDITEM, 
		"Name=LS_client_version", "Value=6.0", ENDITEM, 
		"Name=LS_adapter_set", "Value=DEMO", ENDITEM, 
		"Name=LS_container", "Value=lsc", ENDITEM, 
		LAST);
	lr_end_transaction("T02_create_LS_session",LR_AUTO);
	lr_message(">> LS_session:[%s] [in Action()]", lr_eval_string("{LS_session}"));


	web_set_sockets_option("CLOSE_KEEPALIVE_CONNECTIONS","1");
	web_add_header("Sec-WebSocket-Extensions", "permessage-deflate; client_max_window_bits, x-webkit-deflate-frame");
	web_add_header("Sec-WebSocket-Protocol", "js.lightstreamer.com");

	
	web_add_header("Pragma","no-cache");
	web_add_header("Cache-Control","no-cache");
	web_remove_auto_header("Referer",LAST);
	web_remove_auto_header("Accept-Encoding",LAST);
	web_remove_auto_header("Accept-Language",LAST);
	web_remove_auto_header("Accept",LAST);
	web_remove_auto_header("Proxy-Connection",LAST);
	web_remove_auto_header("Host",LAST);

	// Go verbose:
		lr_set_debug_message(LR_MSG_CLASS_JIT_LOG_ON_ERROR , LR_SWITCH_OFF); 
		lr_set_debug_message(iMsg_level_in, LR_SWITCH_ON); 

	timer = lr_start_timer(); // instead of lr_start_transaction("T03_Connect" in WebSocketCB.c function OnOpenCB0().
	lr_message("!!! connect started at: [%s]",lr_eval_string("{ts}"));
	
	web_websocket_connect("ID=0", 
		"URI=ws://{server}/lightstreamer", 
		"Origin=http://{server}", 
		"OnOpenCB=OnOpenCB0", 
		"OnMessageCB=OnMessageCB0", 
		"OnErrorCB=OnErrorCB0", 
		"OnCloseCB=OnCloseCB0", 
		LAST);
	// Request body sent is after UUENCODE that looks like "\x81\xE3\xE3\x9D|c\x81\xF4".
	// Response HTTP/1.1 101 Switching Protocols
	// Instead of lr_end_transaction("T03_Connect" in WebSocketCB.c function OnOpenCB0().
	
	lr_think_time(1);
	
	web_websocket_send("ID=0", 
		"Buffer=bind_session\r\nLS_session={LS_session}&LS_phase=303&LS_cause=loop1&LS_container=lsc&", 
		"IsBinary=0", 
		LAST);

	lr_think_time(1);
	
	web_websocket_send("ID=0", 
		"Buffer=control\r\nLS_mode=MERGE&LS_id=item1%20item2%20item3%20item4%20item5%20item6%20item7%20item8%20item9%20item10&LS_schema=stock_name%20last_price%20time%20pct_change%20bid_quantity%20bid%20ask%20ask_quantity%20min%20max%20ref_price%20open_price&LS_data_adapter=QUOTE_ADAPTER&LS_snapshot=true&LS_table=1&LS_req_phase=670&LS_win_phase=30&LS_op=add&LS_session={LS_session}&", 
		"IsBinary=0", 
		LAST);
  
	/*Connection ID 0 received buffer WebSocketReceive0*/
	/* to */
	/*Connection ID 0 received buffer WebSocketReceive58*/

	lr_think_time(30);

	dTime_elapsed = lr_end_timer(timer);
	lr_set_transaction("T05_CB0_Updates", dTime_elapsed, LR_PASS); // Create successful transaction with a duration of seconds.
	lr_message(">> OnMessageCB0_updates:%d over %.0f seconds [in Action()]", OnMessageCB0_updates, dTime_elapsed );

	web_websocket_close("ID=0", 
		"Code=1000", 
		"Reason=OK - {ts}",
		LAST);
	
	return 0;
}