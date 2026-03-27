BSExtraDataVtbl **__thiscall GetInitPosition(ExtraDataList *this, BSExtraDataVtbl **a2, _DWORD *a3)
{
  BSExtraData *ExtraData; // eax
  BSExtraDataVtbl *v5; // edx
  BSExtraData *next; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_StartingPosition);
  if ( !ExtraData )
    ExtraData = ExtraDataList_AddExtraStartingPosition(this, a3);
  *a2 = ExtraData[1].vtbl;
  v5 = *(BSExtraDataVtbl **)&ExtraData[1].members.type;
  next = ExtraData[1].members.next;
  a2[1] = v5;
  a2[2] = (BSExtraDataVtbl *)next;
  return a2;
}
