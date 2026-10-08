struct set_win_timer_request
{
request_header __header;
user_handle_t win;
unsigned int msg;
unsigned int rate;
lparam_t id;
lparam_t lparam;
};
