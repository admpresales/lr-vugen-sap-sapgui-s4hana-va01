vuser_end()
{

	lr_start_transaction("006_Logoff");

	sapgui_press_button("Exit", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1053", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_press_button("Yes", 
		btnSPOP1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1056", 
		END_OPTIONAL);

	lr_end_transaction("006_Logoff",LR_AUTO);

	lr_think_time(3);

	return 0;
}