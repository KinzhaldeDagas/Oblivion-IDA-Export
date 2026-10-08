struct relay_descr
{
ULONG_PTR magic;
void *relay_call;
void *private;
const char *entry_point_base;
const unsigned int *entry_point_offsets;
const char *args_string;
};
