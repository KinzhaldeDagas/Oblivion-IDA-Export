void __usercall sub_4DCCF0(TESObjectREFR *this@<ecx>, int a2@<ebp>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  char *v6; // eax
  PlayerCharacter *v7; // ecx
  NiNode *v8; // eax
  int v9; // eax
  int v10; // ebp
  int v11; // eax
  int v12; // ebx
  ExtraDataList *****ContainerChanges; // eax
  unsigned int *EquippedInstance; // eax
  unsigned int *v15; // esi
  void *v16; // eax
  int v17; // edx
  int v18; // eax
  _DWORD *ShadowSceneNode; // eax
  char *v20; // [esp-Ch] [ebp-18h]
  int v21; // [esp-8h] [ebp-14h]
  char v22; // [esp+7h] [ebp-5h]

  if ( this->member.niNode )
  {
    v6 = (char *)((int (__thiscall *)(TESObjectREFR *))this->vtbl->Unk_5A)(this);
    v7 = TESDataHandler_g_PlayerRef;
    if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      if ( v6 )
      {
        sub_478DB0(v6, a2, a3, a4, a5);
        v7 = TESDataHandler_g_PlayerRef;
      }
      v6 = (char *)sub_6600D0(v7, v7->isThirdPerson);
    }
    if ( v6 )
    {
      sub_478DB0(v6, a2, a3, a4, a5);
LABEL_22:
      if ( this->vtbl->IsActor(this) )
        sub_5EA1A0((int)this, a2, (_DWORD *)this->member.niNode);
      return;
    }
    v21 = a2;
    v20 = off_B06568[0];
    v8 = this->vtbl->GetNiNode(this);
    v9 = NiObjectNET_LookupObjectByName(v8, v20);
    v10 = v9;
    if ( v9 )
    {
      v11 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
      v12 = v11;
      if ( v11 )
      {
        v22 = 1;
        if ( *(_WORD *)(v11 + 0xB8) )
          goto LABEL_12;
      }
    }
    else
    {
      v12 = 0;
    }
    v22 = 0;
LABEL_12:
    ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&this->member.baseExtraList);
    if ( ContainerChanges )
    {
      EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xC, 0);
      v15 = EquippedInstance;
      if ( EquippedInstance )
      {
        v16 = OblivionDynamicCast(
                (void *)EquippedInstance[2],
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESModel `RTTI Type Descriptor',
                0);
        if ( v16 )
        {
          if ( v22 )
          {
            v18 = (*(int (__thiscall **)(void *))(*(_DWORD *)v16 + 0x14))(v16);
            QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v18, 1, 1);
          }
        }
        ContainerEntryExtraData_DestroyDataTable(v15, v17);
        FormHeapFree((unsigned int)v15);
      }
    }
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
    sub_7C5E70(ShadowSceneNode, v10);
    if ( v12 )
    {
      if ( v22 )
        sub_477EF0((_WORD *)(v12 + 0xAC));
    }
    a2 = v21;
    goto LABEL_22;
  }
}
