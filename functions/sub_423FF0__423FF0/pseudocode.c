void __thiscall sub_423FF0(ExtraDataList *this, float a2)
{
  BSExtraData *ExtraData; // ecx
  ExtraWaterHeight *v4; // eax
  ExtraWaterHeight *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_WaterHeight); /*0x424021*/
  if ( a2 == 0.0 ) /*0x42402c*/
  {
    if ( ExtraData ) /*0x424032*/
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x424039*/
  }
  else if ( ExtraData ) /*0x424053*/
  {
    *(float *)&ExtraData[1].vtbl = a2; /*0x4240a7*/
  }
  else
  {
    v4 = (ExtraWaterHeight *)FormHeapAlloc(0x10u); /*0x424059*/
    if ( v4 ) /*0x42406f*/
      v5 = ExtraWaterHeight::ExtraWaterHeight(v4, a2); /*0x42407b*/
    else
      v5 = 0; /*0x424082*/
    BaseExtraList_AddExtra(this, &v5->super); /*0x42408f*/
  }
}
