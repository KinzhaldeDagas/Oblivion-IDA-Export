TESChildCELL *__thiscall GetInitialRotation(TESChildCELL *this, float *a1, float *a2)
{
  BSExtraData *ExtraData; // eax
  int v5; // edx
  BSExtraData *next; // eax

  ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)this, kExtraData_StartingPosition); /*0x41f6f5*/
  if ( !ExtraData ) /*0x41f6fc*/
    ExtraData = ExtraDataList_AddExtraStartingPosition((ExtraDataList *)this, a2); /*0x41f705*/
  *a1 = *(float *)&ExtraData[2].vtbl; /*0x41f711*/
  v5 = *(_DWORD *)&ExtraData[2].members.type; /*0x41f713*/
  next = ExtraData[2].members.next; /*0x41f716*/
  *((_DWORD *)a1 + 1) = v5; /*0x41f719*/
  *((_DWORD *)a1 + 2) = next; /*0x41f71c*/
  return (TESChildCELL *)a1; /*0x41f721*/
}
