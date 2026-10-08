struct find_all_data_params
{
HIDP_DATA *data __offset(OFF64|AUTO);
HIDP_DATA *data_end __offset(OFF64|AUTO);
char *report_buf __offset(OFF64|AUTO);
};
