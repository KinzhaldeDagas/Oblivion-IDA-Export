// Sets north rotation; 0.0 removes type 0x4C, otherwise updates or creates ExtraNorthRotation.
void __thiscall ExtraDataList_SetNorthRotation(ExtraDataList *this, float northRotation)
{
  BSExtraData *ExtraData; // eax
  float *v4; // eax
  float *v5; // eax

  if ( 0.0 == northRotation ) /*0x420c91*/
  {
    BaseExtraList_RemoveExtraByType(this, 0x4Cu); /*0x420d05*/
  }
  else
  {
    ExtraData = BaseExtraList_GetExtraData(this, kExtraData_NorthRotation); /*0x420c93*/
    if ( ExtraData ) /*0x420c9a*/
    {
      *(float *)&ExtraData[1].vtbl = northRotation; /*0x420ca0*/
    }
    else
    {
      v4 = (float *)FormHeapAlloc(0x10u); /*0x420cb8*/
      if ( v4 ) /*0x420cce*/
        v5 = ExtraNorthRotation_Create(v4); /*0x420cd2*/
      else
        v5 = 0; /*0x420cd9*/
      v5[3] = northRotation; /*0x420ce2*/
      BaseExtraList_AddExtra(this, (BSExtraData *)v5); /*0x420ced*/
    }
  }
}
