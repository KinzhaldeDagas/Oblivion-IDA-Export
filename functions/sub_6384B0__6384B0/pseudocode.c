void __userpurge sub_6384B0(int *ecx0@<ecx>, double st6_0@<st1>, double st7_0@<st0>, TESObjectREFR *a4)
{
  int v6; // eax
  int (__usercall *v7)@<eax>(double@<st0>, double@<st1>); // edx
  TESPackage *v8; // ebp
  int v9; // eax
  double v10; // st7
  UInt8 type; // al
  int v12; // eax
  int v13; // ebx
  char v14; // al
  int v15; // eax
  int v16; // edx
  int v17; // edx
  char v18; // al
  char *location; // ebx
  TESObjectREFRVtbl *vtbl; // edx
  float *v21; // eax
  float *v22; // ebx
  char v23; // al
  double v24; // st7
  double v25; // st6
  double v26; // st7
  unsigned __int8 (__thiscall **v27)(int *, TESObjectREFR *, int, int, int, TESObjectCELL *, TESWorldSpace *); // ebp
  TESObjectCELL *ParentCell; // eax
  int v29; // eax
  int *v30; // ecx
  int v31; // eax
  TESObjectREFR *v32; // ebp
  int v33; // eax
  double v34; // st7
  TESObjectCELL *v35; // eax
  double v36; // st7
  char v37; // al
  double v38; // st7
  TESObjectCELL *v39; // eax
  double v40; // st7
  char v41; // al
  TESObjectREFRVtbl *v42; // ecx
  TESObjectREFRVtbl *v43; // eax
  char *CopyFromBase; // eax
  char *v45; // eax
  TESObjectREFRVtbl *v46; // eax
  TESObjectREFRVtbl *v47; // ebx
  BSExtraData *v48; // eax
  TESPackage *v49; // eax
  int v50; // eax
  TESObjectCELL *v51; // eax
  TESObjectCELL *v52; // eax
  bool v53; // c0
  TESObjectREFRVtbl *v54; // edx
  TESObjectCELL *v55; // ebp
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  float *v57; // eax
  double v58; // st7
  float *v59; // eax
  int *v60; // eax
  TESWorldSpace *v61; // eax
  TESForm *v62; // ebx
  float *(__thiscall *v63)(TESObjectREFR *); // eax
  int v64; // eax
  float v65; // edx
  float *v66; // eax
  int *v67; // eax
  int v68; // ebx
  int *v69; // ebp
  TESObjectREFR *v70; // ebp
  int *v71; // ebx
  bool v72; // zf
  int v73; // eax
  int *v74; // ecx
  int v75; // eax
  TESObjectCELL *v76; // eax
  char v77; // al
  TESObjectCELL *v78; // eax
  _DWORD *v79; // ecx
  int v80; // eax
  float *v81; // esi
  char *v82; // eax
  TESObjectCELL *v83; // eax
  double v84; // st7
  double v85; // st7
  float *v86; // eax
  float v87; // eax
  TESWorldSpace *v88; // eax
  TESObjectCELL *v89; // eax
  int *v90; // eax
  int v91; // edx
  int v92; // eax
  unsigned __int8 (__thiscall **v93)(int *, TESObjectREFR *, int, int, float, TESObjectCELL *, TESWorldSpace *); // ebx
  TESObjectCELL *v94; // eax
  double v95; // st7
  int v96; // eax
  char *v97; // eax
  unsigned __int8 (__thiscall **v98)(int *, TESObjectREFR *, int, int, float, TESObjectCELL *, TESWorldSpace *); // ebx
  TESObjectCELL *v99; // eax
  int v100; // eax
  TESObjectREFR *v101; // ecx
  double v102; // st7
  int v103; // ebx
  int v104; // eax
  int v105; // eax
  char *a3; // [esp+28h] [ebp-1A4h]
  double a5; // [esp+2Ch] [ebp-1A0h]
  double a5a; // [esp+2Ch] [ebp-1A0h]
  TESObjectCELL *a5_4; // [esp+30h] [ebp-19Ch]
  float v110; // [esp+34h] [ebp-198h]
  char v111; // [esp+34h] [ebp-198h]
  float v112; // [esp+34h] [ebp-198h]
  double v113; // [esp+34h] [ebp-198h]
  float v114; // [esp+34h] [ebp-198h]
  double v115; // [esp+34h] [ebp-198h]
  int v116; // [esp+34h] [ebp-198h]
  TESWorldSpace *WorldSpace; // [esp+38h] [ebp-194h]
  char *Name; // [esp+38h] [ebp-194h]
  char v119; // [esp+38h] [ebp-194h]
  float v120; // [esp+38h] [ebp-194h]
  float v121; // [esp+38h] [ebp-194h]
  TESWorldSpace *v122; // [esp+38h] [ebp-194h]
  float v123; // [esp+38h] [ebp-194h]
  TESWorldSpace *v124; // [esp+38h] [ebp-194h]
  float v125; // [esp+38h] [ebp-194h]
  TESWorldSpace *v126; // [esp+38h] [ebp-194h]
  float FatigueFraction; // [esp+38h] [ebp-194h]
  char v128; // [esp+4Fh] [ebp-17Dh]
  float v129; // [esp+50h] [ebp-17Ch]
  float v130; // [esp+50h] [ebp-17Ch]
  float v131; // [esp+50h] [ebp-17Ch]
  float v132; // [esp+50h] [ebp-17Ch]
  float v133; // [esp+50h] [ebp-17Ch]
  int (__thiscall **v134)(int *, TESObjectREFR *, int, int, int, TESObjectCELL *, TESWorldSpace *); // [esp+50h] [ebp-17Ch]
  float v135; // [esp+50h] [ebp-17Ch]
  float v136; // [esp+50h] [ebp-17Ch]
  float v137; // [esp+54h] [ebp-178h]
  float v138; // [esp+54h] [ebp-178h]
  int v139; // [esp+54h] [ebp-178h]
  double v140; // [esp+58h] [ebp-174h] BYREF
  int a2; // [esp+60h] [ebp-16Ch] BYREF
  int v142; // [esp+64h] [ebp-168h]
  float v143; // [esp+68h] [ebp-164h]
  TESObjectCELL *a1; // [esp+6Ch] [ebp-160h]
  float v145; // [esp+70h] [ebp-15Ch]
  int v146; // [esp+74h] [ebp-158h] BYREF
  float v147; // [esp+78h] [ebp-154h]
  float v148; // [esp+7Ch] [ebp-150h]
  float v149; // [esp+80h] [ebp-14Ch] BYREF
  float v150; // [esp+84h] [ebp-148h]
  float v151; // [esp+88h] [ebp-144h]
  TESPackage *v152; // [esp+8Ch] [ebp-140h]
  int v153[3]; // [esp+90h] [ebp-13Ch] BYREF
  char Format[300]; // [esp+9Ch] [ebp-130h] BYREF

  v6 = *ecx0;
  if ( *((_BYTE *)ecx0 + 0x228) )
  {
    (*(void (__userpurge **)(TESObjectREFR *, double@<st0>, double@<st1>))(v6 + 0x194))(a4, st7_0, st6_0);
    return;
  }
  v7 = *(int (__usercall **)@<eax>(double@<st0>, double@<st1>))(v6 + 0x184);
  HIBYTE(v145) = 0;
  v8 = (TESPackage *)v7(st7_0, st6_0);
  v152 = v8;
  sub_566DB0(v8);
  LODWORD(v140) = v9;
  v10 = (double)v9;
  if ( v9 < 0 )
    v10 = v10 + flt_A2FC78;
  v137 = v10;
  v128 = 1;
  if ( v8->members.procedureArrayIndex == 1 )
    goto LABEL_18;
  type = v8->members.type;
  v128 = 0;
  if ( type != 3 )
  {
    if ( type == 4 )
    {
      sub_566DC0(v8, flt_A30634, st6_0, (Actor *)a4, 0, flt_A30634);
      v17 = *ecx0;
      if ( !v18 )
      {
        (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(v17 + 0x188))(ecx0, a4, 0xFFFFFFFE);
        return;
      }
      if ( (*(int (__thiscall **)(int *))(v17 + 0x36C))(ecx0) == 9 )
        goto LABEL_12;
    }
LABEL_18:
    *(float *)&a1 = 0.0;
    sub_566B30(v8, (int)&v149, (Actor *)a4);
    location = (char *)v8->members.location;
    if ( location )
    {
      *(float *)&a1 = COERCE_FLOAT(sub_5697E0(&v8->members.location->locationType));
      if ( *(float *)&a1 == 0.0 && sub_569740(location) == 1 )
      {
        vtbl = a4->vtbl;
        HIBYTE(v145) = 1;
        v21 = vtbl->GetPos(a4);
        v149 = *v21;
        v150 = v21[1];
        v151 = v21[2];
      }
    }
    if ( !ecx0[0xC] || (v22 = (float *)ecx0[0xC], ecx0[0x30]) )
      v22 = (float *)a1;
    if ( v137 >= dbl_A2FCC8 )
    {
      if ( v128 )
        goto LABEL_42;
    }
    else if ( v128 )
    {
      sub_566DC0(v8, flt_A30634, st6_0, (Actor *)a4, 0, flt_A30634);
      if ( !v23 )
        goto LABEL_12;
      if ( v22 )
      {
        if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v22 + 0x170))(v22) == TESDataHandler_g_XMarkerHeading )
        {
          v138 = v22[0xA];
          v24 = v138;
          v25 = dbl_A3D5B0;
          if ( v138 >= 0.0 )
          {
            if ( v25 <= v24 )
            {
              unknown_libname_14(v25, v24);
              v24 = v138;
            }
          }
          else
          {
            unknown_libname_14(v25, v24);
            v138 = v138 + dbl_A3D5B0;
            v24 = v138;
          }
          *(float *)&v140 = 0.0;
          v110 = v24;
          sub_683D80((int)a4, v110, (int)&v140);
          v129 = v24;
          v130 = fabs(v129);
          v26 = v130;
          v131 = (double)iActorKeepTurnDegree * dbl_A31C78;
          if ( v131 >= v26 )
            sub_5E05F0((Actor *)a4, 0x30);
          else
            sub_685530((Actor *)a4, v138, 1);
        }
      }
      return;
    }
    if ( *((float *)ecx0 + 0x7A) <= 0.0 && *((_BYTE *)ecx0 + 0xD0) )
    {
      (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x194))(ecx0, a4);
      (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(*ecx0 + 0x188))(ecx0, a4, 0xFFFFFFFF);
      *((float *)ecx0 + 0x7A) = flt_A417B4;
      return;
    }
    *((float *)ecx0 + 0x7A) = *((float *)ecx0 + 0x7A) - flt_B33E9C;
LABEL_42:
    if ( *((_BYTE *)ecx0 + 0xD0) )
    {
      if ( (*(int (__thiscall **)(int *))(*ecx0 + 0x36C))(ecx0) == 4
        || !(*(int (__thiscall **)(int *))(*ecx0 + 0x36C))(ecx0)
        || (*(int (__thiscall **)(int *))(*ecx0 + 0x36C))(ecx0) == 9 )
      {
        if ( ecx0[0x48] && (*(int (__thiscall **)(int *))(*ecx0 + 0x36C))(ecx0) != 4 )
        {
          if ( (*(int (__thiscall **)(int *))(*ecx0 + 0x36C))(ecx0)
            || sub_4D7E30((float *)a4, (float *)ecx0 + 0x4A) <= dbl_A2FCC8 )
          {
            if ( !(*(unsigned __int8 (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x1B4))(ecx0, a4) )
            {
              sub_6FAEE0((Unk128 *)(ecx0 + 0x4A), 0.0);
              *((_BYTE *)ecx0 + 0x136) = 0;
              ecx0[0x4A] = LODWORD(Vector3_InitValue_);
              v29 = *ecx0;
              ecx0[0x4B] = *((_DWORD *)&Vector3_InitValue_ + 1);
              ecx0[0x4C] = LODWORD(dword_B3F9B0);
              (*(void (__thiscall **)(int *, TESObjectREFR *, _DWORD, _DWORD, int))(v29 + 0x370))(ecx0, a4, 0, 0, 0x7F);
            }
          }
          else
          {
            if ( byte_B3B935 )
              return;
            byte_B3B935 = 1;
            v27 = (unsigned __int8 (__thiscall **)(int *, TESObjectREFR *, int, int, int, TESObjectCELL *, TESWorldSpace *))(*ecx0 + 0x3DC);
            WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)ecx0[0x48]);
            ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)ecx0[0x48]);
            if ( !(*v27)(ecx0, a4, ecx0[0x4A], ecx0[0x4B], ecx0[0x4C], ParentCell, WorldSpace) )
              return;
            v8 = v152;
          }
        }
        *(float *)&v140 = TesObjectREF_GetDistance(a4, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0);
        if ( !sub_5E32D0(a4)
          || fDistancetoPlayerforConversations < (double)*(float *)&v140
          || *((float *)ecx0 + 0x6A) > 0.0
          || (v8->members.packageFlags & 0x1000) != 0
          || (*(unsigned __int8 (__thiscall **)(int *))(*ecx0 + 0x200))(ecx0)
          || !byte_B3BD99 )
        {
          *((float *)ecx0 + 0x6A) = *((float *)ecx0 + 0x6A) - flt_B33E9C;
        }
        else
        {
          LODWORD(v140) = ecx0[0x63];
          v30 = (int *)LODWORD(v140);
          if ( LODWORD(v140) )
          {
            do
            {
              v31 = *v30;
              if ( !*v30 )
                break;
              v32 = *(TESObjectREFR **)v31;
              if ( *(_DWORD *)(v31 + 4) == 3
                && *(_BYTE *)(v31 + 8)
                && v32 != a4
                && v32[1].vtbl
                && v32 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
              {
                if ( Actor_IsNPC(*(Actor **)v31)
                  && !(*((int (__thiscall **)(TESObjectREFRVtbl *))v32[1].vtbl->super.super.InitializeComponent + 0xF4))(v32[1].vtbl) )
                {
                  sub_566DB0(v152);
                  v34 = (double)v33;
                  if ( v33 < 0 )
                    v34 = v34 + flt_A2FC78;
                  *(float *)&a1 = v34;
                  if ( !v128 )
                    *(float *)&a1 = flt_A57FB8;
                  v132 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fAISocialRadiusToTriggerConversation);
                  v35 = TESObjectREFR_GetParentCell(a4);
                  if ( TESObjectCELL_IsInterior(v35) )
                    v132 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fAISocialRadiusToTriggerConversationInt);
                  if ( v132 < (double)*(float *)&a1 )
                    a1 = *(TESObjectCELL **)GameSetting_GetSafeFloatPointer((int *)&fAISocialRadiusToTriggerConversation);
                  v36 = sub_4D7E30((float *)v32, &v149);
                  if ( *(float *)&a1 >= v36 )
                  {
                    sub_5ED730(v32, v36, (int)a4);
                    if ( v37 || v32->vtbl->IsDead(v32, 0) )
                    {
                      v38 = BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)ecx0 + 0x32)
                          ? *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B36AA8)
                          : *((float *)ecx0 + 0x66) - flt_B33E9C;
                      *((float *)ecx0 + 0x66) = v38;
                      if ( *((float *)ecx0 + 0x66) <= 0.0 )
                        BSSimpleList_Clear(ecx0 + 0x64);
                      a1 = (TESObjectCELL *)(GetRandomLargeInteger_(0) % (int)0xFFFFFF9C);
                      if ( !sub_446C30((BSSimpleList_VoidPtr *)ecx0 + 0x32, v32) )
                      {
                        v133 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fAISocialchanceForConversation);
                        v39 = TESObjectREFR_GetParentCell(a4);
                        if ( TESObjectCELL_IsInterior(v39) )
                          v133 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fAISocialchanceForConversationInterior);
                        v40 = (double)(int)a1;
                        if ( v133 > v40 )
                        {
                          BSSimpleList_PushFront(ecx0 + 0x64, (int)v32);
                          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))v32[1].vtbl->super.super.InitializeComponent
                           + 0x5B))(
                            v32[1].vtbl,
                            a4);
                          if ( !sub_5E32D0(v32) )
                            break;
                          if ( v32->vtbl->HasFatigue(v32) )
                            break;
                          if ( sub_5E0F30(v32) )
                            break;
                          if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)v32) == (struct Concurrency::details::ScheduleGroupBase *)3 )
                            break;
                          sub_5ED730(v32, v40, (int)a4);
                          if ( !v41 )
                            break;
                          v42 = v32[1].vtbl;
                          if ( !v42 )
                            break;
                          if ( (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))v42->super.super.InitializeComponent
                                + 0x80))(v42) )
                            break;
                          if ( v32 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
                            break;
                          if ( v32->vtbl->IsDead(v32, 0) )
                            break;
                          if ( !v32->vtbl->GetNiNode(v32) )
                            break;
                          v43 = v32[1].vtbl;
                          if ( !v43 )
                            break;
                          CopyFromBase = (char *)v43->super.super.CopyFromBase;
                          if ( CopyFromBase )
                          {
                            if ( sub_567770(CopyFromBase) )
                              break;
                          }
                          if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, TESObjectREFR *, _DWORD, _DWORD))a4->vtbl[1].GenerateNiNode)(
                                  a4,
                                  v32,
                                  0,
                                  0) )
                            break;
                          *((float *)ecx0 + 0x76) = 0.0;
                          ecx0[0x6A] = *GameSetting_GetSafeFloatPointer((int *)&unk_B36AB0);
                          if ( sub_579440() == a4 )
                          {
                            Name = TESObjectREFR_GetName(v32);
                            v45 = TESObjectREFR_GetName(a4);
                            _sprintf(Format, "%s wants to talk to  %s ", v45, Name);
                            Interface_ConsolePrint(Format);
                          }
                          if ( !sub_5E0380((Actor *)v32)
                            || (sub_5E0380((Actor *)v32)->members.packageFlags & 0x1000) == 0 )
                          {
                            v46 = v32[1].vtbl;
                            if ( v46->super.super.CopyFromBase )
                            {
                              if ( !sub_5660A0((TESPackage *)v46->super.super.CopyFromBase) )
                              {
                                v47 = v32[1].vtbl;
                                v119 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v47->super.super.InitializeComponent
                                        + 0xE4))(v47);
                                v111 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v47->super.super.InitializeComponent
                                        + 0x30))(v47);
                                v48 = (BSExtraData *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v47->super.super.InitializeComponent
                                                      + 0x33))(v47);
                                sub_4268B0(
                                  &v32->member.baseExtraList,
                                  (TESPackage *)v47->super.super.CopyFromBase,
                                  (int)v47->super.super.ClearComponentReferences,
                                  v48,
                                  v111,
                                  v119);
                              }
                            }
                            v49 = sub_5E0380((Actor *)a4);
                            Actor_AddPackage_((Actor *)v32, v49, 0, 1);
                            (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))v32[1].vtbl->super.super.InitializeComponent
                             + 0x62))(
                              v32[1].vtbl,
                              a4,
                              1);
                            goto LABEL_117;
                          }
                          if ( v32->vtbl->IsDead(v32, 0) )
                            goto LABEL_117;
                          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))a4[1].vtbl->super.super.InitializeComponent
                           + 0x62))(
                            a4[1].vtbl,
                            a4,
                            3);
                          *((float *)ecx0 + 0x76) = 0.0;
                          return;
                        }
                      }
                    }
                  }
                }
                v30 = (int *)LODWORD(v140);
              }
              v30 = (int *)v30[1];
              LODWORD(v140) = v30;
            }
            while ( v30 );
          }
        }
        if ( *((float *)ecx0 + 0x76) > 0.0 )
        {
          *((float *)ecx0 + 0x76) = *((float *)ecx0 + 0x76) - flt_B33E9C;
          return;
        }
        v50 = (int)a4->vtbl->GetPos(a4);
        a2 = *(int *)v50;
        v142 = *(int *)(v50 + 4);
        v143 = *(float *)(v50 + 8);
        *(float *)&a1 = COERCE_FLOAT(TESObjectREFR_GetParentCell(a4));
        if ( !sub_5E3290(a4) )
        {
          if ( !v128 || HIBYTE(v145) )
            v137 = flt_A579A8;
          *(float *)&v146 = v149 - *(float *)&a2;
          v147 = v150 - *(float *)&v142;
          v148 = v151 - v143;
          v140 = v137 + dbl_A529C0;
          if ( sub_43F350((float *)&v146) > v140 )
          {
            (*(void (__thiscall **)(int *, _DWORD))(*ecx0 + 0x17C))(ecx0, 0);
            return;
          }
          v51 = TESObjectREFR_GetParentCell(a4);
          if ( TESObjectCELL_IsInterior(v51) )
          {
            *(float *)&v52 = COERCE_FLOAT(TESObjectREFR_GetParentCell(a4));
            v53 = v137 < dbl_A3F470;
            v54 = a4->vtbl;
            v55 = v52;
            a1 = v52;
            GetPos = v54->GetPos;
            if ( v53 )
            {
              v57 = GetPos(a4);
              v58 = v137;
              v120 = v137;
            }
            else
            {
              v57 = GetPos(a4);
              *(float *)&v140 = dbl_A3C770 * v137;
              v120 = *(float *)&v140;
              *(float *)&v140 = v137 / dbl_A30E48 + v137 / dbl_A30E48;
              v58 = *(float *)&v140;
            }
            v112 = v58;
            v59 = sub_62E790((float *)&v146, *v57, v57[1], v57[2], v112, v120);
            a2 = *(int *)v59;
            v142 = *((int *)v59 + 1);
            v143 = v59[2];
            v60 = sub_5E2E20(a4, &v146, a2, v142, v143, v55, 0.0, 1, 0);
            a2 = *v60;
            v142 = v60[1];
            v143 = *((float *)v60 + 2);
          }
          else
          {
            v61 = TESObjectREFR_GetWorldSpace(a4);
            *(float *)&v62 = COERCE_FLOAT(sub_44A270((TESWorldSpace **)TESDataHandler, *(float *)&a2, *(float *)&v142, v61, 0));
            v63 = a4->vtbl->GetPos;
            a1 = (TESObjectCELL *)v62;
            v64 = (int)v63(a4);
            v65 = *(float *)v64;
            *(float *)&v140 = dbl_A3C770 * v137;
            v121 = *(float *)&v140;
            *(float *)&v140 = v137 / dbl_A30E48 + v137 / dbl_A30E48;
            v66 = sub_62E790((float *)&v146, v65, *(float *)(v64 + 4), *(float *)(v64 + 8), *(float *)&v140, v121);
            a2 = *(int *)v66;
            v142 = *((int *)v66 + 1);
            v143 = v66[2];
            v67 = sub_5E2E20(
                    a4,
                    &v146,
                    *(_DWORD *)v66,
                    *((_DWORD *)v66 + 1),
                    v66[2],
                    (TESObjectCELL *)v62,
                    COERCE_FLOAT(1),
                    0,
                    0);
            a2 = *v67;
            v142 = v67[1];
            v143 = *((float *)v67 + 2);
          }
          if ( sub_4D7E30((float *)a4, (float *)&a2) <= flt_A417B4 )
            *((float *)ecx0 + 0x76) = 0.0;
        }
        if ( !dword_B3B928 && Actor_IsNPC((Actor *)a4) )
        {
          BSSimpleList_Clear(dword_B3B94C);
          v68 = 0;
          v69 = ecx0 + 0x6F;
          do
          {
            if ( !*v69 )
              break;
            BSSimpleList_PushFront(dword_B3B94C, *v69);
            ++v68;
            ++v69;
          }
          while ( v68 < 4 );
          sub_446B90(
            a1,
            (float *)&a2,
            flt_A34A80,
            &v149,
            v137,
            (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_62EAA0,
            (int)a4);
        }
        v70 = (TESObjectREFR *)dword_B3B928;
        v71 = 0;
        v72 = dword_B3B928 == 0;
        dword_B3B928 = 0;
        if ( v72 )
        {
          v83 = TESObjectREFR_GetParentCell(a4);
          if ( TESObjectCELL_IsInterior(v83) )
          {
            if ( !byte_B3B935 )
            {
              byte_B3B935 = 1;
              if ( (*(int (__thiscall **)(int *))(*ecx0 + 0x36C))(ecx0) )
                a4->vtbl[1].Unk_5E(a4);
              v98 = (unsigned __int8 (__thiscall **)(int *, TESObjectREFR *, int, int, float, TESObjectCELL *, TESWorldSpace *))(*ecx0 + 0x3DC);
              v126 = TESObjectREFR_GetWorldSpace(a4);
              v99 = TESObjectREFR_GetParentCell(a4);
              if ( (*v98)(ecx0, a4, a2, v142, COERCE_FLOAT(LODWORD(v143)), v99, v126) )
              {
                if ( sub_4D7E30((float *)a4, (float *)&a2) < dbl_A3F3D0 )
                {
LABEL_117:
                  *((float *)ecx0 + 0x76) = 0.0;
                }
                else
                {
                  FatigueFraction = Actor_GetFatigueFraction((Actor *)a4, (int)v98, (int)a4);
                  v100 = sub_5E1F90(a4);
                  *((float *)ecx0 + 0x76) = sub_546720(v100, FatigueFraction);
                }
              }
            }
          }
          else if ( !byte_B3B935 )
          {
            v84 = *(float *)&a2 - v149;
            byte_B3B935 = 1;
            *(float *)&v146 = v84;
            v147 = *(float *)&v142 - v150;
            v148 = v143 - v151;
            v140 = v137;
            if ( v137 < sub_404C90((float *)&v146) )
            {
              *(float *)&v140 = v140 * dbl_A2FAA0;
              v85 = v137;
              do
              {
                v114 = v85;
                v86 = sub_62E790((float *)v153, v149, v150, v151, v114, *(float *)&v140);
                a2 = *(int *)v86;
                v142 = *((int *)v86 + 1);
                v87 = v86[2];
                *(float *)&v146 = *(float *)&a2 - v149;
                v143 = v87;
                v147 = *(float *)&v142 - v150;
                v148 = v87 - v151;
                v135 = *(float *)&v146 * *(float *)&v146 + v147 * v147 + v148 * v148;
                v136 = sqrt(v135);
                v85 = v137;
              }
              while ( v137 < (double)v136 );
              if ( TESObjectREFR_GetWorldSpace(a4) )
              {
                v88 = TESObjectREFR_GetWorldSpace(a4);
                TESWorldSpace::GetCellAtPos(v88, (float *)&a2);
                v90 = sub_5E2E20(a4, v153, a2, v142, v143, v89, COERCE_FLOAT(1), 0, 0);
                a2 = *v90;
                v142 = v90[1];
                v143 = *((float *)v90 + 2);
              }
            }
            if ( ecx0[0x72] )
            {
              v91 = ecx0[0x71];
              v92 = ecx0[0x72];
              ecx0[0x6F] = ecx0[0x70];
              ecx0[0x70] = v91;
              ecx0[0x71] = v92;
              ecx0[0x72] = 0;
            }
            if ( (*(int (__thiscall **)(int *))(*ecx0 + 0x36C))(ecx0) )
              a4->vtbl[1].Unk_5E(a4);
            v93 = (unsigned __int8 (__thiscall **)(int *, TESObjectREFR *, int, int, float, TESObjectCELL *, TESWorldSpace *))(*ecx0 + 0x3DC);
            v124 = TESObjectREFR_GetWorldSpace(a4);
            v94 = TESObjectREFR_GetParentCell(a4);
            if ( (*v93)(ecx0, a4, a2, v142, COERCE_FLOAT(LODWORD(v143)), v94, v124) )
            {
              if ( sub_4D7E30((float *)a4, (float *)&a2) >= dbl_A3F3D0 )
              {
                v125 = Actor_GetFatigueFraction((Actor *)a4, (int)v93, (int)a4);
                v96 = sub_5E1F90(a4);
                v95 = sub_546720(v96, v125);
              }
              else
              {
                v95 = 0.0;
              }
              *((float *)ecx0 + 0x76) = v95;
              if ( sub_579440() == a4 )
              {
                v115 = *(float *)&v142;
                a5a = *(float *)&a2;
                v97 = TESObjectREFR_GetName(a4);
                _sprintf(Format, "%s is wandering to point x %.02f and y %.02f", v97, a5a, v115);
                Interface_ConsolePrint(Format);
              }
            }
          }
          return;
        }
        if ( !sub_4D74B0(v70) || !(*(int (__thiscall **)(int *))(*ecx0 + 0x36C))(ecx0) )
        {
          if ( ecx0[0x72] )
          {
            ecx0[ecx0[0x80]++ + 0x6F] = (int)v70;
            if ( ecx0[0x80] > 3 )
              ecx0[0x80] = 0;
          }
          else
          {
            v73 = 0;
            v74 = ecx0 + 0x6F;
            while ( *v74 )
            {
              ++v73;
              ++v74;
              if ( v73 >= 4 )
                goto LABEL_152;
            }
            ecx0[v73 + 0x6F] = (int)v70;
          }
        }
LABEL_152:
        if ( TesObjectREF_GetDistance(a4, v70, 0) <= fConst_200 && !sub_4D74B0(v70) || byte_B3B935 )
          return;
        byte_B3B935 = 1;
        if ( sub_4D74B0(v70) )
        {
          if ( (*(int (__thiscall **)(int *))(*ecx0 + 0x36C))(ecx0) )
          {
LABEL_165:
            v123 = Actor_GetFatigueFraction((Actor *)a4, (int)v71, (int)a4);
            v80 = sub_5E1F90(a4);
            *((float *)ecx0 + 0x76) = sub_546720(v80, v123);
            if ( sub_579440() == a4 )
            {
              v81 = v70->vtbl->GetPos(v70);
              v113 = v70->vtbl->GetPos(v70)[1];
              a5 = *v81;
              a3 = TESObjectREFR_GetName(v70);
              v82 = TESObjectREFR_GetName(a4);
              _sprintf(Format, "%s is wandering to object %s at x %.02f and y %.02f", v82, a3, a5, v113);
              Interface_ConsolePrint(Format);
            }
            return;
          }
          v71 = ecx0 + 0x4A;
          LODWORD(v140) = 0;
          if ( sub_4E0E20(v70, (float *)&v146, (NiPoint3 *)(ecx0 + 0x4A), &v140) )
          {
            *((_BYTE *)ecx0 + 0x124) = LOBYTE(v140);
            v75 = *ecx0 + 0x3DC;
            ecx0[0x48] = (int)v70;
            v134 = (int (__thiscall **)(int *, TESObjectREFR *, int, int, int, TESObjectCELL *, TESWorldSpace *))v75;
            v122 = TESObjectREFR_GetWorldSpace(v70);
            v76 = TESObjectREFR_GetParentCell(v70);
            v77 = (*v134)(ecx0, a4, *v71, ecx0[0x4B], ecx0[0x4C], v76, v122);
            goto LABEL_164;
          }
          v71 = (int *)(*ecx0 + 0x3DC);
          v139 = (int)v70->vtbl->GetPos(v70);
          TESObjectREFR_GetWorldSpace(v70);
          v78 = TESObjectREFR_GetParentCell(v70);
          v79 = (_DWORD *)v139;
        }
        else
        {
          if ( (*(int (__thiscall **)(int *))(*ecx0 + 0x36C))(ecx0) )
            a4->vtbl[1].Unk_5E(a4);
          v71 = (int *)(*ecx0 + 0x3DC);
          HIDWORD(v140) = v70->vtbl->GetPos(v70);
          TESObjectREFR_GetWorldSpace(v70);
          v78 = TESObjectREFR_GetParentCell(v70);
          v79 = (_DWORD *)HIDWORD(v140);
        }
        v77 = ((int (__thiscall *)(int *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, TESObjectCELL *))*v71)(
                ecx0,
                a4,
                *v79,
                v79[1],
                v79[2],
                v78);
LABEL_164:
        if ( !v77 )
          return;
        goto LABEL_165;
      }
      if ( *((_BYTE *)ecx0 + 0xD0) )
        return;
    }
    v101 = (TESObjectREFR *)ecx0[0x48];
    if ( v101 && sub_4D72C0(v101, *((unsigned __int8 *)ecx0 + 0x124)) )
    {
      (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x194))(ecx0, a4);
      *((float *)ecx0 + 0x76) = 0.0;
      ecx0[0x48] = 0;
    }
    else
    {
      (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x238))(ecx0, a4, 0x101);
      if ( ecx0[0x48] )
        v102 = flt_A31C80;
      else
        v102 = flt_A5793C;
      v72 = ecx0[0xD] == 0;
      *(float *)&v140 = v102;
      if ( v72 )
        (*(void (__thiscall **)(int *))(*ecx0 + 0x408))(ecx0);
      v103 = *ecx0;
      sub_68A1A0((_DWORD *)ecx0[0xD]);
      v116 = v104;
      a5_4 = sub_68A190((_DWORD *)ecx0[0xD]);
      sub_68A160((_DWORD *)ecx0[0xD]);
      if ( !(*(unsigned __int8 (__thiscall **)(int *, TESObjectREFR *, int, TESObjectCELL *, int, _DWORD))(v103 + 0x414))(
              ecx0,
              a4,
              v105,
              a5_4,
              v116,
              LODWORD(v140)) )
        (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x194))(ecx0, a4);
    }
    return;
  }
  sub_5E4400(a4);
  v13 = v12;
  sub_566DC0(v8, flt_A30634, st6_0, (Actor *)a4, 0, flt_A30634);
  if ( !v14 )
  {
    (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(*ecx0 + 0x188))(ecx0, a4, 0xFFFFFFFE);
    return;
  }
  if ( !v13 )
    goto LABEL_18;
  v15 = (*(int (__thiscall **)(int *))(*ecx0 + 0x36C))(ecx0);
  v16 = *ecx0;
  if ( v15 == 4 )
  {
    ecx0[9] = *(_DWORD *)(v13 + 8);
    (*(void (__thiscall **)(int *, int))(v16 + 0xBC))(ecx0, 1);
LABEL_12:
    (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(*ecx0 + 0x188))(ecx0, a4, 0xFFFFFFFF);
    return;
  }
  (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(v16 + 0x188))(ecx0, a4, 0xFFFFFFFF);
}
