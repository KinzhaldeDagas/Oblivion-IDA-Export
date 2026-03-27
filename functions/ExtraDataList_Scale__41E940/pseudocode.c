double __thiscall ExtraDataList_Scale(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Scale);
  if ( ExtraData )
    return *(float *)&ExtraData[1].vtbl;
  else
    return 1.0;
}
