// Gets/creates ExtraPersuasionPercent (type 0x46) and records the Oblivion persuasion timestamp fields supplied by the caller (year/day/hour/month ordering follows observed stores).
char __thiscall ExtraDataList_SetPersuasionPercentData(
        ExtraDataList *this,
        BSExtraDataVtbl *a2,
        float a3,
        char a4,
        BSExtraDataVtbl *a5)
{
  BSExtraData *ExtraData; // esi
  float *v7; // eax
  float *v8; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_PersuasionPercent); /*0x420f4c*/
  if ( !ExtraData ) /*0x420f50*/
  {
    v7 = (float *)FormHeapAlloc(0x1Cu); /*0x420f54*/
    if ( v7 ) /*0x420f66*/
      v8 = ExtraPersuasionPercent_ctor(v7); /*0x420f6a*/
    else
      v8 = 0; /*0x420f71*/
    ExtraData = (BSExtraData *)v8; /*0x420f7e*/
    BaseExtraList_AddExtra(this, (BSExtraData *)v8); /*0x420f80*/
  }
  ExtraData[1].vtbl = a2; /*0x420f91*/
  LOBYTE(ExtraData[1].members.next) = a4; /*0x420f98*/
  *(float *)&ExtraData[1].members.type = a3; /*0x420f9b*/
  ExtraData[2].vtbl = a5; /*0x420f9e*/
  return a4; /*0x420fa1*/
}
