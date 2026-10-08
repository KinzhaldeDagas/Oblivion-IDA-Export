void __usercall UnequipWeapon(
        TESObjectREFR *a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>)
{
  TESObjectREFR *v6; // ebp
  char *AnimDataByPerspective; // esi
  PlayerCharacter *v8; // ecx
  TESObjectREFR *vtbl; // edi
  bool v10; // bl
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // ecx
  const char *v15; // ecx
  int v16; // eax
  ExtraDataList *****ContainerChanges; // eax
  unsigned int *EquippedInstance; // eax
  unsigned int *v19; // esi
  void *v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // esi
  _DWORD *ShadowSceneNode; // eax
  int v25; // eax
  int v26; // ebx
  unsigned int v27; // edx
  unsigned int v28; // eax
  int v29; // ecx
  const char *v30; // ecx
  _DWORD *v31; // eax
  int v32; // esi
  _DWORD *v33; // eax
  TESObjectREFRVtbl *v34; // ecx
  int v35; // eax
  int v36; // eax
  TESObjectREFR *v39; // [esp+14h] [ebp-Ch]
  TESObjectREFR *v41; // [esp+1Ch] [ebp-4h]

  v6 = a1; /*0x4dc5b4*/
  if ( a1->member.niNode ) /*0x4dc5b6*/
  {
    AnimDataByPerspective = (char *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl->GetActiveSkinInfo)(a1); /*0x4dc5d0*/
    v41 = 0; /*0x4dc5dd*/
    if ( v6->vtbl->IsActor(v6) ) /*0x4dc5e5*/
      v41 = v6; /*0x4dc5eb*/
    v8 = reference; /*0x4dc5ef*/
    if ( v6 == (TESObjectREFR *)reference ) /*0x4dc5f7*/
    {
      if ( AnimDataByPerspective ) /*0x4dc5fb*/
      {
        ActorSkinInfo_ClearWeaponSlot(AnimDataByPerspective, (char)v6, a4, a5, a6); /*0x4dc5ff*/
        v8 = reference; /*0x4dc604*/
      }
      AnimDataByPerspective = (char *)Actor_GetSkinInfoByPerspective(v8, v8->isThirdPerson); /*0x4dc61e*/
    }
    vtbl = (TESObjectREFR *)v41[1].vtbl; /*0x4dc628*/
    v39 = vtbl; /*0x4dc62b*/
    if ( AnimDataByPerspective ) /*0x4dc62f*/
    {
      ActorSkinInfo_ClearWeaponSlot(AnimDataByPerspective, (char)v6, a4, a5, a6); /*0x4dc633*/
    }
    else
    {
      v10 = 0; /*0x4dc63d*/
      if ( vtbl ) /*0x4dc641*/
      {
        v11 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))vtbl->vtbl->Unk_4C)(vtbl, 0); /*0x4dc653*/
        if ( v11 && *(_WORD *)(v11 + 0xB8) ) /*0x4dc659*/
        {
          v10 = 1; /*0x4dc663*/
        }
        else
        {
          v12 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))vtbl->vtbl->Unk_4D)(vtbl, 0); /*0x4dc676*/
          if ( !v12 ) /*0x4dc67a*/
            goto LABEL_20; /*0x4dc67a*/
          v13 = 0; /*0x4dc683*/
          if ( !*(_WORD *)(v12 + 0xB6) ) /*0x4dc67c*/
            goto LABEL_20; /*0x4dc67c*/
          while ( 1 ) /*0x4dc693*/
          {
            v14 = *(_DWORD *)(*(_DWORD *)(v12 + 0xB0) + 4 * v13); /*0x4dc693*/
            if ( v14 ) /*0x4dc698*/
            {
              v15 = *(const char **)(v14 + 8); /*0x4dc69a*/
              if ( v15 ) /*0x4dc69f*/
              {
                v6 = a1; /*0x4dc6a5*/
                vtbl = v39; /*0x4dc6b5*/
                if ( !strcmp(v15, aBow) ) /*0x4dc6b3*/
                  break; /*0x4dc6b3*/
              }
            }
            if ( *(unsigned __int16 *)(v12 + 0xB6) <= (unsigned int)++v13 ) /*0x4dc6c0*/
              goto LABEL_20; /*0x4dc6c0*/
          }
          if ( *(_WORD *)(v12 + 0xB8) ) /*0x4dc6e2*/
          {
            v10 = 1; /*0x4dc6ec*/
          }
          else
          {
LABEL_20:
            v16 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))vtbl->vtbl->GetMagicTarget)(vtbl, 0); /*0x4dc6c2*/
            v10 = v16 && *(_WORD *)(v16 + 0xB8); /*0x4dc6de*/
          }
        }
      }
      ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&v6->member.baseExtraList); /*0x4dc6f5*/
      if ( ContainerChanges ) /*0x4dc6fc*/
      {
        EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 9, 0); /*0x4dc704*/
        v19 = EquippedInstance; /*0x4dc709*/
        if ( EquippedInstance ) /*0x4dc70d*/
        {
          v20 = OblivionDynamicCast( /*0x4dc721*/
                  (void *)EquippedInstance[2],
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESModel `RTTI Type Descriptor',
                  0);
          if ( v20 ) /*0x4dc72b*/
          {
            if ( v10 ) /*0x4dc72f*/
            {
              v22 = (*(int (__thiscall **)(void *))(*(_DWORD *)v20 + 0x14))(v20); /*0x4dc738*/
              QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v22, 1, 1); /*0x4dc745*/
            }
          }
          ContainerEntryExtraData_DestroyDataTable(v19, v21); /*0x4dc74c*/
          FormHeapFree((unsigned int)v19); /*0x4dc752*/
        }
      }
    }
    if ( vtbl ) /*0x4dc75c*/
    {
      v23 = ((int (__thiscall *)(TESObjectREFR *, _DWORD, int, int))vtbl->vtbl->Unk_4C)(vtbl, 0, a3, a2); /*0x4dc770*/
      if ( v23 ) /*0x4dc774*/
      {
        Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4dc778*/
        ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0); /*0x4dc783*/
        ShadowSceneNode_RemoveObjectReceivers(ShadowSceneNode, v23); /*0x4dc78d*/
        NiTObjectArray_ClearAndRelease((_WORD *)(v23 + 0xAC)); /*0x4dc798*/
        Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4dc79f*/
      }
      v25 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))vtbl->vtbl->Unk_4D)(vtbl, 0); /*0x4dc7b3*/
      v26 = v25; /*0x4dc7b5*/
      if ( v25 ) /*0x4dc7b9*/
      {
        v27 = *(unsigned __int16 *)(v25 + 0xB6); /*0x4dc7bf*/
        v28 = 0; /*0x4dc7c6*/
        if ( *(_WORD *)(v26 + 0xB6) ) /*0x4dc7bf*/
        {
          do /*0x4dc7d6*/
          {
            v29 = *(_DWORD *)(*(_DWORD *)(v26 + 0xB0) + 4 * v28); /*0x4dc7d6*/
            if ( v29 ) /*0x4dc7db*/
            {
              v30 = *(const char **)(v29 + 8); /*0x4dc7dd*/
              if ( v30 ) /*0x4dc7e2*/
              {
                if ( !strcmp(v30, aBow) ) /*0x4dc7f4*/
                {
                  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4dc809*/
                  v31 = (_DWORD *)GetShadowSceneNode(0); /*0x4dc814*/
                  ShadowSceneNode_RemoveObjectReceivers(v31, v26); /*0x4dc81e*/
                  NiTObjectArray_ClearAndRelease((_WORD *)(v26 + 0xAC)); /*0x4dc829*/
                  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4dc830*/
                  vtbl = a1; /*0x4dc835*/
                  v6 = v41; /*0x4dc839*/
                  break; /*0x4dc839*/
                }
                vtbl = a1; /*0x4dc7f6*/
                v6 = v41; /*0x4dc7fa*/
              }
            }
            ++v28; /*0x4dc7fe*/
          }
          while ( v27 > v28 ); /*0x4dc7d6*/
        }
      }
      v32 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))vtbl->vtbl->GetMagicTarget)(vtbl, 0); /*0x4dc840*/
      if ( v32 ) /*0x4dc852*/
      {
        Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4dc856*/
        v33 = (_DWORD *)GetShadowSceneNode(0); /*0x4dc861*/
        ShadowSceneNode_RemoveObjectReceivers(v33, v32); /*0x4dc86b*/
        NiTObjectArray_ClearAndRelease((_WORD *)(v32 + 0xAC)); /*0x4dc876*/
        Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x4dc87d*/
      }
    }
    v34 = v41[1].vtbl; /*0x4dc889*/
    if ( v34 ) /*0x4dc890*/
    {
      if ( !*(_BYTE *)(g_TESDataHandler + 0xCD4) && (g_TESSaveLoadGame->flags & 0x1000) == 0 ) /*0x4dc8af*/
      {
        v35 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))v34->super.super.InitializeComponent + 0x3B))(v34, 1); /*0x4dc8bb*/
        if ( v35 ) /*0x4dc8bf*/
        {
          v36 = *(_DWORD *)(v35 + 8); /*0x4dc8c1*/
          if ( v36 ) /*0x4dc8c6*/
          {
            if ( *(_BYTE *)(v36 + 0x90) == 5 ) /*0x4dc8cf*/
              sub_5E13D0(v41, 0); /*0x4dc8d5*/
          }
        }
      }
    }
    sub_5EA1A0((int)v41, (int)v6, (_DWORD *)v6->member.niNode); /*0x4dc8e0*/
  }
}
