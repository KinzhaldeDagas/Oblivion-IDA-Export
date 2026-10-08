struct __declspec(align(8)) BlockChainStream
{
StorageImpl_0 *parentStorage;
ULONG *headOfStreamPlaceHolder;
DirRef ownerDirEntry;
BlockChainRun *indexCache;
ULONG indexCacheLen;
ULONG indexCacheSize;
BlockChainBlock_0 cachedBlocks[2];
ULONG blockToEvict;
ULONG tailIndex;
ULONG numBlocks;
};
