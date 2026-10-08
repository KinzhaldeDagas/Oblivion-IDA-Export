struct set_class_info_request
{
request_header __header;
user_handle_t window;
unsigned int flags;
atom_t atom;
unsigned int style;
int win_extra;
mod_handle_t instance;
int extra_offset;
data_size_t extra_size;
lparam_t extra_value;
};
