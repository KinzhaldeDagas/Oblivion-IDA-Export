TESChildCELL *__thiscall GetInitialRotation(TESChildCELL *this, float *a1, float *a2)
{
  BSExtraData *ExtraData; // eax
  int v5; // edx
  BSExtraData *next; // eax

  ExtraData = BaseExtraList_GetExtraData((ExtraDataList *)this, kExtraData_StartingPosition);
  if ( !ExtraData )
    ExtraData = ExtraDataList_AddExtraStartingPosition((ExtraDataList *)this, a2);
  *a1 = *(float *)&ExtraData[2].vtbl;
  v5 = *(_DWORD *)&ExtraData[2].members.type;
  next = ExtraData[2].members.next;
  *((_DWORD *)a1 + 1) = v5;
  *((_DWORD *)a1 + 2) = next;
  return (TESChildCELL *)a1;
}
