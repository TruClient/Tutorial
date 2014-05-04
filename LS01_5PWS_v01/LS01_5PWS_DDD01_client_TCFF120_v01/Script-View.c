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
	truclient_step("1", "Evaluate JavaScript code var jTransIteration = 0;", "snapshot=Init_1.inf");
}

Script_View_Action()
{
	lr_start_transaction("T01_Landing");
	truclient_step("1", "Navigate to 'http://' + TC.getParam...os/DropDownDemo'", "snapshot=Action_1.inf");
	lr_end_transaction("T01_Landing",0);
	truclient_step("2", "Evaluate JavaScript var optionNamesSet = {};...NamesAndCount(); on DROP DOWN DEMO item1item...5item16item17... listbox", "snapshot=Action_2.inf");
	truclient_step("3", "For ( var i = 0 ; true ; i++ )", "snapshot=Action_3.inf");
	{
		truclient_step("3.1", "Wait 1 seconds", "snapshot=Action_3.1.inf");
	}
}

Script_View_LS01()
{
	truclient_step("1", "Function StockListener", "snapshot=LS01_1.inf");
	{
		truclient_step("1.1", "Evaluate JavaScript (function(){  var...  })(); on DROP DOWN DEMO item1item...5item16item17... listbox", "snapshot=LS01_1.1.inf");
	}
}
