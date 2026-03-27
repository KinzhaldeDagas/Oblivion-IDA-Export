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

  v6 = sub_572EA0(2);
  if ( Distance > *(float *)&SrcStr
    || (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) != 4 && (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) )
  {
    return 0;
  }
  v8 = (TESPackage *)(*(int (__thiscall **)(int *))(*a1 + 0x184))(a1);
  LODWORD(v162[0]) = v8;
  a2a = (Actor *)ExtraDataList::GetExtraPackage(&a2->members.super.super.baseExtraList);
  v9 = a1[0xB];
  if ( !v9 || (*(_DWORD *)(v9 + 8) & 0x20) != 0 )
    (*(void (__thiscall **)(int *, Actor *))(*a1 + 0x558))(a1, a2);
  v10 = a1[0xB];
  if ( !v10 )
    goto LABEL_243;
  v11 = *(_DWORD *)(v10 + 8);
  if ( (v11 & 0x20) != 0 || (v11 & 0x800) != 0 )
  {
    if ( (*(_DWORD *)(v10 + 8) & 0x20) != 0 )
      sub_566870((TargetData **)v8, (TESForm *)v10, 1);
    goto LABEL_241;
  }
  v12 = *(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v10 + 0x198);
  HIDWORD(v153) = 1;
  if ( v12(v10) && !a1[0x11] )
  {
    sub_566870((TargetData **)v8, (TESForm *)a1[0xB], 1);
    if ( (v8->members.packageFlags & 0x1000) == 0 )
    {
      ((void (__thiscall *)(Actor *, int))a2->vtbl->Unk_BE)(a2, a1[0xB]);
      return 0;
    }
    return 0;
  }
  if ( (PlayerCharacter *)a1[0xB] == TESDataHandler_g_PlayerRef && v8->members.type == 0x12 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 0x1CC))(a1) )
    {
      Distance = TesObjectREF_GetDistance((TESObjectREFR *)TESDataHandler_g_PlayerRef, (TESObjectREFR *)a2, 0);
      if ( Distance > dbl_A6E6F8 && sub_5E05B0(TESDataHandler_g_PlayerRef) )
      {
        v14 = (TESPackage *)LODWORD(v165);
        v15 = (float *)sub_566B30((TESPackage *)LODWORD(v165), (int)v163, a2);
        Distance = sub_4D7E30((float *)a2, v15);
        v165 = Distance;
        if ( v14 )
        {
          Distance = flt_A57FB8;
          if ( Distance < v165 )
          {
            sub_5EAE70(a2, (int)v14, (int)a2, SHIDWORD(v153));
            return 0;
          }
        }
      }
    }
  }
  v16 = (TESObjectCELL *)sub_566D00((char **)v8, (int)a2);
  ParentCell = v16;
  if ( (v16 && sub_4D74B0(v16) || a2->vtbl->super.super.GetSleepState((TESObjectREFR *)a2) == kSitSleep_Sitting)
    && ((*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x170))(a1[0xB]) == TESDataHandler_g_XMarkerHeading
     || (TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x170))(a1[0xB]) == TESDataHandler_g_XMarker) )
  {
    (*(void (__thiscall **)(int *, TESObjectCELL *))(*a1 + 0x484))(a1, ParentCell);
    return 1;
  }
  if ( v8->members.type == 9 )
  {
    v18 = (float *)sub_566B30(v8, (int)v163, a2);
    v19 = sub_4D7E30((float *)a1[0xB], v18);
    v165 = (float)Double_To_SInt32(v19);
    sub_566DB0(v8);
    v161 = v20;
    v21 = (double)v20;
    if ( v20 < 0 )
      v21 = v21 + flt_A2FC78;
    Distance = v21 + dbl_A3DDE0;
    st6_0 = v165;
    if ( v165 > Distance )
    {
      v22 = *(void (__thiscall **)(int *))(*a1 + 0x188);
      LODWORD(v153) = 0xFFFFFFFF;
      v152 = (TESPackage *)a2;
      v22(a1);
    }
  }
  v23 = (_DWORD *)a1[0xB];
  if ( v23 && sub_4D74D0(v23) )
    v156 = a1[0xB];
  else
    v156 = 0;
  *(float *)&v24 = COERCE_FLOAT(GetTeleportExtraData((_BYTE *)a1[0xB]));
  v25 = (_DWORD *)a1[0xB];
  v159 = *(float *)&v24;
  v164 = 0;
  if ( !sub_4D74B0(v25) )
    goto LABEL_55;
  ParentCell = 0;
  if ( !a1[0x48] )
  {
    a1[0x48] = a1[0xB];
    *((_BYTE *)a1 + 0x124) = 0x7F;
  }
  if ( (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) )
  {
    if ( !a2->vtbl->GetMountedHorse(a2) )
      v164 = 1;
  }
  if ( a1[0x48]
    && !(*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1)
    && sub_4D72C0((TESObjectREFR *)a1[0xB], *((unsigned __int8 *)a1 + 0x124))
    && !*((_BYTE *)a1 + 0xD0) )
  {
    v151 = 0.0;
    a1[0x48] = 0;
    sub_6FAEE0((Unk128 *)(a1 + 0x4A), v151);
    *((_BYTE *)a1 + 0x136) = 0;
    a1[0x4A] = LODWORD(Vector3_InitValue_);
    a1[0x4B] = *((_DWORD *)&Vector3_InitValue_ + 1);
    v26 = *a1;
    a1[0x4C] = LODWORD(dword_B3F9B0);
    v27 = *(void (__thiscall **)(int *, _DWORD))(v26 + 0x194);
    v151 = *(float *)&a2;
    *((_BYTE *)a1 + 0x124) = 0x7F;
    v27(a1, LODWORD(v151));
    a1[0xB] = 0;
    return sub_637345(a2a, a5);
  }
  v28 = a2->vtbl->super.super.GetPos(a2);
  v66 = *((_BYTE *)a1 + 0x124) == 0x7F;
  v162[0] = *v28;
  v162[1] = v28[1];
  *(float *)v163 = v28[2];
  *(float *)&v157 = 0.0;
  if ( !v66 )
    goto LABEL_55;
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a2);
  if ( ParentCell != TESObjectREFR_GetParentCell((TESObjectREFR *)a1[0x48]) )
    goto LABEL_55;
  v29 = (float *)(a1 + 0x4A);
  if ( !sub_4DBAE0((TESObjectREFR *)a1[0xB], v162, 1, 1, (NiPoint3 *)(a1 + 0x4A), &v157) )
  {
    v151 = 0.0;
    a1[0x48] = 0;
    sub_6FAEE0((Unk128 *)(a1 + 0x4A), v151);
    *((_BYTE *)a1 + 0x136) = 0;
    *v29 = Vector3_InitValue_;
    a1[0x4B] = *((_DWORD *)&Vector3_InitValue_ + 1);
    v40 = *a1;
    a1[0x4C] = LODWORD(dword_B3F9B0);
    v41 = *(void (__thiscall **)(int *, _DWORD))(v40 + 0x194);
    v151 = *(float *)&a2;
    *((_BYTE *)a1 + 0x124) = 0x7F;
    v41(a1, LODWORD(v151));
    a1[0xB] = 0;
LABEL_241:
    v66 = v164 == 0;
LABEL_242:
    if ( v66 )
      return 0;
LABEL_243:
    (*(void (__thiscall **)(int *, Actor *, int, float, int, Actor *, float, int, int, float, float, TESPackage *, _DWORD))(*a1 + 0x188))(
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
    return 0;
  }
  v30 = (TESObjectREFR *)a1[0xB];
  ParentCell = (TESObjectCELL *)*a1;
  a1[0x48] = (int)v30;
  *(float *)&v31 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace(v30));
  v32 = (TESObjectREFR *)a1[0xB];
  v151 = *(float *)&v31;
  *(float *)&v33 = COERCE_FLOAT(TESObjectREFR_GetParentCell(v32));
  v34 = *v29;
  v35 = a1[0x4B];
  v150 = *(float *)&v33;
  v147 = v34;
  v36 = a1[0x4C];
  v148 = v35;
  next = ParentCell[0xB].members.super.modlist.next;
  v149 = v36;
  v146 = a2;
  if ( !((unsigned __int8 (__thiscall *)(int *))next)(a1) )
    return 0;
  v38 = a1[0xD];
  *((_BYTE *)a1 + 0x124) = (_BYTE)v152;
  if ( v38 )
    (*(void (__thiscall **)(int, Actor *))(*(_DWORD *)v38 + 0x28))(v38, a2);
LABEL_55:
  v39 = v152;
  if ( v152->members.type == 8 && v160 )
  {
    LOBYTE(v159) = 1;
  }
  else if ( LODWORD(v153) )
  {
    v144 = COERCE_FLOAT((int)a2->vtbl->super.super.GetPos(a2));
    v143 = (float *)&v155;
    sub_4D76F0((_BYTE *)a1[0xB]);
    sub_4121A0(v42, (float *)&v155, (float *)LODWORD(v144));
    Distance = sub_404C90((float *)&v155);
    st6_0 = (double)dword_B36B28;
    if ( st6_0 >= Distance )
      LOBYTE(v159) = 1;
  }
  else if ( !LOBYTE(v159) )
  {
    LOBYTE(v159) = sub_5687D0(v152, (int)ParentCell, Distance, (TESObjectREFR *)a2);
  }
  v43 = sub_64ADA0((Actor *)a1);
  v44 = v43;
  HIBYTE(v149) = v43;
  if ( !LOBYTE(v159) && !v43 )
  {
    if ( !a2->vtbl->GetMountedHorse(a2)
      && ((*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 4 || (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 9) )
    {
LABEL_69:
      a2->vtbl->AddPackageWakeUp(a2);
      return 1;
    }
    v45 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]);
    v46 = sub_4121A0((float *)a1 + 0x35, (float *)&v155, v45);
    v47 = sub_404C90(v46);
    v159 = v47;
    if ( !*((_BYTE *)a1 + 0xD0) )
    {
      v153 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36A88);
      v48 = sub_5677B0(v152, v153, (TESObjectREFR *)a2, 1) * dbl_A31C70;
      v47 = v48 <= v153
          ? sub_5677B0(v152, v48, (TESObjectREFR *)a2, 1) * dbl_A31C70
          : *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36A88);
      if ( v159 <= v47 )
      {
LABEL_89:
        if ( !*((_BYTE *)a1 + 0xD0) )
        {
          v77 = 0x101;
          if ( LOBYTE(a2->members.unk0B4[5])
            || (v39->members.packageFlags & 0x2000) != 0
            || a2->vtbl->IsInCombat(a2, 1)
            || v39->members.type == 0xF
            || (v78 = a1[2]) != 0 && *(_BYTE *)(v78 + 0x20) == 0xC )
          {
            v77 = 0x201;
          }
          if ( BYTE1(a2->members.unk0B4[5]) )
            (*(void (__thiscall **)(int *, int, int))(*a1 + 0x2C4))(a1, 0x400, 1);
          (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x238))(a1, a2, v77);
          v79 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]);
          v142 = *(Actor **)v79;
          v143 = *(float **)(v79 + 4);
          v144 = *(float *)(v79 + 8);
          if ( v137 )
          {
            v80 = sub_625290(v137, (float *)&v145);
            v142 = *(Actor **)v80;
            v143 = *((float **)v80 + 1);
            v144 = v80[2];
          }
          v81 = *a1;
          v136 = sub_5677B0(v39, v47, (TESObjectREFR *)a2, 2);
          WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]);
          v82 = TESObjectREFR_GetParentCell((TESObjectREFR *)a1[0xB]);
          (*(void (__thiscall **)(int *, Actor *, Actor **, TESObjectCELL *, TESWorldSpace *, _DWORD))(v81 + 0x414))(
            a1,
            a2,
            &v142,
            v82,
            WorldSpace,
            LODWORD(v136));
          return 0;
        }
        return 0;
      }
    }
    TeleportExtraData = GetTeleportExtraData((_BYTE *)a1[0xB]);
    v50 = (_BYTE *)a1[0xB];
    if ( TeleportExtraData )
    {
      v51 = *a1;
      sub_4D76F0(v50);
      v53 = v52;
      *(float *)&v54 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]));
      v55 = (TESObjectREFR *)a1[0xB];
      v144 = *(float *)&v54;
      v143 = (float *)TESObjectREFR_GetParentCell(v55);
      v142 = *(Actor **)(v53 + 8);
      v137 = a2;
      result = (*(int (__thiscall **)(int *))(v51 + 0x3DC))(a1);
      if ( !result )
        return result;
LABEL_88:
      v76 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]);
      v39 = (TESPackage *)v146;
      a1[0x35] = *v76;
      a1[0x36] = v76[1];
      a1[0x37] = v76[2];
      goto LABEL_89;
    }
    if ( !sub_4D74B0(v50) )
    {
      if ( v150 == 0.0 )
      {
        v71 = *a1;
        v72 = (*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]);
        *(float *)&v73 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]));
        v74 = (TESObjectREFR *)a1[0xB];
        v144 = *(float *)&v73;
        v143 = (float *)TESObjectREFR_GetParentCell(v74);
        v75 = *(unsigned __int8 (__thiscall **)(int *))(v71 + 0x3DC);
        v142 = *(Actor **)(v72 + 8);
        v137 = a2;
        if ( !v75(a1) )
          return 0;
      }
      else
      {
        sub_625290((void *)LODWORD(v150), (float *)&v155);
        v67 = *a1;
        *(float *)&v68 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]));
        v69 = (TESObjectREFR *)a1[0xB];
        v144 = *(float *)&v68;
        v143 = (float *)TESObjectREFR_GetParentCell(v69);
        v70 = *(int (__thiscall **)(int *))(v67 + 0x3DC);
        v142 = v157;
        v137 = a2;
        result = v70(a1);
        if ( !result )
          return result;
      }
      goto LABEL_88;
    }
    v56 = a2->vtbl->super.super.GetPos(a2);
    v155 = *(_DWORD *)v56;
    v57 = *((_DWORD *)v56 + 1);
    v144 = COERCE_FLOAT(&v159);
    v58 = (TESObjectREFR *)a1[0xB];
    v143 = (float *)(a1 + 0x4A);
    v142 = (Actor *)1;
    v156 = v57;
    v157 = *((Actor **)v56 + 2);
    v159 = 0.0;
    if ( sub_4DBAE0(v58, (float *)&v155, 1, 1, (NiPoint3 *)(a1 + 0x4A), &v159) )
    {
      v59 = *a1;
      *(float *)&v60 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]));
      v61 = (TESObjectREFR *)a1[0xB];
      v144 = *(float *)&v60;
      v143 = (float *)TESObjectREFR_GetParentCell(v61);
      v62 = *(unsigned __int8 (__thiscall **)(int *))(v59 + 0x3DC);
      v142 = *((Actor **)a1 + 0x4C);
      v137 = a2;
      if ( !v62(a1) )
        return 0;
      v63 = a1[0xD];
      *((_BYTE *)a1 + 0x124) = BYTE4(v153);
      if ( v63 )
        (*(void (__thiscall **)(int, Actor *))(*(_DWORD *)v63 + 0x28))(v63, a2);
      goto LABEL_88;
    }
    v144 = 0.0;
    a1[0x48] = 0;
    sub_6FAEE0((Unk128 *)(a1 + 0x4A), v144);
    *((_BYTE *)a1 + 0x136) = 0;
    a1[0x4A] = LODWORD(Vector3_InitValue_);
    a1[0x4B] = *((_DWORD *)&Vector3_InitValue_ + 1);
    v64 = *a1;
    a1[0x4C] = LODWORD(dword_B3F9B0);
    v65 = *(void (__thiscall **)(int *, _DWORD))(v64 + 0x194);
    v144 = *(float *)&a2;
    *((_BYTE *)a1 + 0x124) = 0x7F;
    v65(a1, LODWORD(v144));
    v66 = LOBYTE(v159) == 0;
    a1[0xB] = 0;
    goto LABEL_242;
  }
  if ( !*((_BYTE *)a1 + 0xD0) )
    (*(void (__thiscall **)(int *, Actor *))(*a1 + 0x194))(a1, a2);
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x170))(a1[0xB]) == TESDataHandler_g_XMarkerHeading
    && !sub_64ADA0((Actor *)a1) )
  {
    v158 = *(float *)(a1[0xB] + 0x28);
    v83 = v158;
    v84 = dbl_A3D5B0;
    if ( v158 >= 0.0 )
    {
      if ( v84 <= v83 )
      {
        unknown_libname_14(v84, v83);
        v158 = v83;
        v83 = v158;
      }
    }
    else
    {
      unknown_libname_14(v84, v83);
      v158 = v83;
      v158 = v158 + dbl_A3D5B0;
      v83 = v158;
    }
    *(float *)&v152 = 0.0;
    *(float *)&v142 = v83;
    sub_683D80((int)a2, *(float *)&v142, (int)&v152);
    v151 = v83;
    v151 = fabs(v151);
    Distance = v151;
    v151 = (double)iActorKeepTurnDegree * dbl_A31C78;
    st6_0 = v151;
    if ( v151 < Distance )
    {
      sub_685530(a2, v158, 1);
      return 1;
    }
    sub_5E05F0(a2, 0x30);
  }
  v85 = (Actor *)a1[0xB];
  if ( v85 != a2
    && v85->vtbl->super.super.IsActor((TESObjectREFR *)v85)
    && a2->vtbl->super.super.GetSleepState((TESObjectREFR *)a2) != kSitSleep_Sitting )
  {
    if ( !a2->vtbl->GetMountedHorse(a2) && (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) == 9 )
      goto LABEL_69;
    v86 = (int *)a1[0xB];
    v87 = a2->vtbl->super.super.GetPos(a2);
    v88 = *v86;
    v143 = v87;
    v89 = (float *)(*(int (__thiscall **)(int *))(v88 + 0x174))(v86);
    sub_4121A0(v89, (float *)&v154, v143);
    v151 = sub_683CB0((float *)&v154);
    *(float *)&v152 = 0.0;
    sub_683D80((int)a2, v151, (int)&v152);
    v150 = v151;
    v158 = (double)iActorTurnDegree * dbl_A31C78;
    if ( sub_5E0590(a2) )
      v158 = (double)iActorKeepTurnDegree * dbl_A31C78;
    v150 = fabs(v150);
    Distance = v150;
    st6_0 = v158;
    if ( v158 < (double)v150 )
    {
      sub_685530(a2, v151, 1);
      return 1;
    }
    sub_5E05F0(a2, 0x30);
    v44 = HIBYTE(v148);
  }
  v90 = a1[2];
  if ( v90 && *(_BYTE *)(v90 + 0x20) == 0x12 && sub_64ADA0((Actor *)a1) )
    goto LABEL_168;
  if ( LOBYTE(v159) )
  {
    if ( Actor_IsNPC(a2) && (v91 = (PlayerCharacter *)a1[0xB]) != 0 && v91 == TESDataHandler_g_PlayerRef )
    {
      if ( !v44 )
      {
        result = ((int (__thiscall *)(LowProcess *, int))v91->super.super.super.process->Unk_B7)(
                   v91->super.super.super.process,
                   a1[0xB]);
        if ( !result )
          return result;
        goto LABEL_134;
      }
    }
    else if ( !v44 )
    {
LABEL_134:
      if ( a1[0x11] )
      {
        v92 = a2->vtbl->super.super.GetAnimData(a2);
        v93 = v92;
        if ( !*((_BYTE *)a1 + 0x25D) )
        {
          v94 = *(void (__thiscall **)(int *, Actor *))(*a1 + 0x594);
          v142 = a2;
          *((_BYTE *)a1 + 0x25D) = 1;
          v94(a1, v142);
          (*(void (__thiscall **)(int *, int))(*a1 + 0x484))(a1, a1[0xB]);
          v139 = (Actor *)a1[0xB];
          v95 = ((int (*)(void))v139->vtbl->super.super.GetBaseForm)();
          sub_6286E0(a1, (int)a2, v95, v139);
          return 0;
        }
        if ( v92 )
        {
          if ( sub_472EA0(v92) )
          {
            ActivateRef(
              *(TESObjectREFR **)a1[0x11],
              v6,
              st6_0,
              Distance,
              (TESObjectREFR *)a2,
              1,
              *(_DWORD *)(a1[0x11] + 4),
              *(_DWORD *)(a1[0x11] + 0x10));
            v96 = *(void (__thiscall **)(int *))(*a1 + 0x49C);
            --a1[0xE];
            *((_BYTE *)a1 + 0x25D) = 0;
            v96(a1);
          }
        }
        if ( a1[0xE] <= 0 && (!v93 || sub_472EA0(v93)) )
        {
          (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a2, 1);
          (*(void (__thiscall **)(int *, int))(*a1 + 0x394))(a1, 1);
          *((_BYTE *)a1 + 0x25D) = 0;
        }
        goto LABEL_234;
      }
      if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x190))(a1[0xB])
        && !sub_4D74B0((_DWORD *)a1[0xB]) )
      {
        v97 = a2->vtbl->super.super.GetAnimData(a2);
        if ( !*((_BYTE *)a1 + 0x25D) )
        {
          v98 = *(void (__thiscall **)(int *, Actor *))(*a1 + 0x594);
          v142 = a2;
          *((_BYTE *)a1 + 0x25D) = 1;
          v98(a1, v142);
          (*(void (__thiscall **)(int *, int))(*a1 + 0x484))(a1, a1[0xB]);
          v140 = (Actor *)a1[0xB];
          v99 = ((int (*)(void))v140->vtbl->super.super.GetBaseForm)();
          sub_6286E0(a1, (int)a2, v99, v140);
          return 0;
        }
        if ( !v97 || sub_472EA0(v97) )
        {
          (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a2, 1);
          v100 = a1[0x11];
          if ( v100 )
          {
            v141 = *(_DWORD *)(v100 + 0x10);
            v138 = *(_DWORD *)(v100 + 4);
          }
          else
          {
            v141 = 1;
            v138 = 0;
          }
          ActivateRef((TESObjectREFR *)a1[0xB], v6, st6_0, Distance, (TESObjectREFR *)a2, 1, v138, v141);
          (*(void (__thiscall **)(int *, int))(*a1 + 0x394))(a1, 1);
          (*(void (__thiscall **)(int *))(*a1 + 0x49C))(a1);
          *((_BYTE *)a1 + 0x25D) = 0;
        }
        goto LABEL_234;
      }
      if ( sub_4D74B0((_DWORD *)a1[0xB]) )
      {
        if ( (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) != 4
          && (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) != 9 )
        {
          goto LABEL_157;
        }
        (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a2, 1);
        goto LABEL_160;
      }
      GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
      *((float *)a1 + 0x66) = GameHour;
      if ( !Actor_IsNPC(a2) && Actor_IsNPC((Actor *)a1[0xB]) )
      {
        ActivateRef((TESObjectREFR *)a1[0xB], v6, st6_0, GameHour, (TESObjectREFR *)a2, 0, 0, 1);
        return 1;
      }
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x18C))(a1[0xB])
        || (*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x18C))(a1[0xB]) == 4
        || (*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x18C))(a1[0xB]) == 9 )
      {
        if ( v39->members.procedureArrayIndex == 0x16
          && sub_565DF0(v39)
          && v39 != (TESPackage *)0xFFFFFFD4
          && !v39->members.time.duration )
        {
          (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a2, 2);
          GameHour = TimeGlobals_GetGameDay(&TimeGlobals);
          sub_41FFC0(&a2->members.super.super.baseExtraList, (int)v39, v102);
        }
        if ( !sub_5660A0(v39) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)a1[0xB] + 0x198))(a1[0xB], 1) )
          {
            if ( !a1[0x11] )
              sub_566870((TargetData **)v39, (TESForm *)a1[0xB], 1);
          }
        }
        ActivateRef((TESObjectREFR *)a1[0xB], v6, st6_0, GameHour, (TESObjectREFR *)a2, 1, 0, 1);
        return 1;
      }
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1[0xB] + 0x58) + 0x1B0))(
        *(_DWORD *)(a1[0xB] + 0x58),
        a1[0xB]);
LABEL_168:
      a2->vtbl->Unk_C3(a2);
      return 0;
    }
    if ( (v39->members.packageFlags & 4) != 0 )
    {
      v119 = *a1;
      v120 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]);
      v121 = (float *)TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]);
      v122 = (TESObjectREFR *)a1[0xB];
      v143 = v121;
      v123 = TESObjectREFR_GetParentCell(v122);
      (*(void (__thiscall **)(int *, Actor *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, float *))(v119 + 0x3DC))(
        a1,
        a2,
        *v120,
        v120[1],
        v120[2],
        v123,
        v143);
      return 0;
    }
    if ( v39->members.type == 2 )
    {
      v103 = a1[0xB];
      if ( v103 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v103 + 0x190))(v103) )
        {
          v104 = a1[0xB];
          if ( v104 )
          {
            (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v104 + 0x58) + 0x188))(
              *(_DWORD *)(v104 + 0x58),
              v104,
              1);
            return 1;
          }
        }
      }
      return 1;
    }
    v108 = *(void (__thiscall **)(int *))(*a1 + 0x49C);
    *((_BYTE *)a1 + 0x25D) = 0;
    v108(a1);
    if ( a1[0x11] )
    {
      if ( a1[0xE] > 0 )
      {
        v143 = (float *)a1[0x11];
        a1[0xB] = 0;
        FormHeapFree((unsigned int)v143);
        a1[0x11] = 0;
      }
      else
      {
        procedureArrayIndex = v39->members.procedureArrayIndex;
        v110 = *a1;
        v111 = sub_673980(procedureArrayIndex);
        (*(void (__thiscall **)(int *, int))(v110 + 0x17C))(a1, v111 - 1);
      }
    }
    if ( !a1[0xB] )
      return 1;
    v112 = (_BYTE *)(*(int (__thiscall **)(int *))(*a1 + 0x410))(a1);
    v113 = v112;
    if ( v112 )
    {
      if ( sub_683A70(v112) )
        sub_683A80(v113, 0);
    }
LABEL_195:
    v114 = *a1;
    v115 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]);
    *(float *)&v116 = COERCE_FLOAT(TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]));
    v117 = (TESObjectREFR *)a1[0xB];
    v142 = (Actor *)v116;
    v118 = TESObjectREFR_GetParentCell(v117);
    (*(void (__thiscall **)(int *, Actor *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, Actor *))(v114 + 0x3DC))(
      a1,
      a2,
      *v115,
      v115[1],
      v115[2],
      v118,
      v142);
    return 0;
  }
  if ( v44 )
  {
    if ( (v39->members.packageFlags & 4) != 0 )
      goto LABEL_195;
    if ( v39->members.type == 2 )
    {
      v132 = a1[0xB];
      if ( v132 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v132 + 0x190))(v132) )
        {
          v133 = a1[0xB];
          if ( v133 )
            (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v133 + 0x58) + 0x188))(
              *(_DWORD *)(v133 + 0x58),
              v133,
              1);
        }
      }
    }
  }
  else
  {
    if ( sub_4D74B0((_DWORD *)a1[0xB]) )
    {
      if ( (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) != 4
        && (*(int (__thiscall **)(int *))(*a1 + 0x36C))(a1) != 9 )
      {
LABEL_157:
        if ( !(*(unsigned __int8 (__thiscall **)(int *, Actor *))(*a1 + 0x1B4))(a1, a2) )
        {
          (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a2, 1);
          (*(void (__thiscall **)(int *, Actor *))(*a1 + 0x194))(a1, a2);
          return 1;
        }
        goto LABEL_234;
      }
LABEL_160:
      (*(void (__thiscall **)(int *, int))(*a1 + 0x394))(a1, 1);
      return 1;
    }
    if ( a1[0x11] )
    {
      v124 = a2->vtbl->super.super.GetAnimData(a2);
      if ( !*((_BYTE *)a1 + 0x25D) )
      {
        v105 = *(void (__thiscall **)(int *, float *))(*a1 + 0x594);
        v143 = (float *)a2;
        *((_BYTE *)a1 + 0x25D) = 1;
        v105(a1, v143);
        v106 = *(int (**)(void))(*(_DWORD *)a1[0xB] + 0x170);
        v142 = *((Actor **)a1 + 0xB);
        v107 = v106();
        sub_6286E0(a1, (int)a2, v107, v142);
        (*(void (__thiscall **)(int *, int))(*a1 + 0x484))(a1, a1[0xB]);
        return 0;
      }
      if ( !v124 || sub_472EA0(v124) )
      {
        if ( ActivateRef(
               (TESObjectREFR *)a1[0xB],
               v6,
               st6_0,
               Distance,
               (TESObjectREFR *)a2,
               0,
               *(_DWORD *)(a1[0x11] + 4),
               *(_DWORD *)(a1[0x11] + 0x10)) )
        {
          v125 = a1[0x11];
          if ( v125 )
          {
            if ( a1[0xE] <= *(_DWORD *)(v125 + 0x10) )
              (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a2, 1);
          }
          if ( a1[0x11] )
            FormHeapFree(a1[0x11]);
          a1[0x11] = 0;
        }
        v126 = *(void (__thiscall **)(int *))(*a1 + 0x49C);
        a1[0xB] = 0;
        *((_BYTE *)a1 + 0x25D) = 0;
        v126(a1);
      }
    }
    else
    {
      if ( v39->members.type == 7 )
      {
        (*(void (__thiscall **)(int *, Actor *, int))(*a1 + 0x188))(a1, a2, 1);
        (*(void (__thiscall **)(int *, Actor *))(*a1 + 0x194))(a1, a2);
        return 1;
      }
      if ( Actor_IsNPC((Actor *)a1[0xB]) )
      {
        if ( !(*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x18C))(a1[0xB])
          || (*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x18C))(a1[0xB]) == 4
          || (*(int (__thiscall **)(int))(*(_DWORD *)a1[0xB] + 0x18C))(a1[0xB]) == 9 )
        {
          ActivateRef((TESObjectREFR *)a1[0xB], v6, st6_0, Distance, (TESObjectREFR *)a2, 0, 0, 1);
        }
      }
      else
      {
        v127 = a2->vtbl->super.super.GetAnimData(a2);
        if ( !*((_BYTE *)a1 + 0x25D) )
        {
          v128 = *(void (__thiscall **)(int *, float *))(*a1 + 0x594);
          v143 = (float *)a2;
          *((_BYTE *)a1 + 0x25D) = 1;
          v128(a1, v143);
          if ( !v148 )
          {
            v129 = *(int (**)(void))(*(_DWORD *)a1[0xB] + 0x170);
            v142 = *((Actor **)a1 + 0xB);
            v130 = v129();
            sub_6286E0(a1, (int)a2, v130, v142);
          }
          (*(void (__thiscall **)(int *, int))(*a1 + 0x484))(a1, a1[0xB]);
          return 0;
        }
        if ( v127 )
        {
          if ( sub_472EA0(v127) )
          {
            v131 = ((double (__thiscall *)(int *))*(_DWORD *)(*a1 + 0x49C))(a1);
            ActivateRef((TESObjectREFR *)a1[0xB], v6, st6_0, v131, (TESObjectREFR *)a2, 0, 0, 1);
            *((_BYTE *)a1 + 0x25D) = 0;
          }
        }
      }
    }
  }
LABEL_234:
  v134 = a2->vtbl->super.super.GetAnimData(a2);
  if ( v134 && !sub_472EA0(v134) )
    return 0;
  if ( a1[0x11] )
    FormHeapFree(a1[0x11]);
  a1[0x11] = 0;
  a1[0xB] = 0;
  a1[0x12] = 0;
  return 1;
}
