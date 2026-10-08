double __userpurge sub_4DC8F0@<st0>(
        TESObjectREFR *this@<ecx>,
        double result@<st0>,
        double a3@<st2>,
        double a4@<st1>,
        int a5@<ebp>,
        char a6)
{
  char *v7; // eax
  PlayerCharacter *v8; // ecx
  char *SkinInfoByPerspective; // edi
  int v10; // ecx
  ActorAnimData *v11; // eax
  _DWORD *v12; // eax
  int v13; // eax
  NiAVObject *v14; // ebp
  int v15; // eax
  int v16; // edi
  char v17; // bl
  void *ShadowSceneNode; // eax
  ExtraDataList *****ContainerChanges; // eax
  unsigned int *EquippedInstance; // eax
  unsigned int *v21; // edi
  const char **v22; // eax
  int v23; // edx
  int ModelPath; // eax
  char *v25; // [esp-8h] [ebp-18h]
  int v26; // [esp-4h] [ebp-14h]
  TESObjectREFR *firstPerson; // [esp+Ch] [ebp-4h]

  if ( this->member.niNode ) /*0x4dc8f4*/
  {
    v7 = (char *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl->GetActiveSkinInfo)( /*0x4dc907*/
                   this,
                   result,
                   a4,
                   a3);
    v8 = reference; /*0x4dc909*/
    SkinInfoByPerspective = v7; /*0x4dc911*/
    if ( this == (TESObjectREFR *)reference ) /*0x4dc913*/
    {
      if ( v7 ) /*0x4dc917*/
      {
        ActorSkinInfo_ClearShieldSlot(v7); /*0x4dc91b*/
        v8 = reference; /*0x4dc920*/
      }
      SkinInfoByPerspective = (char *)Actor_GetSkinInfoByPerspective((Actor *)v8, v8->isThirdPerson); /*0x4dc93a*/
    }
    firstPerson = 0; /*0x4dc946*/
    if ( this->vtbl->IsActor(this) ) /*0x4dc94e*/
    {
      v10 = *((_DWORD *)this + 0x16); /*0x4dc954*/
      firstPerson = this; /*0x4dc959*/
      if ( v10 ) /*0x4dc95d*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x2D0))(v10) == 6 ) /*0x4dc96c*/
        {
          v11 = this->vtbl->GetAnimData(this); /*0x4dc978*/
          if ( v11 ) /*0x4dc97c*/
            ActorAnimData_ClearSlot(v11, 1, 0.0); /*0x4dc988*/
          Actor_SetCurrentActionWithBowVisualCleanup((Actor *)this, kActorCurrentAction_None, 0); /*0x4dc993*/
        }
      }
    }
    if ( SkinInfoByPerspective ) /*0x4dc99a*/
    {
      ActorSkinInfo_ClearShieldSlot(SkinInfoByPerspective); /*0x4dc99e*/
LABEL_30:
      if ( firstPerson ) /*0x4dca82*/
      {
        if ( a6 ) /*0x4dca89*/
          HideEquipment(firstPerson, a3, a4, result, 0, 0); /*0x4dca91*/
        sub_5EA1A0((int)firstPerson, a5, (_DWORD *)this->member.niNode); /*0x4dca9c*/
      }
      return result; /*0x4dca9c*/
    }
    v26 = a5; /*0x4dc9b0*/
    v25 = off_B0656C[0]; /*0x4dc9b1*/
    v12 = (_DWORD *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))this->vtbl->GetNiNode)( /*0x4dc9ba*/
                      this,
                      result,
                      a4,
                      a3);
    v13 = NiObjectNET_LookupObjectByName(v12, v25); /*0x4dc9bd*/
    v14 = (NiAVObject *)v13; /*0x4dc9c2*/
    if ( v13 ) /*0x4dc9c9*/
    {
      v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 8))(v13); /*0x4dc9d3*/
      v16 = v15; /*0x4dc9d5*/
      if ( v15 && *(_WORD *)(v15 + 0xB8) ) /*0x4dc9db*/
      {
        v17 = 1; /*0x4dc9e5*/
LABEL_20:
        ShadowSceneNode = (void *)GetShadowSceneNode(0); /*0x4dc9ed*/
        ShadowSceneNode_RemoveObjectReceivers(ShadowSceneNode, v14); /*0x4dc9fa*/
        if ( v16 ) /*0x4dca01*/
        {
          if ( v17 ) /*0x4dca05*/
            NiTObjectArray_ClearAndRelease((void *)(v16 + 0xAC)); /*0x4dca0d*/
        }
        ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&this->member.baseExtraList); /*0x4dca15*/
        if ( ContainerChanges ) /*0x4dca1c*/
        {
          EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xD, 0); /*0x4dca24*/
          v21 = EquippedInstance; /*0x4dca29*/
          if ( EquippedInstance ) /*0x4dca2d*/
          {
            v22 = (const char **)OblivionDynamicCast( /*0x4dca41*/
                                   (void *)EquippedInstance[2],
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                   &TESBipedModelForm `RTTI Type Descriptor',
                                   0);
            if ( v22 ) /*0x4dca4b*/
            {
              if ( v17 ) /*0x4dca4f*/
              {
                ModelPath = TESBipedModelForm_GetModelPath(v22, 0); /*0x4dca55*/
                QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], ModelPath, 1, 1); /*0x4dca65*/
              }
            }
            ContainerEntryExtraData_DestroyDataTable(v21, v23); /*0x4dca6c*/
            FormHeapFree((unsigned int)v21); /*0x4dca72*/
          }
        }
        a5 = v26; /*0x4dca7a*/
        goto LABEL_30; /*0x4dca7a*/
      }
    }
    else
    {
      v16 = 0; /*0x4dc9e9*/
    }
    v17 = 0; /*0x4dc9eb*/
    goto LABEL_20; /*0x4dc9eb*/
  }
  return result; /*0x4dcaa2*/
}
