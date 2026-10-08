void __userpurge sub_5F3140(
        TESObjectREFR *a1@<ecx>,
        double a2@<st0>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        unsigned __int16 *form,
        ExtraDataList *a6,
        ExtraDataList **a7,
        char a8,
        ExtraDataList *a9)
{
  ActorSkinInfo *SkinInfoByPerspective; // eax
  unsigned __int16 *v11; // edi
  int ***ContainerExtraDataForRef; // esi
  int *v13; // eax
  ExtraDataList ***EquippedInstance; // eax
  TESForm *RingSlot7Form; // ecx
  ExtraDataList *v16; // edx
  ExtraDataList **v17; // eax
  int v18; // esi
  void **p_unk04C; // ebx
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
  EntryData *EntryForForm; // esi
  char v34; // bl
  _DWORD *v35; // eax
  EntryData *v36; // eax
  tListVoid *v37; // eax
  int v38; // eax
  int v39; // esi
  bool v40; // bl
  int v41; // eax
  unsigned __int16 *v42; // ecx
  float *v43; // eax
  int v44; // eax
  _DWORD *v45; // eax
  int v46; // eax
  TESObjectREFRVtbl *vtbl; // edi
  ExtraRefractionProperty *RefractionPropertyExtra; // eax
  float v49; // [esp+18h] [ebp-3Ch]
  char v50; // [esp+33h] [ebp-21h]
  bool v51; // [esp+33h] [ebp-21h]
  char v52; // [esp+33h] [ebp-21h]
  int v53; // [esp+34h] [ebp-20h]
  ActorSkinInfo *v54; // [esp+38h] [ebp-1Ch]
  int v55; // [esp+3Ch] [ebp-18h]
  ExtraDataList **v56; // [esp+3Ch] [ebp-18h]
  unsigned __int16 *v57; // [esp+40h] [ebp-14h]
  int v58; // [esp+44h] [ebp-10h]
  ExtraContainerChanges_Data *v59; // [esp+44h] [ebp-10h]

  if ( a1 == (TESObjectREFR *)reference ) /*0x5f3171*/
    SkinInfoByPerspective = Actor_GetSkinInfoByPerspective((Actor *)reference, 0); /*0x5f3175*/
  else
    SkinInfoByPerspective = a1->vtbl->GetActiveSkinInfo(a1); /*0x5f3187*/
  v54 = SkinInfoByPerspective; /*0x5f3189*/
  v11 = (unsigned __int16 *)sub_4691B0((TESObjectARMO *)form); /*0x5f319a*/
  v57 = v11; /*0x5f31a7*/
  if ( a1->vtbl->GetBaseForm(a1) ) /*0x5f31ab*/
    ((int (__thiscall *)(TESObjectREFR *))a1->vtbl->IsActor)(a1); /*0x5f31be*/
  ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(a1); /*0x5f31d7*/
  LOBYTE(v53) = 0; /*0x5f31d9*/
  v50 = 0; /*0x5f31de*/
  if ( !v11 ) /*0x5f31e3*/
    goto LABEL_49; /*0x5f31e3*/
  if ( TESBipedModelForm_CoversSlot(v11, 7, 0) || TESBipedModelForm_CoversSlot(v11, 6, 0) ) /*0x5f3202*/
  {
    if ( TESBipedModelForm_CoversSlot(v11, 7, 0) ) /*0x5f3215*/
      LOBYTE(v53) = 1; /*0x5f321e*/
    v51 = sub_485F10(ContainerExtraDataForRef, 0) != 0; /*0x5f3235*/
    v13 = sub_485F10(ContainerExtraDataForRef, 1); /*0x5f3240*/
    if ( v51 && v13 ) /*0x5f3255*/
    {
      if ( v54 ) /*0x5f325c*/
      {
        if ( (_BYTE)v53 ) /*0x5f326b*/
        {
          EquippedInstance = (ExtraDataList ***)ContainerExtraData_GetEquippedInstance( /*0x5f326f*/
                                                  (ExtraDataList *****)ContainerExtraDataForRef,
                                                  7,
                                                  0);
          RingSlot7Form = v54->RingSlot7Form; /*0x5f3278*/
        }
        else
        {
          EquippedInstance = (ExtraDataList ***)ContainerExtraData_GetEquippedInstance( /*0x5f3282*/
                                                  (ExtraDataList *****)ContainerExtraDataForRef,
                                                  6,
                                                  0);
          RingSlot7Form = v54->RingSlot6Form; /*0x5f328b*/
        }
        v16 = 0; /*0x5f3291*/
        if ( EquippedInstance ) /*0x5f3295*/
        {
          v17 = *EquippedInstance; /*0x5f3297*/
          if ( v17 ) /*0x5f329b*/
            v16 = *v17; /*0x5f329d*/
        }
        if ( RingSlot7Form ) /*0x5f32a1*/
          a2 = Actor_UnequipItem((Actor *)a1, a2, st5_0, st6_0, (__int16)RingSlot7Form, 1, v16, v53, 0, 1); /*0x5f32b6*/
      }
    }
    else if ( (_BYTE)v53 && v13 ) /*0x5f32ca*/
    {
      LOBYTE(v53) = 0; /*0x5f32cc*/
    }
    else if ( v51 && !(_BYTE)v53 ) /*0x5f32e0*/
    {
      LOBYTE(v53) = 1; /*0x5f32e6*/
    }
    goto LABEL_49; /*0x5f32bb*/
  }
  if ( !v54 ) /*0x5f32f5*/
    goto LABEL_49; /*0x5f32f5*/
  v18 = 0; /*0x5f32fb*/
  v55 = 0; /*0x5f32fd*/
  do /*0x5f33dd*/
  {
    if ( TESBipedModelForm_CoversSlot(v57, v18, 0) ) /*0x5f3308*/
    {
      p_unk04C = (void **)&v54->unk04C; /*0x5f3319*/
      v58 = 0x10; /*0x5f331c*/
      do /*0x5f33cd*/
      {
        v20 = *p_unk04C; /*0x5f3324*/
        v21 = (unsigned __int16 *)OblivionDynamicCast( /*0x5f3335*/
                                    *p_unk04C,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESBipedModelForm `RTTI Type Descriptor',
                                    0);
        if ( v21 ) /*0x5f333f*/
        {
          if ( TESBipedModelForm_CoversSlot(v21, v18, 0) && v20[4] != 9 ) /*0x5f3357*/
          {
            ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&a1->member.baseExtraList); /*0x5f3363*/
            v23 = ContainerExtraData_GetEquippedInstance(ContainerChanges, v55, 0); /*0x5f336a*/
            v25 = v23; /*0x5f336f*/
            v26 = 0; /*0x5f3371*/
            if ( v23 ) /*0x5f3375*/
            {
              v27 = (_BYTE **)*v23; /*0x5f3377*/
              if ( *v25 ) /*0x5f3377*/
              {
                if ( *v27 ) /*0x5f337d*/
                {
                  if ( sub_41DF40(*v27) ) /*0x5f3383*/
                    v50 = 1; /*0x5f338c*/
                  v26 = *(ExtraDataList **)*v25; /*0x5f3393*/
                }
              }
            }
            if ( !v50 ) /*0x5f339a*/
              a2 = Actor_UnequipItem((Actor *)a1, a2, st5_0, st6_0, (__int16)v20, 1, v26, 0, 0, 1); /*0x5f33a8*/
            if ( v25 ) /*0x5f33af*/
            {
              ContainerEntryExtraData_DestroyDataTable(v25, v24); /*0x5f33b3*/
              FormHeapFree((unsigned int)v25); /*0x5f33b9*/
            }
          }
        }
        v18 = v55; /*0x5f33c1*/
        p_unk04C += 4; /*0x5f33c5*/
        --v58; /*0x5f33c8*/
      }
      while ( v58 ); /*0x5f33cd*/
    }
    v55 = ++v18; /*0x5f33d9*/
  }
  while ( v18 < 0x10 ); /*0x5f33dd*/
  if ( !v50 || sub_45A500(g_TESSaveLoadGame) ) /*0x5f33f0*/
  {
LABEL_49:
    if ( a1[1].vtbl ) /*0x5f33fd*/
    {
      v28 = form; /*0x5f3407*/
      switch ( *((_BYTE *)form + 4) ) /*0x5f3422*/
      {
        case 0x14: /*0x5f3422*/
          if ( !TESBipedModelForm_CoversSlot(v57, 0xD, 0) ) /*0x5f3695*/
            goto LABEL_88; /*0x5f3695*/
          v38 = (*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0x3E))( /*0x5f36ab*/
                  a1[1].vtbl,
                  0);
          v39 = v38; /*0x5f36ad*/
          if ( !v38 ) /*0x5f36b1*/
            goto LABEL_88; /*0x5f36b1*/
          v40 = 0; /*0x5f36b3*/
          if ( *(unsigned __int16 **)(v38 + 8) != form ) /*0x5f36b8*/
          {
            if ( *(_DWORD *)v38 ) /*0x5f36ba*/
            {
              if ( **(_DWORD **)v38 ) /*0x5f36c0*/
                v40 = sub_41DF40(**(_BYTE ***)v38) != 0; /*0x5f36d1*/
            }
          }
          a2 = Actor_UnequipItem( /*0x5f36e6*/
                 (Actor *)a1,
                 a2,
                 st5_0,
                 st6_0,
                 *(_DWORD *)(v39 + 8),
                 1,
                 (ExtraDataList *)**(_DWORD **)v39,
                 0,
                 0,
                 1);
          if ( !v40 || sub_45A500(g_TESSaveLoadGame) ) /*0x5f36f9*/
            goto LABEL_88; /*0x5f3700*/
          return; /*0x5f3700*/
        case 0x1A: /*0x5f3422*/
          v31 = (*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0x3C))( /*0x5f3517*/
                  a1[1].vtbl,
                  0);
          if ( v31 ) /*0x5f351b*/
            a2 = Actor_UnequipItem( /*0x5f3530*/
                   (Actor *)a1,
                   a2,
                   st5_0,
                   st6_0,
                   *(_DWORD *)(v31 + 8),
                   1,
                   (ExtraDataList *)**(_DWORD **)v31,
                   0,
                   0,
                   1);
          if ( a1 != (TESObjectREFR *)reference ) /*0x5f353b*/
            goto LABEL_88; /*0x5f353b*/
          if ( a7 && BaseExtraList_GetExtraData((ExtraDataList *)a7, kExtraData_TimeLeft) || *((int *)form + 0x1C) < 0 ) /*0x5f355e*/
            break; /*0x5f355e*/
          v59 = ExtraDataList_GetContainerChanges(&a1->member.baseExtraList); /*0x5f356e*/
          if ( !a7 ) /*0x5f3572*/
          {
            v32 = (_DWORD *)FormHeapAlloc(0x14u); /*0x5f357a*/
            if ( v32 ) /*0x5f358e*/
              v56 = (ExtraDataList **)ExtraDataList_constr(v32); /*0x5f3597*/
            else
              v56 = 0; /*0x5f359d*/
            a7 = v56; /*0x5f35ad*/
            EntryForForm = ContainerExtraData_GetEntryForForm(v59, (TESForm *)form, 1, 0); /*0x5f35c3*/
            v34 = 0; /*0x5f35c5*/
            if ( !EntryForForm ) /*0x5f35c9*/
            {
              v35 = (_DWORD *)FormHeapAlloc(0xCu); /*0x5f35cd*/
              if ( v35 ) /*0x5f35e3*/
                v36 = (EntryData *)ContainerEntryExtraData_constr(v35, (int)form, 1); /*0x5f35ea*/
              else
                v36 = 0; /*0x5f35f1*/
              EntryForForm = v36; /*0x5f35fb*/
              v34 = 1; /*0x5f35fd*/
            }
            if ( !EntryForForm->extendData ) /*0x5f35ff*/
            {
              v37 = (tListVoid *)FormHeapAlloc(8u); /*0x5f3606*/
              if ( v37 ) /*0x5f3610*/
              {
                v37->node.data = 0; /*0x5f3612*/
                v37->node.next = 0; /*0x5f3618*/
              }
              else
              {
                v37 = 0; /*0x5f3621*/
              }
              EntryForForm->extendData = v37; /*0x5f3623*/
            }
            BSSimpleList_PushFront(&EntryForForm->extendData->node.data, (int)v56); /*0x5f362c*/
            if ( v34 ) /*0x5f3633*/
              ContainerExtraData_AddEntry(v59, EntryForForm, 1); /*0x5f363c*/
          }
          a2 = (double)*((int *)form + 0x1C); /*0x5f3645*/
          v49 = a2; /*0x5f364d*/
          ExtraDataList_SetTimeLeft((ExtraDataList *)a7, (BSExtraDataVtbl *)LODWORD(v49)); /*0x5f3650*/
          goto LABEL_88; /*0x5f3650*/
        case 0x21: /*0x5f3422*/
          v29 = (ExtraDataList ***)(*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent /*0x5f3438*/
                                    + 0x3B))(
                                     a1[1].vtbl,
                                     0);
          if ( !v29 ) /*0x5f343c*/
            goto LABEL_60; /*0x5f343c*/
          v52 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x4E))(a1[1].vtbl); /*0x5f344b*/
          v30 = 0; /*0x5f3451*/
          if ( v29[2] != (ExtraDataList **)form ) /*0x5f3456*/
          {
            if ( *v29 ) /*0x5f3458*/
            {
              if ( **v29 ) /*0x5f345e*/
                v30 = sub_41DF40(**v29) != 0; /*0x5f346f*/
            }
          }
          a2 = Actor_UnequipItem((Actor *)a1, a2, st5_0, st6_0, (__int16)v29[2], 1, **v29, 0, 0, 1); /*0x5f3484*/
          if ( v30 && !sub_45A500(g_TESSaveLoadGame) ) /*0x5f349a*/
            return; /*0x5f349a*/
          if ( v52 ) /*0x5f34a5*/
            sub_5E13D0(a1, 0); /*0x5f34ab*/
LABEL_60:
          if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent + 0x3C))( /*0x5f34f4*/
                  a1[1].vtbl,
                  1)
            || !(*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent
                 + 0xC1))(a1[1].vtbl)
            || *((_BYTE *)form + 0x90) != 5
            && !(*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0x3E))(
                  a1[1].vtbl,
                  0) )
          {
            goto LABEL_88; /*0x5f34f8*/
          }
          UnequipLight(a1); /*0x5f3500*/
          break; /*0x5f3505*/
        case 0x22: /*0x5f3422*/
          v41 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent + 0x3D))( /*0x5f371a*/
                  a1[1].vtbl,
                  1);
          if ( !v41 ) /*0x5f371e*/
            goto LABEL_88; /*0x5f371e*/
          v42 = *(unsigned __int16 **)(v41 + 8); /*0x5f3724*/
          if ( v42 == form ) /*0x5f3729*/
            goto LABEL_88; /*0x5f3729*/
          a2 = Actor_UnequipItem( /*0x5f373f*/
                 (Actor *)a1,
                 a2,
                 st5_0,
                 st6_0,
                 (__int16)v42,
                 1,
                 (ExtraDataList *)**(_DWORD **)v41,
                 0,
                 0,
                 1);
          break; /*0x5f3744*/
        default:
          goto LABEL_88;
      }
    }
    else
    {
LABEL_88:
      v28 = form; /*0x5f3655*/
    }
    if ( a1->vtbl->GetBaseForm(a1) ) /*0x5f3664*/
      ((int (__thiscall *)(TESObjectREFR *))a1->vtbl->IsActor)(a1); /*0x5f367b*/
    v43 = (float *)ContainerExtraData_GetContainerExtraDataForRef(a1); /*0x5f374d*/
    ContainerExtraData_EquipItemForActor( /*0x5f376d*/
      v43,
      st5_0,
      st6_0,
      a2,
      (TESForm *)v28,
      (signed int)a6,
      a1,
      (TESForm *)a7,
      v53,
      a8);
    v44 = *((unsigned __int8 *)v28 + 4); /*0x5f3772*/
    if ( v44 == 0x14 ) /*0x5f3779*/
    {
      if ( !TESBipedModelForm_CoversSlot(v28 + 0x32, 0xD, 0) ) /*0x5f3795*/
      {
LABEL_109:
        v45 = OblivionDynamicCast( /*0x5f37a1*/
                v28,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESEnchantableForm `RTTI Type Descriptor',
                0);
        if ( v45 ) /*0x5f37ba*/
          v46 = v45[1]; /*0x5f37bc*/
        else
          v46 = 0; /*0x5f37c1*/
        if ( v46 ) /*0x5f37c5*/
        {
          MagicItem_LoadVFXModels((char *)(v46 + 0x18), 0); /*0x5f37cc*/
          if ( a1 == (TESObjectREFR *)reference ) /*0x5f37d9*/
            sub_662DA0(reference); /*0x5f37db*/
        }
        if ( OB_RendererGlobalState_010201A0.pad_00D[0x98] ) /*0x5f37e0*/
        {
          if ( OB_ShaderPassControl_010201A0.refractionPassEnabled ) /*0x5f37e9*/
          {
            if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 /*0x5f3800*/
              && a1 != (TESObjectREFR *)0xFFFFFFBC )
            {
              if ( ExtraDataList_GetRefractionPropertyExtra(&a1->member.baseExtraList) ) /*0x5f3804*/
              {
                vtbl = a1->vtbl; /*0x5f380d*/
                RefractionPropertyExtra = ExtraDataList_GetRefractionPropertyExtra(&a1->member.baseExtraList); /*0x5f3812*/
                ((void (__thiscall *)(TESObjectREFR *, int, _DWORD))vtbl[1].super.Unk_32)( /*0x5f3828*/
                  a1,
                  1,
                  RefractionPropertyExtra->refractionAmount);
              }
            }
          }
        }
        return; /*0x5f3828*/
      }
    }
    else if ( v44 != 0x1A && v44 != 0x21 ) /*0x5f3783*/
    {
      goto LABEL_109; /*0x5f3783*/
    }
    HideEquipment(a1, st5_0, st6_0, a2, (int)v28, 0); /*0x5f379c*/
    goto LABEL_109; /*0x5f379c*/
  }
}
