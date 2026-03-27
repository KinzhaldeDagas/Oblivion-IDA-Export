BSExtraData *__thiscall sub_41EAF0(ExtraDataList *this, int a2)
{
  void *ExtraData; // esi
  _BYTE *v4; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Lock);
  if ( ExtraData )
  {
    FormHeapFree(*((_DWORD *)ExtraData + 3));
    *((_DWORD *)ExtraData + 3) = a2;
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x10u);
    if ( v4 )
      ExtraData = sub_429A80(v4, a2);
    else
      ExtraData = 0;
    BaseExtraList_AddExtra(this, (BSExtraData *)ExtraData);
  }
  return (BSExtraData *)ExtraData;
}
