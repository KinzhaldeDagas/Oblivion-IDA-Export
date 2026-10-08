struct set_fd_disp_info_request
{
request_header __header;
obj_handle_t handle;
int unlink;
char __pad_20[4];
};
