BSExtraData *__thiscall sub_41EB90(ExtraDataList *this)
{
  BSExtraData *result; // eax
  BSExtraData *v3; // esi
  _BYTE *v4; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_Action);
  v3 = 0;
  if ( !result )
  {
    v4 = (_BYTE *)FormHeapAlloc(0x14u);
    if ( v4 )
      v3 = (BSExtraData *)sub_429D30(v4);
    BaseExtraList_AddExtra(this, v3);
    return v3;
  }
  return result;
}
