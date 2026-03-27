BSExtraData *__thiscall ExtraDataList_AddExtraStartingPosition(ExtraDataList *this, _DWORD *a2)
{
  BSExtraData *result; // eax
  BSExtraData *v4; // esi
  _DWORD *v5; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_StartingPosition);
  v4 = 0;
  if ( !result )
  {
    v5 = (_DWORD *)FormHeapAlloc(0x24u);
    if ( v5 )
      v4 = (BSExtraData *)ExtraStartingPosition_constr(v5, a2);
    BaseExtraList_AddExtra(this, v4);
    return v4;
  }
  return result;
}
