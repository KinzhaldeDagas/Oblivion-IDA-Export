void __thiscall sub_423FF0(ExtraDataList *this, float a2)
{
  BSExtraData *ExtraData; // ecx
  ExtraWaterHeight *v4; // eax
  ExtraWaterHeight *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_WaterHeight);
  if ( a2 == 0.0 )
  {
    if ( ExtraData )
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1);
  }
  else if ( ExtraData )
  {
    *(float *)&ExtraData[1].vtbl = a2;
  }
  else
  {
    v4 = (ExtraWaterHeight *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = ExtraWaterHeight::ExtraWaterHeight(v4, a2);
    else
      v5 = 0;
    BaseExtraList_AddExtra(this, &v5->super);
  }
}
