//
// DX11 authority audit 2026-10-01: Shared target of static A8AF5C+14 and unshared A8AF88+14 vtables. Reads geometryData+38; detaches buffer from group via 782930, destroys buffer via 778110, FormHeapFree, clears geometryData+38. No local lock acquisition. Verified Fallout 827D2858 family; Fallout data buffer offset+34 and virtual deleting destructor differ.
void __thiscall NiStaticGeometryGroup_RemoveGeometryData(NiGeometryGroup *this, NiGeometryData *data)
{
  NiGeometryBufferData *BuffData; // esi

  BuffData = data->member.BuffData; /*0x77daf6*/
  if ( BuffData ) /*0x77dafb*/
  {
    NiGeometryGroup_RemoveBufferData(this, data->member.BuffData); /*0x77dafe*/
    NiGeometryBufferData_Destroy(BuffData); /*0x77db05*/
    FormHeapFree((unsigned int)BuffData); /*0x77db0b*/
    data->member.BuffData = 0; /*0x77db13*/
  }
}
