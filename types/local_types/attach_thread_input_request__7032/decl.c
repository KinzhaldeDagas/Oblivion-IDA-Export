struct attach_thread_input_request
{
request_header __header;
thread_id_t tid_from;
thread_id_t tid_to;
int attach;
};
