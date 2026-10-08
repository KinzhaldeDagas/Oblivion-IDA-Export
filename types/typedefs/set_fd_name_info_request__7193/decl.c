struct set_fd_name_info_request
{
request_header __header;
obj_handle_t handle;
obj_handle_t rootdir;
data_size_t namelen;
int link;
int replace;
};
