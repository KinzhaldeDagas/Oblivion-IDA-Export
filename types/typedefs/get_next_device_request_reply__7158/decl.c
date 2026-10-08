struct get_next_device_request_reply
{
reply_header __header;
irp_params_t params;
obj_handle_t next;
thread_id_t client_tid;
client_ptr_t client_thread;
data_size_t in_size;
char __pad_60[4];
};
