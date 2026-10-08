struct get_token_info_reply
{
reply_header __header;
luid_t token_id;
luid_t modified_id;
unsigned int session_id;
int primary;
int impersonation_level;
int elevation;
int group_count;
int privilege_count;
};
