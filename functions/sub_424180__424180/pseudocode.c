BSExtraDataVtbl *__thiscall sub_424180(ExtraDataList *this)
{
  BSExtraData *ExtraData; // eax
  BSExtraData *v2; // eax
  int v4; // [esp+Ch] [ebp-4h] BYREF

  v4 = 0; /*0x424188*/
  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Havok); /*0x42418c*/
  if ( ExtraData ) /*0x424193*/
  {
    v2 = ExtraData + 1; /*0x424199*/
  }
  else
  {
    v4 = 0; /*0x4241a0*/
    v2 = (BSExtraData *)&v4; /*0x4241a4*/
  }
  return v2->vtbl; /*0x4241d2*/
}
