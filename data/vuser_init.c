/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 0
   ------------------------------------------------------------------------------- */

vuser_init()
{

	lr_start_transaction("001_SAP_Logon");

	sapgui_open_connection_ex(connection_string1, 
		"S/4HANA 2020 FPS01", 
		"con[0]");

	sapgui_select_active_connection("con[0]");

	sapgui_select_active_session("ses[0]");

	sapgui_select_active_window("wnd[0]");

	sapgui_window_resize("89", 
		"18", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui104", 
		END_OPTIONAL);

	/*Before running script, enter password in place of asterisks in logon function*/

	sapgui_logon("S4H_SD_DEM", 
		"*****", 
		"100", 
		"EN", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1012", 
		END_OPTIONAL);

	lr_end_transaction("001_SAP_Logon",LR_AUTO);

	lr_think_time(3);

	return 0;
}
