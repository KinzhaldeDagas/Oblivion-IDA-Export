struct enum_key_value_reply
{
reply_header __header;
int type;
data_size_t total;
data_size_t namelen;
char __pad_20[4];
};
