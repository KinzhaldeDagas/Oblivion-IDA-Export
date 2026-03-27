double __thiscall sub_420C40(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_NorthRotation);
  if ( ExtraData )
    return *(float *)&ExtraData[1].vtbl;
  else
    return 0.0;
}
