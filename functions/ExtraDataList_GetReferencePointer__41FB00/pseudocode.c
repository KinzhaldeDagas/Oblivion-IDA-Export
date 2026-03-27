BSExtraDataVtbl *__thiscall ExtraDataList_GetReferencePointer(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_ReferencePointer);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
