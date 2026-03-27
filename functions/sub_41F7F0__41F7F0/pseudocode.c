BSExtraDataVtbl *__thiscall sub_41F7F0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_StartingWorldOrCell);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
