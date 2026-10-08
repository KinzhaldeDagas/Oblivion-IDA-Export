struct NiSCMExtraData
{
NiExtraData base;
unsigned int vertexCapacity;
unsigned int pixelCapacity;
unsigned int vertexCursor;
unsigned int pixelCursor;
NiSCMConstantEntry *vertexEntries;
NiSCMConstantEntry *pixelEntries;
};
