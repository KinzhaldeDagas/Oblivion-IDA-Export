BSExtraDataVtbl *__thiscall sub_41FF80(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_PersistentCell);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
