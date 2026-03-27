BSExtraData *__thiscall sub_4201A0(ExtraDataList *this, int a2, BSExtraDataVtbl *a3)
{
  BSExtraData *ExtraData; // esi
  BSExtraDataVtbl **v5; // eax
  BSExtraData *result; // eax
  char *v7; // eax
  char *v8; // eax

  if ( !a2 || !a3 )
    return (BSExtraData *)BaseExtraList_RemoveExtraByType(this, 0x3Eu);
  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_OblivionEntry);
  if ( ExtraData )
  {
    v5 = (BSExtraDataVtbl **)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2);
    ExtraData[1].vtbl = *v5;
    *(_DWORD *)&ExtraData[1].members.type = v5[1];
    result = (BSExtraData *)v5[2];
    ExtraData[1].members.next = result;
    ExtraData[2].vtbl = a3;
  }
  else
  {
    v7 = (char *)FormHeapAlloc(0x1Cu);
    if ( v7 )
      v8 = sub_42A540(v7, a2, (int)a3);
    else
      v8 = 0;
    return (BSExtraData *)BaseExtraList_AddExtra(this, (BSExtraData *)v8);
  }
  return result;
}
