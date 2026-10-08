struct get_usage_and_page_params
{
USAGE_AND_PAGE *usages __offset(OFF64|AUTO);
USAGE_AND_PAGE *usages_end __offset(OFF64|AUTO);
char *report_buf __offset(OFF64|AUTO);
};
