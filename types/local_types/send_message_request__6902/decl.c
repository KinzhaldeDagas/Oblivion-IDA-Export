struct send_message_request
{
request_header __header;
thread_id_t id;
int type;
int flags;
user_handle_t win;
unsigned int msg;
lparam_t wparam;
lparam_t lparam;
timeout_t timeout;
};
