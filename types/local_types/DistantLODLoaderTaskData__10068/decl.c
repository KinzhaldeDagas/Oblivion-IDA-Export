struct DistantLODLoaderTaskData
{
int cellX;
int cellY;
TESWorldSpace *worldSpace;
DistantLODCellObjectMap cellObjects;
void *instancedLODNode;
void *cellLODBuffer;
int lodMode;
unsigned __int8 parseComplete;
unsigned __int8 pad29[3];
};
