struct get_message_reply
{
reply_header __header;
user_handle_t win;
unsigned int msg;
lparam_t wparam;
lparam_t lparam;
int type;
int x;
int y;
unsigned int time;
unsigned int active_hooks;
data_size_t total;
};
