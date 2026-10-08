// Verified Player_LinkModifiedForm also invokes ActiveEffect_Base_LinkAEList on PlayerCharacter's active-effect list, passing the PlayerCharacter pointer as linkContext before continuing other post-link rebuilds.
int __userpurge Player_LinkModifiedForm@<eax>(
        Concurrency::details::SchedulerBase *a1@<ecx>,
        char *a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st3>,
        double st0_0@<st7>,
        double st1_0@<st6>,
        double a8@<st5>,
        double a9@<st4>,
        int a6,
        int a7)
{
  UInt32 v12; // eax
  int *v13; // ebx
  TESForm *v14; // eax
  UInt32 v15; // eax
  TESForm *v16; // eax
  TESForm *v17; // eax
  UInt32 v18; // eax
  TESForm *v19; // edi
  char *v20; // eax
  UInt32 v21; // eax
  TESForm *v22; // eax
  UInt32 v23; // eax
  TESForm *v24; // eax
  void *v25; // eax
  UInt32 v26; // eax
  TESForm *v27; // eax
  UInt32 v28; // eax
  TESForm *v29; // eax
  UInt32 v30; // eax
  TESForm *v31; // eax
  TESForm *v32; // eax
  int *v33; // edi
  TESForm *v34; // eax
  void *v35; // eax
  float *v36; // edi
  TESForm *v37; // eax
  void *v38; // eax
  bool v39; // zf
  void (__stdcall *v40)(int); // eax
  int *v41; // eax
  float *v42; // eax
  double (__stdcall *v43)(int); // eax
  double v44; // st7
  double v45; // st7
  double v46; // st6
  double v47; // st7
  TESForm *ActorBaseForm; // eax
  int v49; // eax
  TESForm *v50; // eax
  double v51; // st7
  double v52; // st6
  double v53; // st7
  TESForm *v54; // eax
  int v55; // eax
  TESForm *v56; // eax
  double v57; // st7
  double v58; // st6
  double v59; // st7
  TESForm *v60; // eax
  int v61; // eax
  TESForm *v62; // eax
  int i; // edi
  SkillActorValue AVFromGroupOffset; // eax
  int result; // eax
  float v66; // [esp+38h] [ebp-Ch] BYREF
  double v67; // [esp+3Ch] [ebp-8h]

  sub_60E390(a1, a6, a7); /*0x669d45*/
  v12 = *((_DWORD *)a1 + 0x46); /*0x669d4a*/
  v13 = 0; /*0x669d50*/
  if ( v12 ) /*0x669d54*/
  {
    v14 = TESForm_LookupByFormID(v12); /*0x669d63*/
    *((_DWORD *)a1 + 0x46) = OblivionDynamicCast( /*0x669d74*/
                               v14,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &DialoguePackage `RTTI Type Descriptor',
                               0);
  }
  v15 = *((_DWORD *)a1 + 0x191); /*0x669d7a*/
  if ( v15 ) /*0x669d82*/
  {
    v16 = TESForm_LookupByFormID(v15); /*0x669d91*/
    *((_DWORD *)a1 + 0x191) = OblivionDynamicCast( /*0x669da2*/
                                v16,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &BirthSign `RTTI Type Descriptor',
                                0);
  }
  if ( MEMORY[0xB3BAD0] ) /*0x669da8*/
  {
    v17 = TESForm_LookupByFormID((UInt32)MEMORY[0xB3BAD0]); /*0x669dbe*/
    MEMORY[0xB3BAD0] = (TESChildCELL *)OblivionDynamicCast( /*0x669dcf*/
                                         v17,
                                         0,
                                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                         0);
  }
  v18 = *((_DWORD *)a1 + 0x189); /*0x669dd4*/
  *((_DWORD *)a1 + 0x189) = 0; /*0x669ddc*/
  if ( v18 ) /*0x669de2*/
  {
    v19 = TESForm_LookupByFormID(v18); /*0x669df5*/
    a2 = (char *)OblivionDynamicCast( /*0x669e0b*/
                   v19,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &MagicItemForm `RTTI Type Descriptor',
                   0);
    v20 = (char *)OblivionDynamicCast( /*0x669e0d*/
                    v19,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &MagicItemObject `RTTI Type Descriptor',
                    0);
    if ( a2 ) /*0x669e17*/
    {
      a2 += 0x18; /*0x669e19*/
      PlayerCharacter_SetCurrentMagicItem(a1, a2); /*0x669e1d*/
    }
    else if ( v20 ) /*0x669e21*/
    {
      PlayerCharacter_SetCurrentMagicItem(a1, v20 + 0x24); /*0x669e29*/
    }
  }
  if ( *((_DWORD *)a1 + 0x7A) ) /*0x669e2e*/
    *((_DWORD *)a1 + 0x7A) = MagicItem_LookupByFormID(*((_DWORD *)a1 + 0x7A)); /*0x669e41*/
  if ( *((_DWORD *)a1 + 0x7B) ) /*0x669e47*/
    *((_DWORD *)a1 + 0x7B) = MagicTarget_LookupByFormID(*((_DWORD *)a1 + 0x7B)); /*0x669e5a*/
  v21 = *((_DWORD *)a1 + 0x78); /*0x669e60*/
  if ( v21 ) /*0x669e68*/
  {
    v22 = TESForm_LookupByFormID(v21); /*0x669e77*/
    *((_DWORD *)a1 + 0x78) = OblivionDynamicCast( /*0x669e88*/
                               v22,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &Creature `RTTI Type Descriptor',
                               0);
  }
  v23 = *((_DWORD *)a1 + 0x18A); /*0x669e8e*/
  if ( v23 ) /*0x669e96*/
  {
    v24 = TESForm_LookupByFormID(v23); /*0x669ea5*/
    v25 = OblivionDynamicCast( /*0x669eae*/
            v24,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
            &TESObjectBOOK `RTTI Type Descriptor',
            0);
    sub_664850(a1, (int)v25); /*0x669eb9*/
  }
  v26 = *((_DWORD *)a1 + 0x194); /*0x669ebe*/
  if ( v26 ) /*0x669ec6*/
  {
    v27 = TESForm_LookupByFormID(v26); /*0x669ed5*/
    *((_DWORD *)a1 + 0x194) = OblivionDynamicCast( /*0x669ee6*/
                                v27,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &TESClass `RTTI Type Descriptor',
                                0);
  }
  v28 = *((_DWORD *)a1 + 0x1B8); /*0x669eec*/
  if ( v28 ) /*0x669ef4*/
  {
    v29 = TESForm_LookupByFormID(v28); /*0x669f03*/
    *((_DWORD *)a1 + 0x1B8) = OblivionDynamicCast( /*0x669f14*/
                                v29,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                &AlchemyItem `RTTI Type Descriptor',
                                0);
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x40u ) /*0x669f24*/
  {
    v30 = *((_DWORD *)a1 + 0x15E); /*0x669f26*/
    if ( v30 ) /*0x669f2e*/
    {
      v31 = TESForm_LookupByFormID(v30); /*0x669f3d*/
      *((_DWORD *)a1 + 0x15E) = OblivionDynamicCast( /*0x669f4e*/
                                  v31,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                  (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                  0);
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x42u ) /*0x669f5d*/
  {
    if ( MEMORY[0xB3BAD4] ) /*0x669f5f*/
    {
      v32 = TESForm_LookupByFormID(MEMORY[0xB3BAD4]); /*0x669f75*/
      MEMORY[0xB3BAD4] = (int)OblivionDynamicCast( /*0x669f86*/
                                v32,
                                0,
                                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                0);
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x63u ) /*0x669f95*/
  {
    v33 = *((int **)a1 + 0x16B); /*0x669f97*/
    while ( v33 ) /*0x669f9f*/
    {
      if ( !v33[1] && !*v33 ) /*0x669fa7*/
        break; /*0x669faa*/
      a2 = (char *)*v33; /*0x669fac*/
      if ( *v33 /*0x669fd8*/
        && (v34 = TESForm_LookupByFormID((UInt32)a2),
            (v35 = OblivionDynamicCast(
                     v34,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                     0)) != 0) )
      {
        *v33 = (int)v35; /*0x669fde*/
        v13 = v33; /*0x669fe0*/
        v33 = (int *)v33[1]; /*0x669fe2*/
      }
      else if ( v13 ) /*0x66a09a*/
      {
        BSSimpleList_Remove(v13, (int)a2); /*0x66a0c9*/
        v33 = (int *)v13[1]; /*0x66a0ce*/
      }
      else
      {
        v41 = (int *)v33[1]; /*0x66a09c*/
        if ( v41 ) /*0x66a0a1*/
        {
          v33[1] = v41[1]; /*0x66a0a6*/
          *v33 = *v41; /*0x66a0ac*/
          FormHeapFree((unsigned int)v41); /*0x66a0ae*/
        }
        else
        {
          *v33 = 0; /*0x66a0bb*/
        }
      }
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x73u ) /*0x669ff3*/
  {
    v36 = &qword_B3BB2C[6]; /*0x669ff5*/
    v13 = 0; /*0x669ffa*/
    do /*0x66a046*/
    {
      if ( !*((_DWORD *)v36 + 1) && !*(_DWORD *)v36 ) /*0x66a006*/
        break; /*0x66a009*/
      a2 = *(char **)v36; /*0x66a00b*/
      if ( *(_DWORD *)v36 /*0x66a037*/
        && (v37 = TESForm_LookupByFormID((UInt32)a2),
            (v38 = OblivionDynamicCast(
                     v37,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                     0)) != 0) )
      {
        *(_DWORD *)v36 = v38; /*0x66a03d*/
        v13 = (int *)v36; /*0x66a03f*/
        v36 = *((float **)v36 + 1); /*0x66a041*/
      }
      else if ( v13 ) /*0x66a0d8*/
      {
        BSSimpleList_Remove(v13, (int)a2); /*0x66a107*/
        v36 = (float *)v13[1]; /*0x66a10c*/
      }
      else
      {
        v42 = *((float **)v36 + 1); /*0x66a0da*/
        if ( v42 ) /*0x66a0df*/
        {
          v36[1] = v42[1]; /*0x66a0e4*/
          *v36 = *v42; /*0x66a0ea*/
          FormHeapFree((unsigned int)v42); /*0x66a0ec*/
        }
        else
        {
          *v36 = 0.0; /*0x66a0f9*/
        }
      }
    }
    while ( v36 ); /*0x66a046*/
  }
  ActiveEffect_Base_LinkAEList(*((EffectNode **)a1 + 0x79), (TESObjectREFR *)a1, (TESChildCELL *)v13);// Verified Player_LinkModifiedForm passes the player pointer as explicit linkContext, but EBX at this call still holds the predecessor node from the preceding saved-reference list walk. Therefore the hidden EBX target-reference role is not verified for this caller; effect hit-node presence/cleanup conditions need further tracing. /*0x66a050*/
  (*(void (__thiscall **)(_DWORD))(**((_DWORD **)a1 + 0x16) + 0x5C))(*((_DWORD *)a1 + 0x16)); /*0x66a060*/
  (*(void (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a1 + 0x170))(a1); /*0x66a06c*/
  sub_525400((PlayerCharacter *)a1); /*0x66a071*/
  v39 = *((_BYTE *)a1 + 0x71D) == 0; /*0x66a076*/
  v40 = *(void (__stdcall **)(int))(*(_DWORD *)a1 + 0x1BC); /*0x66a07f*/
  *((_BYTE *)a1 + 0x71C) = 0; /*0x66a085*/
  if ( v39 ) /*0x66a08e*/
    v40(1); /*0x66a116*/
  else
    v40(0); /*0x66a096*/
  v39 = *((_BYTE *)a1 + 0x71C) == 0; /*0x66a118*/
  v43 = *(double (__stdcall **)(int))(*(_DWORD *)a1 + 0x1BC); /*0x66a121*/
  *((_BYTE *)a1 + 0x71D) = 0; /*0x66a127*/
  if ( v39 ) /*0x66a130*/
    v44 = v43(1); /*0x66a138*/
  else
    v44 = v43(0); /*0x66a134*/
  sub_663070((int)a1, (char)a2, a3, a4, a5, v44, st0_0, st1_0, a8, a9, *((_BYTE *)a1 + 0x5C0)); /*0x66a144*/
  if ( g_TESSaveLoadGame->currentVersion < 0x5Cu ) /*0x66a153*/
  {
    v66 = 0.0; /*0x66a160*/
    *(float *)&a6 = 1.0; /*0x66a16b*/
    Actor_GetBaseAVCalcFactors((int *)a1, 8, &v66, (float *)&a6); /*0x66a173*/
    *(float *)&a7 = *(float *)&a6 * v66; /*0x66a180*/
    v45 = *(float *)&a7; /*0x66a184*/
    *(float *)&a7 = (float)Double_To_SInt32(*(float *)&a7); /*0x66a197*/
    v46 = v45 - *(float *)&a7; /*0x66a1a3*/
    v47 = *(float *)&a7; /*0x66a1a3*/
    if ( v46 < dbl_A2FC68 ) /*0x66a1b0*/
      v47 = v47 - dbl_A2F928; /*0x66a1b8*/
    v67 = v47; /*0x66a1b2*/
    ActorBaseForm = Actor_GetActorBaseForm((Actor *)a1, 0); /*0x66a1c6*/
    v49 = ActorBaseForm->vtbl[1].GetSaveSize(ActorBaseForm, 8); /*0x66a1d7*/
    *(float *)&a7 = v67; /*0x66a1e5*/
    *(float *)&a7 = (double)v49 - *(float *)&a7; /*0x66a1ed*/
    if ( *(float *)&a7 < 0.0 ) /*0x66a1fc*/
      *(float *)&a7 = 0.0; /*0x66a1fe*/
    v50 = Actor_GetActorBaseForm((Actor *)a1, 0); /*0x66a20a*/
    v50->vtbl[1].LoadGame(v50, 8, a7); /*0x66a223*/
    Actor_GetBaseAVCalcFactors((int *)a1, 0xA, &v66, (float *)&a6); /*0x66a233*/
    *(float *)&a7 = *(float *)&a6 * v66; /*0x66a240*/
    v51 = *(float *)&a7; /*0x66a244*/
    *(float *)&a7 = (float)Double_To_SInt32(*(float *)&a7); /*0x66a257*/
    v52 = v51 - *(float *)&a7; /*0x66a263*/
    v53 = *(float *)&a7; /*0x66a263*/
    if ( v52 < dbl_A2FC68 ) /*0x66a270*/
      v53 = v53 - dbl_A2F928; /*0x66a278*/
    v67 = v53; /*0x66a272*/
    v54 = Actor_GetActorBaseForm((Actor *)a1, 0); /*0x66a286*/
    v55 = v54->vtbl[1].GetSaveSize(v54, 0xA); /*0x66a297*/
    *(float *)&a7 = v67; /*0x66a2a5*/
    *(float *)&a7 = (double)v55 - *(float *)&a7; /*0x66a2ad*/
    if ( *(float *)&a7 < 0.0 ) /*0x66a2bc*/
      *(float *)&a7 = 0.0; /*0x66a2be*/
    v56 = Actor_GetActorBaseForm((Actor *)a1, 0); /*0x66a2ca*/
    v56->vtbl[1].LoadGame(v56, 0xA, a7); /*0x66a2e3*/
    Actor_GetBaseAVCalcFactors((int *)a1, 0xB, &v66, (float *)&a6); /*0x66a2f3*/
    *(float *)&a7 = *(float *)&a6 * v66; /*0x66a300*/
    v57 = *(float *)&a7; /*0x66a304*/
    *(float *)&a7 = (float)Double_To_SInt32(*(float *)&a7); /*0x66a317*/
    v58 = v57 - *(float *)&a7; /*0x66a323*/
    v59 = *(float *)&a7; /*0x66a323*/
    if ( v58 < dbl_A2FC68 ) /*0x66a330*/
      v59 = v59 - dbl_A2F928; /*0x66a338*/
    v67 = v59; /*0x66a332*/
    v60 = Actor_GetActorBaseForm((Actor *)a1, 0); /*0x66a346*/
    v61 = v60->vtbl[1].GetSaveSize(v60, 0xB); /*0x66a357*/
    *(float *)&a7 = v67; /*0x66a365*/
    *(float *)&a7 = (double)v61 - *(float *)&a7; /*0x66a36d*/
    if ( *(float *)&a7 < 0.0 ) /*0x66a37c*/
      *(float *)&a7 = 0.0; /*0x66a37e*/
    v62 = Actor_GetActorBaseForm((Actor *)a1, 0); /*0x66a38a*/
    v62->vtbl[1].LoadGame(v62, 0xB, a7); /*0x66a3a3*/
  }
  for ( i = 0; i < 0x15; ++i ) /*0x66a3a5*/
  {
    AVFromGroupOffset = ActorValue_GetAVFromGroupOffset(2, i); /*0x66a3aa*/
    result = Player_RecalculateRequiredSkillExperience((PlayerCharacter *)a1, AVFromGroupOffset); /*0x66a3b5*/
  }
  return result; /*0x66a3c2*/
}
