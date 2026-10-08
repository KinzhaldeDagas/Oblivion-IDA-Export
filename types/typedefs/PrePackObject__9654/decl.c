struct PrePackObject
{
NiGeometryData *m_pkData;
NiSkinInstance *m_pkSkin;
void *m_pkPartition;
NiD3DShaderDeclaration *m_pkShraderDecl;
unsigned int m_uiBonesPerPartition;
unsigned int m_uiBonesPerVertex;
NiGeometryBufferData *m_pkBuffData;
unsigned int m_uiStream;
void *m_pkNext;
};
