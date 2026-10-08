// BunkFix: plugin activation assist uses this same engine helper to find a free marker before calling SetSleepState; assist does not clear or forge ExtraUsedMarkers.
unsigned int __thiscall sub_4D73F0(_BYTE *this)
{
  TESFurniture *v2; // ebx
  BSExtraData *ExtraData; // edi
  unsigned int v4; // esi

  if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this) + 4) != 0x20 ) /*0x4d7405*/
    return 0xFFFFFFFF; /*0x4d7469*/
  v2 = (TESFurniture *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this); /*0x4d7414*/
  if ( !v2 ) /*0x4d7418*/
    return 0xFFFFFFFF; /*0x4d7464*/
  ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x44), kExtraData_UsedMarkers); /*0x4d7425*/
  v4 = 0; /*0x4d7427*/
  while ( !sub_4AE5B0(v2, v4) || ExtraData && sub_4295D0((ExtraDataList *)ExtraData, v4) ) /*0x4d744a*/
  {
    if ( ++v4 >= 0x1E ) /*0x4d7452*/
      return 0xFFFFFFFF; /*0x4d745a*/
  }
  return v4; /*0x4d7456*/
}
