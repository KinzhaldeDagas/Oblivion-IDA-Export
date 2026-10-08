struct set_fd_eof_info_request
{
request_header __header;
obj_handle_t handle;
file_pos_t eof;
};
