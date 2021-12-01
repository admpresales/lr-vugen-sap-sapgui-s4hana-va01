Action()
{

	lr_start_transaction("002_Nav_to_va01");

	sapgui_set_ok_code("/nva01", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1013", 
		END_OPTIONAL);

	sapgui_send_vkey(ENTER, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1014", 
		END_OPTIONAL);

	lr_end_transaction("002_Nav_to_va01",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("003_va01_screen_1");

	sapgui_set_text("VBAK-AUART", 
		"OR", 
		ctxtVBAK1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1017", 
		END_OPTIONAL);

	sapgui_set_text("Distribution Channel", 
		"10", 
		ctxtVBAK2, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1018", 
		END_OPTIONAL);

	sapgui_set_text("Division", 
		"00", 
		ctxtVBAK3, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1019", 
		END_OPTIONAL);

	sapgui_set_focus(ctxtVBAK3, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1020", 
		END_OPTIONAL);

	sapgui_send_vkey(ENTER, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1022", 
		END_OPTIONAL);

	lr_end_transaction("003_va01_screen_1",LR_AUTO);

	lr_think_time(3);

	lr_start_transaction("004_va01_create_order");

	sapgui_set_text("Cust. Reference", 
		"450000019998", 
		txtVBKD1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1025", 
		END_OPTIONAL);

	sapgui_set_text("Sold-To Party", 
		"EWM17-CU02", 
		ctxtKUAGV1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1026", 
		END_OPTIONAL);

	sapgui_set_text("Ship-To Party", 
		"EWM17-CU02", 
		ctxtKUWEV1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1027", 
		END_OPTIONAL);

	sapgui_set_focus(ctxtVBKD1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1028", 
		END_OPTIONAL);

	sapgui_send_vkey(F4, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1030", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[1]");

	sapgui_calendar_focus_date("12/1/2021", 
		shell1, 
		"20211201", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1033", 
		END_OPTIONAL);

	sapgui_calendar_select_interval("12/1/2021-12/1/2021", 
		shell1, 
		"20211201,20211201", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1034", 
		END_OPTIONAL);

	sapgui_select_active_window("wnd[0]");

	sapgui_table_fill_data("Table", 
		tblSAPMV45ATCTRL_U_ERF_AUFTRAG1, 
		"{data}", 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1040", 
		END_OPTIONAL);

	sapgui_table_set_focus("(0, 'Un')", 
		tblSAPMV45ATCTRL_U_ERF_AUFTRAG1, 
		"0", 
		"4", 
		BEGIN_OPTIONAL, 
			originalid1, 
			"AdditionalInfo=sapgui1041", 
		END_OPTIONAL);

	sapgui_send_vkey(ENTER, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1043", 
		END_OPTIONAL);

	sapgui_send_vkey(F11, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1046", 
		END_OPTIONAL);

	sapgui_status_bar_get_text("paramStatusBarText", 
		BEGIN_OPTIONAL, 
			"Recorded status bar text: Standard Order 4101 has been saved.", 
			"AdditionalInfo=sapgui1049", 
		END_OPTIONAL);

	lr_end_transaction("004_va01_create_order",LR_AUTO);

	lr_think_time(3);

	/* Get the order number, recording it was 4101 */

	lr_start_transaction("005_va01_exit_tcode");

	sapgui_press_button("Exit", 
		btn1, 
		BEGIN_OPTIONAL, 
			"AdditionalInfo=sapgui1050", 
		END_OPTIONAL);
	lr_end_transaction("005_va01_exit_tcode",LR_AUTO);
	return 0;
}
