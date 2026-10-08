BSExtraDataVtbl **__thiscall ExtraDataList_SetStartingPosition(
        ExtraDataList *this,
        BSExtraDataVtbl **a2,
        _DWORD *a3,
        BSExtraDataVtbl *a4,
        BSExtraDataVtbl *a5,
        BSExtraDataVtbl *a6)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_StartingPosition); /*0x41f7b5*/
  if ( !ExtraData ) /*0x41f7bc*/
    ExtraData = ExtraDataList_AddExtraStartingPosition(this, a3); /*0x41f7c5*/
  ExtraData[1].vtbl = a4; /*0x41f7d6*/
  *(_DWORD *)&ExtraData[1].members.type = a5; /*0x41f7d9*/
  ExtraData[1].members.next = (BSExtraData *)a6; /*0x41f7dc*/
  *a2 = a4; /*0x41f7e3*/
  a2[1] = a5; /*0x41f7e5*/
  a2[2] = a6; /*0x41f7e8*/
  return a2; /*0x41f7eb*/
}
