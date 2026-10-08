struct set_queue_mask_request
{
request_header __header;
unsigned int wake_mask;
unsigned int changed_mask;
int skip_wait;
};
