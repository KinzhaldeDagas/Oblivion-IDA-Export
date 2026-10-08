struct __declspec(align(8)) waitqueue_bucket
{
list bucket_entry;
LONG objcount;
list reserved;
list waiting;
HANDLE update_event;
BOOL alertable;
};
