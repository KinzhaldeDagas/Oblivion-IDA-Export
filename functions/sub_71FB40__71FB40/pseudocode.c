//
//
// [2026-10-03 geometry limits] Verified vertex count and m_usTriangles are unsigned WORD; constructor computes m_uiTriListLength as DWORD 3*m_usTriangles and retains supplied ushort index list. Thus source strip-index total need not fit WORD, and a full 65535-triangle output contains 196605 index entries. Plugin source-index/degenerate counters are now DWORD; conversion caps emitted nondegenerate triangles, not raw source windows. More than 65535 emitted triangles requires partitioning into multiple NiTriShapeData objects, still separate implementation work.
//
// [2026-10-03 frond material partitions] Plugin owned LOD triangle count is now DWORD; only individual NiTriShapeData parts use <=65535 triangles. Material partitioner validates a uniform map across each triangle, compacts source-vertex remap, preserves winding/attributes, and splits material groups at native triangle capacity. NiNode grouping makes replacement/retirement a single child operation. In-game validation remains pending.
NiTriShapeData *__thiscall NiTriShapeData_ConstructWithData(
        NiTriShapeData *this,
        UInt16 a2,
        NiPoint3 *a3,
        NiPoint3 *a4,
        NiColorAlpha *a5,
        void *a6,
        char a7,
        __int16 a8,
        UInt16 a9,
        UInt16 *a10)
{
  UInt32 v11; // edx

  NiTriBasedGeomData::NiTriBasedGeomData((NiTriBasedGeomData *)this, a2, a3, a4, a5, a6, a7, a8, a9); /*0x71fb6d*/
  v11 = 3 * this->member.super.m_usTriangles; /*0x71fb76*/
  this->member.m_pusTriList = a10; /*0x71fb7d*/
  this->member.m_pkSharedNormals = 0;           // Initialize the optional shared-normal entry array pointer to null. /*0x71fb82*/
  this->member.m_usSharedNormalsArraySize = 0;  // Initialize the shared-normal entry-array length to zero. /*0x71fb85*/
  this->member.m_pkSharedNormalIndexPool = 0;   // Initialize the shared-normal index-pool block list to null. /*0x71fb89*/
  this->__vftable = (NiTriBasedGeomDataVtbl *)&NiTriShapeData::`vftable'; /*0x71fb8c*/
  this->member.m_uiTriListLength = v11; /*0x71fb92*/
  return this; /*0x71fb97*/
}
