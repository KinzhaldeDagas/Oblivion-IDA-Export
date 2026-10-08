// Pass225: Unlinks NiGeometryBufferData from owning group; decrements group refcount and clears buffer+0x04.
// DX11 authority audit 2026-10-01: InterlockedDecrement of group+4; clears buffer group pointer+4; calls group virtual+1C ReleaseChip for every buffer StreamCount+1C, then 777F40 index-buffer removal. All six observed direct callers ignore the incidental EAX result. No local lock acquisition. Verified Fallout 827D60B8 family: PPC buffer group+8 and stream count+20 vs Oblivion+4/+1C.
void __thiscall NiGeometryGroup_RemoveBufferData(NiGeometryGroup *this, NiGeometryBufferData *buffer)
{
  UInt32 StreamCount; // ebp
  UInt32 v4; // esi

  InterlockedDecrement((volatile LONG *)&this->m_uiRefCount); /*0x78293a*/
  StreamCount = buffer->StreamCount; /*0x782944*/
  v4 = 0; /*0x782947*/
  for ( buffer->GeometryGroup = 0; v4 < StreamCount; ++v4 ) /*0x78294e*/
    this->vtbl->ReleaseChip(this, buffer, v4); /*0x782959*/
  sub_777F40(buffer); /*0x782964*/
}
