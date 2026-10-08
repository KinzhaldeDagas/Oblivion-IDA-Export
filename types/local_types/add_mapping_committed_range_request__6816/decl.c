struct add_mapping_committed_range_request
{
request_header __header;
char __pad_12[4];
client_ptr_t base;
file_pos_t offset;
mem_size_t size;
};
