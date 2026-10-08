struct __declspec(align(8)) parsed_symbol
{
unsigned int flags;
malloc_func_t mem_alloc_ptr __offset(OFF64|AUTO);
free_func_t mem_free_ptr __offset(OFF64|AUTO);
const char *current __offset(OFF64|AUTO);
char *result __offset(OFF64|AUTO);
array names;
array stack;
void *alloc_list __offset(OFF64|AUTO);
unsigned int avail_in_first;
};
