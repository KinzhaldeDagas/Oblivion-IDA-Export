BSExtraData *__thiscall sub_41F9C0(ExtraDataList *this)
{
  BSExtraData *result; // eax

  result = BaseExtraList_GetExtraData(this, kExtraData_CellMusicType); /*0x41f9c2*/
  if ( result ) /*0x41f9c9*/
    return (BSExtraData *)SLOBYTE(result[1].vtbl); /*0x41f9cc*/
  return result; /*0x41f9cb*/
}
