struct read_directory_changes_request
{
request_header __header;
unsigned int filter;
int subtree;
int want_data;
async_data_t async;
};
