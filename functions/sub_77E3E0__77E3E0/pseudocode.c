//
// DX11 authority audit 2026-10-01: Dynamic A8B03C+14. Same ordinary removal family as 77DAF0, additionally clears buffer VBChip array (+24, StreamCount+1C) before destruction/free and data+38 clear. Verified Fallout 827D3520 family with platform buffer-layout differences.
void __thiscall NiDynamicGeometryGroup_RemoveGeometryData(NiGeometryGroup *this, NiGeometryData *data)
{
  NiGeometryBufferData *BuffData; // esi
  int VBChip; // eax

  BuffData = data->member.BuffData; /*0x77e3e6*/
  if ( BuffData ) /*0x77e3eb*/
  {
    NiGeometryGroup_RemoveBufferData(this, data->member.BuffData); /*0x77e3ee*/
    VBChip = (int)BuffData->VBChip; /*0x77e3f3*/
    if ( VBChip ) /*0x77e3f8*/
      _memset(VBChip, 0, 4 * BuffData->StreamCount); /*0x77e405*/
    NiGeometryBufferData_Destroy(BuffData); /*0x77e40f*/
    FormHeapFree((unsigned int)BuffData); /*0x77e415*/
    data->member.BuffData = 0; /*0x77e41d*/
  }
}
