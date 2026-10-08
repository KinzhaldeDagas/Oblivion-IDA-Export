struct set_window_info_reply
{
reply_header __header;
unsigned int old_style;
unsigned int old_ex_style;
mod_handle_t old_instance;
lparam_t old_user_data;
lparam_t old_extra_value;
unsigned int old_id;
char __pad_44[4];
};
