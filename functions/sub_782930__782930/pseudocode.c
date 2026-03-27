IDirect3DIndexBuffer9 *__thiscall sub_782930(NiGeometryGroup *this, NiGeometryBufferData *a2)
{
  UInt32 StreamCount; // ebp
  UInt32 v4; // esi

  InterlockedDecrement((volatile LONG *)&this->m_uiRefCount);
  StreamCount = a2->StreamCount;
  v4 = 0;
  for ( a2->GeometryGroup = 0; v4 < StreamCount; ++v4 )
    this->vtbl->ReleaseChip(this, a2, v4);
  return sub_777F40(a2);
}
