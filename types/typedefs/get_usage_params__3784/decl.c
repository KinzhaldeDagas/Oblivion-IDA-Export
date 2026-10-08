struct get_usage_params
{
USAGE *usages __offset(OFF64|AUTO);
USAGE *usages_end __offset(OFF64|AUTO);
char *report_buf __offset(OFF64|AUTO);
};
