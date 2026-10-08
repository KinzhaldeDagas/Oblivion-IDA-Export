// 3DTheft decode: Add/link ExtraFollower entry on target ExtraDataList; creates ExtraFollower if absent and pushes follower actor pointer if not already listed.
bool __thiscall sub_424C50(ExtraDataList *this, void (__thiscall *a2)(BSExtraData *this))
{
  BSExtraData *ExtraData; // esi
  ExtraFollower *v4; // eax
  BSExtraData *v5; // eax
  BSExtraDataVtbl *vtbl; // eax

  ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Follower); /*0x424c7c*/
  if ( !ExtraData ) /*0x424c80*/
  {
    v4 = (ExtraFollower *)FormHeapAlloc(0x10u); /*0x424c84*/
    if ( v4 ) /*0x424c96*/
      v5 = (BSExtraData *)ExtraFollower::ExtraFollower(v4); /*0x424c9a*/
    else
      v5 = 0; /*0x424ca1*/
    ExtraData = v5; /*0x424cae*/
    BaseExtraList_AddExtra(this, v5); /*0x424cb0*/
  }
  vtbl = ExtraData[1].vtbl; /*0x424cbc*/
  if ( vtbl ) /*0x424cc0*/
  {
    while ( vtbl->Destructor != a2 ) /*0x424cc4*/
    {
      vtbl = (BSExtraDataVtbl *)vtbl->CompareTo; /*0x424cc6*/
      if ( !vtbl ) /*0x424ccb*/
        goto LABEL_9; /*0x424ccb*/
    }
  }
  else
  {
LABEL_9:
    BSSimpleList_PushFront(&ExtraData[1].vtbl->Destructor, (int)a2); /*0x424ccd*/
  }
  return sub_45A500(g_TESSaveLoadGame); /*0x424cde*/
}
