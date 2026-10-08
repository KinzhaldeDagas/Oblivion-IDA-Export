struct set_queue_mask_reply
{
reply_header __header;
unsigned int wake_bits;
unsigned int changed_bits;
};
