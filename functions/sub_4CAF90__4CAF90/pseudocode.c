BSExtraData *__thiscall sub_4CAF90(int this)
{
  BSExtraData *result; // eax

  if ( (*(_BYTE *)(this + 0x24) & 1) == 0 )
    return (BSExtraData *)sub_4EF7A0(*(_DWORD *)(this + 0x50));
  if ( (*(_BYTE *)(this + 0x24) & 0x80) == 0 )
    return 0;
  result = BaseExtraList_GetExtraData((ExtraDataList *)(this + 0x28), kExtraData_CellClimate);
  if ( result )
    return (BSExtraData *)result[1].vtbl;
  return result;
}
