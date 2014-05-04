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
	truclient_step("1", "Evaluate JavaScript code var jActionIterations = 0;", "snapshot=Init_1.inf");
}

Script_View_Action()
{
	/* This adds then deletes 100 shares of item4 using the Lightstreamer Basic Portfolio Demo (BPD). Scripted by Wilson.mar. */
	truclient_step("2", "Evaluate JavaScript code jActionIterations = jActionIterations + 1;", "snapshot=Action_2.inf");
	truclient_step("3", "Navigate to 'http://54.188.18.140/de...olioDemo_Basic/'", "snapshot=Action_3.inf");
	truclient_step("5", "Select 'item4' from listbox (1) listbox", "snapshot=Action_5.inf");
	truclient_step("6", "Type '100' in textbox (1) textbox", "snapshot=Action_6.inf");
	truclient_step("7", "Evaluate JavaScript code var jTransInstance=jActi...jTransInstance);", "snapshot=Action_7.inf");
	truclient_step("8", "Click on Sell button", "snapshot=Action_8.inf");
	truclient_step("9", "Evaluate JavaScript code var jTransInstance='buy_...e client script.", "snapshot=Action_9.inf");
	truclient_step("10", "Click on Buy button", "snapshot=Action_10.inf");
}
