struct reader_writer_lock
{
LONG count;
LONG thread_id;
rwl_queue_0 active;
rwl_queue_0 *writer_head;
rwl_queue_0 *writer_tail;
rwl_queue_0 *reader_head;
};
