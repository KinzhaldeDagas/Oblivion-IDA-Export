struct __declspec(align(8)) file_queue
{
DWORD magic;
file_op_queue copy_queue;
file_op_queue delete_queue;
file_op_queue rename_queue;
DWORD flags;
source_media **sources;
unsigned int source_count;
};
