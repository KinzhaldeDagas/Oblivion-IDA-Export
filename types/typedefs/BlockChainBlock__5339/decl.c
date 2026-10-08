struct BlockChainBlock
{
ULONG index;
ULONG sector;
BOOL read;
BOOL dirty;
BYTE data[4096];
};
