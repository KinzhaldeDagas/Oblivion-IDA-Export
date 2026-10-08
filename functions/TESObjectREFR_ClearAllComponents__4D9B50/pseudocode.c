void __thiscall TESObjectREFR_ClearAllComponents(TESChildCELL *this)
{
  ExtraDataList *v2; // esi
  BSExtraDataVtbl *Light; // edi
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  void (__thiscall *v5)(BSExtraData *); // ebx
  BSExtraData *v6; // edi
  BSExtraDataVtbl *PersistentCell; // ebx
  BSExtraData *ExtraData; // eax
  void (__thiscall *Destructor)(BSExtraData *); // [esp-4h] [ebp-14h]

  v2 = (ExtraDataList *)(this + 0x11); /*0x4d9b55*/
  Light = ExtraDataList_GetLight((ExtraDataList *)(this + 0x11)); /*0x4d9b60*/
  if ( Light ) /*0x4d9b64*/
  {
    if ( Light->Destructor ) /*0x4d9b66*/
    {
      Destructor = Light->Destructor; /*0x4d9b6c*/
      ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x4d9b6f*/
      ShadowSceneNode_RemoveFullLightBySource(ShadowSceneNode, Destructor); /*0x4d9b79*/
      v5 = Light->Destructor; /*0x4d9b7e*/
      if ( Light->Destructor ) /*0x4d9b7e*/
      {
        if ( !InterlockedDecrement((volatile LONG *)v5 + 1) ) /*0x4d9b88*/
        {
          if ( v5 ) /*0x4d9b94*/
            (**(void (__thiscall ***)(void (__thiscall *)(BSExtraData *), int))v5)(v5, 1); /*0x4d9b9e*/
        }
        Light->Destructor = 0; /*0x4d9ba0*/
      }
    }
    ExtraDataList_RemoveExtraLight(v2); /*0x4d9ba8*/
  }
  v6 = 0; /*0x4d9bc0*/
  PersistentCell = ExtraDataList_GetPersistentCell(v2); /*0x4d9bc5*/
  if ( (g_TESSaveLoadGame->flags & 4) != 0 ) /*0x4d9bc7*/
  {
    ExtraData = BaseExtraList_GetExtraData(v2, kExtraData_EnableStateChildren); /*0x4d9bcd*/
    v6 = ExtraData; /*0x4d9bd2*/
    if ( ExtraData ) /*0x4d9bd6*/
      BaseExtraList_RemoveExtraByPtr(v2, (int)ExtraData, 0); /*0x4d9bdd*/
  }
  BaseExtraList_Clear(v2, 1); /*0x4d9be6*/
  if ( v6 ) /*0x4d9bed*/
    BaseExtraList_AddExtra(v2, v6); /*0x4d9bf2*/
  if ( PersistentCell ) /*0x4d9bf9*/
    sub_4247B0(v2, PersistentCell); /*0x4d9bfe*/
  if ( (g_TESSaveLoadGame->flags & 4) == 0 ) /*0x4d9c11*/
    (*((void (__thiscall **)(TESChildCELL *, _DWORD))this->vtbl + 0x54))(this, 0); /*0x4d9c20*/
  j_TESForm_ClearComponentReferences((TESForm *)this); /*0x4d9c28*/
}
