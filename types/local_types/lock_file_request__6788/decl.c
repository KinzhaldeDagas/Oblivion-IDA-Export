struct lock_file_request
{
request_header __header;
obj_handle_t handle;
file_pos_t offset;
file_pos_t count;
int shared;
int wait;
};
