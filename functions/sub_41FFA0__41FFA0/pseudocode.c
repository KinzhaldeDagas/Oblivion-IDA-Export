BSExtraDataVtbl *__thiscall sub_41FFA0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_RagDollData);
  if ( ExtraData )
    return ExtraData[1].vtbl;
  else
    return 0;
}
