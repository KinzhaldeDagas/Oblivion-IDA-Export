void __usercall UnequipWeapon(
        TESObjectREFR *a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>)
{
  TESObjectREFR *v6; // ebp
  char *v7; // esi
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

  v6 = a1;
  if ( a1->member.niNode )
  {
    v7 = (char *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->Unk_5A)(
                   a1,
                   a6,
                   a5,
                   a4);
    v41 = 0;
    if ( v6->vtbl->IsActor(v6) )
      v41 = v6;
    v8 = TESDataHandler_g_PlayerRef;
    if ( v6 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      if ( v7 )
      {
        sub_478CE0(v7, (char)v6, a4, a5, a6);
        v8 = TESDataHandler_g_PlayerRef;
      }
      v7 = (char *)sub_6600D0(v8, v8->isThirdPerson);
    }
    vtbl = (TESObjectREFR *)v41[1].vtbl;
    v39 = vtbl;
    if ( v7 )
    {
      sub_478CE0(v7, (char)v6, a4, a5, a6);
    }
    else
    {
      v10 = 0;
      if ( vtbl )
      {
        v11 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))vtbl->vtbl->Unk_4C)(vtbl, 0);
        if ( v11 && *(_WORD *)(v11 + 0xB8) )
        {
          v10 = 1;
        }
        else
        {
          v12 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))vtbl->vtbl->Unk_4D)(vtbl, 0);
          if ( !v12 )
            goto LABEL_20;
          v13 = 0;
          if ( !*(_WORD *)(v12 + 0xB6) )
            goto LABEL_20;
          while ( 1 )
          {
            v14 = *(_DWORD *)(*(_DWORD *)(v12 + 0xB0) + 4 * v13);
            if ( v14 )
            {
              v15 = *(const char **)(v14 + 8);
              if ( v15 )
              {
                v6 = a1;
                vtbl = v39;
                if ( !strcmp(v15, aBow) )
                  break;
              }
            }
            if ( *(unsigned __int16 *)(v12 + 0xB6) <= (unsigned int)++v13 )
              goto LABEL_20;
          }
          if ( *(_WORD *)(v12 + 0xB8) )
          {
            v10 = 1;
          }
          else
          {
LABEL_20:
            v16 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))vtbl->vtbl->GetMagicTarget)(vtbl, 0);
            v10 = v16 && *(_WORD *)(v16 + 0xB8);
          }
        }
      }
      ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&v6->member.baseExtraList);
      if ( ContainerChanges )
      {
        EquippedInstance = ContainerExtraData_GetEquippedInstance(ContainerChanges, 9, 0);
        v19 = EquippedInstance;
        if ( EquippedInstance )
        {
          v20 = OblivionDynamicCast(
                  (void *)EquippedInstance[2],
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                  &TESModel `RTTI Type Descriptor',
                  0);
          if ( v20 )
          {
            if ( v10 )
            {
              v22 = (*(int (__thiscall **)(void *))(*(_DWORD *)v20 + 0x14))(v20);
              QueuedModelLoader_RemoveModel((int *)ModelLoaderPtr, v22, 1, 1);
            }
          }
          ContainerEntryExtraData_DestroyDataTable(v19, v21);
          FormHeapFree((unsigned int)v19);
        }
      }
    }
    if ( vtbl )
    {
      v23 = ((int (__thiscall *)(TESObjectREFR *, _DWORD, int, int))vtbl->vtbl->Unk_4C)(vtbl, 0, a3, a2);
      if ( v23 )
      {
        nullsub_returnTrue_0arg();
        ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
        sub_7C5E70(ShadowSceneNode, v23);
        sub_477EF0((_WORD *)(v23 + 0xAC));
        nullsub_returnTrue_0arg();
      }
      v25 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))vtbl->vtbl->Unk_4D)(vtbl, 0);
      v26 = v25;
      if ( v25 )
      {
        v27 = *(unsigned __int16 *)(v25 + 0xB6);
        v28 = 0;
        if ( *(_WORD *)(v26 + 0xB6) )
        {
          do
          {
            v29 = *(_DWORD *)(*(_DWORD *)(v26 + 0xB0) + 4 * v28);
            if ( v29 )
            {
              v30 = *(const char **)(v29 + 8);
              if ( v30 )
              {
                if ( !strcmp(v30, aBow) )
                {
                  nullsub_returnTrue_0arg();
                  v31 = (_DWORD *)GetShadowSceneNode(0);
                  sub_7C5E70(v31, v26);
                  sub_477EF0((_WORD *)(v26 + 0xAC));
                  nullsub_returnTrue_0arg();
                  vtbl = a1;
                  v6 = v41;
                  break;
                }
                vtbl = a1;
                v6 = v41;
              }
            }
            ++v28;
          }
          while ( v27 > v28 );
        }
      }
      v32 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))vtbl->vtbl->GetMagicTarget)(vtbl, 0);
      if ( v32 )
      {
        nullsub_returnTrue_0arg();
        v33 = (_DWORD *)GetShadowSceneNode(0);
        sub_7C5E70(v33, v32);
        sub_477EF0((_WORD *)(v32 + 0xAC));
        nullsub_returnTrue_0arg();
      }
    }
    v34 = v41[1].vtbl;
    if ( v34 )
    {
      if ( !*(_BYTE *)(TESDataHandler + 0xCD4) && (SaveLoad_CurrentSavegame->flags & 0x1000) == 0 )
      {
        v35 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))v34->super.super.InitializeComponent + 0x3B))(v34, 1);
        if ( v35 )
        {
          v36 = *(_DWORD *)(v35 + 8);
          if ( v36 )
          {
            if ( *(_BYTE *)(v36 + 0x90) == 5 )
              sub_5E13D0(v41, 0);
          }
        }
      }
    }
    sub_5EA1A0((int)v41, (int)v6, (_DWORD *)v6->member.niNode);
  }
}
