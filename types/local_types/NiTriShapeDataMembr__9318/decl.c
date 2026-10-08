struct NiTriShapeDataMembr
{
NiTriBasedGeomDataMembr super;
UInt32 m_uiTriListLength;
UInt16 *m_pusTriList;
NiSharedNormalArrayEntry *m_pkSharedNormals; ///< Per-entry shared-normal links; each 8-byte entry stores a UInt16 count and pooled UInt16 vertex-index list.
unsigned __int16 m_usSharedNormalsArraySize; ///< Number of shared-normal entries. UpdateNormals uses the table only when this equals m_usVertices.
UInt8 pad52[2];
NiSharedNormalIndexPoolBlock *m_pkSharedNormalIndexPool; ///< Head of linked 20-byte pool blocks that own the shared-normal UInt16 index lists.
};
