bool __thiscall sub_424C50(ExtraDataList *this, int a2)
{
  BSExtraData *ExtraData; // esi
  ExtraFollower *v4; // eax
  BSExtraData *v5; // eax
  BSExtraDataVtbl *vtbl; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Follower);
  if ( !ExtraData )
  {
    v4 = (ExtraFollower *)FormHeapAlloc(0x10u);
    if ( v4 )
      v5 = (BSExtraData *)ExtraFollower::ExtraFollower(v4);
    else
      v5 = 0;
    ExtraData = v5;
    BaseExtraList_AddExtra(this, v5);
  }
  vtbl = ExtraData[1].vtbl;
  if ( vtbl )
  {
    while ( vtbl->Destructor != (void (__thiscall *)(BSExtraData *))a2 )
    {
      vtbl = (BSExtraDataVtbl *)vtbl->CompareTo;
      if ( !vtbl )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    BSSimpleList_PushFront(&ExtraData[1].vtbl->Destructor, a2);
  }
  return sub_45A500(SaveLoad_CurrentSavegame);
}
