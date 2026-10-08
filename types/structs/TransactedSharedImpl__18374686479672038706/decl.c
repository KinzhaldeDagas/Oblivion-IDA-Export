struct __declspec(align(8)) TransactedSharedImpl
{
StorageBaseImpl base;
TransactedSnapshotImpl_0 *scratch;
StorageBaseImpl_0 *transactedParent;
ULONG lastTransactionSig;
};
