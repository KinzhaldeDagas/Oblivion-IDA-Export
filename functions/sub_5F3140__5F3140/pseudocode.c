void __userpurge sub_5F3140(
        TESObjectREFR *a1@<ecx>,
        double a2@<st0>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        unsigned __int16 *a5,
        ExtraDataList *a6,
        ExtraDataList **a7,
        char a8,
        ExtraDataList *a9)
{
  int v10; // eax
  unsigned __int16 *v11; // edi
  int ***ContainerExtraDataForRef; // esi
  int *v13; // eax
  ExtraDataList ***EquippedInstance; // eax
  int v15; // ecx
  ExtraDataList *v16; // edx
  ExtraDataList **v17; // eax
  int v18; // esi
  void **v19; // ebx
  _BYTE *v20; // edi
  unsigned __int16 *v21; // eax
  ExtraDataList *****ContainerChanges; // eax
  unsigned int *v23; // eax
  int v24; // edx
  unsigned int *v25; // esi
  ExtraDataList *v26; // ecx
  _BYTE **v27; // eax
  unsigned __int16 *v28; // edi
  ExtraDataList ***v29; // esi
  bool v30; // bl
  int v31; // eax
  _DWORD *v32; // eax
  int *v33; // eax
  int *v34; // esi
  char v35; // bl
  _DWORD *v36; // eax
  int *v37; // eax
  _DWORD *v38; // eax
  int v39; // eax
  int v40; // esi
  bool v41; // bl
  int v42; // eax
  unsigned __int16 *v43; // ecx
  float *v44; // eax
  int v45; // eax
  _DWORD *v46; // eax
  int v47; // eax
  TESObjectREFRVtbl *vtbl; // edi
  int v49; // [esp+10h] [ebp-44h]
  int v50; // [esp+14h] [ebp-40h]
  int v51; // [esp+1Ch] [ebp-38h]
  int v52; // [esp+20h] [ebp-34h]
  float v53; // [esp+20h] [ebp-34h]
  int v54; // [esp+28h] [ebp-2Ch]
  char v55; // [esp+2Fh] [ebp-25h]
  int v56; // [esp+30h] [ebp-24h]
  char v57; // [esp+34h] [ebp-20h]
  int v58; // [esp+38h] [ebp-1Ch]
  float *v59; // [esp+38h] [ebp-1Ch]
  int v60; // [esp+3Ch] [ebp-18h]
  unsigned __int16 *v61; // [esp+40h] [ebp-14h]
  ExtraContainerChanges_Data *v62; // [esp+40h] [ebp-14h]
  int v63; // [esp+44h] [ebp-10h]
  unsigned int v64; // [esp+4Ch] [ebp-8h]
  signed int v65; // [esp+50h] [ebp-4h]
  TESForm *retaddr; // [esp+54h] [ebp+0h]

  if ( a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    v10 = sub_6600D0(TESDataHandler_g_PlayerRef, 0);
  else
    v10 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->Unk_5A)(
            a1,
            a2,
            st6_0,
            st5_0);
  v58 = v10;
  v11 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)a5);
  v61 = v11;
  if ( a1->vtbl->GetBaseForm(a1) )
    ((int (__thiscall *)(TESObjectREFR *))a1->vtbl->IsActor)(a1);
  ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(a1);
  v57 = 0;
  HIBYTE(v56) = 0;
  if ( !v11 )
    goto LABEL_44;
  if ( TESBipedModelForm_CoversSlot(v11, 7, 0) || TESBipedModelForm_CoversSlot(v11, 6, 0) )
  {
    if ( TESBipedModelForm_CoversSlot(v11, 7, 0) )
      v57 = 1;
    HIBYTE(v56) = sub_485F10(ContainerExtraDataForRef, 0) != 0;
    v13 = sub_485F10(ContainerExtraDataForRef, 1);
    if ( HIBYTE(v56) )
    {
      if ( v13 )
      {
        if ( v58 )
        {
          if ( v57 )
          {
            EquippedInstance = (ExtraDataList ***)ContainerExtraData_GetEquippedInstance(
                                                    (ExtraDataList *****)ContainerExtraDataForRef,
                                                    7,
                                                    0);
            v15 = *(_DWORD *)(v58 + 0xBC);
          }
          else
          {
            EquippedInstance = (ExtraDataList ***)ContainerExtraData_GetEquippedInstance(
                                                    (ExtraDataList *****)ContainerExtraDataForRef,
                                                    6,
                                                    0);
            v15 = *(_DWORD *)(v58 + 0xAC);
          }
          v16 = 0;
          if ( EquippedInstance )
          {
            v17 = *EquippedInstance;
            if ( v17 )
              v16 = *v17;
          }
          if ( v15 )
            a2 = Actor_UnequipItem((PlayerCharacter *)a1, a2, st5_0, st6_0, v15, 1, v16, v57, 0, 1);
        }
      }
    }
    goto LABEL_44;
  }
  if ( !v58 )
    goto LABEL_44;
  v18 = 0;
  v60 = 0;
  do
  {
    if ( TESBipedModelForm_CoversSlot(v61, v18, 0) )
    {
      v19 = (void **)(v58 + 0x4C);
      v63 = 0x10;
      do
      {
        v20 = *v19;
        v21 = (unsigned __int16 *)OblivionDynamicCast(
                                    *v19,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESBipedModelForm `RTTI Type Descriptor',
                                    0);
        if ( v21 )
        {
          if ( TESBipedModelForm_CoversSlot(v21, v18, 0) && v20[4] != 9 )
          {
            ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&a1->member.baseExtraList);
            v23 = ContainerExtraData_GetEquippedInstance(ContainerChanges, v60, 0);
            v25 = v23;
            v26 = 0;
            if ( v23 )
            {
              v27 = (_BYTE **)*v23;
              if ( *v25 )
              {
                if ( *v27 )
                {
                  if ( sub_41DF40(*v27) )
                    HIBYTE(v56) = 1;
                  v26 = *(ExtraDataList **)*v25;
                }
              }
            }
            if ( !HIBYTE(v56) )
              a2 = Actor_UnequipItem((PlayerCharacter *)a1, a2, st5_0, st6_0, (char)v20, 1, v26, 0, 0, 1);
            if ( v25 )
            {
              ContainerEntryExtraData_DestroyDataTable(v25, v24);
              FormHeapFree((unsigned int)v25);
            }
          }
        }
        v18 = v60;
        v19 += 4;
        --v63;
      }
      while ( v63 );
    }
    v60 = ++v18;
  }
  while ( v18 < 0x10 );
  if ( !HIBYTE(v56) || sub_45A500(SaveLoad_CurrentSavegame) )
  {
LABEL_44:
    if ( a1[1].vtbl )
    {
      v28 = a5;
      switch ( *((_BYTE *)a5 + 4) )
      {
        case 0x14:
          if ( !TESBipedModelForm_CoversSlot(v61, 0xD, 0) )
            goto LABEL_83;
          v39 = (*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0x3E))(
                  a1[1].vtbl,
                  0);
          v40 = v39;
          if ( !v39 )
            goto LABEL_83;
          v41 = 0;
          if ( *(unsigned __int16 **)(v39 + 8) != a5 )
          {
            if ( *(_DWORD *)v39 )
            {
              if ( **(_DWORD **)v39 )
                v41 = sub_41DF40(**(_BYTE ***)v39) != 0;
            }
          }
          a2 = Actor_UnequipItem(
                 (PlayerCharacter *)a1,
                 a2,
                 st5_0,
                 st6_0,
                 *(_DWORD *)(v40 + 8),
                 1,
                 (ExtraDataList *)**(_DWORD **)v40,
                 0,
                 0,
                 1);
          if ( !v41 || sub_45A500(SaveLoad_CurrentSavegame) )
            goto LABEL_83;
          return;
        case 0x1A:
          v31 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x3C))(a1[1].vtbl);
          if ( v31 )
            a2 = Actor_UnequipItem(
                   (PlayerCharacter *)a1,
                   a2,
                   st5_0,
                   st6_0,
                   *(_DWORD *)(v31 + 8),
                   1,
                   (ExtraDataList *)**(_DWORD **)v31,
                   0,
                   0,
                   1);
          if ( a1 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
            goto LABEL_83;
          if ( a6 && BaseExtraList_GetExtraData(a6, kExtraData_TimeLeft) || *((int *)a5 + 0x1C) < 0 )
            break;
          v62 = ExtraDataList_GetContainerChanges(&a1->member.baseExtraList);
          if ( !a6 )
          {
            v32 = (_DWORD *)FormHeapAlloc(0x14u);
            if ( v32 )
              v59 = (float *)ExtraDataList_constr(v32);
            else
              v59 = 0;
            v64 = 0xFFFFFFFF;
            ContainerExtraData_GetEntryForForm(v62, (int)retaddr, 1, 0);
            v34 = v33;
            v35 = 0;
            if ( !v33 )
            {
              v36 = (_DWORD *)FormHeapAlloc(0xCu);
              if ( v36 )
                v37 = ContainerEntryExtraData_constr(v36, (int)retaddr, 1);
              else
                v37 = 0;
              v34 = v37;
              v35 = 1;
            }
            if ( !*v34 )
            {
              v38 = (_DWORD *)FormHeapAlloc(8u);
              if ( v38 )
              {
                *v38 = 0;
                v38[1] = 0;
              }
              else
              {
                v38 = 0;
              }
              *v34 = (int)v38;
            }
            BSSimpleList_PushFront((_DWORD *)*v34, v56);
            if ( v35 )
              ContainerExtraData_AddEntry(v59, v34, 1, v49, v50, 0, v51, v52);
          }
          a2 = (double)(int)a7[0x1C];
          v53 = a2;
          sub_41EDF0(a9, (BSExtraDataVtbl *)LODWORD(v53));
          goto LABEL_83;
        case 0x21:
          v29 = (ExtraDataList ***)(*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent
                                    + 0x3B))(
                                     a1[1].vtbl,
                                     0);
          if ( !v29 )
            goto LABEL_55;
          v55 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x4E))(a1[1].vtbl);
          v30 = 0;
          if ( v29[2] != (ExtraDataList **)a5 )
          {
            if ( *v29 )
            {
              if ( **v29 )
                v30 = sub_41DF40(**v29) != 0;
            }
          }
          a2 = Actor_UnequipItem((PlayerCharacter *)a1, a2, st5_0, st6_0, (char)v29[2], 1, **v29, 0, 0, 1);
          if ( v30 && !sub_45A500(SaveLoad_CurrentSavegame) )
            return;
          if ( v55 )
            sub_5E13D0(a1, 0);
LABEL_55:
          if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent + 0x3C))(
                  a1[1].vtbl,
                  1)
            || !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent
                 + 0xC1))(a1[1].vtbl)
            || *((_BYTE *)a5 + 0x90) != 5
            && !(*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0x3E))(
                  a1[1].vtbl,
                  0) )
          {
            goto LABEL_83;
          }
          UnequipLight(a1, st5_0, st6_0, a2);
          break;
        case 0x22:
          v42 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent + 0x3D))(
                  a1[1].vtbl,
                  1);
          if ( !v42 )
            goto LABEL_83;
          v43 = *(unsigned __int16 **)(v42 + 8);
          if ( v43 == a5 )
            goto LABEL_83;
          a2 = Actor_UnequipItem(
                 (PlayerCharacter *)a1,
                 a2,
                 st5_0,
                 st6_0,
                 (char)v43,
                 1,
                 (ExtraDataList *)**(_DWORD **)v42,
                 0,
                 0,
                 1);
          break;
        default:
          goto LABEL_83;
      }
    }
    else
    {
LABEL_83:
      v28 = (unsigned __int16 *)v64;
    }
    if ( a1->vtbl->GetBaseForm(a1) )
      ((int (__thiscall *)(TESObjectREFR *))a1->vtbl->IsActor)(a1);
    v44 = (float *)ContainerExtraData_GetContainerExtraDataForRef(a1);
    ContainerExtraData_EquipItemForActor(v44, st5_0, st6_0, a2, (TESForm *)v28, v65, (int)a1, retaddr, v54, (char)a5);
    v45 = *((unsigned __int8 *)v28 + 4);
    if ( v45 == 0x14 )
    {
      if ( !TESBipedModelForm_CoversSlot(v28 + 0x32, 0xD, 0) )
      {
LABEL_104:
        v46 = OblivionDynamicCast(
                v28,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESEnchantableForm `RTTI Type Descriptor',
                0);
        if ( v46 )
          v47 = v46[1];
        else
          v47 = 0;
        if ( v47 )
        {
          sub_41A610((char *)(v47 + 0x18), 0);
          if ( a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
            sub_662DA0(TESDataHandler_g_PlayerRef);
        }
        if ( ImageSpaceEffectEnabled )
        {
          if ( enableRefraction )
          {
            if ( ShaderPackage >= 2 && a1 != (TESObjectREFR *)0xFFFFFFBC )
            {
              if ( ExtraDataList::GetRefractionProperty(&a1->member.baseExtraList) )
              {
                vtbl = a1->vtbl;
                ExtraDataList::GetRefractionProperty(&a1->member.baseExtraList);
                ((void (__cdecl *)(int))vtbl[1].super.Unk_32)(1);
              }
            }
          }
        }
        return;
      }
    }
    else if ( v45 != 0x1A && v45 != 0x21 )
    {
      goto LABEL_104;
    }
    HideEquipment(a1, st5_0, st6_0, a2, (int)v28, 0);
    goto LABEL_104;
  }
}
