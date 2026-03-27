BSExtraData *__thiscall ExtraDataList_AddExtraLeveledItem(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *result; // eax
  _BYTE *v4; // eax
  BSExtraData *v5; // esi

  result = BaseExtraList_GetExtraData(this, kExtraData_LeveledItem);
  if ( result )
  {
    result[1].vtbl = a2;
    result[1].members.type = 0;
  }
  else
  {
    v4 = (_BYTE *)FormHeapAlloc(0x14u);
    if ( v4 )
      v5 = (BSExtraData *)ExtraLeveledItem_constr(v4, (int)a2);
    else
      v5 = 0;
    result = (BSExtraData *)BaseExtraList_AddExtra(this, v5);
    v5[1].members.type = 0;
  }
  return result;
}
