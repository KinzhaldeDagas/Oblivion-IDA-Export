BSExtraDataVtbl *__thiscall ExtraDataList_GetExtraScript(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Script);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
