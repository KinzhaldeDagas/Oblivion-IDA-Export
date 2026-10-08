struct TransactedDirEntry
{
DirRef transactedParentEntry;
BOOL inuse;
BOOL read;
BOOL dirty;
BOOL stream_dirty;
BOOL deleted;
DirRef stream_entry;
DirEntry_0 data;
DirRef parent;
DirRef newTransactedParentEntry;
};
