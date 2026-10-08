struct set_window_info_request
{
request_header __header;
unsigned __int16 flags;
__int16 is_unicode;
user_handle_t handle;
unsigned int style;
unsigned int ex_style;
unsigned int id;
mod_handle_t instance;
lparam_t user_data;
int extra_offset;
data_size_t extra_size;
lparam_t extra_value;
};
