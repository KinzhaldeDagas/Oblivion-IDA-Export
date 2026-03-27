BSExtraData *__thiscall sub_41F9C0(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_CellMusicType);
  if ( result )
    return (BSExtraData *)SLOBYTE(result[1].vtbl);
  return result;
}
