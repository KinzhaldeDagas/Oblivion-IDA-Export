BSExtraData *__thiscall sub_420100(ExtraDataList *this, BSExtraDataVtbl **a2)
{
  BSExtraData *ExtraData; // esi
  _BYTE *v4; // eax
  BSExtraData *v5; // eax
  BSExtraData *result; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_DistantData);
  if ( !ExtraData )
  {
    v4 = (_BYTE *)FormHeapAlloc(0x18u);
    if ( v4 )
      v5 = (BSExtraData *)sub_42A4C0(v4);
    else
      v5 = 0;
    ExtraData = v5;
    BaseExtraList_AddExtra(this, v5);
  }
  ExtraData[1].vtbl = *a2;
  *(_DWORD *)&ExtraData[1].members.type = a2[1];
  result = (BSExtraData *)a2[2];
  ExtraData[1].members.next = result;
  return result;
}
