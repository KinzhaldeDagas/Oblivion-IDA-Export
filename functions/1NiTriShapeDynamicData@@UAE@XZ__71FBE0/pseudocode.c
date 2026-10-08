// Destroy NiTriShapeData triangle indices, linked shared-normal index-pool blocks, and the per-entry shared-normal array.
void __thiscall NiTriShapeData_Destruct(NiTriShapeData *self)
{
  UInt16 *m_pusTriList; // eax
  unsigned int *m_pkSharedNormalIndexPool; // esi
  NiSharedNormalIndexPoolBlock *v4; // ecx

  self->__vftable = (NiTriBasedGeomDataVtbl *)&NiTriShapeData::`vftable'; /*0x71fc09*/
  m_pusTriList = self->member.m_pusTriList;     // Free the owned triangle index list. /*0x71fc0f*/
  if ( m_pusTriList ) /*0x71fc1c*/
    FormHeapFree((unsigned int)m_pusTriList); /*0x71fc1f*/
  m_pkSharedNormalIndexPool = (unsigned int *)self->member.m_pkSharedNormalIndexPool;// Destroy the linked shared-normal index-pool blocks. /*0x71fc27*/
  if ( m_pkSharedNormalIndexPool ) /*0x71fc2c*/
  {
    FormHeapFree(*m_pkSharedNormalIndexPool); /*0x71fc31*/
    v4 = (NiSharedNormalIndexPoolBlock *)m_pkSharedNormalIndexPool[4]; /*0x71fc36*/
    if ( v4 ) /*0x71fc3e*/
      NiSharedNormalIndexPoolBlock_Destruct(v4, 1u); /*0x71fc42*/
    FormHeapFree((unsigned int)m_pkSharedNormalIndexPool); /*0x71fc48*/
  }
  FormHeapFree((unsigned int)self->member.m_pkSharedNormals);// Free the per-entry NiSharedNormalArrayEntry array. /*0x71fc54*/
  sub_732DF0((NiGeometryData *)self); /*0x71fc66*/
}
