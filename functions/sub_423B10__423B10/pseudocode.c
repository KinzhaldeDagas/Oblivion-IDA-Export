void __thiscall sub_423B10(ExtraDataList *this, BSExtraDataVtbl *a2)
{
  BSExtraData *ExtraData; // eax
  ExtraSound *v4; // eax
  BSExtraData *v5; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_ExtraSound); /*0x423b36*/
  if ( ExtraData ) /*0x423b3d*/
  {
    if ( a2 ) /*0x423b45*/
      ExtraData[1].vtbl = a2; /*0x423b65*/
    else
      BaseExtraList_RemoveExtraByPtr(this, (int)ExtraData, 1); /*0x423b4c*/
  }
  else if ( a2 ) /*0x423b82*/
  {
    v4 = (ExtraSound *)FormHeapAlloc(0x10u); /*0x423b86*/
    if ( v4 ) /*0x423b9c*/
      v5 = (BSExtraData *)ExtraSound::ExtraSound(v4, (int)a2); /*0x423ba1*/
    else
      v5 = 0; /*0x423ba8*/
    BaseExtraList_AddExtra(this, v5); /*0x423bb5*/
  }
}
