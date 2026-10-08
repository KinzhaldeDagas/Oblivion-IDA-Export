struct BSTreeManager_OblivionLayout
{
NiTPointerMap_TESObjectTREE_BSTreeModelArray *modelCacheByTree;
void *unknown_004;
NiZBufferProperty *zBufferProperty;
NiMaterialProperty *materialProperty;
NiVertexColorProperty *vertexColorProperty;
NiAlphaProperty *alphaProperty;
BSXFlags *treeFlags;
float windSpeed;
unsigned __int8 flags_020_023[4];
LockFreeMap *pendingReferenceNodes;
};
