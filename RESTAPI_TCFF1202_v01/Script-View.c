//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Script_View_Action()
{
	truclient_step("1", "Evaluate JavaScript code 'xhReq_synchronous_call'", "snapshot=Action_1.inf");
	truclient_step("2", "Evaluate JavaScript code 'xhReq_async_call'", "snapshot=Action_2.inf");
}
