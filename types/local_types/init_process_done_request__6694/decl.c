struct init_process_done_request
{
request_header __header;
char __pad_12[4];
client_ptr_t teb;
client_ptr_t peb;
client_ptr_t ldt_copy;
};
