struct get_clipboard_data_request
{
request_header __header;
unsigned int format;
int render;
int cached;
unsigned int seqno;
char __pad_28[4];
};
