struct __declspec(align(8)) TransactedSnapshotImpl
{
StorageBaseImpl base;
StorageBaseImpl_0 *scratch;
TransactedDirEntry_0 *entries;
ULONG entries_size;
ULONG firstFreeEntry;
StorageBaseImpl_0 *transactedParent;
ULONG lastTransactionSig;
};
