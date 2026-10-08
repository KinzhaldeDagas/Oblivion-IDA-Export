// CustomAnimSupport decode: actor animation setup creates ActorAnimData, loads default animation data, then for living NPC/CREA actors calls 0x476080 to load actor-base KFFZ entries from <model-dir>\SpecialAnims.
void __usercall Actor_SetupAnimationData(TESObjectREFR *a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>)
{
  void *niNode; // ecx
  NiNode *v6; // edi
  char *v7; // ebx
  TESForm *baseForm; // esi
  void *v9; // eax
  const char *v10; // esi
  char *v11; // eax
  const char *v12; // eax
  NiAVObject *ChildAtIndex; // eax
  NiObject *v14; // eax
  NiObject *v15; // esi
  int type; // edi
  TESForm *v17; // eax
  CHAR *FormModelPAth; // eax
  int v19; // edi
  char v20; // al
  float v21; // edx
  NiControllerSequence *SequenceByName; // edi
  NiControllerSequence *v23; // eax
  float *v24; // ebx
  float *Destructor; // edi
  CHAR *v26; // eax
  ActorAnimData *v27; // eax
  int **v28; // eax
  int **v29; // eax
  void *v30; // ecx
  NiNode *v31; // ebx
  const char *v32; // eax
  double Health; // st7
  char *v34; // eax
  char *v35; // edi
  __int16 v36; // dx
  char *v37; // eax
  __int16 v39; // dx
  char v40; // cl
  _WORD *v41; // edi
  char v42; // al
  TESObjectREFRVtbl *v43; // eax
  TESForm *v44; // eax
  CHAR *v45; // ecx
  unsigned int v46; // eax
  CHAR *v47; // esi
  char *v48; // edi
  char *v50; // esi
  TESForm *v51; // eax
  char *v52; // eax
  char **v53; // eax
  TESForm *v54; // eax
  char *v55; // eax
  const char *v56; // eax
  char *v57; // eax
  char *v58; // edx
  char v59; // cl
  char *v60; // eax
  char *Head; // eax
  ActorAnimData *v62; // ecx
  ActorAnimData *v63; // eax
  int **v64; // eax
  int **v65; // eax
  void *v66; // ecx
  NiNode *v67; // ebx
  const char *v68; // eax
  double v69; // st7
  TESForm *v70; // esi
  char *v71; // eax
  char *v72; // edi
  __int16 v73; // cx
  char *v74; // eax
  __int16 v76; // cx
  char v77; // dl
  _WORD *v78; // edi
  char v79; // al
  TESObjectREFRVtbl *v80; // edx
  TESForm *v81; // eax
  CHAR *v82; // ecx
  unsigned int v83; // eax
  CHAR *v84; // esi
  char *v85; // edi
  char *v87; // esi
  TESForm *v88; // eax
  char *v89; // eax
  char **v90; // eax
  TESForm *v91; // eax
  char *v92; // eax
  const char *v93; // eax
  char *v94; // eax
  char *v95; // edx
  char v96; // cl
  char *v97; // eax
  char *v98; // eax
  TESObjectREFRVtbl *v99; // esi
  ActorSkinInfo *SkinInfoByPerspective; // eax
  float v101; // ebx
  TESObjectREFRVtbl *v102; // edi
  void (__thiscall **v103)(TESObjectREFRVtbl *, int, float, ActorAnimData *, TESObjectREFR *); // esi
  int v104; // eax
  TESObjectREFRVtbl *v105; // edi
  void (__thiscall **v106)(TESObjectREFRVtbl *, int, float, ActorAnimData *, TESObjectREFR *); // esi
  int v107; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  TESObjectREFRVtbl *v109; // esi
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // edi
  int v111; // eax
  void (__thiscall **v112)(TESObjectREFRVtbl *, ActorAnimData *); // edi
  ActorAnimData *AnimDataByPerspective; // eax
  _DWORD *v114; // eax
  BSExtraData *Animation; // eax
  ActorAnimData *a2; // [esp+28h] [ebp-248h]
  ActorAnimData *a2a; // [esp+28h] [ebp-248h]
  size_t v118; // [esp+2Ch] [ebp-244h]
  const char *v119; // [esp+2Ch] [ebp-244h]
  int v120; // [esp+2Ch] [ebp-244h]
  char **v121; // [esp+2Ch] [ebp-244h]
  int v122; // [esp+2Ch] [ebp-244h]
  int v123; // [esp+2Ch] [ebp-244h]
  char **v124; // [esp+2Ch] [ebp-244h]
  int v125; // [esp+2Ch] [ebp-244h]
  char v126; // [esp+47h] [ebp-229h]
  TESForm *v127; // [esp+48h] [ebp-228h]
  AnimSequenceSingle *v128; // [esp+4Ch] [ebp-224h]
  NiAVObject *v129; // [esp+50h] [ebp-220h]
  ActorSkinInfo *v130; // [esp+54h] [ebp-21Ch] BYREF
  char Str[4]; // [esp+58h] [ebp-218h] BYREF
  float v132; // [esp+5Ch] [ebp-214h]
  char modelDirectory[260]; // [esp+15Ch] [ebp-114h] BYREF
  int v134; // [esp+26Ch] [ebp-4h]

  niNode = a1->member.niNode; /*0x4e34cd*/
  v6 = 0; /*0x4e34d0*/
  v129 = 0; /*0x4e34d4*/
  if ( niNode ) /*0x4e34d8*/
  {
    v6 = (NiNode *)(*(int (__thiscall **)(void *))(*(_DWORD *)niNode + 8))(niNode); /*0x4e34e1*/
    v129 = (NiAVObject *)v6; /*0x4e34e3*/
  }
  v7 = (char *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->GetActiveSkinInfo)( /*0x4e34f4*/
                 a1,
                 a4,
                 a3,
                 st5_0);
  v130 = (ActorSkinInfo *)v7; /*0x4e34fa*/
  v128 = 0; /*0x4e34fe*/
  sub_4D83B0(a1, 0); /*0x4e3506*/
  if ( v6 && (a1->member.super.flags & 0x20) == 0 ) /*0x4e351b*/
  {
    baseForm = a1->member.baseForm; /*0x4e3521*/
    v127 = baseForm; /*0x4e3528*/
    if ( baseForm->member.type == kFormType_NPC || baseForm->member.type == kFormType_Creature ) /*0x4e3534*/
    {
      v9 = OblivionDynamicCast( /*0x4e3548*/
             a1->member.baseForm,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESModel `RTTI Type Descriptor',
             0);
      v10 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)v9 + 0x14))(v9); /*0x4e3559*/
      v11 = strrchr(v10, 0x5C); /*0x4e355e*/
      if ( v11 ) /*0x4e3568*/
      {
        LODWORD(v118) = 8; /*0x4e356a*/
        if ( _strnicmp(v11 + 1, "Skeleton", v118) ) /*0x4e3575*/
        {
          v12 = (const char *)((int (__thiscall *)(TESForm *, const char *))a1->member.baseForm->vtbl->GetEditorName)( /*0x4e358d*/
                                a1->member.baseForm,
                                v10);
          PrintError("Actor '%s' needs to have a 'skeleton*.nif' model instead of '%s'.", v12, v119); /*0x4e3595*/
        }
      }
      baseForm = v127; /*0x4e359d*/
    }
    if ( a1->member.baseForm->member.type != kFormType_NPC ) /*0x4e35ab*/
    {
      if ( a1->member.baseForm->member.type != kFormType_Creature ) /*0x4e35b4*/
      {
        if ( v6->members.children.end /*0x4e35e0*/
          && v6->members.children.data->vtbl
          && NiNode_GetChildAtIndex(v6, 0)->members.super.m_controller )
        {
          ((void (__thiscall *)(TESObjectREFR *, int))a1->vtbl->super.Unk_12)(a1, 0x2000000); /*0x4e35f7*/
          ChildAtIndex = NiNode_GetChildAtIndex(v6, 0); /*0x4e35fd*/
          v14 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, (NiObject *)ChildAtIndex->members.super.m_controller); /*0x4e360b*/
          v15 = v14; /*0x4e3610*/
          if ( v14 ) /*0x4e3617*/
          {
            if ( LOBYTE(v14[0xD].members.m_uiRefCount) ) /*0x4e361d*/
            {
              type = a1->member.baseForm->member.type; /*0x4e3629*/
              v17 = a1->vtbl->GetBaseForm(a1); /*0x4e3635*/
              FormModelPAth = GetFormModelPAth(v17); /*0x4e3638*/
              PrintError( /*0x4e364e*/
                "%s '%s' is cumulative. This is not allowed. Re-export to correct this problem.",
                *(const char **)(0xC * type + 0xB05E04),
                FormModelPAth);
            }
            v126 = 0; /*0x4e3661*/
            if ( a1->vtbl->GetBaseForm(a1) ) /*0x4e3666*/
            {
              if ( a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Door ) /*0x4e367d*/
              {
                LOBYTE(v130) = sub_45A500(g_TESSaveLoadGame); /*0x4e368d*/
                if ( ExtraDataList_GetLastFinishedSequence(&a1->member.baseExtraList) ) /*0x4e3691*/
                  sub_45A530(g_TESSaveLoadGame, 1); /*0x4e36a2*/
                v19 = sub_4533F0(g_TESSaveLoadGame, (int)a1, 1); /*0x4e36b5*/
                sub_4D6E60((char *)a1, v19); /*0x4e36ba*/
                LOBYTE(v21) = v20 != ((v19 & 0x80000) != 0); /*0x4e36c9*/
                sub_4DE460(a1, v21, 1); /*0x4e36d1*/
                v126 = 1; /*0x4e36e1*/
                sub_45A530(g_TESSaveLoadGame, (char)v130); /*0x4e36e6*/
              }
            }
            SequenceByName = NiControllerManager_FindSequenceByName( /*0x4e3702*/
                               (NiControllerManager *)v15,
                               *(const char **)animGroupInfos_ptr);
            v23 = NiControllerManager_FindSequenceByName((NiControllerManager *)v15, off_B10328); /*0x4e3704*/
            v24 = (float *)v23; /*0x4e370b*/
            if ( SequenceByName ) /*0x4e370d*/
            {
              if ( *((_DWORD *)SequenceByName + 9) ) /*0x4e3783*/
              {
                v26 = GetFormModelPAth(a1->member.baseForm); /*0x4e37b6*/
                PrintError("Idle animation must be looping '%s'.", v26); /*0x4e37c1*/
              }
              else
              {
                BSAnimGroupSequence_Activate(SequenceByName, 0, 0, 1.0, 0.0, 0); /*0x4e37a0*/
                *((float *)SequenceByName + 0x12) = -flt_A7DEB4; /*0x4e37ad*/
              }
              if ( !v24 ) /*0x4e37cb*/
                goto LABEL_94; /*0x4e37cb*/
            }
            else if ( !v23 ) /*0x4e3711*/
            {
              if ( !v126 ) /*0x4e371c*/
              {
                LOWORD(v15[1].__vftable) |= 8u; /*0x4e3720*/
                NiControllerManager_DeactivateAllSequences((NiControllerManager *)v15, 0.0); /*0x4e372b*/
                Destructor = (float *)v15[8].__vftable->super.Destructor; /*0x4e3735*/
                BSAnimGroupSequence_Activate((BSAnimGroupSequence *)Destructor, 0, 0, 1.0, 0.0, 0); /*0x4e3749*/
                Destructor[0x12] = -flt_A7DEB4; /*0x4e3758*/
                NiAVObject_UpdateNiAVObject(v129, Destructor[0xB], 1); /*0x4e3766*/
              }
              NiControllerManager_DeactivateAllSequences((NiControllerManager *)v15, 0.0); /*0x4e3773*/
              LOWORD(v15[1].__vftable) &= ~8u; /*0x4e3778*/
              goto LABEL_94; /*0x4e377e*/
            }
            BSAnimGroupSequence_Activate((BSAnimGroupSequence *)v24, 0, 0, 1.0, 0.0, 0); /*0x4e37e8*/
            v24[0x12] = -flt_A7DEB4; /*0x4e37f5*/
          }
        }
        else
        {
          ((void (__thiscall *)(NiNode *, _DWORD, _DWORD))v6->vtbl->super.UpdateDownwardPass)(v6, 0.0, 0); /*0x4e380c*/
        }
LABEL_94:
        if ( a1->vtbl->IsActor(a1) ) /*0x4e3e56*/
        {
          vtbl = a1[1].vtbl; /*0x4e3e5c*/
          if ( vtbl ) /*0x4e3e61*/
          {
            if ( (unsigned int)(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl) <= 1 ) /*0x4e3e6d*/
            {
              v109 = a1[1].vtbl; /*0x4e3e6f*/
              if ( v109 ) /*0x4e3e74*/
              {
                InitializeComponent = v109->super.super.InitializeComponent; /*0x4e3e76*/
                v111 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int, _DWORD))v109->super.super.InitializeComponent /*0x4e3e84*/
                        + 0x3B))(
                         v109,
                         1,
                         0);
                (*((void (__thiscall **)(TESObjectREFRVtbl *, int))InitializeComponent + 0x41))(v109, v111); /*0x4e3e8f*/
                (*((void (__thiscall **)(TESObjectREFRVtbl *, AnimSequenceSingle *))v109->super.super.InitializeComponent /*0x4e3ea0*/
                 + 0x45))(
                  v109,
                  v128);
                if ( a1 == (TESObjectREFR *)reference ) /*0x4e3eaa*/
                {
                  v112 = (void (__thiscall **)(TESObjectREFRVtbl *, ActorAnimData *))((char *)v109->super.super.InitializeComponent /*0x4e3eb0*/
                                                                                    + 0x114);
                  AnimDataByPerspective = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x4e3eb6*/
                  (*v112)(v109, AnimDataByPerspective); /*0x4e3ec0*/
                }
              }
            }
          }
          v114 = sub_700010(v129, (int)&stru_B3CD7C); /*0x4e3ecb*/
          if ( v114 ) /*0x4e3ed2*/
            *((_WORD *)v114 + 4) |= 0x40u; /*0x4e3ed4*/
        }
        Animation = ExtraDataList_GetAnimation(&a1->member.baseExtraList); /*0x4e3ede*/
        if ( Animation ) /*0x4e3ee5*/
        {
          if ( v128 ) /*0x4e3eec*/
          {
            NiAVObject_UpdateNiAVObject((NiAVObject *)a1->member.niNode, *(float *)&Animation[1].members.type, 1); /*0x4e3efa*/
            sub_41F5A0(&a1->member.baseExtraList.vtbl); /*0x4e3f01*/
          }
        }
        return; /*0x4e3f01*/
      }
      v27 = (ActorAnimData *)FormHeapAlloc(0xDCu); /*0x4e3818*/
      HIBYTE(v130) = HIBYTE(v27); /*0x4e3820*/
      v134 = 0; /*0x4e3826*/
      if ( v27 ) /*0x4e3831*/
        v28 = (int **)NewActorAnimData(v27); /*0x4e3835*/
      else
        v28 = 0; /*0x4e383c*/
      v134 = 0xFFFFFFFF; /*0x4e3841*/
      v29 = sub_4D83B0(a1, v28); /*0x4e384c*/
      v30 = a1->member.niNode; /*0x4e3851*/
      v128 = (AnimSequenceSingle *)v29; /*0x4e3856*/
      if ( !v30 /*0x4e386b*/
        || (v31 = (NiNode *)(*(int (__thiscall **)(void *))(*(_DWORD *)v30 + 8))(v30), (v129 = (NiAVObject *)v31) == 0) )
      {
        v32 = (const char *)((int (__thiscall *)(TESForm *, UInt32))baseForm->vtbl->GetEditorName)( /*0x4e387b*/
                              baseForm,
                              baseForm->member.refID);
        PrintError("SetAnimation cleared 3D because %s (%08X) was moved", v32, v120); /*0x4e3883*/
        return; /*0x4e388b*/
      }
      sub_4E1580(a1, st5_0, a3, a4); /*0x4e3892*/
      Health = TESObjectREFR_GetHealth((TESChildCELL *)a1); /*0x4e3899*/
      if ( Health <= *(float *)&SrcStr ) /*0x4e38a9*/
      {
        v36 = *(_WORD *)"\\"; /*0x4e38d7*/
        *(_DWORD *)Str = *(_DWORD *)"Data\\"; /*0x4e38e2*/
        LOWORD(v132) = v36; /*0x4e38e6*/
        v37 = (char *)&v130 + 3; /*0x4e38eb*/
        while ( *++v37 ) /*0x4e38f8*/
          ; /*0x4e38f0*/
        v39 = *(_WORD *)"es"; /*0x4e3900*/
        *(_DWORD *)v37 = *(_DWORD *)"Meshes"; /*0x4e3907*/
        v40 = aMeshes_0[6]; /*0x4e3909*/
        *((_WORD *)v37 + 2) = v39; /*0x4e3913*/
        v37[6] = v40; /*0x4e3917*/
        v41 = (_WORD *)((char *)&v130 + 3); /*0x4e391a*/
        do /*0x4e3928*/
        {
          v42 = *((_BYTE *)v41 + 1); /*0x4e3920*/
          v41 = (_WORD *)((char *)v41 + 1); /*0x4e3923*/
        }
        while ( v42 ); /*0x4e3928*/
        v43 = a1->vtbl; /*0x4e3931*/
        *v41 = *(_WORD *)SubStr; /*0x4e3934*/
        v44 = v43->GetBaseForm(a1); /*0x4e393f*/
        v45 = GetFormModelPAth(v44); /*0x4e394a*/
        v46 = strlen(v45) + 1; /*0x4e395d*/
        v47 = v45; /*0x4e395f*/
        v48 = (char *)&v130 + 3; /*0x4e3961*/
        while ( *++v48 ) /*0x4e396c*/
          ; /*0x4e3964*/
        qmemcpy(v48, v47, v46); /*0x4e3973*/
        v50 = strrchr(Str, 0x5C); /*0x4e398e*/
        *(_DWORD *)v50 = dword_A370DC; /*0x4e3990*/
        *((_DWORD *)v50 + 1) = dword_A370E0; /*0x4e3998*/
        v50[8] = byte_A370E4; /*0x4e39a0*/
        v51 = a1->vtbl->GetBaseForm(a1); /*0x4e39b3*/
        v52 = GetFormModelPAth(v51); /*0x4e39b6*/
        v53 = ModelLoader_BuildFileListWithArchives(Str, v52, 0); /*0x4e39ca*/
        *(_DWORD *)v50 = dword_A370D0; /*0x4e39d5*/
        v35 = (char *)v53; /*0x4e39d7*/
        *((_DWORD *)v50 + 1) = dword_A370D4; /*0x4e39de*/
        *((_WORD *)v50 + 4) = word_A370D8; /*0x4e39e8*/
        v121 = v53; /*0x4e39f5*/
        v54 = a1->vtbl->GetBaseForm(a1); /*0x4e39f8*/
        v55 = GetFormModelPAth(v54); /*0x4e39fb*/
        ModelLoader_BuildFileListWithArchives(Str, v55, v121); /*0x4e3a0f*/
        baseForm = v127; /*0x4e3a14*/
      }
      else
      {
        v34 = (char *)(*(int (__thiscall **)(TESFormMembr *))(*(_DWORD *)&baseForm[7].member.type + 0x14))(&baseForm[7].member); /*0x4e38bc*/
        v35 = BuildKFListForModelDirectory(v34, 0); /*0x4e38ca*/
      }
      if ( !Menu_PickIdles(v128, st5_0, a3, Health, (BSSimpleList_VoidPtr *)v35, v31, a1) ) /*0x4e3a21*/
      {
        v56 = (const char *)((int (__thiscall *)(TESForm *, UInt32))baseForm->vtbl->GetEditorName)( /*0x4e3a38*/
                              baseForm,
                              baseForm->member.refID);
        PrintError("Bad InitAnimation for Creature '%s' (%08X). Missing 'Idle' animation.", v56, v122); /*0x4e3a40*/
      }
      if ( TESObjectREFR_GetHealth((TESChildCELL *)a1) > *(float *)&SrcStr /*0x4e3a68*/
        && TESAnimation_HasAnimations(&v127[6].member) )
      {
        v57 = (char *)(*(int (__thiscall **)(TESFormMembr *))(*(_DWORD *)&v127[7].member.type + 0x14))(&v127[7].member); /*0x4e3a80*/
        v58 = Str; /*0x4e3a82*/
        do /*0x4e3a92*/
        {
          v59 = *v57; /*0x4e3a86*/
          *v58++ = *v57++; /*0x4e3a88*/
        }
        while ( v59 ); /*0x4e3a92*/
        v60 = strrchr(Str, 0x5C); /*0x4e3a9b*/
        if ( v60 ) /*0x4e3aa5*/
        {
          *v60 = 0; /*0x4e3aae*/
          Head = EmbeddedList_GetHead((char *)&v127[6].member);// Creature special anim load: get TESAnimation list head and load entries from <model dir>\SpecialAnims. /*0x4e3ab1*/
          ActorAnimData_LoadKFFZSpecialAnims((ActorAnimData *)v128, (TESAnimation_AnimationNode *)Head, Str);// Creature branch: the first of exactly two direct ActorAnimData_LoadKFFZSpecialAnims call sites; reached only for a living creature after default animation setup. /*0x4e3ab9*/
        }
      }
      if ( !v128 ) /*0x4e3ac0*/
        goto LABEL_94; /*0x4e3ac0*/
      v62 = (ActorAnimData *)v128; /*0x4e3ac6*/
LABEL_93:
      ActorAnimData_Update(v62, (Actor *)a1, 0.0, kTerrainLODQuadRayDirectionZ); /*0x4e3e33*/
      goto LABEL_94; /*0x4e3e46*/
    }
    if ( !v7 ) /*0x4e3acf*/
      goto LABEL_94; /*0x4e3acf*/
    sub_4796F0(v7, (char)a1, st5_0, a3, a4); /*0x4e3ad7*/
    v63 = (ActorAnimData *)FormHeapAlloc(0xDCu); /*0x4e3ae1*/
    v134 = 1; /*0x4e3aef*/
    if ( v63 ) /*0x4e3afa*/
      v64 = (int **)NewActorAnimData(v63); /*0x4e3afe*/
    else
      v64 = 0; /*0x4e3b05*/
    v134 = 0xFFFFFFFF; /*0x4e3b0a*/
    v65 = sub_4D83B0(a1, v64); /*0x4e3b15*/
    v66 = a1->member.niNode; /*0x4e3b1a*/
    v128 = (AnimSequenceSingle *)v65; /*0x4e3b1f*/
    if ( !v66 /*0x4e3b34*/
      || (v67 = (NiNode *)(*(int (__thiscall **)(void *))(*(_DWORD *)v66 + 8))(v66), (v129 = (NiAVObject *)v67) == 0) )
    {
      v68 = (const char *)((int (__thiscall *)(TESForm *, UInt32))v127->vtbl->GetEditorName)(v127, v127->member.refID); /*0x4e3b46*/
      PrintError("SetAnimation cleared 3D because %s (%08X) was moved", v68, v123); /*0x4e3b4e*/
      return; /*0x4e3b56*/
    }
    sub_4E1580(a1, st5_0, a3, a4); /*0x4e3b5d*/
    v69 = TESObjectREFR_GetHealth((TESChildCELL *)a1); /*0x4e3b64*/
    if ( v69 <= *(float *)&SrcStr ) /*0x4e3b74*/
    {
      v73 = *(_WORD *)"\\"; /*0x4e3ba5*/
      *(_DWORD *)Str = *(_DWORD *)"Data\\"; /*0x4e3bac*/
      LOWORD(v132) = v73; /*0x4e3bb4*/
      v74 = (char *)&v130 + 3; /*0x4e3bb9*/
      while ( *++v74 ) /*0x4e3bc8*/
        ; /*0x4e3bc0*/
      v76 = *(_WORD *)"es"; /*0x4e3bd0*/
      *(_DWORD *)v74 = *(_DWORD *)"Meshes"; /*0x4e3bd7*/
      v77 = aMeshes_0[6]; /*0x4e3bd9*/
      *((_WORD *)v74 + 2) = v76; /*0x4e3be3*/
      v74[6] = v77; /*0x4e3be7*/
      v78 = (_WORD *)((char *)&v130 + 3); /*0x4e3bea*/
      do /*0x4e3bf8*/
      {
        v79 = *((_BYTE *)v78 + 1); /*0x4e3bf0*/
        v78 = (_WORD *)((char *)v78 + 1); /*0x4e3bf3*/
      }
      while ( v79 ); /*0x4e3bf8*/
      v80 = a1->vtbl; /*0x4e3c00*/
      *v78 = *(_WORD *)SubStr; /*0x4e3c03*/
      v81 = v80->GetBaseForm(a1); /*0x4e3c0e*/
      v82 = GetFormModelPAth(v81); /*0x4e3c19*/
      v83 = strlen(v82) + 1; /*0x4e3c2d*/
      v84 = v82; /*0x4e3c2f*/
      v85 = (char *)&v130 + 3; /*0x4e3c31*/
      while ( *++v85 ) /*0x4e3c3c*/
        ; /*0x4e3c34*/
      qmemcpy(v85, v84, v83); /*0x4e3c43*/
      v87 = strrchr(Str, 0x5C); /*0x4e3c5e*/
      *(_DWORD *)v87 = dword_A370DC; /*0x4e3c60*/
      *((_DWORD *)v87 + 1) = dword_A370E0; /*0x4e3c67*/
      v87[8] = byte_A370E4; /*0x4e3c70*/
      v88 = a1->vtbl->GetBaseForm(a1); /*0x4e3c83*/
      v89 = GetFormModelPAth(v88); /*0x4e3c86*/
      v90 = ModelLoader_BuildFileListWithArchives(Str, v89, 0); /*0x4e3c9a*/
      *(_DWORD *)v87 = dword_A370D0; /*0x4e3ca5*/
      v72 = (char *)v90; /*0x4e3ca7*/
      *((_DWORD *)v87 + 1) = dword_A370D4; /*0x4e3cae*/
      *((_WORD *)v87 + 4) = word_A370D8; /*0x4e3cb8*/
      v124 = v90; /*0x4e3cc5*/
      v91 = a1->vtbl->GetBaseForm(a1); /*0x4e3cc8*/
      v92 = GetFormModelPAth(v91); /*0x4e3ccb*/
      ModelLoader_BuildFileListWithArchives(Str, v92, v124); /*0x4e3cdf*/
      v70 = v127; /*0x4e3ce4*/
    }
    else
    {
      v70 = v127; /*0x4e3b76*/
      v71 = (char *)(*(int (__thiscall **)(TESFormMembr *))(*(_DWORD *)&v127[7].member.type + 0x14))(&v127[7].member); /*0x4e3b8b*/
      v72 = BuildKFListForModelDirectory(v71, 0); /*0x4e3b99*/
    }
    if ( !Menu_PickIdles(v128, st5_0, a3, v69, (BSSimpleList_VoidPtr *)v72, v67, a1) ) /*0x4e3cef*/
    {
      v93 = (const char *)((int (__thiscall *)(TESForm *, UInt32))v70->vtbl->GetEditorName)(v70, v70->member.refID); /*0x4e3d06*/
      PrintError("Bad InitAnimation for NPC '%s' (%08X). Missing 'Idle' animation.", v93, v125); /*0x4e3d0e*/
    }
    if ( TESObjectREFR_GetHealth((TESChildCELL *)a1) > *(float *)&SrcStr && TESAnimation_HasAnimations(&v127[6].member) ) /*0x4e3d36*/
    {
      v94 = (char *)(*(int (__thiscall **)(TESFormMembr *))(*(_DWORD *)&v127[7].member.type + 0x14))(&v127[7].member); /*0x4e3d4e*/
      v95 = modelDirectory; /*0x4e3d50*/
      do /*0x4e3d63*/
      {
        v96 = *v94; /*0x4e3d57*/
        *v95++ = *v94++; /*0x4e3d59*/
      }
      while ( v96 ); /*0x4e3d63*/
      v97 = strrchr(modelDirectory, 0x5C); /*0x4e3d6f*/
      if ( v97 ) /*0x4e3d79*/
      {
        *v97 = 0; /*0x4e3d85*/
        v98 = EmbeddedList_GetHead((char *)&v127[6].member);// NPC special anim load: get TESAnimation list head and load entries from <model dir>\SpecialAnims. /*0x4e3d88*/
        ActorAnimData_LoadKFFZSpecialAnims((ActorAnimData *)v128, (TESAnimation_AnimationNode *)v98, modelDirectory);// NPC/player actor-base branch: the second of exactly two direct ActorAnimData_LoadKFFZSpecialAnims call sites; loads the base model KFFZ list, not PlayerCharacter::firstPersonAnimData. /*0x4e3d92*/
      }
    }
    v99 = a1[1].vtbl; /*0x4e3d97*/
    if ( v99 ) /*0x4e3d9c*/
    {
      if ( (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))v99->super.super.InitializeComponent + 0xBF))(a1[1].vtbl) ) /*0x4e3dac*/
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v99->super.super.InitializeComponent + 0xC2))(v99, 1); /*0x4e3dbe*/
      if ( a1 == (TESObjectREFR *)reference ) /*0x4e3dc8*/
      {
        SkinInfoByPerspective = Actor_GetSkinInfoByPerspective((Actor *)reference, 1); /*0x4e3dcc*/
        v101 = *(float *)&v130; /*0x4e3dd1*/
        if ( v130 == SkinInfoByPerspective ) /*0x4e3dd7*/
        {
          v102 = a1[1].vtbl; /*0x4e3dd9*/
          v103 = (void (__thiscall **)(TESObjectREFRVtbl *, int, float, ActorAnimData *, TESObjectREFR *))((char *)v102->super.super.InitializeComponent + 0x150); /*0x4e3de7*/
          a2 = PlayerCharacter_GetAnimDataByPerspective(reference, 1); /*0x4e3df2*/
          LOBYTE(v104) = Actor_IsWeaponOut(a1); /*0x4e3df6*/
          (*v103)(v102, v104, COERCE_FLOAT(LODWORD(v101)), a2, a1); /*0x4e3e00*/
          goto LABEL_92; /*0x4e3e02*/
        }
      }
      else
      {
        v101 = *(float *)&v130; /*0x4e3e04*/
      }
      v105 = a1[1].vtbl; /*0x4e3e08*/
      v106 = (void (__thiscall **)(TESObjectREFRVtbl *, int, float, ActorAnimData *, TESObjectREFR *))((char *)v105->super.super.InitializeComponent + 0x150); /*0x4e3e10*/
      a2a = TESObjectREFR_GetAnimData(a1); /*0x4e3e1b*/
      LOBYTE(v107) = Actor_IsWeaponOut(a1); /*0x4e3e1f*/
      (*v106)(v105, v107, COERCE_FLOAT(LODWORD(v101)), a2a, a1); /*0x4e3e29*/
    }
LABEL_92:
    v62 = (ActorAnimData *)v128; /*0x4e3e2b*/
    if ( !v128 ) /*0x4e3e31*/
      goto LABEL_94; /*0x4e3e31*/
    goto LABEL_93; /*0x4e3e31*/
  }
}
