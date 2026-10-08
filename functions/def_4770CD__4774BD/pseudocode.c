// positive sp value has been detected, the output may be wrong!
void __userpurge def_4770CD(
        int a1@<ebx>,
        int a2@<ebp>,
        unsigned int a3@<esi>,
        int a4,
        int a5,
        int a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        float a21,
        float a22,
        float a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28)
{
  TESObjectREFR *v28; // edi
  TESObjectREFR *v29; // ebx
  float v30; // ecx
  float v31; // edx
  int v32; // eax
  bool v33; // zf
  int v34; // eax
  float v35; // edx
  float v36; // eax
  __int16 v37; // bx
  int v38; // eax
  int v39; // edi
  _DWORD *v40; // ecx
  float *MovementVector; // eax
  double v42; // st7
  double v43; // st7
  double v44; // st5
  unsigned __int16 AnimGroup; // ax
  int v46; // edi
  int v47; // eax
  float *v48; // eax
  double v49; // st7
  _DWORD *v50; // eax
  _DWORD *v51; // ecx
  float *v52; // eax
  float v53; // eax
  float v54; // ecx
  float v55; // edx
  int v56; // ecx
  double v57; // st7
  int v58; // eax
  int v59; // eax
  int v60; // edx
  int v61; // ecx
  int v62; // ecx
  int v63; // eax
  unsigned __int8 v64; // bl
  _DWORD **v65; // edi
  int v66; // eax
  char *v67; // eax
  unsigned __int8 v68; // al
  float *v69; // ecx
  int v70; // edi
  int v71; // eax
  _DWORD **v72; // ecx
  int v73; // edi
  _UNKNOWN *retaddr; // [esp+10h] [ebp+0h]
  TESObjectREFR *v75; // [esp+14h] [ebp+4h]
  int v76; // [esp+14h] [ebp+4h]
  int v77; // [esp+18h] [ebp+8h]
  float v78; // [esp+1Ch] [ebp+Ch]
  float v79; // [esp+1Ch] [ebp+Ch]
  int v80; // [esp+1Ch] [ebp+Ch]
  float v81; // [esp+1Ch] [ebp+Ch]

  if ( a1 + 1 < 5 ) /*0x4774c3*/
    JUMPOUT(0x476FA6); /*0x476fa6*/
  v28 = *(TESObjectREFR **)(a2 + 8); /*0x4774cd*/
  if ( *(_DWORD *)(a3 + 8) ) /*0x4774c9*/
  {
    v29 = 0; /*0x4774d6*/
    v75 = 0; /*0x4774da*/
    if ( v28 ) /*0x4774de*/
    {
      if ( v28->vtbl->IsActor(v28) ) /*0x4774ea*/
      {
        v29 = v28; /*0x4774f8*/
        v75 = v28; /*0x4774fc*/
        if ( ((int (__thiscall *)(TESObjectREFR *))v28->vtbl[2].super.Unk_0C)(v28) ) /*0x477500*/
        {
          if ( v28->vtbl->GetSleepState(v28) >= 2 && v28->vtbl->GetSleepState(v28) <= kSitSleep_SittingOut ) /*0x477526*/
            ActorAnimData_ResetRootMotion(a3); /*0x47752a*/
        }
      }
    }
    v30 = *(float *)(a3 + 0x18); /*0x477532*/
    v31 = *(float *)(a3 + 0x1C); /*0x477535*/
    a22 = *(float *)(a3 + 0x20); /*0x477538*/
    v32 = *(_DWORD *)(a3 + 8); /*0x47753c*/
    v33 = *(_WORD *)(v32 + 0xB6) == 0; /*0x47753f*/
    a20 = v30; /*0x477547*/
    a21 = v31; /*0x47754b*/
    if ( v33 ) /*0x47754f*/
      v34 = 0; /*0x477551*/
    else
      v34 = **(_DWORD **)(v32 + 0xB0); /*0x47755b*/
    v35 = g_zeroNiPoint3; /*0x477566*/
    v78 = *(float *)(v34 + 0x5C); /*0x47756c*/
    v36 = *(&g_zeroNiPoint3 + 1); /*0x477570*/
    a13 = MEMORY[0xB3F9B0][0]; /*0x477575*/
    HIBYTE(retaddr) = 0; /*0x47757b*/
    a11 = v35; /*0x477580*/
    a12 = v36; /*0x477584*/
    if ( sub_5E05B0(v29) && !((unsigned __int8 (__thiscall *)(TESObjectREFR *))v75->vtbl[1].super.CopyFrom)(v75) ) /*0x4775a1*/
    {
      v37 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v75[1].vtbl->super.super.InitializeComponent + 0xB0))(v75[1].vtbl); /*0x4775bc*/
      v38 = *(_DWORD *)(a3 + 0xA0); /*0x4775bf*/
      if ( v38 ) /*0x4775c7*/
      {
        if ( (v37 & 0xF) != 0 ) /*0x4775d0*/
        {
          v39 = 0; /*0x4775d9*/
          if ( (unsigned int)(TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(v38 + 0x68)) - 0x28) <= 1 /*0x477609*/
            || (*(_DWORD *)(*(_DWORD *)(a3 + 0xA0) + 0x44) == 2 || *(_DWORD *)(*(_DWORD *)(a3 + 0xA0) + 0x44) == 5)
            && v75 == (TESObjectREFR *)reference )
          {
            HIBYTE(retaddr) = 1; /*0x477615*/
            if ( (v37 & 0x200) != 0 ) /*0x47761a*/
            {
              if ( (v37 & 1) != 0 ) /*0x47761f*/
              {
                v39 = 7; /*0x477621*/
              }
              else if ( (v37 & 2) != 0 ) /*0x47762b*/
              {
                v39 = 8; /*0x47762d*/
              }
              else if ( (v37 & 4) != 0 ) /*0x477637*/
              {
                v39 = 9; /*0x477639*/
              }
              else if ( (v37 & 8) != 0 ) /*0x477643*/
              {
                v39 = 0xA; /*0x477645*/
              }
            }
            else if ( (v37 & 0xFF00) != 0 ) /*0x477652*/
            {
              if ( (v37 & 1) != 0 ) /*0x477657*/
              {
                v39 = 3; /*0x477659*/
              }
              else if ( (v37 & 2) != 0 ) /*0x477663*/
              {
                v39 = 4; /*0x477665*/
              }
              else if ( (v37 & 4) != 0 ) /*0x47766f*/
              {
                v39 = 5; /*0x477671*/
              }
              else if ( (v37 & 8) != 0 ) /*0x47767b*/
              {
                v39 = 6; /*0x47767d*/
              }
            }
            if ( v39 == TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(*(_DWORD *)(a3 + 0xA0) + 0x68)) ) /*0x477692*/
            {
              v40 = *(_DWORD **)(*(_DWORD *)(a3 + 0xA0) + 0x68); /*0x4776a4*/
              a7 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x4776a7*/
              MovementVector = (float *)TESAnimGroup_GetMovementVector(v40, &a17); /*0x4776b0*/
              v42 = a7; /*0x4776bf*/
              a7 = *MovementVector * a7; /*0x4776c1*/
              a8 = MovementVector[1] * v42; /*0x4776ca*/
              a9 = v42 * MovementVector[2]; /*0x4776d1*/
              v43 = flt_B06530; /*0x4776e3*/
              a14 = a7 * v43; /*0x4776e5*/
              a15 = a8 * v43; /*0x4776ef*/
              a16 = v43 * a9; /*0x4776f7*/
              v44 = *(float *)(a3 + 0xBC);      // ActorAnimData update fallback movement-vector path reads +0xBC multiplier before writing scaled vector components. /*0x47770d*/
              a7 = a14 * v44; /*0x477713*/
              a11 = a7; /*0x47771f*/
              a8 = a15 * v44; /*0x477725*/
              a12 = a8; /*0x47772d*/
              a9 = v44 * a16; /*0x477735*/
              a13 = a9; /*0x47773d*/
            }
            else
            {
              AnimGroup = Actor_LoadAnimGroup_(v75, v39, 0, 0); /*0x47774f*/
              v46 = AnimGroup; /*0x477754*/
              if ( AnimKey_GetGroupID(AnimGroup) ) /*0x477758*/
              {
                if ( ActorAnimData_FindAnimMapEntry(*(_DWORD **)(a3 + 0x9C), v46, &a7) ) /*0x477774*/
                {
                  v47 = (*(int (__thiscall **)(_DWORD, unsigned int))(*(_DWORD *)LODWORD(a7) + 0x10))( /*0x47778c*/
                          LODWORD(a7),
                          0xFFFFFFFF);
                  if ( v47 ) /*0x477790*/
                  {
                    v79 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x4777a3*/
                    v48 = (float *)TESAnimGroup_GetMovementVector(*(_DWORD **)(v47 + 0x68), &a16); /*0x4777aa*/
                    a13 = v79 * *v48; /*0x4777b7*/
                    a14 = v48[1] * v79; /*0x4777c0*/
                    a15 = v79 * v48[2]; /*0x4777c7*/
                    v49 = flt_B06530; /*0x4777d9*/
                    a16 = a13 * v49; /*0x4777db*/
                    a17 = a14 * v49; /*0x4777e5*/
                    a18 = v49 * a15; /*0x4777ed*/
                    v78 = *(float *)(a3 + 0xBC);// ActorAnimData update fallback movement-vector path reads +0xBC multiplier before writing scaled vector components. /*0x4777f7*/
                    a13 = a16 * v78; /*0x477809*/
                    a10 = a13; /*0x477815*/
                    a14 = a17 * v78; /*0x47781b*/
                    a11 = a14; /*0x477823*/
                    a15 = v78 * a18; /*0x47782b*/
                    a12 = a15; /*0x477833*/
                  }
                }
              }
            }
          }
        }
      }
    }
    v50 = *(_DWORD **)(a3 + 8); /*0x477837*/
    a7 = *(float *)(a3 + 0x94); /*0x477842*/
    if ( v50 ) /*0x477846*/
    {
      v50[0x15] = *(_DWORD *)(a3 + 0x18); /*0x47784b*/
      v50[0x16] = *(_DWORD *)(a3 + 0x1C); /*0x477851*/
      v50[0x17] = *(_DWORD *)(a3 + 0x20); /*0x477857*/
    }
    sub_47C990(*(_DWORD **)(a3 + 4), a7, *(_DWORD **)(a3 + 8)); /*0x477869*/
    v51 = *(_DWORD **)(a3 + 8); /*0x47786e*/
    if ( v51 ) /*0x477873*/
    {
      if ( a3 != 0xFFFFFFE8 ) /*0x47787a*/
      {
        *(_DWORD *)(a3 + 0x18) = v51[0x15]; /*0x47787f*/
        *(_DWORD *)(a3 + 0x1C) = v51[0x16]; /*0x477884*/
        *(_DWORD *)(a3 + 0x20) = v51[0x17]; /*0x47788a*/
      }
      v52 = (float *)(*(_DWORD *)(a3 + 8) + 0x54); /*0x477896*/
      *v52 = g_zeroNiPoint3; /*0x477899*/
      v52[1] = *(&g_zeroNiPoint3 + 1); /*0x4778a1*/
      v52[2] = MEMORY[0xB3F9B0][0]; /*0x4778aa*/
    }
    if ( HIBYTE(retaddr) ) /*0x4778b2*/
    {
      v53 = a11; /*0x4778b4*/
      v54 = a12; /*0x4778b8*/
      v55 = a13; /*0x4778bc*/
    }
    else
    {
      a17 = *(float *)(a3 + 0x18) - a20; /*0x4778c9*/
      v53 = a17; /*0x4778cd*/
      a18 = *(float *)(a3 + 0x1C) - a21; /*0x4778d8*/
      v54 = a18; /*0x4778dc*/
      a19 = *(float *)(a3 + 0x20) - a22; /*0x4778e7*/
      v55 = a19; /*0x4778eb*/
    }
    *(float *)(a3 + 0xC) = v53;                 // ActorAnimData update writes final movement vector delta to +0x0C/+0x10/+0x14 after sampling movement group or node delta and applying actor scale. /*0x4778ef*/
    *(float *)(a3 + 0x10) = v54; /*0x4778f2*/
    v56 = *(_DWORD *)(a2 + 8); /*0x4778f5*/
    *(float *)(a3 + 0x14) = v55; /*0x4778f8*/
    a7 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v56 + 0xEC))(v56); /*0x477905*/
    v57 = a7; /*0x477909*/
    *(float *)(a3 + 0xC) = a7 * *(float *)(a3 + 0xC);// ActorAnimData movement vector X is multiplied by actor scale after animation movement sampling. /*0x477912*/
    *(float *)(a3 + 0x10) = *(float *)(a3 + 0x10) * v57;// ActorAnimData movement vector Y is multiplied by actor scale after animation movement sampling. /*0x47791a*/
    *(float *)(a3 + 0x14) = v57 * *(float *)(a3 + 0x14);// ActorAnimData movement vector Z is multiplied by actor scale before vertical correction from node height. /*0x477920*/
    v58 = *(_DWORD *)(a3 + 8); /*0x477923*/
    if ( *(_WORD *)(v58 + 0xB6) ) /*0x477926*/
      v59 = **(_DWORD **)(v58 + 0xB0); /*0x47793a*/
    else
      v59 = 0; /*0x477930*/
    *(float *)(a3 + 0x14) = *(float *)(v59 + 0x5C) - v78; /*0x477943*/
  }
  if ( (*(_BYTE *)(*(_DWORD *)(a3 + 4) + 0x18) & 1) == 0 ) /*0x47794d*/
  {
    v76 = 0; /*0x477953*/
    v60 = 0; /*0x47795b*/
    do /*0x47795f*/
    {
      if ( *(_BYTE *)(a3 + 0x90) != 5 ) /*0x47796b*/
      {
        if ( *(_BYTE *)(a3 + 0x90) == 6 ) /*0x477974*/
        {
          if ( v60 > 0 && v60 <= 3 ) /*0x477987*/
            goto LABEL_89; /*0x477987*/
LABEL_65:
          v61 = v60; /*0x47798d*/
          if ( v60 == 5 ) /*0x477994*/
          {
            v61 = 0; /*0x4779a2*/
          }
          else if ( v60 == 6 ) /*0x477999*/
          {
            v61 = 3; /*0x47799b*/
          }
          v62 = *(_DWORD *)(a3 + 4 * v61 + 0xA0); /*0x4779a4*/
          v77 = v62; /*0x4779ad*/
          if ( v62 ) /*0x4779b1*/
          {
            if ( *(&a28 + v60) == v62 ) /*0x4779bb*/
            {
              v63 = *(_DWORD *)(v62 + 0x44); /*0x4779c1*/
              if ( v63 == 1 || v63 == 2 || v63 == 5 ) /*0x4779d1*/
              {
                if ( !*(_DWORD *)(a3 + 4 * v60 + 0x24) ) /*0x4779d7*/
                  goto LABEL_85; /*0x4779d7*/
                a7 = 0.0; /*0x4779de*/
                v64 = 0; /*0x4779e6*/
                v65 = (_DWORD **)(a3 + 0xA0); /*0x4779e8*/
                v80 = 5; /*0x4779ee*/
                do /*0x477a29*/
                {
                  if ( *v65 ) /*0x4779f6*/
                  {
                    v66 = *(_DWORD *)(a3 + 4 * v60 + 0x24); /*0x4779fc*/
                    if ( v66 ) /*0x477a02*/
                    {
                      v67 = *(char **)(v66 + 8); /*0x477a04*/
                      if ( v67 ) /*0x477a09*/
                      {
                        v68 = BSAnimGroupSequence_GetControlledBlockPriority(*v65, v67); /*0x477a0c*/
                        if ( v68 > v64 ) /*0x477a13*/
                        {
                          a7 = *(float *)v65; /*0x477a17*/
                          v64 = v68; /*0x477a1b*/
                        }
                        v60 = v76; /*0x477a1d*/
                      }
                    }
                  }
                  ++v65; /*0x477a21*/
                  --v80; /*0x477a24*/
                }
                while ( v80 ); /*0x477a29*/
                if ( a7 != 0.0 && LODWORD(a7) == v77 ) /*0x477a3b*/
                {
LABEL_85:
                  a7 = BSAnimGroupSequence_SampleUpdate(v77, *(float *)(a3 + 0x94)); /*0x477a50*/
                  v81 = -flt_A7DEB4; /*0x477a5c*/
                  if ( v81 != a7 ) /*0x477a75*/
                  {
                    v69 = &a23 + v76; /*0x477a7f*/
                    if ( *v69 != v81 && *v69 != a7 ) /*0x477a97*/
                      TESAnimGroup_DispatchTextKeyEvents( /*0x477ab1*/
                        *(_DWORD *)(v77 + 0x68),
                        a3,
                        *(TESObjectREFR **)(a2 + 8),
                        *v69,
                        a7,
                        v77);
                  }
                }
              }
            }
          }
          goto LABEL_89; /*0x477ab1*/
        }
        if ( v60 != *(char *)(a3 + 0x90) ) /*0x477978*/
          goto LABEL_65; /*0x477978*/
      }
LABEL_89:
      v60 = ++v76; /*0x477abc*/
    }
    while ( v76 < 5 ); /*0x47795f*/
  }
  v70 = *(_DWORD *)(a3 + 0xCC); /*0x477ad0*/
  if ( v70 ) /*0x477ad8*/
  {
    if ( *(_DWORD *)v70 == 2 ) /*0x477add*/
    {
      v71 = *(_DWORD *)(v70 + 0x10); /*0x477adf*/
      if ( !v71 || !*(_DWORD *)(v71 + 0x44) ) /*0x477ae6*/
      {
        v72 = *(_DWORD ***)(v70 + 0x28); /*0x477aec*/
        *(_DWORD *)v70 = 3; /*0x477af1*/
        if ( v72 ) /*0x477af7*/
        {
          if ( Actor_GetCurrentAction(v72) == 0xB ) /*0x477b01*/
            Actor_SetCurrentActionWithBowVisualCleanup(*(PlayerCharacter **)(v70 + 0x28), 0xFFFFFFFF, 0); /*0x477b0a*/
        }
        v73 = *(_DWORD *)(v70 + 4); /*0x477b0f*/
        if ( v73 == 2 || v73 == 3 ) /*0x477b1a*/
          ActorAnimData_CleanupOrPromoteQueuedIdles((ActorAnimData *)a3, 1, 0); /*0x477b22*/
      }
    }
  }
  *(_BYTE *)(a3 + 0x90) = 0xFF; /*0x477b27*/
}
