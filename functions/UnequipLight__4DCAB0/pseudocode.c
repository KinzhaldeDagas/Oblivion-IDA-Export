void __thiscall UnequipLight(TESObjectREFR *this)
{
  TESObjectREFR *v4; // ebp
  ActorSkinInfo *SkinInfoByPerspective; // esi
  PlayerCharacter *v6; // ecx
  NiNode *v7; // eax
  int v8; // eax
  NiAVObject *v9; // edi
  int v10; // ebx
  unsigned int v11; // edx
  int v12; // eax
  const char *v13; // eax
  ExtraDataList *****ContainerChanges; // eax
  unsigned int *EquippedInstance; // eax
  unsigned int *v16; // esi
  void *v17; // eax
  int v18; // edx
  int v19; // eax
  void *v20; // eax
  BSExtraDataVtbl *Light; // edi
  ShadowSceneNode_DecodedLayout *ShadowSceneNode; // eax
  void (__thiscall *v23)(BSExtraData *); // esi
  char *v24; // [esp-10h] [ebp-20h]
  NiAVObject *v25; // [esp-10h] [ebp-20h]
  void (__thiscall *Destructor)(BSExtraData *); // [esp-10h] [ebp-20h]
  bool v27; // [esp+6h] [ebp-Ah]
  char v28; // [esp+7h] [ebp-9h]
  bool firstPerson[4]; // [esp+Ch] [ebp-4h]

  v4 = this; /*0x4dcab4*/
  if ( this->member.niNode ) /*0x4dcab6*/
  {
    SkinInfoByPerspective = this->vtbl->GetActiveSkinInfo(this); /*0x4dcad0*/
    if ( v4->vtbl->IsActor(v4) ) /*0x4dcadd*/
    {
      if ( v4[1].vtbl ) /*0x4dcae7*/
      {
        v6 = reference; /*0x4dcaf1*/
        if ( v4 == (TESObjectREFR *)reference ) /*0x4dcaf9*/
        {
          if ( SkinInfoByPerspective ) /*0x4dcafd*/
          {
            ActorSkinInfo_ClearLightSlot(SkinInfoByPerspective); /*0x4dcb01*/
            v6 = reference; /*0x4dcb06*/
          }
          SkinInfoByPerspective = Actor_GetSkinInfoByPerspective((Actor *)v6, v6->isThirdPerson); /*0x4dcb20*/
        }
        if ( SkinInfoByPerspective ) /*0x4dcb26*/
        {
          ActorSkinInfo_ClearLightSlot(SkinInfoByPerspective); /*0x4dcb2a*/
LABEL_33:
          Light = ExtraDataList_GetLight(&v4->member.baseExtraList); /*0x4dcc72*/
          if ( Light ) /*0x4dcc80*/
          {
            if ( Light->Destructor ) /*0x4dcc82*/
            {
              Destructor = Light->Destructor; /*0x4dcc88*/
              ShadowSceneNode = (ShadowSceneNode_DecodedLayout *)GetShadowSceneNode(0); /*0x4dcc8b*/
              ShadowSceneNode_RemoveFullLightBySource(ShadowSceneNode, Destructor); /*0x4dcc95*/
              v23 = Light->Destructor; /*0x4dcc9a*/
              if ( Light->Destructor ) /*0x4dcc9a*/
              {
                if ( !InterlockedDecrement((volatile LONG *)v23 + 1) ) /*0x4dcca4*/
                {
                  if ( v23 ) /*0x4dccb0*/
                    (**(void (__thiscall ***)(void (__thiscall *)(BSExtraData *), int))v23)(v23, 1); /*0x4dccba*/
                }
                Light->Destructor = 0; /*0x4dccbc*/
              }
            }
            ExtraDataList_RemoveExtraLight(&v4->member.baseExtraList); /*0x4dccc4*/
          }
          (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v4[1].vtbl->super.super.InitializeComponent + 0xD1))( /*0x4dccd6*/
            v4[1].vtbl,
            1);
          sub_5EA1A0((int)v4, (int)v4, (_DWORD *)v4->member.niNode); /*0x4dccde*/
          return; /*0x4dccde*/
        }
        v24 = off_B06570; /*0x4dcb3c*/
        v7 = v4->vtbl->GetNiNode(v4); /*0x4dcb45*/
        v8 = NiObjectNET_LookupObjectByName(v7, v24); /*0x4dcb48*/
        v9 = (NiAVObject *)v8; /*0x4dcb4d*/
        *(_DWORD *)firstPerson = v8; /*0x4dcb54*/
        v27 = 0; /*0x4dcb58*/
        v28 = 0; /*0x4dcb5d*/
        if ( v8 ) /*0x4dcb62*/
        {
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8); /*0x4dcb71*/
          if ( v10 ) /*0x4dcb75*/
          {
            v27 = *(_WORD *)(v10 + 0xB8) != 0; /*0x4dcb84*/
            if ( *(_WORD *)(v10 + 0xB8) ) /*0x4dcb77*/
            {
              v11 = 0; /*0x4dcb91*/
              if ( *(_WORD *)(v10 + 0xB6) ) /*0x4dcb8a*/
              {
                do /*0x4dcbcb*/
                {
                  v12 = *(_DWORD *)(*(_DWORD *)(v10 + 0xB0) + 4 * v11); /*0x4dcba1*/
                  if ( v12 ) /*0x4dcba6*/
                  {
                    v13 = *(const char **)(v12 + 8); /*0x4dcba8*/
                    if ( v13 ) /*0x4dcbad*/
                    {
                      if ( !strcmp(v13, aBow) ) /*0x4dcbbd*/
                        v28 = 1; /*0x4dcbc1*/
                    }
                  }
                  ++v11; /*0x4dcbc6*/
                }
                while ( *(unsigned __int16 *)(v10 + 0xB6) > v11 ); /*0x4dcbcb*/
                v9 = *(NiAVObject **)firstPerson; /*0x4dcbcd*/
              }
              v4 = this; /*0x4dcbd1*/
            }
          }
        }
        else
        {
          v10 = 0; /*0x4dcc59*/
        }
        ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&v4->member.baseExtraList); /*0x4dcbd8*/
        if ( ContainerChanges ) /*0x4dcbdf*/
        {
          EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xE, 0); /*0x4dcbe7*/
          v16 = EquippedInstance; /*0x4dcbec*/
          if ( EquippedInstance ) /*0x4dcbf0*/
          {
            v17 = OblivionDynamicCast( /*0x4dcc04*/
                    (void *)EquippedInstance[2],
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                    &TESModel `RTTI Type Descriptor',
                    0);
            if ( v17 ) /*0x4dcc0e*/
            {
              if ( v27 ) /*0x4dcc15*/
              {
                v19 = (*(int (__thiscall **)(void *))(*(_DWORD *)v17 + 0x14))(v17); /*0x4dcc1e*/
                QueuedModelLoader_RemoveModel((int *)MEMORY[0xB33A1C], v19, 1, 1); /*0x4dcc2b*/
              }
            }
            ContainerEntryExtraData_DestroyDataTable(v16, v18); /*0x4dcc32*/
            FormHeapFree((unsigned int)v16); /*0x4dcc38*/
          }
        }
        if ( v10 ) /*0x4dcc42*/
        {
          if ( v28 ) /*0x4dcc49*/
            goto LABEL_33; /*0x4dcc49*/
          NiTObjectArray_ClearAndRelease((void *)(v10 + 0xAC)); /*0x4dcc51*/
          v25 = (NiAVObject *)v10; /*0x4dcc56*/
        }
        else
        {
          v25 = v9; /*0x4dcc60*/
        }
        v20 = (void *)GetShadowSceneNode(0); /*0x4dcc63*/
        ShadowSceneNode_RemoveObjectReceivers(v20, v25); /*0x4dcc6d*/
        goto LABEL_33; /*0x4dcc6d*/
      }
    }
  }
}
