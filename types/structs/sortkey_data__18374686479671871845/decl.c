struct __declspec(align(8)) sortkey_data
{
BYTE *buffer __offset(OFF64|AUTO);
int buffer_pos;
int buffer_len;
BOOL is_compare_string;
};
