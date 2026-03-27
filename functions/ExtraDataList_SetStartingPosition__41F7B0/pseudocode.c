BSExtraDataVtbl **__thiscall ExtraDataList_SetStartingPosition(
        ExtraDataList *this,
        BSExtraDataVtbl **a2,
        _DWORD *a3,
        BSExtraDataVtbl *a4,
        BSExtraDataVtbl *a5,
        BSExtraData *a6)
{
  BSExtraData *ExtraData; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_StartingPosition);
  if ( !ExtraData )
    ExtraData = ExtraDataList_AddExtraStartingPosition(this, a3);
  ExtraData[1].vtbl = a4;
  *(_DWORD *)&ExtraData[1].members.type = a5;
  ExtraData[1].members.next = a6;
  *a2 = a4;
  a2[1] = a5;
  a2[2] = (BSExtraDataVtbl *)a6;
  return a2;
}
