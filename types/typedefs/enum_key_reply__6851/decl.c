struct enum_key_reply
{
reply_header __header;
int subkeys;
int max_subkey;
int max_class;
int values;
int max_value;
int max_data;
timeout_t modif;
data_size_t total;
data_size_t namelen;
};
