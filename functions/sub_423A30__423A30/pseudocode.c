void __thiscall sub_423A30(ExtraDataList *this, float a2)
{
  BSExtraData *ExtraData; // eax
  float *v4; // eax
  float *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Scale);
  if ( ExtraData )
  {
    if ( a2 == 1.0 )
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
    else
      *(float *)&ExtraData[1].vtbl = a2;
  }
  else if ( 1.0 != a2 )
  {
    v4 = (float *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = sub_429FB0(v4, a2);
    else
      v5 = 0;
    BaseExtraList_AddExtra(this, (BSExtraData *)v5);
  }
}
