void __userpurge sub_620290(int a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4@<edi>, float a5, int a6, float a7)
{
  bool v8; // c0
  bool v9; // c3
  int *v10; // edi
  TESObjectREFR *v11; // eax
  char v12; // bl
  int v13; // edi
  double v14; // st7
  int v15; // ecx
  _WORD *v16; // eax
  __int16 AnimGroupFromField8Value; // ax
  bool v18; // al
  int v19; // ecx
  _DWORD *v20; // eax
  _DWORD **v21; // eax
  _DWORD **v22; // eax
  _DWORD **v23; // eax
  _DWORD **v24; // eax
  int v25; // eax
  _DWORD *v26; // eax
  void **v27; // ebp
  bool v28; // bl
  int v29; // eax
  void *v30; // edi
  int v31; // ebp
  char v32; // al
  float v33; // edx
  int v34; // eax
  int *v35; // eax
  int *v36; // ecx
  int v37; // eax
  int *v38; // edi
  int v39; // ebp
  int *v40; // eax
  void *v41; // edi
  int *v42; // eax
  int v43; // eax
  int v44; // eax
  Concurrency::details::SchedulerBase *v45; // eax
  _DWORD **v46; // eax
  Concurrency::details::SchedulerBase *v47; // eax
  _DWORD **v48; // eax
  double v49; // st7
  double v50; // st6
  double v51; // st5
  bool v52; // zf
  double v53; // rt1
  double v54; // st5
  int v55; // edi
  double v56; // st7
  _DWORD **v57; // eax
  int v58; // eax
  int v59; // eax
  double v60; // st7
  bool v61; // c0
  double v62; // st6
  double v63; // st5
  int v64; // ebp
  double v65; // rtt
  double v66; // st6
  double v67; // st7
  int v68; // edi
  double v69; // st7
  double v70; // st6
  double v71; // st7
  int v72; // ebx
  int v73; // eax
  int *v74; // ecx
  double v75; // st7
  double v76; // st6
  double (__thiscall **v77)(int, int, int, _DWORD); // edi
  int v78; // eax
  double v79; // st7
  int v80; // eax
  double v81; // st6
  int v82; // eax
  void *v83; // eax
  int v84; // eax
  void *v85; // ecx
  int *v86; // edi
  int *v87; // ebx
  int v88; // [esp+24h] [ebp-64h]
  int v89; // [esp+24h] [ebp-64h]
  int v90; // [esp+28h] [ebp-60h]
  int SchoolAV; // [esp+28h] [ebp-60h]
  int v92; // [esp+28h] [ebp-60h]
  char v93; // [esp+2Ch] [ebp-5Ch]
  char v94; // [esp+30h] [ebp-58h]
  float v95; // [esp+30h] [ebp-58h]
  float v96; // [esp+34h] [ebp-54h]
  float v97; // [esp+34h] [ebp-54h]
  int v98; // [esp+3Ch] [ebp-4Ch]
  int v99; // [esp+3Ch] [ebp-4Ch]
  char v100; // [esp+3Ch] [ebp-4Ch]
  int v101; // [esp+40h] [ebp-48h]
  char v102; // [esp+48h] [ebp-40h]
  char v103; // [esp+49h] [ebp-3Fh]
  char v104; // [esp+4Bh] [ebp-3Dh]
  float v105; // [esp+4Ch] [ebp-3Ch]
  float v106; // [esp+50h] [ebp-38h]
  char v107; // [esp+52h] [ebp-36h]
  float v108; // [esp+54h] [ebp-34h]
  double v109; // [esp+5Ch] [ebp-2Ch] BYREF
  char v110[8]; // [esp+64h] [ebp-24h]
  float v111; // [esp+6Ch] [ebp-1Ch]
  float v112; // [esp+70h] [ebp-18h]
  float v113; // [esp+74h] [ebp-14h]
  double v114; // [esp+78h] [ebp-10h]
  double v115; // [esp+80h] [ebp-8h]

  if ( *(_DWORD *)(a1 + 0x74) != 3 )
    return;
  if ( !sub_6135F0(a1) )
    return;
  v101 = a4;
  v8 = *(float *)(a1 + 0x184) > 0.0;
  v9 = 0.0 == *(float *)(a1 + 0x184);
  *(_DWORD *)(a1 + 0x50) = 0xFF;
  if ( !v8 && !v9 )
  {
    v10 = *(int **)(a1 + 0x3C);
    v11 = (TESObjectREFR *)sub_6135F0(a1);
    *(float *)(a1 + 0x184) = TESObjectREFR_GetDistanceBetween_(v10, (TESObjectREFR *)v10, v11, 0, v101);
  }
  v98 = a2;
  v12 = LOBYTE(a5);
  v113 = *(float *)(a1 + 0x184);
  if ( LOBYTE(a5) )
  {
    v13 = *(_DWORD *)(a1 + 0x3C);
    v114 = ((double (__thiscall *)(int, int))*(_DWORD *)(*(_DWORD *)v13 + 0x26C))(v13, v98);
    v14 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v13 + 0xEC))(v13) * v114;
  }
  else
  {
    v14 = sub_615520(a1);
  }
  v15 = *(_DWORD *)(a1 + 0x3C);
  v111 = v14;
  v16 = (_WORD *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v15 + 0x164))(v15, 3);
  AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v16, v98);
  v18 = sub_51AC80(AnimGroupFromField8Value);
  v19 = *(_DWORD *)(a1 + 0x3C);
  LOBYTE(v113) = v18;
  v20 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x164))(v19);
  BYTE1(v105) = ActorAnimData_GetSomethingFromField8Value(v20, 3) == 2;
  HIBYTE(v105) = Actor_GetCurrentAction(*(_DWORD ***)(a1 + 0x3C)) == 3;
  if ( Actor_GetCurrentAction(*(_DWORD ***)(a1 + 0x3C)) == 7
    || (LOBYTE(v105) = 0, Actor_GetCurrentAction(*(_DWORD ***)(a1 + 0x3C)) == 8) )
  {
    LOBYTE(v105) = 1;
  }
  v21 = (_DWORD **)sub_6135F0(a1);
  LOBYTE(v111) = sub_5E5640(v21);
  v22 = (_DWORD **)sub_6135F0(a1);
  BYTE4(v114) = Actor_GetCurrentAction(v22) == 3;
  v23 = (_DWORD **)sub_6135F0(a1);
  if ( Actor_GetCurrentAction(v23) == 7
    || (v24 = (_DWORD **)sub_6135F0(a1), v110[4] = 0, Actor_GetCurrentAction(v24) == 8) )
  {
    v110[4] = 1;
  }
  v25 = sub_6135F0(a1);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v25 + 0x334))(v25, 1);
  v26 = (_DWORD *)sub_6135F0(a1);
  Actor_IsBlocking(v26);
  sub_612D60((_DWORD *)a1);
  if ( !sub_613440((void **)a1, v113, v111, 0) )
    return;
  v27 = (void **)(*(int (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xF8))(
                   *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
                   1,
                   a3,
                   v99);
  *(_DWORD *)v110 = v27;
  v28 = v12 && !sub_612D60((_DWORD *)a1);
  if ( !LOBYTE(a7) && (sub_612D60((_DWORD *)a1) || !*(_DWORD *)(a1 + 0x70)) || v28 )
  {
    v29 = sub_6135F0(a1);
    v30 = *(void **)(a1 + 0x3C);
    v31 = *(_DWORD *)(a1 + 0x70);
    v32 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v29 + 0x19C))(v29, LODWORD(v109));
    LOBYTE(v33) = v31 == 0;
    v100 = v32;
    v96 = v33;
    v90 = (*(int (__thiscall **)(void *))(*(_DWORD *)v30 + 0x284))(v30);
    sub_613780((void **)a1);
    v88 = v34;
    v35 = sub_5E0F50(v30);
    sub_546800(v35, v88, v90, 7, v113, v96, v112, v100);
    v27 = *(void ***)v110;
  }
  v36 = *(int **)(a1 + 0x7C);
  a7 = 0.0;
  if ( v36 )
  {
    if ( *(float *)(a1 + 0x108) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0x104) )
    {
      if ( sub_613BB0((_DWORD *)a1, v36, 0, 0) )
      {
        v37 = sub_6135F0(a1);
        v38 = *(int **)(a1 + 0x3C);
        v39 = *v38;
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v37 + 0x19C))(v37, 0, v101);
        v93 = (*(int (__thiscall **)(int *))(*v38 + 0x284))(v38);
        SchoolAV = EffectItemList_GetSchoolAV();
        v89 = (*(int (__thiscall **)(int *))(v39 + 0x284))(v38);
        v40 = sub_5E0F50(v38);
        a7 = sub_546800(v40, v89, SchoolAV, v93, COERCE_FLOAT(7), *(float *)&v114, 0.0, SLOBYTE(v113));
        v27 = *(void ***)v110;
      }
    }
  }
  if ( !v107 && (PlayerCharacter *)sub_6135F0(a1) != TESDataHandler_g_PlayerRef )
  {
    if ( *(_DWORD *)(a1 + 0x7C) )
    {
      if ( a7 > 0.0 )
        a7 = fCostant_100 + a7;
    }
  }
  v41 = *(void **)(a1 + 0x3C);
  v94 = (*(int (__thiscall **)(void *))(*(_DWORD *)v41 + 0x284))(v41);
  v92 = (*(int (__thiscall **)(void *))(*(_DWORD *)v41 + 0x284))(v41);
  v42 = sub_5E0F50(v41);
  v106 = sub_546D40(v42, v92, 0xF, v94, COERCE_FLOAT(7));
  if ( v104 )
    a5 = 0.0;
  v43 = sub_6135F0(a1);
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v43 + 0x1A0))(v43)
    || (v44 = sub_6135F0(a1), (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v44 + 0x19C))(v44))
    || (v45 = (Concurrency::details::SchedulerBase *)sub_6135F0(a1),
        Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(v45) == (struct Concurrency::details::ScheduleGroupBase *)3)
    || (v46 = (_DWORD **)sub_6135F0(a1), sub_5E0F30(v46))
    || (v47 = (Concurrency::details::SchedulerBase *)sub_6135F0(a1),
        Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(v47) == (struct Concurrency::details::ScheduleGroupBase *)5)
    || (v48 = (_DWORD **)sub_6135F0(a1), !Actor_IsWeaponOut(v48)) )
  {
    v49 = 0.0;
    v106 = 0.0;
  }
  else
  {
    v49 = 0.0;
  }
  v50 = v105;
  if ( !LOBYTE(v112) || (v51 = a5, a5 >= v50) )
  {
    v49 = 0.0;
    if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2DC))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) )
    {
LABEL_48:
      v52 = *(_BYTE *)(a1 + 0x158) == 0;
      v105 = v49;
      a5 = v49;
      if ( v52 )
        v106 = v49;
      v50 = v105;
      goto LABEL_60;
    }
    v50 = v105;
    v51 = a5;
  }
  if ( !*(_BYTE *)(a1 + 0x158) )
    goto LABEL_48;
  if ( v51 > v49 )
  {
    v53 = v51;
    v54 = v50;
    v50 = v53;
    if ( v54 > v49 )
    {
      LODWORD(v109) = Double_To_SInt32(v49);
      v55 = Double_To_SInt32(v49);
      if ( v55 )
      {
        if ( v50 <= v54 )
        {
          a5 = (double)(GetRandomLargeInteger_(0) % v55) + a5;
          LODWORD(v109) = GetRandomLargeInteger_(0) % v55;
          v56 = v105 - (double)SLODWORD(v109);
        }
        else
        {
          v109 = v50;
          a5 = v50 - (double)(GetRandomLargeInteger_(0) % v55);
          LODWORD(v109) = GetRandomLargeInteger_(0) % v55;
          v56 = (double)SLODWORD(v109) + v105;
        }
        v105 = v56;
        v50 = a5;
        v54 = v105;
        v49 = 0.0;
      }
      if ( v54 >= v50 )
        v50 = v54;
    }
  }
LABEL_60:
  v108 = v50;
  if ( LOBYTE(v112) && !v103 || *(_DWORD *)(a1 + 0x6C) == 4 || v102 )
    v106 = v49;
  if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C))
    || (v57 = (_DWORD **)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C)),
        !sub_470D00(v57, 0x1B)) )
  {
    v106 = 0.0;
  }
  if ( !v27
    && (v58 = sub_6135F0(a1),
        (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v58 + 0x58) + 0x138))(*(_DWORD *)(v58 + 0x58)))
    || (v59 = sub_6135F0(a1),
        (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v59 + 0x58) + 0x13C))(*(_DWORD *)(v59 + 0x58))) )
  {
    v60 = 0.0;
    v106 = 0.0;
  }
  else
  {
    v60 = 0.0;
  }
  if ( v27 )
  {
    if ( v60 < v106 )
    {
      v61 = ContainerEntryExtraData_GetHealth(v27, 0) > 0.0;
      v60 = 0.0;
      if ( !v61 )
        v106 = 0.0;
    }
  }
  v62 = v106 + v108;
  v115 = v62;
  v63 = fCostant_100 - v62;
  if ( fCombatMaxHoldScore >= v63 )
    v63 = fCombatMaxHoldScore;
  v64 = 1;
  *(float *)&v109 = v63;
  if ( *(_DWORD *)(a1 + 0x6C) == 1 )
    *(float *)&v109 = v60;
  if ( LOBYTE(v112) )
  {
    if ( !v103 )
      *(float *)&v109 = v60;
  }
  if ( *(_DWORD *)(a1 + 0x78) == 2 )
  {
    v65 = v62;
    v66 = v60;
    v67 = v65;
    *(float *)&v109 = v66;
  }
  else
  {
    v67 = v62;
  }
  v68 = Double_To_SInt32(v67 + *(float *)&v109);
  if ( v68 <= 0 )
    v68 = 0x64;
  *(float *)&v109 = (float)(GetRandomLargeInteger_(0) % v68);
  v69 = *(float *)&v109;
  v70 = v108;
  if ( v108 <= (double)*(float *)&v109 || (v63 = v105, a5 > (double)v105) )
  {
    if ( v70 <= v69 || (v81 = a5, v63 = v105, v105 >= (double)a5) || LOBYTE(v112) )
    {
      if ( v106 <= 0.0 || v69 >= v115 )
      {
        if ( *(_DWORD *)(a1 + 0x78) != 2 )
        {
          *(_DWORD *)(a1 + 0x78) = *(_DWORD *)(a1 + 0x74);
          v85 = *(void **)(a1 + 0x3C);
          *(_DWORD *)(a1 + 0x74) = 2;
          v86 = sub_5E0F50(v85);
          v87 = sub_5E0F50(*(void **)(a1 + 0x3C));
          v97 = ((double (__thiscall *)(int *))*(_DWORD *)(*v86 + 0x140))(v86);
          v95 = ((double (__thiscall *)(int *))*(_DWORD *)(*v87 + 0x13C))(v87);
          a5 = sub_546B20(v95, v97);
          *(float *)(a1 + 0xE0) = *(float *)(a1 + 0x44);
          *(float *)(a1 + 0xE4) = a5;
          *(float *)(a1 + 0xE8) = flt_A30634;
        }
      }
      else
      {
        sub_5F4AE0(*(Actor **)(a1 + 0x3C), v63, 0.0, v69, 1);
        v84 = *(_DWORD *)(a1 + 0x74);
        *(_DWORD *)(a1 + 0x74) = 1;
        *(_DWORD *)(a1 + 0x78) = v84;
      }
    }
    else
    {
      if ( *(_BYTE *)(a1 + 0x49) )
      {
        sub_5F4AE0(*(Actor **)(a1 + 0x3C), v63, v81, v69, 0);
        if ( *(_DWORD *)(a1 + 0x74) == 1 )
        {
          *(_DWORD *)(a1 + 0x78) = 1;
          *(_DWORD *)(a1 + 0x74) = 3;
        }
      }
      v82 = sub_6135F0(a1);
      if ( v82 )
        v83 = (void *)(v82 + 0x68);
      else
        v83 = 0;
      if ( sub_617340(a1, v63, v81, v69, *(int **)(a1 + 0x7C), v83) )
      {
        a5 = *(float *)(a1 + 0x44);
        *(float *)&v114 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B372E8);
        *(float *)(a1 + 0x104) = a5;
        *(float *)(a1 + 0x108) = *(float *)&v114;
        *(float *)(a1 + 0x10C) = flt_A30634;
      }
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 0x49) )
    {
      sub_5F4AE0(*(Actor **)(a1 + 0x3C), v63, v70, v108, 0);
      if ( *(_DWORD *)(a1 + 0x74) == 1 )
      {
        *(_DWORD *)(a1 + 0x78) = 1;
        *(_DWORD *)(a1 + 0x74) = 3;
      }
    }
    v71 = v113;
    LOBYTE(a5) = 0;
    LOBYTE(v109) = 0;
    v72 = sub_61F8F0(
            a1,
            v70,
            1,
            SLOBYTE(v112),
            v113,
            v111,
            *(int *)&v110[4],
            SLODWORD(v114),
            v110[0],
            (bool *)&a5,
            &v109);
    if ( v72 != 0xFF && !*(_BYTE *)(a1 + 0x159) )
    {
      v73 = sub_6135F0(a1);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v73 + 0x154))(v73) )
      {
        sub_616CA0(a1, 1, v63, v70, v71);
        v74 = (int *)&fCombatSpeakPowerAttackChance;
        if ( !LOBYTE(a5) )
          v74 = (int *)&fCombatSpeakAttackChance;
        v113 = *(float *)GameSetting_GetSafeFloatPointer(v74);
        LODWORD(v114) = GetRandomLargeInteger_(0);
        v75 = (double)SLODWORD(v114) / dbl_A3D5A8;
        v76 = v113;
        if ( v113 >= v75 )
        {
          v64 = *(_DWORD *)(a1 + 0x3C);
          v77 = (double (__thiscall **)(int, int, int, _DWORD))(*(_DWORD *)v64 + 0x308);
          if ( LOBYTE(a5) )
          {
            v78 = sub_6135F0(a1);
            v79 = (*v77)(v64, v78, 0xA, 0);
            sub_612BD0(a1, v72, v64, v76, v79, v72, SLOBYTE(v109));
            return;
          }
          v80 = sub_6135F0(a1);
          v75 = (*v77)(v64, v80, 0, 0);
        }
        sub_612BD0(a1, v72, v64, v76, v75, v72, SLOBYTE(v109));
      }
    }
  }
}
