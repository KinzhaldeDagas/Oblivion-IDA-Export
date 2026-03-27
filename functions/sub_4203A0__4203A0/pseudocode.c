BSExtraData *__thiscall sub_4203A0(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_EnableStateChildren);
  if ( ExtraData )
    return ExtraData + 1;
  else
    return 0;
}
