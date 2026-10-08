struct NiGeometryDataMembr
{
NiRefObjectMembr super;
UInt16 m_usVertices;
UInt16 serial;
NiBound m_kBound;
NiPoint3 *m_pkVertex;
NiPoint3 *m_pkNormal;
NiColorAlpha *m_pkColor;
void *m_pkTexture;
UInt16 format;
UInt16 m_usDirtyFlags;
UInt8 m_ucKeepFlags;
UInt8 m_ucCompressFlags;
UInt8 pad32[2];
NiAdditionalGeometryData *m_spAdditionalGeomData;
NiGeometryBufferData *BuffData;
UInt8 m_bVertexStreamLocked; ///< Set by NiGeometryData_LockVertexStream and cleared only by NiGeometryData_UnlockVertexStream. Several ApplyEGMMorph false-return paths leave it set.
UInt8 unk3D;
UInt8 pad3E[2];
};
