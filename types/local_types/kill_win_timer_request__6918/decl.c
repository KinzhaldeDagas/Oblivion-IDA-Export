struct kill_win_timer_request
{
request_header __header;
user_handle_t win;
lparam_t id;
unsigned int msg;
char __pad_28[4];
};
