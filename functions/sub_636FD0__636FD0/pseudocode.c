// BunkFix: shared movement/activation executor. Sleep action calls this through HighProcess vtable +0x51C with flag 0 after selecting a furniture ref; activation paths call ActivateRef once actor reaches/turns toward target.
// bad sp value at call has been detected, the output may be wrong!
char __userpurge sub_636FD0@<al>(int *a1@<ecx>, double st6_0@<st1>, double Distance@<st0>, Actor *a2, int a5)
{
  double v6; // st5
  TESPackage *v8; // ebp
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  unsigned __int8 (__thiscall *v12)(int); // eax
  char result; // al
  TESPackage *v14; // ebx
  float *v15; // eax
  TESObjectCELL *v16; // eax
  TESObjectCELL *ParentCell; // ebx
  float *v18; // eax
  double v19; // st7
  int v20; // eax
  double v21; // st7
  void (__thiscall *v22)(int *); // eax
  _DWORD *v23; // ecx
  ExtraTeleport *v24; // eax
  _DWORD *v25; // ecx
  int v26; // edx
  void (__thiscall *v27)(int *, _DWORD); // eax
  float *v28; // eax
  float *v29; // ebp
  TESObjectREFR *v30; // ecx
  TESWorldSpace *v31; // eax
  TESObjectREFR *v32; // ecx
  TESObjectCELL *v33; // eax
  float v34; // ecx
  int v35; // edx
  int v36; // ecx
  TESForm::ModReferenceList *next; // edx
  int v38; // ecx
  TESPackage *v39; // ebp
  int v40; // edx
  void (__thiscall *v41)(int *, _DWORD); // eax
  float *v42; // eax
  char v43; // al
  char v44; // bl
  float *v45; // eax
  float *v46; // eax
  double v47; // st7
  double v48; // st7
  ExtraTeleport *TeleportExtraData; // eax
  _BYTE *v50; // ecx
  int v51; // ebx
  int v52; // eax
  int v53; // ebp
  float *v54; // eax
  TESObjectREFR *v55; // ecx
  float *v56; // eax
  int v57; // edx
  TESObjectREFR *v58; // ecx
  int v59; // ebx
  float *v60; // eax
  TESObjectREFR *v61; // ecx
  unsigned __int8 (__thiscall *v62)(int *); // edx
  int v63; // ecx
  int v64; // edx
  void (__thiscall *v65)(int *, _DWORD); // eax
  bool v66; // zf
  int v67; // ebx
  float *v68; // eax
  TESObjectREFR *v69; // ecx
  int (__thiscall *v70)(int *); // edx
  int v71; // ebx
  int v72; // ebp
  float *v73; // eax
  TESObjectREFR *v74; // ecx
  unsigned __int8 (__thiscall *v75)(int *); // edx
  int *v76; // eax
  int v77; // ebx
  int v78; // eax
  int v79; // eax
  float *v80; // eax
  int v81; // ebx
  TESObjectCELL *v82; // eax
  double v83; // st7
  double v84; // st6
  Actor *v85; // ecx
  int *v86; // ebx
  float *v87; // eax
  int v88; // edx
  float *v89; // eax
  int v90; // eax
  PlayerCharacter *v91; // eax
  ActorAnimData *v92; // eax
  ActorAnimData *v93; // ebp
  void (__thiscall *v94)(int *, Actor *); // eax
  int v95; // eax
  void (__thiscall *v96)(int *); // edx
  ActorAnimData *v97; // eax
  void (__thiscall *v98)(int *, Actor *); // edx
  int v99; // eax
  int v100; // eax
  double GameHour; // st7
  char v102; // al
  int v103; // ecx
  int v104; // esi
  void (__thiscall *v105)(int *, float *); // edx
  int (*v106)(void); // edx
  int v107; // eax
  void (__thiscall *v108)(int *); // edx
  int procedureArrayIndex; // eax
  int v110; // ebp
  int v111; // eax
  _BYTE *v112; // eax
  _BYTE *v113; // ebp
  int v114; // ebp
  _DWORD *v115; // ebx
  TESWorldSpace *v116; // eax
  TESObjectREFR *v117; // ecx
  TESObjectCELL *v118; // eax
  int v119; // ebp
  _DWORD *v120; // ebx
  float *v121; // eax
  TESObjectREFR *v122; // ecx
  TESObjectCELL *v123; // eax
  ActorAnimData *v124; // eax
  int v125; // eax
  void (__thiscall *v126)(int *); // eax
  ActorAnimData *v127; // eax
  void (__thiscall *v128)(int *, float *); // eax
  int (*v129)(void); // eax
  int v130; // eax
  double v131; // st7
  int v132; // ecx
  int v133; // eax
  ActorAnimData *v134; // eax
  TESWorldSpace *WorldSpace; // [esp+0h] [ebp-98h]
  float v136; // [esp+4h] [ebp-94h]
  Actor *v137; // [esp+1Ch] [ebp-7Ch]
  int v138; // [esp+1Ch] [ebp-7Ch]
  Actor *v139; // [esp+20h] [ebp-78h]
  Actor *v140; // [esp+20h] [ebp-78h]
  int v141; // [esp+20h] [ebp-78h]
  Actor *v142; // [esp+28h] [ebp-70h] BYREF
  float *v143; // [esp+2Ch] [ebp-6Ch]
  float v144; // [esp+30h] [ebp-68h]
  int v145; // [esp+34h] [ebp-64h] BYREF
  Actor *v146; // [esp+38h] [ebp-60h]
  float v147; // [esp+3Ch] [ebp-5Ch]
  int v148; // [esp+40h] [ebp-58h]
  int v149; // [esp+44h] [ebp-54h]
  float v150; // [esp+48h] [ebp-50h]
  float v151; // [esp+4Ch] [ebp-4Ch]
  TESPackage *v152; // [esp+50h] [ebp-48h] BYREF
  double v153; // [esp+54h] [ebp-44h]
  int v154; // [esp+5Ch] [ebp-3Ch] BYREF
  int v155; // [esp+60h] [ebp-38h] BYREF
  int v156; // [esp+64h] [ebp-34h]
  Actor *v157; // [esp+68h] [ebp-30h] BYREF
  float v158; // [esp+6Ch] [ebp-2Ch]
  float v159; // [esp+70h] [ebp-28h] BYREF
  char v160; // [esp+74h] [ebp-24h]
  int v161; // [esp+78h] [ebp-20h]
  float v162[2]; // [esp+7Ch] [ebp-1Ch] BYREF
  _DWORD v163[2]; // [esp+84h] [ebp-14h] BYREF
  char v164; // [esp+8Ch] [ebp-Ch]
  float v165; // [esp+94h] [ebp-4h]
  Actor *a2a; // [esp+9Ch] [ebp+4h]

  v6 = sub_572EA0(2); /*0x636fe1*/
  if ( Distance > *(float *)&SrcStr /*0x637012*/
    || (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) != 4 && (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) )
  {
    return 0; /*0x637016*/
  }
  v8 = (TESPackage *)(*(int (__thiscall **)(int *))(*a1 + 0x184))(a1); /*0x63702c*/
  LODWORD(v162[0]) = v8; /*0x637031*/
  a2a = (Actor *)ExtraDataList::GetExtraPackage(&a2->members.super.super.baseExtraList); /*0x63703a*/
  v9 = a1[0xB]; /*0x63703e*/
  if ( !v9 || (*(_DWORD *)(v9 + 8) & 0x20) != 0 ) /*0x63704d*/
    (*(void (__thiscall **)(int *, Actor *))(*a1 + 0x558))(a1, a2); /*0x63705a*/
  v10 = a1[0xB]; /*0x63705c*/
  if ( !v10 ) /*0x637061*/
    goto LABEL_243; /*0x637061*/
  v11 = *(_DWORD *)(v10 + 8); /*0x637067*/
  if ( (v11 & 0x20) != 0 || (v11 & 0x800) != 0 ) /*0x63707d*/
  {
    if ( (*(_DWORD *)(v10 + 8) & 0x20) != 0 ) /*0x63847c*/
      sub_566870((TargetData **)v8, (TESForm *)v10, 1); /*0x638483*/
    goto LABEL_241; /*0x638483*/
  }
  v12 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 0x198); /*0x637085*/
  HIDWORD(v153) = 1; /*0x63708b*/
  if ( v12(v10) && !a1[0x11] ) /*0x637093*/
  {
    sub_566870((TargetData **)v8, (TESForm *)a1[0xB], 1); /*0x6370a1*/
    if ( (v8->members.packageFlags & 0x1000) == 0 ) /*0x6370af*/
    {
      ((void (__thiscall *)(Actor *, int))a2->vtbl->Unk_BE)(a2, a1[0xB]); /*0x6370c3*/
      return 0; /*0x6370ce*/
    }
    return 0; /*0x6370af*/
  }
  if ( (PlayerCharacter *)a1[0xB] == reference && v8->members.type == 0x12 ) /*0x6370e4*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 0x1CC))(a1) ) /*0x6370f0*/
    {
      Distance = TesObjectREF_GetDistance((TESObjectREFR *)reference, (TESObjectREFR *)a2, 0); /*0x6370ff*/
      if ( Distance > dbl_A6E6F8 && sub_5E05B0(reference) ) /*0x637117*/
      {
        v14 = (TESPackage *)LODWORD(v165); /*0x637120*/
        v15 = (float *)sub_566B30((TESPackage *)LODWORD(v165), (int)v163, a2); /*0x63712c*/
        Distance = TESObjectREFR::GetDistanceToPoint((float *)a2, v15); /*0x637134*/
        v165 = Distance; /*0x637139*/
        if ( v14 ) /*0x63713f*/
        {
          Distance = flt_A57FB8; /*0x637141*/
          if ( Distance < v165 ) /*0x637150*/
          {
            sub_5EAE70(a2, (int)v14, (int)a2, SHIDWORD(v153)); /*0x637154*/
            return 0; /*0x637162*/
          }
        }
      }
    }
  }
  v16 = (TESObjectCELL *)sub_566D00((char **)v8, (int)a2); /*0x637168*/
  ParentCell = v16; /*0x63716d*/
  if ( (v16 && sub_4D74B0(v16) || a2->vtbl->super.super.GetSleepState((TESObjectREFR *)a2) == kSitSleep_Sitting) /*0x6371b7*/
    && ((*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x170))(a1[0xB]) == MEMORY[0xB35EB0]
     || (TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x170))(a1[0xB]) == MEMORY[0xB35EAC]) )
  {
    (*(void (__thiscall **)(int *, TESObjectCELL *))(*a1 + 0x484))(a1, ParentCell); /*0x6371c4*/
    return 1; /*0x6371c4*/
  }
  if ( v8->members.type == 9 ) /*0x6371d6*/
  {
    v18 = (float *)sub_566B30(v8, (int)v163, a2); /*0x6371e0*/
    v19 = TESObjectREFR::GetDistanceToPoint((float *)a1[0xB], v18); /*0x6371e9*/
    v165 = (float)Double_To_SInt32(v19); /*0x6371fd*/
    sub_566DB0(v8); /*0x637201*/
    v161 = v20; /*0x637208*/
    v21 = (double)v20; /*0x63720c*/
    if ( v20 < 0 ) /*0x637210*/
      v21 = v21 + flt_A2FC78; /*0x637212*/
    Distance = v21 + dbl_A3DDE0; /*0x637218*/
    st6_0 = v165; /*0x63721e*/
    if ( v165 > Distance ) /*0x637229*/
    {
      v22 = *(void (__thiscall **)(int *))(*a1 + 0x188); /*0x63722d*/
      LODWORD(v153) = 0xFFFFFFFF; /*0x637233*/
      v152 = (TESPackage *)a2; /*0x637235*/
      v22(a1); /*0x637238*/
    }
  }
  v23 = (_DWORD *)a1[0xB]; /*0x63723a*/
  if ( v23 && TESObjectREFR_HasHorseCreatureBase(v23) ) /*0x637241*/
    v156 = a1[0xB]; /*0x63724d*/
  else
    v156 = 0; /*0x637253*/
  *(float *)&v24 = COERCE_FLOAT(TESObjectREFR_GetTeleportData((_BYTE *)a1[0xB])); /*0x63725e*/
  v25 = (_DWORD *)a1[0xB]; /*0x637263*/
  v159 = *(float *)&v24; /*0x637266*/
  v164 = 0; /*0x63726a*/
  if ( !sub_4D74B0(v25) ) /*0x63726f*/
    goto LABEL_55; /*0x63726f*/
  ParentCell = 0; /*0x63727c*/
  if ( !a1[0x48] ) /*0x63727e*/
  {
    a1[0x48] = a1[0xB]; /*0x637289*/
    *((_BYTE *)a1 + 0x124) = 0x7F; /*0x63728f*/
  }
  if ( (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) ) /*0x6372a0*/
  {
    if ( !a2->vtbl->GetMountedHorse(a2) ) /*0x6372b0*/
      v164 = 1; /*0x6372b6*/
  }
  if ( a1[0x48] /*0x6372eb*/
    && !(*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1)
    && sub_4D72C0((TESObjectREFR *)a1[0xB], *((unsigned __int8 *)a1 + 0x124))
    && !*((_BYTE *)a1 + 0xD0) )
  {
    v151 = 0.0; /*0x6372fd*/
    a1[0x48] = 0; /*0x637302*/
    sub_6FAEE0((Unk128 *)(a1 + 0x4A), v151); /*0x637308*/
    *((_BYTE *)a1 + 0x136) = 0; /*0x63730d*/
    a1[0x4A] = LODWORD(g_zeroNiPoint3); /*0x63731a*/
    a1[0x4B] = LODWORD(MEMORY[0xB3F9AC]); /*0x637323*/
    v26 = *a1; /*0x63732b*/
    a1[0x4C] = LODWORD(MEMORY[0xB3F9B0][0]); /*0x63732d*/
    v27 = *(void (__thiscall **)(int *, _DWORD))(v26 + 0x194); /*0x637330*/
    v151 = *(float *)&a2; /*0x637336*/
    *((_BYTE *)a1 + 0x124) = 0x7F; /*0x637339*/
    v27(a1, LODWORD(v151)); /*0x637340*/
    a1[0xB] = 0; /*0x637342*/
    return sub_637345((int)a2a, a5); /*0x637343*/
  }
  v28 = a2->vtbl->super.super.GetPos(a2); /*0x63735b*/
  v66 = *((_BYTE *)a1 + 0x124) == 0x7F; /*0x63735d*/
  v162[0] = *v28; /*0x637366*/
  v162[1] = v28[1]; /*0x63736d*/
  *(float *)v163 = v28[2]; /*0x637374*/
  *(float *)&v157 = 0.0; /*0x637378*/
  if ( !v66 ) /*0x63737c*/
    goto LABEL_55; /*0x63737c*/
  ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)a2); /*0x63738f*/
  if ( ParentCell != Shared_GetDwordAtOffset40((TESObjectREFR *)a1[0x48]) ) /*0x637398*/
    goto LABEL_55; /*0x637398*/
  v29 = (float *)(a1 + 0x4A); /*0x6373a2*/
  if ( !sub_4DBAE0((TESObjectREFR *)a1[0xB], v162, 1, 1, (NiPoint3 *)(a1 + 0x4A), &v157) ) /*0x6373b9*/
  {
    v151 = 0.0; /*0x637439*/
    a1[0x48] = 0; /*0x63743e*/
    sub_6FAEE0((Unk128 *)(a1 + 0x4A), v151); /*0x637444*/
    *((_BYTE *)a1 + 0x136) = 0; /*0x637449*/
    *v29 = g_zeroNiPoint3; /*0x637455*/
    a1[0x4B] = LODWORD(MEMORY[0xB3F9AC]); /*0x63745e*/
    v40 = *a1; /*0x637466*/
    a1[0x4C] = LODWORD(MEMORY[0xB3F9B0][0]); /*0x637468*/
    v41 = *(void (__thiscall **)(int *, _DWORD))(v40 + 0x194); /*0x63746b*/
    v151 = *(float *)&a2; /*0x637471*/
    *((_BYTE *)a1 + 0x124) = 0x7F; /*0x637474*/
    v41(a1, LODWORD(v151)); /*0x63747b*/
    a1[0xB] = 0; /*0x63747d*/
LABEL_241:
    v66 = v164 == 0; /*0x638488*/
LABEL_242:
    if ( v66 ) /*0x63848d*/
      return 0; /*0x63848d*/
LABEL_243:
    (*(void (__thiscall **)(int *, Actor *, int, float, int, Actor *, float, int, int, float, float, TESPackage *, _DWORD))(*a1 + 0x188))( /*0x63848f*/
      a1,
      a2,
      1,
      COERCE_FLOAT(LODWORD(v144)),
      v145,
      v146,
      COERCE_FLOAT(LODWORD(v147)),
      v148,
      v149,
      COERCE_FLOAT(LODWORD(v150)),
      COERCE_FLOAT(LODWORD(v151)),
      v152,
      LODWORD(v153));
    return 0; /*0x63849c*/
  }
  v30 = (TESObjectREFR *)a1[0xB]; /*0x6373bb*/
  ParentCell = (TESObjectCELL *)*a1; /*0x6373be*/
  a1[0x48] = (int)v30; /*0x6373c0*/
  *(float *)&v31 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace(v30)); /*0x6373c6*/
  v32 = (TESObjectREFR *)a1[0xB]; /*0x6373cb*/
  v151 = *(float *)&v31; /*0x6373ce*/
  *(float *)&v33 = COERCE_FLOAT(Shared_GetDwordAtOffset40(v32)); /*0x6373cf*/
  v34 = *v29; /*0x6373d4*/
  v35 = a1[0x4B]; /*0x6373d7*/
  v150 = *(float *)&v33; /*0x6373da*/
  v147 = v34; /*0x6373e0*/
  v36 = a1[0x4C]; /*0x6373e2*/
  v148 = v35; /*0x6373e5*/
  next = ParentCell[0xB].members.super.modlist.next; /*0x6373e8*/
  v149 = v36; /*0x6373ee*/
  v146 = a2; /*0x6373f1*/
  if ( !((unsigned __int8 (__thiscall *)(int *))next)(a1) ) /*0x6373f8*/
    return 0; /*0x6373f8*/
  v38 = a1[0xD]; /*0x6373fe*/
  *((_BYTE *)a1 + 0x124) = (_BYTE)v152; /*0x637407*/
  if ( v38 ) /*0x63740d*/
    (*(void (__thiscall **)(int, Actor *))(*(_DWORD *)v38 + 0x28))(v38, a2); /*0x637415*/
LABEL_55:
  v39 = v152; /*0x637419*/
  if ( v152->members.type == 8 && v160 ) /*0x637428*/
  {
    LOBYTE(v159) = 1; /*0x63742a*/
  }
  else if ( LODWORD(v153) ) /*0x63748a*/
  {
    v144 = COERCE_FLOAT((int)a2->vtbl->super.super.GetPos(a2)); /*0x637498*/
    v143 = (float *)&v155; /*0x63749d*/
    TESObjectREFR_GetLinkedTeleportMarkerPosition((_BYTE *)a1[0xB]); /*0x6374a1*/
    sub_4121A0(v42, (float *)&v155, (float *)LODWORD(v144)); /*0x6374a8*/
    Distance = NiPoint3_Length((float *)&v155); /*0x6374b1*/
    st6_0 = (double)stru_B36B28; /*0x6374b6*/
    if ( st6_0 >= Distance ) /*0x6374c3*/
      LOBYTE(v159) = 1; /*0x6374c5*/
  }
  else if ( !LOBYTE(v159) ) /*0x6374d1*/
  {
    LOBYTE(v159) = sub_5687D0(v152, (int)ParentCell, Distance, (TESObjectREFR *)a2); /*0x6374db*/
  }
  v43 = sub_64ADA0((Actor *)a1); /*0x6374e1*/
  v44 = v43; /*0x6374eb*/
  HIBYTE(v149) = v43; /*0x6374ed*/
  if ( !LOBYTE(v159) && !v43 )
  {
    if ( !a2->vtbl->GetMountedHorse(a2) /*0x63752f*/
      && ((*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 4 || (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 9) )
    {
LABEL_69:
      a2->vtbl->AddPackageWakeUp(a2); /*0x637531*/
      return 1; /*0x637546*/
    }
    v45 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]); /*0x63755a*/
    v46 = sub_4121A0((float *)a1 + 0x35, (float *)&v155, v45); /*0x637564*/
    v47 = NiPoint3_Length(v46); /*0x63756b*/
    v159 = v47; /*0x637570*/
    if ( !*((_BYTE *)a1 + 0xD0) )
    {
      v153 = *(float *)GameSetting_GetSafeFloatPointer((int *)flt_B36A88); /*0x63758b*/
      v48 = sub_5677B0(v152, v153, (TESObjectREFR *)a2, 1) * dbl_A31C70; /*0x637597*/
      v47 = v48 <= v153
          ? sub_5677B0(v152, v48, (TESObjectREFR *)a2, 1) * dbl_A31C70
          : *(float *)GameSetting_GetSafeFloatPointer((int *)flt_B36A88);
      if ( v159 <= v47 ) /*0x6375d1*/
      {
LABEL_89:
        if ( !*((_BYTE *)a1 + 0xD0) ) /*0x63780f*/
        {
          v77 = 0x101; /*0x637823*/
          if ( LOBYTE(a2->members.unk0B4[5]) /*0x637858*/
            || (v39->members.packageFlags & 0x2000) != 0
            || a2->vtbl->IsInCombat(a2, 1)
            || v39->members.type == 0xF
            || (v78 = a1[2]) != 0 && *(_BYTE *)(v78 + 0x20) == 0xC )
          {
            v77 = 0x201; /*0x63785a*/
          }
          if ( BYTE1(a2->members.unk0B4[5]) ) /*0x63785f*/
            (*(void (__thiscall **)(int *, int, int))(*a1 + 0x2C4))(a1, 0x400, 1); /*0x637879*/
          (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x238))(a1, a2, v77); /*0x637887*/
          v79 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]); /*0x637894*/
          v142 = *(Actor **)v79; /*0x637898*/
          v143 = *(float **)(v79 + 4); /*0x6378a5*/
          v144 = *(float *)(v79 + 8); /*0x6378ac*/
          if ( v137 ) /*0x6378b0*/
          {
            v80 = sub_625290(v137, (float *)&v145); /*0x6378b7*/
            v142 = *(Actor **)v80; /*0x6378be*/
            v143 = *((float **)v80 + 1); /*0x6378c5*/
            v144 = v80[2]; /*0x6378cc*/
          }
          v81 = *a1; /*0x6378d0*/
          v136 = sub_5677B0(v39, v47, (TESObjectREFR *)a2, 2); /*0x6378e0*/
          WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]); /*0x6378eb*/
          v82 = Shared_GetDwordAtOffset40((TESObjectREFR *)a1[0xB]); /*0x6378ec*/
          (*(void (__thiscall **)(int *, Actor *, Actor **, TESObjectCELL *, TESWorldSpace *, _DWORD))(v81 + 0x414))( /*0x637900*/
            a1,
            a2,
            &v142,
            v82,
            WorldSpace,
            LODWORD(v136));
          return 0; /*0x63790b*/
        }
        return 0; /*0x6384a1*/
      }
    }
    TeleportExtraData = TESObjectREFR_GetTeleportData((_BYTE *)a1[0xB]); /*0x6375da*/
    v50 = (_BYTE *)a1[0xB]; /*0x6375e1*/
    if ( TeleportExtraData ) /*0x6375e4*/
    {
      v51 = *a1; /*0x6375e6*/
      TESObjectREFR_GetLinkedTeleportMarkerPosition(v50); /*0x6375e8*/
      v53 = v52; /*0x6375f0*/
      *(float *)&v54 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB])); /*0x6375f2*/
      v55 = (TESObjectREFR *)a1[0xB]; /*0x6375f7*/
      v144 = *(float *)&v54; /*0x6375fa*/
      v143 = (float *)Shared_GetDwordAtOffset40(v55); /*0x637606*/
      v142 = *(Actor **)(v53 + 8); /*0x637614*/
      v137 = a2; /*0x63761d*/
      result = (*(int (__thiscall **)(int *))(v51 + 0x3DC))(a1); /*0x637620*/
      if ( !result ) /*0x637624*/
        return result; /*0x637624*/
LABEL_88:
      v76 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]); /*0x6377e4*/
      v39 = (TESPackage *)v146; /*0x6377f3*/
      a1[0x35] = *v76; /*0x6377f7*/
      a1[0x36] = v76[1]; /*0x637800*/
      a1[0x37] = v76[2]; /*0x637809*/
      goto LABEL_89; /*0x637809*/
    }
    if ( !sub_4D74B0(v50) ) /*0x63763b*/
    {
      if ( v150 == 0.0 ) /*0x637746*/
      {
        v71 = *a1; /*0x6377a3*/
        v72 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]); /*0x6377aa*/
        *(float *)&v73 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB])); /*0x6377ac*/
        v74 = (TESObjectREFR *)a1[0xB]; /*0x6377b1*/
        v144 = *(float *)&v73; /*0x6377b4*/
        v143 = (float *)Shared_GetDwordAtOffset40(v74); /*0x6377c0*/
        v75 = *(unsigned __int8 (__thiscall **)(int *))(v71 + 0x3DC); /*0x6377ce*/
        v142 = *(Actor **)(v72 + 8); /*0x6377d4*/
        v137 = a2; /*0x6377d7*/
        if ( !v75(a1) ) /*0x6377de*/
          return 0; /*0x6377de*/
      }
      else
      {
        sub_625290((void *)LODWORD(v150), (float *)&v155); /*0x63774d*/
        v67 = *a1; /*0x637755*/
        *(float *)&v68 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB])); /*0x637757*/
        v69 = (TESObjectREFR *)a1[0xB]; /*0x63775c*/
        v144 = *(float *)&v68; /*0x63775f*/
        v143 = (float *)Shared_GetDwordAtOffset40(v69); /*0x63776d*/
        v70 = *(int (__thiscall **)(int *))(v67 + 0x3DC); /*0x63777c*/
        v142 = v157; /*0x637782*/
        v137 = a2; /*0x637785*/
        result = v70(a1); /*0x637788*/
        if ( !result ) /*0x63778c*/
          return result; /*0x63778c*/
      }
      goto LABEL_88; /*0x63778c*/
    }
    v56 = a2->vtbl->super.super.GetPos(a2); /*0x63764b*/
    v155 = *(_DWORD *)v56; /*0x63764f*/
    v57 = *((_DWORD *)v56 + 1); /*0x637653*/
    v144 = COERCE_FLOAT(&v159); /*0x63765a*/
    v58 = (TESObjectREFR *)a1[0xB]; /*0x63765b*/
    v143 = (float *)(a1 + 0x4A); /*0x637664*/
    v142 = (Actor *)1; /*0x637665*/
    v156 = v57; /*0x637667*/
    v157 = *((Actor **)v56 + 2); /*0x637675*/
    v159 = 0.0; /*0x637679*/
    if ( sub_4DBAE0(v58, (float *)&v155, 1, 1, (NiPoint3 *)(a1 + 0x4A), &v159) ) /*0x637681*/
    {
      v59 = *a1; /*0x63768d*/
      *(float *)&v60 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB])); /*0x63768f*/
      v61 = (TESObjectREFR *)a1[0xB]; /*0x637694*/
      v144 = *(float *)&v60; /*0x637697*/
      v143 = (float *)Shared_GetDwordAtOffset40(v61); /*0x6376a3*/
      v62 = *(unsigned __int8 (__thiscall **)(int *))(v59 + 0x3DC); /*0x6376b1*/
      v142 = *((Actor **)a1 + 0x4C); /*0x6376b7*/
      v137 = a2; /*0x6376ba*/
      if ( !v62(a1) ) /*0x6376c1*/
        return 0; /*0x6376c1*/
      v63 = a1[0xD]; /*0x6376c7*/
      *((_BYTE *)a1 + 0x124) = BYTE4(v153); /*0x6376d0*/
      if ( v63 ) /*0x6376d6*/
        (*(void (__thiscall **)(int, Actor *))(*(_DWORD *)v63 + 0x28))(v63, a2); /*0x6376e2*/
      goto LABEL_88; /*0x6376e6*/
    }
    v144 = 0.0; /*0x6376f0*/
    a1[0x48] = 0; /*0x6376f5*/
    sub_6FAEE0((Unk128 *)(a1 + 0x4A), v144); /*0x6376fb*/
    *((_BYTE *)a1 + 0x136) = 0; /*0x637700*/
    a1[0x4A] = LODWORD(g_zeroNiPoint3); /*0x63770c*/
    a1[0x4B] = LODWORD(MEMORY[0xB3F9AC]); /*0x637715*/
    v64 = *a1; /*0x63771d*/
    a1[0x4C] = LODWORD(MEMORY[0xB3F9B0][0]); /*0x63771f*/
    v65 = *(void (__thiscall **)(int *, _DWORD))(v64 + 0x194); /*0x637722*/
    v144 = *(float *)&a2; /*0x637728*/
    *((_BYTE *)a1 + 0x124) = 0x7F; /*0x63772b*/
    v65(a1, LODWORD(v144)); /*0x637732*/
    v66 = LOBYTE(v159) == 0; /*0x637734*/
    a1[0xB] = 0; /*0x637738*/
    goto LABEL_242; /*0x63773b*/
  }
  if ( !*((_BYTE *)a1 + 0xD0) ) /*0x63790e*/
    (*(void (__thiscall **)(int *, Actor *))(*a1 + 0x194))(a1, a2); /*0x637922*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x170))(a1[0xB]) == MEMORY[0xB35EB0] /*0x63793f*/
    && !sub_64ADA0((Actor *)a1) )
  {
    v158 = *(float *)(a1[0xB] + 0x28); /*0x637952*/
    v83 = v158; /*0x637960*/
    v84 = dbl_A3D5B0; /*0x637965*/
    if ( v158 >= 0.0 ) /*0x63796b*/
    {
      if ( v84 <= v83 ) /*0x637991*/
      {
        unknown_libname_14(v84, v83); /*0x637993*/
        v158 = v83; /*0x637998*/
        v83 = v158; /*0x6379a4*/
      }
    }
    else
    {
      unknown_libname_14(v84, v83); /*0x63796d*/
      v158 = v83; /*0x637972*/
      v158 = v158 + dbl_A3D5B0; /*0x637980*/
      v83 = v158; /*0x637984*/
    }
    *(float *)&v152 = 0.0; /*0x6379b3*/
    *(float *)&v142 = v83; /*0x6379b8*/
    sub_683D80((int)a2, *(float *)&v142, (float *)&v152); /*0x6379bc*/
    v151 = v83; /*0x6379c1*/
    v151 = fabs(v151); /*0x6379ce*/
    Distance = v151; /*0x6379d2*/
    v151 = (double)MEMORY[0xB36C18] * dbl_A31C78; /*0x6379e2*/
    st6_0 = v151; /*0x6379e6*/
    if ( v151 < Distance ) /*0x6379f1*/
    {
      sub_685530(a2, v158, 1); /*0x6379fe*/
      return 1; /*0x637a0f*/
    }
    sub_5E05F0(a2, 0x30); /*0x637a16*/
  }
  v85 = (Actor *)a1[0xB]; /*0x637a1b*/
  if ( v85 != a2 /*0x637a47*/
    && v85->vtbl->super.super.IsActor((TESObjectREFR *)v85)
    && a2->vtbl->super.super.GetSleepState((TESObjectREFR *)a2) != kSitSleep_Sitting )
  {
    if ( !a2->vtbl->GetMountedHorse(a2) && (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 9 ) /*0x637a6c*/
      goto LABEL_69; /*0x637a6c*/
    v86 = (int *)a1[0xB]; /*0x637a7a*/
    v87 = a2->vtbl->super.super.GetPos(a2); /*0x637a7f*/
    v88 = *v86; /*0x637a81*/
    v143 = v87; /*0x637a83*/
    v89 = (float *)(*(int (__thiscall **)(int *))(v88 + 0x174))(v86); /*0x637a91*/
    sub_4121A0(v89, (float *)&v154, v143); /*0x637a95*/
    v151 = Vector3_CalculateHeadingRadiansXY((float *)&v154); /*0x637aa4*/
    *(float *)&v152 = 0.0; /*0x637ab1*/
    sub_683D80((int)a2, v151, (float *)&v152); /*0x637abf*/
    v150 = v151; /*0x637ac4*/
    v158 = (double)MEMORY[0xB36C10] * dbl_A31C78; /*0x637ad9*/
    if ( sub_5E0590(a2) ) /*0x637add*/
      v158 = (double)MEMORY[0xB36C18] * dbl_A31C78; /*0x637af2*/
    v150 = fabs(v150); /*0x637afc*/
    Distance = v150; /*0x637b00*/
    st6_0 = v158; /*0x637b04*/
    if ( v158 < (double)v150 ) /*0x637b0f*/
    {
      sub_685530(a2, v151, 1); /*0x637b1c*/
      return 1; /*0x637b2d*/
    }
    sub_5E05F0(a2, 0x30); /*0x637b34*/
    v44 = HIBYTE(v148); /*0x637b39*/
  }
  v90 = a1[2]; /*0x637b3d*/
  if ( v90 && *(_BYTE *)(v90 + 0x20) == 0x12 && sub_64ADA0((Actor *)a1) ) /*0x637b4c*/
    goto LABEL_168; /*0x637b53*/
  if ( LOBYTE(v159) ) /*0x637b5e*/
  {
    if ( Actor_IsNPC(a2) && (v91 = (PlayerCharacter *)a1[0xB]) != 0 && v91 == reference ) /*0x637b7c*/
    {
      if ( !v44 ) /*0x637b80*/
      {
        result = ((int (__thiscall *)(LowProcess *, int))v91->super.super.super.process->Unk_B7)( /*0x637b92*/
                   v91->super.super.super.process,
                   a1[0xB]);
        if ( !result ) /*0x637b96*/
          return result; /*0x637b96*/
        goto LABEL_134; /*0x637b96*/
      }
    }
    else if ( !v44 ) /*0x637ba4*/
    {
LABEL_134:
      if ( a1[0x11] ) /*0x637baa*/
      {
        v92 = a2->vtbl->super.super.GetAnimData(a2); /*0x637bbe*/
        v93 = v92; /*0x637bc7*/
        if ( !*((_BYTE *)a1 + 0x25D) ) /*0x637bc0*/
        {
          v94 = *(void (__thiscall **)(int *, Actor *))(*a1 + 0x594); /*0x637bcd*/
          v142 = a2; /*0x637bd3*/
          *((_BYTE *)a1 + 0x25D) = 1; /*0x637bd6*/
          v94(a1, v142); /*0x637bdd*/
          (*(void (__thiscall **)(int *, int))(*a1 + 0x484))(a1, a1[0xB]); /*0x637bed*/
          v139 = (Actor *)a1[0xB]; /*0x637bfa*/
          v95 = ((int (*)(void))v139->vtbl->super.super.GetBaseForm)(); /*0x637bfb*/
          sub_6286E0(a1, (int)a2, v95, v139); /*0x637c01*/
          return 0; /*0x637c0f*/
        }
        if ( v92 ) /*0x637c14*/
        {
          if ( ActorAnimData_IsIdleInactive(v92) ) /*0x637c18*/
          {
            ActivateRef( /*0x637c31*/
              *(TESObjectREFR **)a1[0x11],
              v6,
              st6_0,
              Distance,
              (TESObjectREFR *)a2,
              1,
              *(_DWORD *)(a1[0x11] + 4),
              *(_DWORD *)(a1[0x11] + 0x10));
            v96 = *(void (__thiscall **)(int *))(*a1 + 0x49C); /*0x637c38*/
            --a1[0xE]; /*0x637c3e*/
            *((_BYTE *)a1 + 0x25D) = 0; /*0x637c44*/
            v96(a1); /*0x637c4b*/
          }
        }
        if ( a1[0xE] <= 0 && (!v93 || ActorAnimData_IsIdleInactive(v93)) ) /*0x637c5d*/
        {
          (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a2, 1); /*0x637c77*/
          (*(void (__thiscall **)(int *, int))(*a1 + 0x394))(a1, 1); /*0x637c85*/
          *((_BYTE *)a1 + 0x25D) = 0; /*0x637c87*/
        }
        goto LABEL_234; /*0x637c8e*/
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB]) /*0x637cab*/
        && !sub_4D74B0((_DWORD *)a1[0xB]) )
      {
        v97 = a2->vtbl->super.super.GetAnimData(a2); /*0x637cc2*/
        if ( !*((_BYTE *)a1 + 0x25D) ) /*0x637cc4*/
        {
          v98 = *(void (__thiscall **)(int *, Actor *))(*a1 + 0x594); /*0x637ccf*/
          v142 = a2; /*0x637cd5*/
          *((_BYTE *)a1 + 0x25D) = 1; /*0x637cd8*/
          v98(a1, v142); /*0x637cdf*/
          (*(void (__thiscall **)(int *, int))(*a1 + 0x484))(a1, a1[0xB]); /*0x637cef*/
          v140 = (Actor *)a1[0xB]; /*0x637cfc*/
          v99 = ((int (*)(void))v140->vtbl->super.super.GetBaseForm)(); /*0x637cfd*/
          sub_6286E0(a1, (int)a2, v99, v140); /*0x637d03*/
          return 0; /*0x637d11*/
        }
        if ( !v97 || ActorAnimData_IsIdleInactive(v97) ) /*0x637d1a*/
        {
          (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a2, 1); /*0x637d34*/
          v100 = a1[0x11]; /*0x637d36*/
          if ( v100 ) /*0x637d3b*/
          {
            v141 = *(_DWORD *)(v100 + 0x10); /*0x637d43*/
            v138 = *(_DWORD *)(v100 + 4); /*0x637d44*/
          }
          else
          {
            v141 = 1; /*0x637d47*/
            v138 = 0; /*0x637d49*/
          }
          ActivateRef((TESObjectREFR *)a1[0xB], v6, st6_0, Distance, (TESObjectREFR *)a2, 1, v138, v141);// BunkFix: ActivateRef call from shared movement/activation executor. Target is the furniture reference in process target field, not an individual bunk marker. /*0x637d51*/
          (*(void (__thiscall **)(int *, int))(*a1 + 0x394))(a1, 1); /*0x637d62*/
          (*(void (__thiscall **)(int *))(*a1 + 0x49C))(a1); /*0x637d6e*/
          *((_BYTE *)a1 + 0x25D) = 0; /*0x637d70*/
        }
        goto LABEL_234; /*0x637d77*/
      }
      if ( sub_4D74B0((_DWORD *)a1[0xB]) ) /*0x637d7f*/
      {
        if ( (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) != 4 /*0x637dac*/
          && (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) != 9 )
        {
          goto LABEL_157; /*0x637dac*/
        }
        (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a2, 1); /*0x637df8*/
        goto LABEL_160; /*0x637df8*/
      }
      GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x637e19*/
      *((float *)a1 + 0x66) = GameHour; /*0x637e1e*/
      if ( !Actor_IsNPC(a2) && Actor_IsNPC((Actor *)a1[0xB]) ) /*0x637e32*/
      {
        ActivateRef((TESObjectREFR *)a1[0xB], v6, st6_0, GameHour, (TESObjectREFR *)a2, 0, 0, 1); /*0x637e45*/
        return 1; /*0x637e53*/
      }
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x18C))(a1[0xB]) /*0x637e89*/
        || (*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x18C))(a1[0xB]) == 4
        || (*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x18C))(a1[0xB]) == 9 )
      {
        if ( v39->members.procedureArrayIndex == 0x16 /*0x637ecc*/
          && sub_565DF0(v39)
          && v39 != (TESPackage *)0xFFFFFFD4
          && !v39->members.time.duration )
        {
          (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a2, 2); /*0x637edf*/
          GameHour = TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x637ee6*/
          ExtraDataList_SetRunOnceExtraPackage(&a2->members.super.super.baseExtraList, (int)v39, v102); /*0x637ef0*/
        }
        if ( !TESPackage_IsRuntimePackage(v39) ) /*0x637ef7*/
        {
          if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a1[0xB] + 0x198))(a1[0xB], 1) ) /*0x637f0d*/
          {
            if ( !a1[0x11] ) /*0x637f13*/
              sub_566870((TargetData **)v39, (TESForm *)a1[0xB], 1); /*0x637f21*/
          }
        }
        ActivateRef((TESObjectREFR *)a1[0xB], v6, st6_0, GameHour, (TESObjectREFR *)a2, 1, 0, 1);// BunkFix: alternate ActivateRef call from shared movement/activation executor. For bunk beds the actor must still be able to path/reach the furniture reference before marker-specific top/bottom selection occurs. /*0x637f30*/
        return 1; /*0x637f3e*/
      }
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1[0xB] + 0x58) + 0x1B0))( /*0x637e9a*/
        *(_DWORD *)(a1[0xB] + 0x58),
        a1[0xB]);
LABEL_168:
      a2->vtbl->CleanupCurrentPackage(a2); /*0x637e9c*/
      return 0; /*0x637eb1*/
    }
    if ( (v39->members.packageFlags & 4) != 0 ) /*0x637f4a*/
    {
      v119 = *a1; /*0x6381b7*/
      v120 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]); /*0x6381be*/
      v121 = (float *)TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]); /*0x6381c0*/
      v122 = (TESObjectREFR *)a1[0xB]; /*0x6381c5*/
      v143 = v121; /*0x6381c8*/
      v123 = Shared_GetDwordAtOffset40(v122); /*0x6381c9*/
      (*(void (__thiscall **)(int *, Actor *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, float *))(v119 + 0x3DC))( /*0x6381ed*/
        a1,
        a2,
        *v120,
        v120[1],
        v120[2],
        v123,
        v143);
      return 0; /*0x6381f8*/
    }
    if ( v39->members.type == 2 ) /*0x637f54*/
    {
      v103 = a1[0xB]; /*0x637f56*/
      if ( v103 ) /*0x637f5b*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v103 + 0x190))(v103) ) /*0x637f69*/
        {
          v104 = a1[0xB]; /*0x637f73*/
          if ( v104 ) /*0x637f78*/
          {
            (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v104 + 0x58) + 0x188))( /*0x637f8c*/
              *(_DWORD *)(v104 + 0x58),
              v104,
              1);
            return 1; /*0x637f97*/
          }
        }
      }
      return 1; /*0x6371cf*/
    }
    v108 = *(void (__thiscall **)(int *))(*a1 + 0x49C); /*0x6380dd*/
    *((_BYTE *)a1 + 0x25D) = 0; /*0x6380e5*/
    v108(a1); /*0x6380ec*/
    if ( a1[0x11] ) /*0x6380ee*/
    {
      if ( a1[0xE] > 0 ) /*0x6380fa*/
      {
        v143 = (float *)a1[0x11]; /*0x63811e*/
        a1[0xB] = 0; /*0x63811f*/
        FormHeapFree((unsigned int)v143); /*0x638122*/
        a1[0x11] = 0; /*0x63812a*/
      }
      else
      {
        procedureArrayIndex = v39->members.procedureArrayIndex; /*0x6380fc*/
        v110 = *a1; /*0x6380ff*/
        v111 = sub_673980(procedureArrayIndex); /*0x638102*/
        (*(void (__thiscall **)(int *, int))(v110 + 0x17C))(a1, v111 - 1); /*0x638116*/
      }
    }
    if ( !a1[0xB] ) /*0x638131*/
      return 1; /*0x638131*/
    v112 = (_BYTE *)(*(int (__thiscall **)(int *))(*a1 + 0x410))(a1); /*0x638141*/
    v113 = v112; /*0x638143*/
    if ( v112 ) /*0x638147*/
    {
      if ( sub_683A70(v112) ) /*0x63814b*/
        sub_683A80(v113, 0); /*0x638158*/
    }
LABEL_195:
    v114 = *a1; /*0x63815d*/
    v115 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]); /*0x63816f*/
    *(float *)&v116 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB])); /*0x638171*/
    v117 = (TESObjectREFR *)a1[0xB]; /*0x638176*/
    v142 = (Actor *)v116; /*0x638179*/
    v118 = Shared_GetDwordAtOffset40(v117); /*0x63817a*/
    (*(void (__thiscall **)(int *, Actor *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, Actor *))(v114 + 0x3DC))( /*0x63819e*/
      a1,
      a2,
      *v115,
      v115[1],
      v115[2],
      v118,
      v142);
    return 0; /*0x6381a9*/
  }
  if ( v44 ) /*0x6381fd*/
  {
    if ( (v39->members.packageFlags & 4) != 0 ) /*0x638400*/
      goto LABEL_195; /*0x638400*/
    if ( v39->members.type == 2 ) /*0x63840a*/
    {
      v132 = a1[0xB]; /*0x63840c*/
      if ( v132 ) /*0x638411*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v132 + 0x190))(v132) ) /*0x63841b*/
        {
          v133 = a1[0xB]; /*0x638421*/
          if ( v133 ) /*0x638426*/
            (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v133 + 0x58) + 0x188))( /*0x638436*/
              *(_DWORD *)(v133 + 0x58),
              v133,
              1);
        }
      }
    }
  }
  else
  {
    if ( sub_4D74B0((_DWORD *)a1[0xB]) ) /*0x638206*/
    {
      if ( (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) != 4 /*0x638233*/
        && (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) != 9 )
      {
LABEL_157:
        if ( !(*(unsigned __int8 (__thiscall **)(int *, Actor *))(*a1 + 0x1B4))(a1, a2) ) /*0x637db9*/
        {
          (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a2, 1); /*0x637dd0*/
          (*(void (__thiscall **)(int *, Actor *))(*a1 + 0x194))(a1, a2); /*0x637ddd*/
          return 1; /*0x637de8*/
        }
        goto LABEL_234; /*0x637dbd*/
      }
LABEL_160:
      (*(void (__thiscall **)(int *, int))(*a1 + 0x394))(a1, 1); /*0x637dfa*/
      return 1; /*0x637e11*/
    }
    if ( a1[0x11] ) /*0x63823e*/
    {
      v124 = a2->vtbl->super.super.GetAnimData(a2); /*0x638252*/
      if ( !*((_BYTE *)a1 + 0x25D) ) /*0x63825b*/
      {
        v105 = *(void (__thiscall **)(int *, float *))(*a1 + 0x594); /*0x637fb8*/
        v143 = (float *)a2; /*0x637fbe*/
        *((_BYTE *)a1 + 0x25D) = 1; /*0x637fc1*/
        v105(a1, v143); /*0x637fc8*/
        v106 = *(int (**)(void))(*(_DWORD *)a1[0xB] + 0x170); /*0x637fcf*/
        v142 = *((Actor **)a1 + 0xB); /*0x637fd5*/
        v107 = v106(); /*0x637fd6*/
        sub_6286E0(a1, (int)a2, v107, v142); /*0x637fdc*/
        (*(void (__thiscall **)(int *, int))(*a1 + 0x484))(a1, a1[0xB]); /*0x637fef*/
        return 0; /*0x637ffa*/
      }
      if ( !v124 || ActorAnimData_IsIdleInactive(v124) ) /*0x638267*/
      {
        if ( ActivateRef( /*0x638286*/
               (TESObjectREFR *)a1[0xB],
               v6,
               st6_0,
               Distance,
               (TESObjectREFR *)a2,
               0,
               *(_DWORD *)(a1[0x11] + 4),
               *(_DWORD *)(a1[0x11] + 0x10)) )
        {
          v125 = a1[0x11]; /*0x63828f*/
          if ( v125 ) /*0x638294*/
          {
            if ( a1[0xE] <= *(_DWORD *)(v125 + 0x10) ) /*0x63829c*/
              (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a2, 1); /*0x6382ab*/
          }
          if ( a1[0x11] ) /*0x6382ad*/
            FormHeapFree(a1[0x11]); /*0x6382b5*/
          a1[0x11] = 0; /*0x6382bd*/
        }
        v126 = *(void (__thiscall **)(int *))(*a1 + 0x49C); /*0x6382c2*/
        a1[0xB] = 0; /*0x6382ca*/
        *((_BYTE *)a1 + 0x25D) = 0; /*0x6382cd*/
        v126(a1); /*0x6382d4*/
      }
    }
    else
    {
      if ( v39->members.type == 7 ) /*0x6382df*/
      {
        (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a2, 1); /*0x6382ee*/
        (*(void (__thiscall **)(int *, Actor *))(*a1 + 0x194))(a1, a2); /*0x6382fb*/
        return 1; /*0x638306*/
      }
      if ( Actor_IsNPC((Actor *)a1[0xB]) ) /*0x63830c*/
      {
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x18C))(a1[0xB]) /*0x638348*/
          || (*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x18C))(a1[0xB]) == 4
          || (*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x18C))(a1[0xB]) == 9 )
        {
          ActivateRef((TESObjectREFR *)a1[0xB], v6, st6_0, Distance, (TESObjectREFR *)a2, 0, 0, 1); /*0x638358*/
        }
      }
      else
      {
        v127 = a2->vtbl->super.super.GetAnimData(a2); /*0x63836c*/
        if ( !*((_BYTE *)a1 + 0x25D) ) /*0x63836e*/
        {
          v128 = *(void (__thiscall **)(int *, float *))(*a1 + 0x594); /*0x638379*/
          v143 = (float *)a2; /*0x63837f*/
          *((_BYTE *)a1 + 0x25D) = 1; /*0x638382*/
          v128(a1, v143); /*0x638389*/
          if ( !v148 ) /*0x638390*/
          {
            v129 = *(int (**)(void))(*(_DWORD *)a1[0xB] + 0x170); /*0x638397*/
            v142 = *((Actor **)a1 + 0xB); /*0x63839d*/
            v130 = v129(); /*0x63839e*/
            sub_6286E0(a1, (int)a2, v130, v142); /*0x6383a4*/
          }
          (*(void (__thiscall **)(int *, int))(*a1 + 0x484))(a1, a1[0xB]); /*0x6383b7*/
          return 0; /*0x6383c2*/
        }
        if ( v127 ) /*0x6383c7*/
        {
          if ( ActorAnimData_IsIdleInactive(v127) ) /*0x6383cb*/
          {
            v131 = ((double (__thiscall *)(int *))*(_DWORD *)(*a1 + 0x49C))(a1); /*0x6383de*/
            ActivateRef((TESObjectREFR *)a1[0xB], v6, st6_0, v131, (TESObjectREFR *)a2, 0, 0, 1); /*0x6383ea*/
            *((_BYTE *)a1 + 0x25D) = 0; /*0x6383ef*/
          }
        }
      }
    }
  }
LABEL_234:
  v134 = a2->vtbl->super.super.GetAnimData(a2); /*0x638438*/
  if ( v134 && !ActorAnimData_IsIdleInactive(v134) ) /*0x638453*/
    return 0; /*0x638453*/
  if ( a1[0x11] ) /*0x638455*/
    FormHeapFree(a1[0x11]); /*0x63845d*/
  a1[0x11] = 0; /*0x638465*/
  a1[0xB] = 0; /*0x638468*/
  a1[0x12] = 0; /*0x63846b*/
  return 1; /*0x6370c7*/
}
