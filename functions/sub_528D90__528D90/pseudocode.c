// Player-specific appearance restore from save (called by Player_LoadModifiedForm at 0x66637F). Reads four FaceGen matrices beginning NPC+0x108; compares values and restores race, hair, eyes, hair length/color and sex. Sets one logical changed flag; compare at 0x52913D skips reconstruction if zero. When changed, compares race model availability and existing 3D: one branch detaches/reconciles face nodes and applies FaceGen render state to both perspectives; other branch rebuilds more actor 3D. Temporarily sets base vampirism AV0x45=0 during rebuild and restores it. None of this alone proves OCO/Blockhead load corruption; capture texture bindings and callback timing.
int __fastcall TESNPC_LoadPlayerAppearanceAndRefreshIfChanged(TESForm *ecx0, int a2, TESObjectREFR *a3)
{
  NPC_Unk *v4; // eax
  TESForm::FormFlags unk1; // eax
  UInt32 v6; // ebp
  bool v7; // zf
  TESForm::FormFlags v8; // edi
  NPC_Unk *v9; // esi
  UInt32 unk3; // eax
  UInt32 v11; // ecx
  int v12; // eax
  TESRace *data; // ecx
  char *next; // eax
  TESForm *v15; // eax
  TESRace *v16; // esi
  char *v17; // eax
  char *v18; // eax
  TESForm *v19; // eax
  TESHair *v20; // eax
  TESHair *v21; // esi
  char *v22; // eax
  TESForm *v23; // eax
  TESEyes *v24; // eax
  TESEyes *v25; // esi
  char *v26; // eax
  double v27; // st6
  double v28; // st5
  double v29; // st7
  TESForm::FormFlags v30; // eax
  int result; // eax
  void *niNode; // ecx
  int v33; // edi
  int v34; // ebp
  _DWORD *v35; // eax
  LONG (__stdcall *v36)(volatile LONG *); // ebx
  _DWORD *v37; // edi
  void (__thiscall ***v38)(_DWORD, int); // edi
  _DWORD *v39; // eax
  _DWORD *v40; // edi
  void (__thiscall ***v41)(_DWORD, int); // edi
  TESNPC *v42; // edi
  TESRace *race; // ecx
  BSFaceGenNiNode *v44; // eax
  void (__thiscall *Unk_4D)(TESObjectREFR *); // eax
  BSFaceGenNiNode *v46; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  NiNode *m_parent; // ebp
  PlayerCharacter *v49; // ecx
  TESModel *p_member; // ecx
  NiNode *v51; // edi
  TESForm *ActorBaseForm; // eax
  void *v53; // eax
  int v54; // [esp+14h] [ebp-168h]
  int v55; // [esp+18h] [ebp-164h]
  int v56; // [esp+1Ch] [ebp-160h]
  int v57; // [esp+20h] [ebp-15Ch]
  int v58; // [esp+24h] [ebp-158h]
  int v59; // [esp+28h] [ebp-154h] BYREF
  const FaceGenRenderState *p_columns; // [esp+2Ch] [ebp-150h]
  int v61; // [esp+30h] [ebp-14Ch]
  char v62; // [esp+38h] [ebp-144h]
  bool v63; // [esp+3Ah] [ebp-142h]
  char v64; // [esp+40h] [ebp-13Ch]
  char isThirdPerson; // [esp+41h] [ebp-13Bh]
  char v66; // [esp+42h] [ebp-13Ah]
  UInt32 unk0; // [esp+44h] [ebp-138h] BYREF
  NPC_Unk *v68; // [esp+48h] [ebp-134h]
  unsigned int v69; // [esp+4Ch] [ebp-130h]
  int v70; // [esp+50h] [ebp-12Ch]
  int v71; // [esp+54h] [ebp-128h]
  int a1; // [esp+58h] [ebp-124h] BYREF
  TESForm destination; // [esp+5Ch] [ebp-120h] BYREF
  IOTask v74[2]; // [esp+7Ch] [ebp-100h] BYREF
  FaceGenRenderState outState; // [esp+ACh] [ebp-D0h] BYREF
  int v76; // [esp+178h] [ebp-4h]

  *(_DWORD *)&destination.member.type = ecx0; /*0x528dbf*/
  v64 = 0; /*0x528dc3*/
  v70 = 0; /*0x528dc8*/
  v4 = (NPC_Unk *)&ecx0[0xB]; /*0x528dd0*/
  do /*0x528ee5*/
  {
    v69 = 0; /*0x528de0*/
    v68 = v4; /*0x528de8*/
    do /*0x528ecd*/
    {
      unk1 = v68->unk1; /*0x528df6*/
      v6 = 0; /*0x528df9*/
      v7 = v68->unk0 == 0; /*0x528dfb*/
      unk0 = v68->unk0; /*0x528dfd*/
      destination.member.flags = unk1; /*0x528e01*/
      if ( !v7 ) /*0x528e05*/
      {
        v71 = v69 + v70; /*0x528e15*/
        do /*0x528eb4*/
        {
          v8 = 0; /*0x528e20*/
          if ( destination.member.flags ) /*0x528e26*/
          {
            v9 = (NPC_Unk *)&ecx0[v71 + 0xB]; /*0x528e34*/
            do /*0x528eab*/
            {
              TESForm_LoadDataFromCurrentSaveGame(ecx0, &destination, 4u); /*0x528e40*/
              unk3 = v9->unk3; /*0x528e45*/
              if ( !unk3 || !((int)(v9->unk4 - unk3) >> 2) ) /*0x528e51*/
                _invalid_parameter_noinfo(); /*0x528e56*/
              v11 = v9->unk3; /*0x528e5e*/
              if ( *(float *)&destination.vtbl != *(float *)(v11 + 4 * v6 * v9->unk1 + 4 * v8) ) /*0x528e75*/
              {
                if ( !v11 || !((int)(v9->unk4 - v11) >> 2) ) /*0x528e82*/
                  _invalid_parameter_noinfo(); /*0x528e87*/
                v12 = v9->unk3 + 4 * v6 * v9->unk1; /*0x528e99*/
                v64 = 1;                        // Sets appearance-changed byte when a loaded coefficient differs (unordered comparison also takes update). Four-matrix loop starts NPC+0x108, strides 0x18. Do not infer that unchanged coefficients alone skip rebuild: subsequent race/hair/eyes/sex checks set the same logical flag. /*0x528e9c*/
                *(float *)(v12 + 4 * v8) = *(float *)&destination.vtbl; /*0x528ea1*/
              }
              ++v8; /*0x528ea4*/
            }
            while ( (unsigned int)v8 < destination.member.flags ); /*0x528eab*/
          }
          ++v6; /*0x528ead*/
        }
        while ( v6 < unk0 ); /*0x528eb4*/
      }
      ++v68; /*0x528ebe*/
      ++v69; /*0x528ec9*/
    }
    while ( v69 < 2 ); /*0x528ecd*/
    v4 = v68; /*0x528ed7*/
    v70 += 2; /*0x528ee1*/
  }
  while ( (unsigned int)v70 < 4 ); /*0x528ee5*/
  data = (TESRace *)ecx0[9].member.modlist.data; /*0x528eeb*/
  isThirdPerson = 0; /*0x528ef3*/
  if ( data ) /*0x528ef8*/
  {
    isThirdPerson = sub_52BDB0((int)data, 0) != 0; /*0x528f03*/
  }
  else
  {
    next = (char *)ecx0[6].member.modlist.next; /*0x528f0a*/
    if ( !next ) /*0x528f12*/
      next = EmptyString; /*0x528f14*/
    PrintError("%s has a bad current race when loading facegen", next); /*0x528f1f*/
  }
  TESForm_LoadFormIDFromCurrentSaveGame(ecx0, (unsigned int *)&a1, 4u); /*0x528f30*/
  v15 = TESForm_LookupByFormID(v70); /*0x528f48*/
  v16 = (TESRace *)OblivionDynamicCast( /*0x528f5f*/
                     v15,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESRace `RTTI Type Descriptor',
                     0);
  if ( !v16 ) /*0x528f65*/
  {
    v17 = (char *)ecx0[6].member.modlist.next; /*0x528f67*/
    if ( !v17 ) /*0x528f6f*/
      v17 = EmptyString; /*0x528f71*/
    PrintError("NPC %s could not find race %08X", v17, v70); /*0x528f7d*/
  }
  if ( (TESRace *)ecx0[9].member.modlist.data != v16 ) /*0x528f8b*/
    v62 = 1; /*0x528f8d*/
  ecx0[9].member.modlist.data = (Data *)v16; /*0x528f94*/
  v63 = 0; /*0x528f9a*/
  if ( v16 ) /*0x528f9f*/
  {
    v63 = sub_52BDB0((int)v16, 0) != 0; /*0x528fac*/
  }
  else
  {
    v18 = (char *)ecx0[6].member.modlist.next; /*0x528fb3*/
    if ( !v18 ) /*0x528fbb*/
      v18 = EmptyString; /*0x528fbd*/
    PrintError("%s has a bad new race when loading facegen", v18); /*0x528fc8*/
  }
  TESForm_LoadFormIDFromCurrentSaveGame(ecx0, (unsigned int *)&destination.member.flags, 4u); /*0x528fd9*/
  v19 = TESForm_LookupByFormID((UInt32)destination.vtbl); /*0x528ff1*/
  v20 = (TESHair *)OblivionDynamicCast( /*0x528ffa*/
                     v19,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESHair `RTTI Type Descriptor',
                     0);
  v21 = v20; /*0x529008*/
  if ( destination.vtbl ) /*0x52900a*/
  {
    if ( !v20 ) /*0x52900e*/
    {
      v22 = (char *)ecx0[6].member.modlist.next; /*0x529010*/
      if ( !v22 ) /*0x529018*/
        v22 = EmptyString; /*0x52901a*/
      PrintError("NPC %s could not find hair %08X", v22, destination.vtbl); /*0x529026*/
    }
  }
  if ( (TESHair *)ecx0[0x13].vtbl != v21 ) /*0x529034*/
    LOBYTE(v61) = 1; /*0x529036*/
  ecx0[0x13].vtbl = (TESFormVtbl *)v21; /*0x529044*/
  TESForm_LoadFormIDFromCurrentSaveGame(ecx0, (unsigned int *)&a1, 4u); /*0x52904a*/
  v23 = TESForm_LookupByFormID(v70); /*0x529062*/
  v24 = (TESEyes *)OblivionDynamicCast( /*0x52906b*/
                     v23,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESEyes `RTTI Type Descriptor',
                     0);
  v25 = v24; /*0x529079*/
  if ( v70 ) /*0x52907b*/
  {
    if ( !v24 ) /*0x52907f*/
    {
      v26 = (char *)ecx0[6].member.modlist.next; /*0x529081*/
      if ( !v26 ) /*0x529089*/
        v26 = EmptyString; /*0x52908b*/
      PrintError("NPC %s could not find eyes %08X", v26, v70); /*0x529097*/
    }
  }
  if ( (TESEyes *)ecx0[0x13].member.flags != v25 ) /*0x5290a5*/
    LOBYTE(v59) = 1; /*0x5290a7*/
  ecx0[0x13].member.flags = (TESForm::FormFlags)v25; /*0x5290b5*/
  TESForm_LoadDataFromCurrentSaveGame(ecx0, &a1, 4u); /*0x5290bb*/
  TESForm_LoadDataFromCurrentSaveGame(ecx0, &destination.member, 4u); /*0x5290c9*/
  v27 = *(float *)&a1; /*0x5290d4*/
  v28 = *(float *)&a1; /*0x5290d8*/
  v29 = *(float *)&a1; /*0x5290de*/
  v30 = *(_DWORD *)&destination.member.type; /*0x5290e3*/
  if ( *(float *)&a1 != *(float *)&ecx0[0x13].member.type /*0x5290ef*/
    || ecx0[0x14].member.flags != *(_DWORD *)&destination.member.type )
  {
    LOBYTE(v59) = 1; /*0x5290f1*/
  }
  *(float *)&ecx0[0x13].member.type = *(float *)&a1; /*0x5290f8*/
  ecx0[0x14].member.flags = v30; /*0x529105*/
  TESForm_LoadDataFromCurrentSaveGame(ecx0, (char *)&v59 + 3, 1u); /*0x52910b*/
  if ( ((int)ecx0[1].member.modlist.data & 1) != HIBYTE(v59) ) /*0x52911c*/
    LOBYTE(v59) = 1; /*0x52911e*/
  if ( HIBYTE(v59) ) /*0x529128*/
    ecx0[1].member.modlist.data = (Data *)((int)ecx0[1].member.modlist.data | 1); /*0x52912a*/
  else
    ecx0[1].member.modlist.data = (Data *)((int)ecx0[1].member.modlist.data & ~1u); /*0x529130*/
  result = (*(int (__thiscall **)(UInt32 *, int, int, int, int, int, int, int))(ecx0[1].member.refID + 0x50))( /*0x52913b*/
             &ecx0[1].member.refID,
             0x10,
             v54,
             v55,
             v56,
             v57,
             v58,
             v59);
  if ( v64 )                                    // Critical OCO diagnostic boundary: cmp byte ptr [esp+0x14],0; equal skips rebuild to 0x52950C. Flag is set by restored coefficient and appearance-property differences. Identical native appearance may skip work even if external override state changed; this is an UNRESOLVED interaction hypothesis, not a proven vanilla bug. Capture EBX NPC, flag, cached nodes and Blockhead callback ordering here. /*0x529142*/
  {
    v71 = ecx0->vtbl[1].GetSaveSize(ecx0, 0x45); /*0x529156*/
    ((void (__thiscall *)(TESForm *, int, _DWORD))ecx0->vtbl[1].Unk_16)(ecx0, 0x45, 0);// Appearance reload temporarily writes base actor value 0x45 (vampirism) to zero before reconstruction; prior value saved at 0x529154 and restored on reconstruction exit. Needed in load-vs-sexchange comparison; SexChange does not have this same explicit AV reset sequence. /*0x529168*/
    niNode = a3->member.niNode; /*0x529171*/
    v33 = 0; /*0x529174*/
    if ( niNode ) /*0x529178*/
      v33 = (*(int (__thiscall **)(void *))(*(_DWORD *)niNode + 8))(niNode); /*0x529181*/
    if ( isThirdPerson == v66 )                 // Compares pre/post race-model availability; differing condition branches at 0x529377 to broader player 3D regeneration. Equal condition with actor 3D takes incremental face refresh at 0x529191. Distinguish this from the appearance-changed gate at 0x52913D. /*0x52918b*/
    {
      if ( v33 ) /*0x529193*/
      {
        v34 = 0; /*0x52919b*/
        if ( TESObjectREFR_GetAnimData(a3) ) /*0x52919d*/
        {
          if ( TESObjectREFR_GetAnimData(a3)->manager ) /*0x5291ad*/
            v34 = *((_DWORD *)TESObjectREFR_GetAnimData(a3)->manager + 0x1F); /*0x5291c2*/
        }
        v35 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *, _DWORD))a3->vtbl->Unk_4D)(a3, 0); /*0x5291d1*/
        v36 = InterlockedDecrement; /*0x5291d3*/
        v37 = v35; /*0x5291d9*/
        if ( v35 ) /*0x5291dd*/
        {
          if ( v35[7] ) /*0x5291df*/
          {
            sub_716620(v35, v34); /*0x5291e7*/
            (*(void (__thiscall **)(_DWORD, UInt32 *, _DWORD *))(*(_DWORD *)v37[7] + 0x88))(v37[7], &unk0, v37); /*0x529200*/
            if ( unk0 ) /*0x529208*/
            {
              v38 = (void (__thiscall ***)(_DWORD, int))unk0; /*0x52920a*/
              if ( !v36((volatile LONG *)(unk0 + 4)) ) /*0x529210*/
                (**v38)(v38, 1); /*0x529222*/
            }
          }
        }
        v39 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *, _DWORD))a3->vtbl->Unk_4C)(a3, 0); /*0x529230*/
        v40 = v39; /*0x529232*/
        if ( v39 ) /*0x529236*/
        {
          if ( v39[7] ) /*0x529238*/
          {
            sub_716620(v39, v34); /*0x529240*/
            (*(void (__thiscall **)(_DWORD, UInt32 *, _DWORD *))(*(_DWORD *)v40[7] + 0x88))(v40[7], &unk0, v40); /*0x529259*/
            if ( unk0 ) /*0x529261*/
            {
              v41 = (void (__thiscall ***)(_DWORD, int))unk0; /*0x529263*/
              if ( !v36((volatile LONG *)(unk0 + 4)) ) /*0x529269*/
                (**v41)(v41, 1); /*0x52927b*/
            }
          }
        }
      }
      HIBYTE(v59) = 0;                          // Incremental player reload branch reached with no existing actor NiNode. Clears/reconciles FaceGen nodes and, when both perspective nodes are available, builds one FaceGenRenderState then applies it to each. Evaluate missing OCO state against this path; no direct plugin cache invalidation is visible here. /*0x52927d*/
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x52927f*/
      v42 = *(TESNPC **)&destination.member.type; /*0x529284*/
      TESNPC_ClearFaceGenNodes(*(TESNPC **)&destination.member.type); /*0x52928d*/
      v59 = 2; /*0x529292*/
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x529294*/
      if ( *(_DWORD *)&a3[2].member.baseExtraList.members.m_presenceBitfield[8] ) /*0x529299*/
        TESNPC_ReconcileFaceGenNodesForActor( /*0x5292aa*/
          (int)v42,
          v29,
          (TESChildCELL *)a3,
          *(ActorAnimData **)&a3[2].member.baseExtraList.members.m_presenceBitfield[8]);
      if ( ((int (__thiscall *)(TESObjectREFR *, _DWORD))a3->vtbl->Unk_4C)(a3, 0) ) /*0x5292bb*/
      {
        if ( ((int (__thiscall *)(TESObjectREFR *, _DWORD))a3->vtbl->Unk_4D)(a3, 0) ) /*0x5292d1*/
        {
          FaceGenRenderState_Construct(&outState); /*0x5292e2*/
          race = v42->member.form.race; /*0x5292e7*/
          v76 = 0; /*0x5292f6*/
          TESRace_BuildFaceGenRenderState(race, v42, &outState); /*0x529301*/
          v44 = (BSFaceGenNiNode *)((int (__thiscall *)(TESObjectREFR *, _DWORD, FaceGenRenderState *))a3->vtbl->Unk_4C)( /*0x52931a*/
                                     a3,
                                     0,
                                     &outState);
          BSFaceGen_ApplyHeadParametersToNode(v44, p_columns); /*0x52931d*/
          Unk_4D = a3->vtbl->Unk_4D; /*0x529324*/
          p_columns = (const FaceGenRenderState *)&outState.parameters.matrices[0].columns; /*0x529334*/
          v59 = 0; /*0x529335*/
          v46 = (BSFaceGenNiNode *)((int (__thiscall *)(TESObjectREFR *))Unk_4D)(a3); /*0x529339*/
          BSFaceGen_ApplyHeadParametersToNode(v46, (const FaceGenRenderState *)v59); /*0x52933c*/
          v76 = 0xFFFFFFFF; /*0x52934b*/
          FaceGenRenderState_Destruct(&outState); /*0x529356*/
        }
      }
      vtbl = a3[1].vtbl; /*0x52935b*/
      if ( vtbl ) /*0x529360*/
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0xC7))(vtbl, 1); /*0x529370*/
    }
    else
    {
      HIBYTE(v59) = 0; /*0x529377*/
      m_parent = 0; /*0x529379*/
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x52937b*/
      TESNPC_ClearFaceGenNodes((TESNPC *)ecx0); // Broad player reload branch invalidates cached NPC FaceGen nodes, toggles player POV, can detach/recreate actor 3D via Character_Set3D/MobileObject_GenerateNiNode, and reattaches. Triggered by race-model availability change; not a narrow workaround candidate. /*0x529385*/
      v59 = 2; /*0x52938a*/
      Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x52938c*/
      v49 = reference; /*0x529391*/
      isThirdPerson = reference->isThirdPerson; /*0x5293a1*/
      TogglePOV(v49, 0); /*0x5293a5*/
      if ( v33 ) /*0x5293ac*/
      {
        m_parent = TESObjectREFR::GetNiNode(a3)->members.super.m_parent; /*0x5293b5*/
        Character_Set3D(a3, (int)m_parent, v28, v27, v29, 0); /*0x5293bc*/
      }
      p_member = (TESModel *)&ecx0[7].member; /*0x5293c6*/
      if ( v66 ) /*0x5293cc*/
        p_member->vtbl->SetModelPath(p_member, stru_B38B68.value); /*0x5293da*/
      else
        p_member->vtbl->SetModelPath(p_member, stru_B38B70.value); /*0x5293e9*/
      if ( m_parent ) /*0x5293ed*/
      {
        LOBYTE(MEMORY[0xB33D80]) = 1; /*0x5293f5*/
        v51 = MobileObject_GenerateNiNode((MobileObject *)a3); /*0x529401*/
        if ( !((int (__thiscall *)(TESObjectREFR *, _DWORD))a3->vtbl->Unk_4D)(a3, 0) /*0x529421*/
          && !((int (__thiscall *)(TESObjectREFR *, _DWORD))a3->vtbl->Unk_4C)(a3, 0) )
        {
          ActorBaseForm = Actor_GetActorBaseForm((Actor *)a3, 0); /*0x52942a*/
          sub_437970(v74, (int)ActorBaseForm, 0); /*0x529436*/
          v76 = 1; /*0x52943f*/
          sub_435300(v74); /*0x52944a*/
          (*((void (__thiscall **)(IOTask *))v74[0].vtbl + 0xA))(v74); /*0x52945a*/
          sub_4353D0((NiNode **)v74, a3, *(void **)&a3[2].member.baseExtraList.members.m_presenceBitfield[8]); /*0x529468*/
          v76 = 0xFFFFFFFF; /*0x529471*/
          QueuedHead::~QueuedHead((QueuedHead *)v74); /*0x52947c*/
        }
        ((void (__thiscall *)(NiNode *, NiNode *, int))m_parent->vtbl->AddObject)(m_parent, v51, 1); /*0x52948f*/
        v7 = a3 == (TESObjectREFR *)reference; /*0x529497*/
        LOBYTE(MEMORY[0xB33D80]) = 0; /*0x529499*/
        if ( v7 ) /*0x5294a0*/
          sub_65F910((int)v51, 0); /*0x5294a5*/
        a3->vtbl->Unk_52(a3); /*0x5294b4*/
        v53 = OblivionDynamicCast( /*0x5294c8*/
                a3[1].vtbl,
                0,
                (struct _s_RTTICompleteObjectLocator *)&BaseProcess `RTTI Type Descriptor',
                &MiddleHighProcess `RTTI Type Descriptor',
                0);
        if ( v53 ) /*0x5294d2*/
          (*(void (__thiscall **)(void *, TESObjectREFR *))(*(_DWORD *)v53 + 0x3EC))(v53, a3); /*0x5294df*/
      }
      TogglePOV(reference, isThirdPerson == 0); /*0x5294f0*/
      v42 = *(TESNPC **)&destination.member.type; /*0x5294f5*/
    }
    return ((int (__thiscall *)(TESNPC *, int, int))v42->vtbl[1].super.super.super.Unk_0E)(v42, 0x45, v71); /*0x52950a*/
  }
  return result; /*0x52950c*/
}
