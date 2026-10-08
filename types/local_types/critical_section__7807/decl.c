struct critical_section
{
ULONG_PTR unk_thread_id;
cs_queue_0 unk_active;
void *unknown[2];
cs_queue_0 *head;
void *tail;
};
