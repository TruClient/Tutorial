   /**********************************************************************************************
   **                                                                                           **
   **                   	             PLEASE NOTE										    **
   **                   	             ===========										    **
   **                                                                                           **
   **      The Script-View you see here is a READ-ONLY representation of the actual script.     **
   **                                                                                           **
   **      For creating, viewing, modifying, running and/or debugging a script, please press    **
   **                                                                                           **
   **      the "Develop Script" button. This will start Firefox,  with the TruClient sidebar    **
   **                                                                                           **
   **      at the left.  Starting Firefox may take a while. Alternatively, you can run          **
   **                                                                                           **
   **      the current script as-is, without starting Firefox, by pressing the "Run" button.    **
   **                                                                                           **
   **********************************************************************************************/


Script_View_Init()
{
	truclient_step("1", "Evaluate JavaScript code var T02X_StockList_Change_iteration = 0;", "snapshot=Init_1.inf");
}

Script_View_Action()
{
	lr_start_transaction("T01_Landing");
	truclient_step("1", "Navigate to 'http://' + TC.getParam...olioDemo_Basic/'", "snapshot=Action_1.inf");
	lr_end_transaction("T01_Landing",0);
	truclient_step("2", "For ( var i = 0 ; i < 10 ; i++ )", "snapshot=Action_2.inf");
	{
		/* // Sekect existing itemText randomly: */
		truclient_step("2.2", "Select a random option from listbox (1) listbox", "snapshot=Action_2.2.inf");
		truclient_step("2.3", "Evaluate JavaScript var options = object.opt...eak;  } } on listbox (1) listbox", "snapshot=Action_2.3.inf");
	}
	truclient_step("3", "Get 'Visible Text' from 200", "snapshot=Action_3.inf");
	truclient_step("4", "Evaluate JavaScript code // Hard code values: var...itemQuant='200';", "snapshot=Action_4.inf");
	truclient_step("8", "If ( true )", "snapshot=Action_8.inf");
	{
		truclient_step("8.1", "Select itemText from listbox (1) listbox", "snapshot=Action_8.1.inf");
		truclient_step("8.4", "Type itemQuant in textbox (1) textbox", "snapshot=Action_8.4.inf");
		truclient_step("8.5", "Evaluate JavaScript code // Start Sell xtrans &am...'+itemText+'.');", "snapshot=Action_8.5.inf");
		truclient_step("8.6", "Click on Sell button", "snapshot=Action_8.6.inf");
		truclient_step("8.7", "Wait Math.floor(11*Math.random()) + 5; seconds", "snapshot=Action_8.7.inf");
		truclient_step("8.8", "Evaluate JavaScript code // Start Sell xtrans &am...t+' '+itemText);", "snapshot=Action_8.8.inf");
		truclient_step("8.9", "Click on Buy button", "snapshot=Action_8.9.inf");
	}
}
