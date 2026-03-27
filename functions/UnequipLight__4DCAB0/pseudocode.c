void __usercall UnequipLight(TESObjectREFR *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  TESObjectREFR *v4; // ebp
  char *v5; // esi
  PlayerCharacter *v6; // ecx
  NiNode *v7; // eax
  int v8; // eax
  int v9; // edi
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
  _DWORD *v20; // eax
  BSExtraDataVtbl *v21; // edi
  _DWORD *ShadowSceneNode; // eax
  void (__thiscall *v23)(BSExtraData *); // esi
  char *v24; // [esp-10h] [ebp-20h]
  int v25; // [esp-10h] [ebp-20h]
  int Destructor; // [esp-10h] [ebp-20h]
  bool v27; // [esp+6h] [ebp-Ah]
  char v28; // [esp+7h] [ebp-9h]
  int v30; // [esp+Ch] [ebp-4h]

  v4 = this;
  if ( this->member.niNode )
  {
    v5 = (char *)((int (__thiscall *)(TESObjectREFR *))this->vtbl->Unk_5A)(this);
    if ( v4->vtbl->IsActor(v4) )
    {
      if ( v4[1].vtbl )
      {
        v6 = TESDataHandler_g_PlayerRef;
        if ( v4 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
        {
          if ( v5 )
          {
            sub_478E30(v5, (char)v4, a2, a3, a4);
            v6 = TESDataHandler_g_PlayerRef;
          }
          v5 = (char *)sub_6600D0(v6, v6->isThirdPerson);
        }
        if ( v5 )
        {
          sub_478E30(v5, (char)v4, a2, a3, a4);
LABEL_33:
          v21 = sub_41E650(&v4->member.baseExtraList);
          if ( v21 )
          {
            if ( v21->Destructor )
            {
              Destructor = (int)v21->Destructor;
              ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
              sub_7C7DC0(ShadowSceneNode, Destructor);
              v23 = v21->Destructor;
              if ( v21->Destructor )
              {
                if ( !InterlockedDecrement((volatile LONG *)v23 + 1) )
                {
                  if ( v23 )
                    (**(void (__thiscall ***)(void (__thiscall *)(BSExtraData *), int))v23)(v23, 1);
                }
                v21->Destructor = 0;
              }
            }
            sub_41F5B0(&v4->member.baseExtraList.vtbl);
          }
          (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v4[1].vtbl->super.super.InitializeComponent + 0xD1))(
            v4[1].vtbl,
            1);
          sub_5EA1A0((int)v4, (int)v4, (_DWORD *)v4->member.niNode);
          return;
        }
        v24 = off_B06570;
        v7 = v4->vtbl->GetNiNode(v4);
        v8 = NiObjectNET_LookupObjectByName(v7, v24);
        v9 = v8;
        v30 = v8;
        v27 = 0;
        v28 = 0;
        if ( v8 )
        {
          v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
          if ( v10 )
          {
            v27 = *(_WORD *)(v10 + 0xB8) != 0;
            if ( *(_WORD *)(v10 + 0xB8) )
            {
              v11 = 0;
              if ( *(_WORD *)(v10 + 0xB6) )
              {
                do
                {
                  v12 = *(_DWORD *)(*(_DWORD *)(v10 + 0xB0) + 4 * v11);
                  if ( v12 )
                  {
                    v13 = *(const char **)(v12 + 8);
                    if ( v13 )
                    {
                      if ( !strcmp(v13, aBow) )
                        v28 = 1;
                    }
                  }
                  ++v11;
                }
                while ( *(unsigned __int16 *)(v10 + 0xB6) > v11 );
                v9 = v30;
              }
              v4 = this;
            }
          }
        }
        else
        {
          v10 = 0;
        }
        ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&v4->member.baseExtraList);
        if ( ContainerChanges )
        {
          EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xE, 0);
          v16 = EquippedInstance;
          if ( EquippedInstance )
          {
            v17 = OblivionDynamicCast(
                    (void *)EquippedInstance[2],
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                    &TESModel `RTTI Type Descriptor',
                    0);
            if ( v17 )
            {
              if ( v27 )
              {
                v19 = (*(int (__thiscall **)(void *))(*(_DWORD *)v17 + 0x14))(v17);
                QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v19, 1, 1);
              }
            }
            ContainerEntryExtraData_DestroyDataTable(v16, v18);
            FormHeapFree((unsigned int)v16);
          }
        }
        if ( v10 )
        {
          if ( v28 )
            goto LABEL_33;
          sub_477EF0((_WORD *)(v10 + 0xAC));
          v25 = v10;
        }
        else
        {
          v25 = v9;
        }
        v20 = (_DWORD *)GetShadowSceneNode(0);
        sub_7C5E70(v20, v25);
        goto LABEL_33;
      }
    }
  }
}
