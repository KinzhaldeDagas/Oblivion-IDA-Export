struct __declspec(align(8)) file_op_queue
{
file_op *head;
file_op *tail;
unsigned int count;
};
