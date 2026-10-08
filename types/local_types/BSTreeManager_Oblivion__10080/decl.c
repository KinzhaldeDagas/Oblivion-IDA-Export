struct BSTreeManager_Oblivion
{
NiTPointerMap_TESObjectTREE_BSTreeModelArray *modelCacheByTree;
NiSourceTexture *canopyShadowTexture;
NiZBufferProperty *zBufferProperty;
NiMaterialProperty *materialProperty;
NiVertexColorProperty *vertexColorProperty;
NiAlphaProperty *alphaProperty;
BSXFlags *treeFlags;
float windSpeed;
unsigned __int8 flags_020_023[4];
LockFreeMap *pendingReferenceNodes;
};
