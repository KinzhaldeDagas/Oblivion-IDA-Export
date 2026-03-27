unsigned int __thiscall sub_4D73F0(_BYTE *this)
{
  TESFurniture *v2; // ebx
  BSExtraData *ExtraData; // edi
  unsigned int v4; // esi

  if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this) + 4) != 0x20 )
    return 0xFFFFFFFF;
  v2 = (TESFurniture *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x170))(this);
  if ( !v2 )
    return 0xFFFFFFFF;
  ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x44), kExtraData_UsedMarkers);
  v4 = 0;
  while ( !sub_4AE5B0(v2, v4) || ExtraData && sub_4295D0((ExtraDataList *)ExtraData, v4) )
  {
    if ( ++v4 >= 0x1E )
      return 0xFFFFFFFF;
  }
  return v4;
}
