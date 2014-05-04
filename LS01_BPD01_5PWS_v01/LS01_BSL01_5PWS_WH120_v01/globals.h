#ifndef _GLOBALS_H 
#define _GLOBALS_H

// Manually added for use in custom script:
	int		iMsg_level_in;
	int		iActionIterations=0;

	char	myvalue_regexp[64];
	char	mycompany_regexp[64];
	
	// For use by lr_start_timer():
	int		OnMessageCB0_entries = 0; // count of all entries into function.
	int 	OnMessageCB0_updates = 0; // isupdate = yes.
	merc_timer_handle_t 	timer;
	double	dTime_elapsed;

double atof( const char *string); /* Explicit declaration */

//--------------------------------------------------------------------
// Include Files
#include "lrun.h"
#include "web_api.h"
#include "lrw_custom_body.h"
#include "WebSocketCB.c"
#include "WebSocketBuffer.h"

//--------------------------------------------------------------------
// Global Variables

#endif // _GLOBALS_H
