BSExtraDataVtbl *__thiscall ExtraDataList::GetExtraPackage(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Package); /*0x41fb22*/
  if ( ExtraData ) /*0x41fb29*/
    return ExtraData[1].vtbl; /*0x41fb2b*/
  else
    return 0; /*0x41fb2f*/
}
