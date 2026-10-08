// Clears this reference's equipped-ammunition 3D and related actor-animation ammo slot state. No explicit stack arguments.
void __thiscall TESObjectREFR_ClearEquippedAmmo3D(TESObjectREFR *this)
{
  int v1; // ebp
  ActorAnimData *AnimDataByPerspective; // eax
  PlayerCharacter *v4; // ecx
  NiNode *v5; // eax
  int v6; // eax
  NiAVObject *v7; // ebp
  int v8; // eax
  int v9; // ebx
  ExtraDataList *****ContainerChanges; // eax
  unsigned int *EquippedInstance; // eax
  unsigned int *v12; // esi
  void *v13; // eax
  int v14; // edx
  int v15; // eax
  void *ShadowSceneNode; // eax
  char *v17; // [esp-Ch] [ebp-18h]
  int v18; // [esp-8h] [ebp-14h]
  char v19; // [esp+7h] [ebp-5h]

  if ( this->member.niNode ) /*0x4dccf6*/
  {
    AnimDataByPerspective = (ActorAnimData *)((int (__thiscall *)(TESObjectREFR *))this->vtbl->GetActiveSkinInfo)(this); /*0x4dcd08*/
    v4 = reference; /*0x4dcd0a*/
    if ( this == (TESObjectREFR *)reference ) /*0x4dcd12*/
    {
      if ( AnimDataByPerspective ) /*0x4dcd16*/
      {
        ActorSkinInfo_ClearAmmoSlot(AnimDataByPerspective); /*0x4dcd1a*/
        v4 = reference; /*0x4dcd1f*/
      }
      AnimDataByPerspective = (ActorAnimData *)Actor_GetSkinInfoByPerspective(v4, v4->isThirdPerson); /*0x4dcd34*/
    }
    if ( AnimDataByPerspective ) /*0x4dcd3b*/
    {
      ActorSkinInfo_ClearAmmoSlot(AnimDataByPerspective); /*0x4dcd3f*/
LABEL_22:
      if ( this->vtbl->IsActor(this) ) /*0x4dce35*/
        sub_5EA1A0((int)this, v1, (_DWORD *)this->member.niNode); /*0x4dce41*/
      return; /*0x4dce41*/
    }
    v18 = v1; /*0x4dcd51*/
    v17 = off_B06568[0]; /*0x4dcd52*/
    v5 = this->vtbl->GetNiNode(this); /*0x4dcd5b*/
    v6 = NiObjectNET_LookupObjectByName(v5, v17); /*0x4dcd5e*/
    v7 = (NiAVObject *)v6; /*0x4dcd63*/
    if ( v6 ) /*0x4dcd6a*/
    {
      v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6); /*0x4dcd78*/
      v9 = v8; /*0x4dcd7a*/
      if ( v8 ) /*0x4dcd7e*/
      {
        v19 = 1; /*0x4dcd88*/
        if ( *(_WORD *)(v8 + 0xB8) ) /*0x4dcd80*/
          goto LABEL_12; /*0x4dcd8d*/
      }
    }
    else
    {
      v9 = 0; /*0x4dce4b*/
    }
    v19 = 0; /*0x4dcd8f*/
LABEL_12:
    ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&this->member.baseExtraList); /*0x4dcd94*/
    if ( ContainerChanges ) /*0x4dcd9e*/
    {
      EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xC, 0); /*0x4dcda7*/
      v12 = EquippedInstance; /*0x4dcdac*/
      if ( EquippedInstance ) /*0x4dcdb0*/
      {
        v13 = OblivionDynamicCast( /*0x4dcdc4*/
                (void *)EquippedInstance[2],
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                &TESModel `RTTI Type Descriptor',
                0);
        if ( v13 ) /*0x4dcdce*/
        {
          if ( v19 ) /*0x4dcdd5*/
          {
            v15 = (*(int (__thiscall **)(void *))(*(_DWORD *)v13 + 0x14))(v13); /*0x4dcdde*/
            QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v15, 1, 1); /*0x4dcdeb*/
          }
        }
        ContainerEntryExtraData_DestroyDataTable(v12, v14); /*0x4dcdf2*/
        FormHeapFree((unsigned int)v12); /*0x4dcdf8*/
      }
    }
    ShadowSceneNode = (void *)GetShadowSceneNode(0); /*0x4dce04*/
    ShadowSceneNode_RemoveObjectReceivers(ShadowSceneNode, v7); /*0x4dce0e*/
    if ( v9 ) /*0x4dce15*/
    {
      if ( v19 ) /*0x4dce1c*/
        NiTObjectArray_ClearAndRelease((void *)(v9 + 0xAC)); /*0x4dce24*/
    }
    v1 = v18; /*0x4dce29*/
    goto LABEL_22; /*0x4dce29*/
  }
}
