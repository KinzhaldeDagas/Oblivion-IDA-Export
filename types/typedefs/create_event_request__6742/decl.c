struct create_event_request
{
request_header __header;
unsigned int access;
int manual_reset;
int initial_state;
};
