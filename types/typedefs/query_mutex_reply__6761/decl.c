struct query_mutex_reply
{
reply_header __header;
unsigned int count;
int owned;
int abandoned;
char __pad_20[4];
};
