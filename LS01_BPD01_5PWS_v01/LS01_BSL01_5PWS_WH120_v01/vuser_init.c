vuser_init()
{
	
	
	lr_save_timestamp("timestamp", "DIGITS=16", LAST );
	// lr_whoami()
	lr_output_message(">> server=%s at timestamp=%s",lr_eval_string("{server}"),lr_eval_string("{timestamp}"));

	iMsg_level_in = lr_get_debug_message();
	
	return 0;
}
