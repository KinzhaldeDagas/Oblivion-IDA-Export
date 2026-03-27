BSExtraDataVtbl *__thiscall ExtraDataList::GetExtraPackage(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Package);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
