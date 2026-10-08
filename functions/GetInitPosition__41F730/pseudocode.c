BSExtraDataVtbl **__thiscall GetInitPosition(ExtraDataList *this, BSExtraDataVtbl **a2, _DWORD *a3)
{
  BSExtraData *ExtraData; // eax
  BSExtraDataVtbl *v5; // edx
  BSExtraDataVtbl *next; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_StartingPosition); /*0x41f735*/
  if ( !ExtraData ) /*0x41f73c*/
    ExtraData = ExtraDataList_AddExtraStartingPosition(this, a3); /*0x41f745*/
  *a2 = ExtraData[1].vtbl; /*0x41f751*/
  v5 = *(BSExtraDataVtbl **)&ExtraData[1].members.type; /*0x41f753*/
  next = (BSExtraDataVtbl *)ExtraData[1].members.next; /*0x41f756*/
  a2[1] = v5; /*0x41f759*/
  a2[2] = next; /*0x41f75c*/
  return a2; /*0x41f761*/
}
