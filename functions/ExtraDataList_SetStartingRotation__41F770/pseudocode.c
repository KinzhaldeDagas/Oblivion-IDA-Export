BSExtraDataVtbl **__thiscall ExtraDataList_SetStartingRotation(
        ExtraDataList *this,
        BSExtraDataVtbl **a2,
        _DWORD *a3,
        BSExtraDataVtbl *a4,
        BSExtraDataVtbl *a5,
        BSExtraDataVtbl *a6)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_StartingPosition); /*0x41f775*/
  if ( !ExtraData ) /*0x41f77c*/
    ExtraData = ExtraDataList_AddExtraStartingPosition(this, a3); /*0x41f785*/
  ExtraData[2].vtbl = a4; /*0x41f796*/
  *(_DWORD *)&ExtraData[2].members.type = a5; /*0x41f799*/
  ExtraData[2].members.next = (BSExtraData *)a6; /*0x41f79c*/
  *a2 = a4; /*0x41f7a3*/
  a2[1] = a5; /*0x41f7a5*/
  a2[2] = a6; /*0x41f7a8*/
  return a2; /*0x41f7ab*/
}
