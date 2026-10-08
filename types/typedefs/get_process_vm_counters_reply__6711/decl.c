struct get_process_vm_counters_reply
{
reply_header __header;
mem_size_t peak_virtual_size;
mem_size_t virtual_size;
mem_size_t peak_working_set_size;
mem_size_t working_set_size;
mem_size_t pagefile_usage;
mem_size_t peak_pagefile_usage;
};
