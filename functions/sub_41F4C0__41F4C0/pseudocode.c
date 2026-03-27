BSExtraData *__thiscall sub_41F4C0(ExtraDataList *this, BSExtraDataVtbl *a2, BSExtraDataVtbl *a3, _DWORD *a4, float a5)
{
  BSExtraData *result; // eax
  _BYTE *v7; // eax
  BSExtraData *v8; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_StartLocation);
  if ( result )
  {
    if ( a2 )
      result[1].vtbl = a2;
    else
      result[1].vtbl = a3;
    *(_DWORD *)&result[1].members.type = *a4;
    result[1].members.next = (BSExtraData *)a4[1];
    result[2].vtbl = (BSExtraDataVtbl *)a4[2];
  }
  else
  {
    v7 = (_BYTE *)FormHeapAlloc(0x20u);
    if ( v7 )
      v8 = (BSExtraData *)sub_42AE70(v7, (int)a2, (int)a3, (int)a4, a5);
    else
      v8 = 0;
    return (BSExtraData *)BaseExtraList_AddExtra(this, v8);
  }
  return result;
}
