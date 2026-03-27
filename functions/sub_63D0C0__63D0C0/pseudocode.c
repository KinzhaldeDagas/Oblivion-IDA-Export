char __userpurge sub_63D0C0@<al>(
        int *ecx0@<ecx>,
        double a2@<st7>,
        double st1_0@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double st6_0@<st1>,
        double a9@<st0>,
        TESObjectREFR *a1)
{
  float *v12; // ebp
  double Distance; // st7
  double v14; // st6
  int v15; // ebx
  LocationData *location; // ebx
  char v18; // al
  double v19; // st7
  double v20; // st6
  double v21; // st7
  double v22; // st7
  float *v23; // eax
  float *v24; // ebp
  float *v25; // eax
  long double v26; // st7
  double v27; // st7
  unsigned int v28; // ebp
  void **ExtraXTarget; // ebx
  ObjectType v30; // eax
  unsigned __int8 *v31; // eax
  int v32; // eax
  int v33; // eax
  int (__fastcall **v34)(void **); // edx
  void **v35; // ecx
  unsigned __int8 *v36; // eax
  TargetData *v37; // esi
  ObjectType v38; // eax
  ObjectType v39; // eax
  double v40; // st7
  double v41; // st7
  double v42; // st6
  int v43; // edx
  double v44; // st7
  float *v45; // eax
  int v46; // ebx
  int v47; // eax
  Sky *v48; // eax
  TESForm *v49; // ebx
  NiNode *v50; // eax
  int v51; // edx
  double v52; // st7
  double v53; // st7
  _DWORD *v54; // eax
  _DWORD **v55; // eax
  TargetData *v56; // ebp
  TESObjectREFR *v57; // ebx
  ObjectType v58; // eax
  ObjectType v59; // eax
  ObjectType v60; // ebx
  TESForm *v61; // eax
  double v62; // st7
  int v63; // edx
  char v64; // al
  int v65; // eax
  unsigned int v66; // ebp
  char scale_low; // al
  int v68; // ecx
  int v69; // eax
  unsigned int v70; // eax
  TESForm *v71; // eax
  int v72; // edx
  Sky *v73; // eax
  TESForm *nodeMoonsRoot; // ebx
  NiNode *Health; // eax
  int v76; // edx
  char v77; // al
  int v78; // ecx
  int v79; // eax
  unsigned int v80; // eax
  TESForm *v81; // eax
  double v82; // st7
  double v83; // st6
  double v84; // st7
  float *v85; // eax
  TESObjectREFR *v86; // ebx
  double v87; // st7
  int v88; // ebp
  int v89; // ebx
  int v90; // eax
  double v91; // st7
  char v92; // al
  ActorAnimData *v93; // eax
  ActorAnimData *v94; // ebp
  __int16 AnimGroupFromField8Value; // ax
  __int16 v96; // ax
  double v97; // st7
  double v98; // st7
  TargetData *v99; // ebp
  ObjectType v100; // eax
  ObjectType v101; // eax
  TESObjectARMO *v102; // eax
  unsigned __int16 *v103; // ebp
  unsigned __int16 *v104; // eax
  ActorAnimData *v105; // eax
  double v106; // st7
  double v107; // st7
  double v108; // st6
  double v109; // st7
  ActorAnimData *v110; // eax
  double v111; // st7
  double v112; // st6
  double v113; // st7
  ActorAnimData *v114; // eax
  int v115; // eax
  double v116; // st7
  ActorAnimData *v117; // eax
  ActorAnimData *v118; // eax
  TESForm *v119; // eax
  double v120; // st7
  double v121; // st6
  unsigned __int16 *v122; // ebp
  int v123; // ebx
  TESForm *v124; // eax
  ExtraDataList **p_baseExtraList; // [esp+34h] [ebp-64h]
  float a3; // [esp+38h] [ebp-60h]
  float a3a; // [esp+38h] [ebp-60h]
  float a3b; // [esp+38h] [ebp-60h]
  float a3c; // [esp+38h] [ebp-60h]
  float a3d; // [esp+38h] [ebp-60h]
  float a3e; // [esp+38h] [ebp-60h]
  float a3f; // [esp+38h] [ebp-60h]
  int v133; // [esp+40h] [ebp-58h]
  int v134; // [esp+44h] [ebp-54h]
  int v135; // [esp+48h] [ebp-50h]
  int v136; // [esp+4Ch] [ebp-4Ch]
  TESObjectREFR *v137; // [esp+50h] [ebp-48h]
  int v138; // [esp+54h] [ebp-44h]
  TESPackage *v139; // [esp+58h] [ebp-40h]
  unsigned __int8 *form; // [esp+5Ch] [ebp-3Ch]
  TESObjectREFR *v141; // [esp+60h] [ebp-38h]
  TESObjectREFR *v142; // [esp+60h] [ebp-38h]
  float v143; // [esp+64h] [ebp-34h]
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // [esp+68h] [ebp-30h]
  float v145; // [esp+68h] [ebp-30h]
  Atmosphere *target; // [esp+6Ch] [ebp-2Ch]
  int v147; // [esp+6Ch] [ebp-2Ch]
  int v148; // [esp+70h] [ebp-28h]
  double v149; // [esp+74h] [ebp-24h] BYREF
  double v150; // [esp+80h] [ebp-18h] BYREF
  int v151; // [esp+88h] [ebp-10h] BYREF
  float v152[3]; // [esp+8Ch] [ebp-Ch] BYREF
  float a1a; // [esp+9Ch] [ebp+4h]
  float a1d; // [esp+9Ch] [ebp+4h]
  bool a1b; // [esp+9Ch] [ebp+4h]
  float a1c; // [esp+9Ch] [ebp+4h]
  float a1e; // [esp+9Ch] [ebp+4h]

  v139 = (TESPackage *)(*(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))(*ecx0 + 0x184))(
                         ecx0,
                         a9,
                         st6_0,
                         a7,
                         a6,
                         a5,
                         a4,
                         st1_0,
                         a2);
  v12 = 0;
  Distance = TesObjectREF_GetDistance(a1, (TESObjectREFR *)TESDataHandler_g_PlayerRef, 0);
  v14 = flt_B36CC8;
  if ( v14 < Distance )
    return 1;
  if ( !ecx0[9] || (v15 = ecx0[0x38], v15 == sub_568240((unsigned __int8 *)ecx0[9])) || !v15 )
  {
    v141 = 0;
    form = 0;
    v138 = 0;
    v137 = 0;
    v143 = 0.0;
    v148 = GetRandomLargeInteger_(0) % 0x64;
    location = v139->members.location;
    Actor_GetActorBaseForm((Actor *)a1, 0);
    ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(a1);
    target = (Atmosphere *)v139->members.target;
    if ( location )
    {
      if ( sub_5697E0(location) )
      {
        v12 = (float *)sub_5697E0(location);
        v138 = (int)v12;
      }
    }
    sub_566DC0(v139, flt_A30634, v14, (Actor *)a1, 0, flt_A30634);
    if ( !v18 )
    {
      (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(*ecx0 + 0x188))(ecx0, a1, 0xFFFFFFFF);
      return 0;
    }
    if ( Actor_GetCurrentAction(a1) == 0xFFFFFFFF
      && v12
      && (*(int (__thiscall **)(float *))(*(_DWORD *)v12 + 0x170))(v12) == TESDataHandler_g_XMarkerHeading )
    {
      a1a = v12[0xA];
      v19 = a1a;
      v20 = dbl_A3D5B0;
      if ( a1a >= 0.0 )
      {
        if ( v20 <= v19 )
        {
          unknown_libname_14(v20, v19);
          v19 = a1a;
        }
      }
      else
      {
        unknown_libname_14(v20, v19);
        a1a = a1a + dbl_A3D5B0;
        v19 = a1a;
      }
      *(float *)&v149 = 0.0;
      a3 = v19;
      sub_683D80((int)a1, a3, (int)&v149);
      *(float *)&v150 = v19;
      *(float *)&v150 = fabs(*(float *)&v150);
      v21 = *(float *)&v150;
      *(float *)&v150 = (double)iActorKeepTurnDegree * dbl_A31C78;
      v14 = *(float *)&v150;
      if ( *(float *)&v150 < v21 )
      {
LABEL_20:
        v22 = a1a;
LABEL_21:
        a3a = v22;
        sub_685530((Actor *)a1, a3a, 1);
        (*(void (__thiscall **)(int *, _DWORD))(*ecx0 + 0x484))(ecx0, 0);
        return 0;
      }
      sub_5E05F0((Actor *)a1, 0x30);
      (*(void (__thiscall **)(int *))(*ecx0 + 0x49C))(ecx0);
      v23 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v12 + 0x174))(v12);
      TESObjectREFR_SetPosition(a1, *v23, v23[1], v23[2]);
      a1->vtbl[1].super.MarkAsModified((TESForm *)a1, COERCE_UINT32(v12[0xA]));
      (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x194))(ecx0, a1);
    }
    v24 = a1->vtbl->GetPos(a1);
    v25 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
    a1d = v25[1] - v24[1];
    *(float *)&v150 = v25[2] - v24[2];
    v152[0] = *v25 - *v24;
    v152[1] = a1d;
    v152[2] = *(float *)&v150;
    *(float *)&v150 = sub_683CB0(v152);
    v26 = *(float *)&v150;
    sub_683D80((int)a1, *(float *)&v150, (int)&v151);
    *(float *)&v150 = fabs(v26);
    v27 = *(float *)&v150;
    a1b = *(float *)&v150 < dbl_A4D918;
    v28 = (unsigned int)target;
    if ( !target )
      goto LABEL_45;
    if ( location )
    {
      if ( sub_5697E0(location) )
        v138 = sub_5697E0(location);
    }
    if ( v138 && (*(int (__thiscall **)(int))(*(_DWORD *)v138 + 0x170))(v138) == TESDataHandler_g_XMarkerHeading )
    {
      ExtraXTarget = ExtraDataList::GetExtraXTarget((ExtraDataList *)(v138 + 0x44));
      v137 = (TESObjectREFR *)ExtraXTarget;
    }
    else
    {
      ExtraXTarget = (void **)v138;
      v137 = (TESObjectREFR *)v138;
    }
    v143 = COERCE_FLOAT(sub_452A60(target));
    if ( TargetData::GetTargetType((TargetData *)target) )
    {
      if ( TargetData::GetTargetType((TargetData *)target) == 1 )
      {
        form = (unsigned __int8 *)sub_569E70((TargetData *)target).form;
        v32 = sub_568240(form);
      }
      else
      {
        if ( TargetData::GetTargetType((TargetData *)target) != 2 )
        {
LABEL_38:
          if ( ecx0[0x38] )
            goto LABEL_46;
          if ( ExtraXTarget || (ExtraXTarget = (void **)v138) != 0 )
          {
            (*(void (__thiscall **)(int *, void **))(*ecx0 + 0xD0))(ecx0, ExtraXTarget);
            v33 = (*((int (__thiscall **)(void **))*ExtraXTarget + 0x5C))(ExtraXTarget);
            v34 = (int (__fastcall **)(void **))*ExtraXTarget;
            v35 = ExtraXTarget;
LABEL_44:
            form = (unsigned __int8 *)v33;
            v36 = (unsigned __int8 *)v34[0x5C](v35);
            ecx0[0x38] = sub_568240(v36);
            goto LABEL_46;
          }
          if ( ecx0[0xC] )
          {
            (*(void (__thiscall **)(int *, int))(*ecx0 + 0xD0))(ecx0, ecx0[0xC]);
            v33 = (*(int (__thiscall **)(int))(*(_DWORD *)ecx0[0xC] + 0x170))(ecx0[0xC]);
            v35 = (void **)ecx0[0xC];
            v34 = (int (__fastcall **)(void **))*v35;
            goto LABEL_44;
          }
LABEL_45:
          ecx0[0x38] = 0;
LABEL_46:
          if ( (*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) )
          {
            if ( *(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) )
            {
              if ( *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) + 4) == 0x21 )
                v141 = *(TESObjectREFR **)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8);
            }
          }
          switch ( ecx0[0x38] )
          {
            case 1:
              goto LABEL_291;
            case 3:
              v37 = v139->members.target;
              if ( TargetData::GetTargetType(v37) == 1 )
              {
                v38.form = sub_569E70(v37).form;
              }
              else
              {
                if ( TargetData::GetTargetType(v37) )
                  return 0;
                v39.form = sub_569E60(v37).form;
                v38.objectCode = (UInt32)v39.form->vtbl->GetBaseForm(v39.objectCode);
              }
              if ( !TESBipedModelForm_CoversSlot((unsigned __int16 *)(v38.objectCode + 0x64), 0xD, 0)
                || Actor_IsBlocking(a1) )
              {
                return 0;
              }
              sub_5F4AE0((Actor *)a1, a7, v14, v27, 1);
              return 0;
            case 5:
            case 0x15:
              v99 = v139->members.target;
              if ( !(*(unsigned __int8 (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x554))(ecx0, a1, 1) )
              {
                (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2);
                (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x594))(ecx0, a1);
                if ( *((_BYTE *)ecx0 + 0xD0) )
                  return 0;
LABEL_107:
                (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x194))(ecx0, a1);
                return 0;
              }
              if ( TargetData::GetTargetType(v99) == 1 )
              {
                v100.form = sub_569E70(v99).form;
              }
              else
              {
                if ( TargetData::GetTargetType(v99) )
                {
LABEL_291:
                  if ( SLODWORD(v143) <= 0
                    || ecx0[0x73] < SLODWORD(v143)
                    || Actor_GetCurrentAction(a1) != 0xFFFFFFFF
                    || (v110 = a1->vtbl->GetAnimData(a1), !sub_472EA0(v110)) )
                  {
                    if ( v138
                      && (*(int (__thiscall **)(int))(*(_DWORD *)v138 + 0x170))(v138) == TESDataHandler_g_XMarkerHeading )
                    {
                      a1c = *(float *)(v138 + 0x28);
                      v111 = a1c;
                      v112 = dbl_A3D5B0;
                      if ( a1c >= 0.0 )
                      {
                        if ( v112 <= v111 )
                        {
                          unknown_libname_14(v112, v111);
                          v111 = a1c;
                        }
                      }
                      else
                      {
                        unknown_libname_14(v112, v111);
                        a1c = a1c + dbl_A3D5B0;
                        v111 = a1c;
                      }
                      *(float *)&v150 = 0.0;
                      a3e = v111;
                      sub_683D80((int)a1, a3e, (int)&v150);
                      *(float *)&v149 = v111;
                      *(float *)&v149 = fabs(*(float *)&v149);
                      v113 = *(float *)&v149;
                      *(float *)&v149 = (double)iActorKeepTurnDegree * dbl_A31C78;
                      if ( *(float *)&v149 < v113 )
                      {
LABEL_282:
                        (*(void (__thiscall **)(int *, _DWORD))(*ecx0 + 0x484))(ecx0, 0);
                        sub_685530((Actor *)a1, a1c, 1);
                        return 0;
                      }
                      sub_5E05F0((Actor *)a1, 0x30);
                    }
                    if ( (*(unsigned __int8 (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x51C))(ecx0, a1, 1) )
                      ++ecx0[0x73];
                    if ( sub_565DF0(v139) && !v139->members.time.duration )
                    {
                      v114 = a1->vtbl->GetAnimData(a1);
                      if ( sub_472EA0(v114) )
                      {
                        (*(void (__thiscall **)(int *))(*ecx0 + 0x49C))(ecx0);
                        (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2);
                        return 0;
                      }
                    }
                    return 0;
                  }
LABEL_342:
                  (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2);
                  (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x594))(ecx0, a1);
LABEL_343:
                  if ( !*((_BYTE *)ecx0 + 0xD0) )
                    (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x194))(ecx0, a1);
                  return 1;
                }
                v101.form = sub_569E60(v99).form;
                v100.objectCode = (UInt32)v101.form->vtbl->GetBaseForm(v101.objectCode);
              }
              if ( v100.objectCode )
              {
                v102 = (TESObjectARMO *)OblivionDynamicCast(
                                          v100.form,
                                          0,
                                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                          &TESObjectARMO `RTTI Type Descriptor',
                                          0);
                v103 = (unsigned __int16 *)v102;
                if ( v102 )
                {
                  v104 = (unsigned __int16 *)sub_4691B0(v102);
                  if ( TESBipedModelForm_CoversSlot(v104, 0xD, 0) )
                  {
                    if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent
                           + 0x3E))(
                            a1[1].vtbl,
                            1) )
                      Actor_EquipItem(
                        (PlayerCharacter *)a1,
                        v103,
                        a7,
                        v14,
                        a5,
                        v27,
                        a2,
                        a6,
                        a4,
                        st1_0,
                        (TESForm *)v103,
                        1,
                        0,
                        1,
                        0,
                        v133,
                        v134,
                        v135,
                        v136,
                        (int)v137,
                        v138,
                        (int)v139,
                        (int)form,
                        (int)v141,
                        SLODWORD(v143),
                        (int)ContainerExtraDataForRef);
                    Actor_SetAlerted(a1, 1);
                    if ( SLODWORD(v143) > 0 && ecx0[0x73] >= SLODWORD(v143) && Actor_GetCurrentAction(a1) == 0xFFFFFFFF )
                    {
                      v105 = a1->vtbl->GetAnimData(a1);
                      if ( sub_472EA0(v105) )
                      {
                        (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2);
                        v106 = ((double (__thiscall *)(int *, TESObjectREFR *))*(_DWORD *)(*ecx0 + 0x594))(ecx0, a1);
                        sub_5F4AE0((Actor *)a1, a7, v14, v106, 0);
                        Actor_SetAlerted(a1, 0);
                        goto LABEL_343;
                      }
                    }
                    if ( v138
                      && (*(int (__thiscall **)(int))(*(_DWORD *)v138 + 0x170))(v138) == TESDataHandler_g_XMarkerHeading )
                    {
                      a1c = *(float *)(v138 + 0x28);
                      v107 = a1c;
                      v108 = dbl_A3D5B0;
                      if ( a1c >= 0.0 )
                      {
                        if ( v108 <= v107 )
                        {
                          unknown_libname_14(v108, v107);
                          v107 = a1c;
                        }
                      }
                      else
                      {
                        unknown_libname_14(v108, v107);
                        a1c = a1c + dbl_A3D5B0;
                        v107 = a1c;
                      }
                      *(float *)&v150 = 0.0;
                      a3d = v107;
                      sub_683D80((int)a1, a3d, (int)&v150);
                      *(float *)&v149 = v107;
                      *(float *)&v149 = fabs(*(float *)&v149);
                      v109 = *(float *)&v149;
                      *(float *)&v149 = (double)iActorKeepTurnDegree * dbl_A31C78;
                      v14 = *(float *)&v149;
                      if ( *(float *)&v149 < v109 )
                        goto LABEL_282;
                      sub_5E05F0((Actor *)a1, 0x30);
                    }
                    if ( v137 )
                      (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x484))(ecx0, v137);
                    if ( *((float *)ecx0 + 0x6C) >= 0.0 || *((float *)ecx0 + 0x6D) >= 0.0 )
                    {
                      sub_5F4AE0((Actor *)a1, a7, v14, 0.0, 0);
                      *((float *)ecx0 + 0x6C) = flt_A524B0;
                    }
                    else
                    {
                      sub_5F4AE0((Actor *)a1, a7, v14, 0.0, 1);
                      *((float *)ecx0 + 0x6D) = flt_A35AA4;
                    }
                    *((float *)ecx0 + 0x6D) = *((float *)ecx0 + 0x6D) - flt_B33E9C;
                  }
                }
              }
              goto LABEL_291;
            case 0xD:
            case 0x17:
            case 0x18:
            case 0x19:
              v56 = v139->members.target;
              if ( !(*(unsigned __int8 (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x554))(ecx0, a1, 1)
                && ecx0[0x38] != 0x17 )
              {
                (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2);
                (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x594))(ecx0, a1);
                if ( *((_BYTE *)ecx0 + 0xD0) )
                  return 0;
                goto LABEL_107;
              }
              v57 = v141;
              if ( v141 )
              {
                if ( TargetData::GetTargetType(v56) == 1 )
                {
                  if ( v141 != sub_569E70(v56).form )
                  {
                    v58.form = sub_569E70(v56).form;
                    Actor_EquipItem(
                      (PlayerCharacter *)a1,
                      (unsigned __int16 *)&v56->targetType,
                      a7,
                      v14,
                      a5,
                      v27,
                      a2,
                      a6,
                      a4,
                      st1_0,
                      (TESForm *)v58.form,
                      1,
                      0,
                      1,
                      0,
                      v133,
                      v134,
                      v135,
                      v136,
                      (int)v137,
                      v138,
                      (int)v139,
                      (int)form,
                      (int)v141,
                      SLODWORD(v143),
                      (int)ContainerExtraDataForRef);
                  }
                }
                else if ( !TargetData::GetTargetType(v56) )
                {
                  v59.form = sub_569E60(v56).form;
                  if ( v141 != (TESObjectREFR *)v59.form->vtbl->GetBaseForm(v59.objectCode) )
                  {
                    v60.form = sub_569E60(v56).form;
                    p_baseExtraList = (ExtraDataList **)&sub_569E60(v56).form->member.baseExtraList;
                    v61 = (TESForm *)((int (__thiscall *)(ObjectType))v60.form->vtbl->GetBaseForm)(v60);
                    Actor_EquipItem(
                      (PlayerCharacter *)a1,
                      (unsigned __int16 *)&v56->targetType,
                      a7,
                      v14,
                      a5,
                      v27,
                      a2,
                      a6,
                      a4,
                      st1_0,
                      v61,
                      1,
                      p_baseExtraList,
                      1,
                      0,
                      v133,
                      v134,
                      v135,
                      v136,
                      (int)v137,
                      v138,
                      (int)v139,
                      (int)form,
                      (int)v141,
                      SLODWORD(v143),
                      (int)ContainerExtraDataForRef);
                    v57 = v141;
                  }
                }
              }
              if ( SLODWORD(v143) > 0 && ecx0[0x73] >= SLODWORD(v143) && Actor_GetCurrentAction(a1) == 0xFFFFFFFF )
                goto LABEL_342;
              if ( *((float *)ecx0 + 0x6D) <= 0.0
                && Actor_GetCurrentAction(a1) == 0xFFFFFFFF
                && v137
                && !v137->vtbl->IsActor(v137)
                && v148 > 0x46
                && ecx0[0x73] > 7 )
              {
LABEL_67:
                (*(void (__thiscall **)(int *, _DWORD))(*ecx0 + 0x300))(ecx0, 0);
                (*(void (__thiscall **)(int *, _DWORD))(*ecx0 + 0x214))(ecx0, 0);
                sub_631DC0((Actor *)a1, (int)v137);
                return 0;
              }
              v62 = sub_566DC0(v139, flt_A30634, v14, (Actor *)a1, 0, flt_A30634);
              v63 = *ecx0;
              if ( !v64 )
              {
                (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(v63 + 0x188))(ecx0, a1, 0xFFFFFFFF);
                return 0;
              }
              if ( (*(int (__thiscall **)(int *, int))(v63 + 0xEC))(ecx0, 1) )
              {
                v57 = 0;
                v141 = 0;
                if ( *(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) )
                {
                  if ( *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) + 4) == 0x21 )
                  {
                    v57 = *(TESObjectREFR **)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8);
                    v141 = v57;
                  }
                }
              }
              v65 = ecx0[0x38];
              if ( v65 == 0x17 )
              {
                if ( v57 )
                  Actor_UnequipItem((PlayerCharacter *)a1, v62, a7, v14, (char)v57, 1, 0, 0, 0, 0);
                goto LABEL_176;
              }
              if ( v65 == 0x19 )
              {
                v66 = 0;
                if ( v57 )
                {
                  scale_low = LOBYTE(v57[1].member.scale);
                  if ( scale_low == 5 || scale_low == 4 )
                  {
LABEL_152:
                    if ( !ecx0[0x3B] )
                    {
                      v73 = (Sky *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].AddItem)(a1);
                      v66 = (unsigned int)v73;
                      if ( v73 )
                      {
                        nodeMoonsRoot = (TESForm *)v73->nodeMoonsRoot;
                        Health = TESHealthForm_GetHealth(v73);
                        Actor_EquipItem(
                          (PlayerCharacter *)a1,
                          (unsigned __int16 *)v66,
                          a7,
                          v14,
                          a5,
                          v62,
                          a2,
                          a6,
                          a4,
                          st1_0,
                          nodeMoonsRoot,
                          (signed int)Health,
                          0,
                          1,
                          0,
                          v133,
                          v134,
                          v135,
                          v136,
                          (int)v137,
                          v138,
                          (int)v139,
                          (int)form,
                          (int)v141,
                          SLODWORD(v143),
                          (int)ContainerExtraDataForRef);
                        v57 = v142;
                      }
                    }
                    if ( !(*(int (__thiscall **)(int *, int))(*ecx0 + 0xF4))(ecx0, 1)
                      || v57 && LOBYTE(v57[1].member.scale) != 5 )
                    {
                      goto LABEL_103;
                    }
                    if ( !v66 )
                      goto LABEL_176;
LABEL_175:
                    ContainerEntryExtraData_DestroyDataTable((unsigned int *)v66, v76);
                    FormHeapFree(v66);
                    goto LABEL_176;
                  }
                }
                v68 = ecx0[0xB];
                LODWORD(v150) = 0;
                if ( v68 )
                {
                  v69 = (*(int (__thiscall **)(int))(*(_DWORD *)v68 + 0x170))(v68);
                  ContainerExtraData_GetEntryForForm(ContainerExtraDataForRef, v69, 1, 0);
                }
                else
                {
                  if ( !form )
                  {
                    v71 = sub_486150(ContainerExtraDataForRef, 0x19, (int *)&v150);
                    if ( v71 )
                    {
LABEL_141:
                      Actor_EquipItem(
                        (PlayerCharacter *)a1,
                        (unsigned __int16 *)v66,
                        a7,
                        v14,
                        a5,
                        v62,
                        a2,
                        a6,
                        a4,
                        st1_0,
                        v71,
                        1,
                        0,
                        1,
                        0,
                        v133,
                        v134,
                        v135,
                        v136,
                        (int)v137,
                        v138,
                        (int)v139,
                        (int)form,
                        (int)v141,
                        SLODWORD(v143),
                        (int)ContainerExtraDataForRef);
                      if ( (*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) )
                      {
                        v57 = 0;
                        v141 = 0;
                        if ( *(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) )
                        {
                          if ( *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8)
                                        + 4) == 0x21 )
                          {
                            v57 = *(TESObjectREFR **)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8);
                            v141 = v57;
                          }
                        }
                      }
                      goto LABEL_149;
                    }
LABEL_148:
                    (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2);
LABEL_149:
                    if ( v66 )
                    {
                      ContainerEntryExtraData_DestroyDataTable((unsigned int *)v66, v72);
                      FormHeapFree(v66);
                    }
                    v66 = 0;
                    goto LABEL_152;
                  }
                  ContainerExtraData_GetEntryForForm(ContainerExtraDataForRef, (int)form, 1, 0);
                }
                v66 = v70;
                if ( v70 )
                {
                  v71 = *(TESForm **)(v70 + 8);
                  if ( v71 )
                    goto LABEL_141;
                }
                goto LABEL_148;
              }
              if ( v65 != 0x18 || v57 && (v77 = LOBYTE(v57[1].member.scale), v77 != 5) && v77 != 4 )
              {
LABEL_176:
                if ( v138
                  && (*(int (__thiscall **)(int))(*(_DWORD *)v138 + 0x170))(v138) == TESDataHandler_g_XMarkerHeading )
                {
                  v145 = *(float *)(v138 + 0x28);
                  v82 = v145;
                  v83 = dbl_A3D5B0;
                  if ( v145 >= 0.0 )
                  {
                    if ( v83 <= v82 )
                    {
                      unknown_libname_14(v83, v82);
                      *(float *)&v150 = v145;
                      v82 = v145;
                    }
                  }
                  else
                  {
                    unknown_libname_14(v83, v82);
                    *(float *)&v150 = v145;
                    v145 = v145 + dbl_A3D5B0;
                    v82 = v145;
                  }
                  *(float *)&v150 = 0.0;
                  a3c = v82;
                  sub_683D80((int)a1, a3c, (int)&v150);
                  *(float *)&v149 = v82;
                  *(float *)&v149 = fabs(*(float *)&v149);
                  v84 = *(float *)&v149;
                  *(float *)&v149 = (double)iActorKeepTurnDegree * dbl_A31C78;
                  v14 = *(float *)&v149;
                  if ( *(float *)&v149 < v84 )
                  {
                    v22 = v145;
                    goto LABEL_21;
                  }
                  sub_5E05F0((Actor *)a1, 0x30);
                  (*(void (__thiscall **)(int *))(*ecx0 + 0x49C))(ecx0);
                  v85 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v138 + 0x174))(v138);
                  TESObjectREFR_SetPosition(a1, *v85, v85[1], v85[2]);
                  a1->vtbl[1].super.MarkAsModified((TESForm *)a1, COERCE_UINT32(*(float *)(v138 + 0x28)));
                  (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x194))(ecx0, a1);
                  v86 = (TESObjectREFR *)ExtraDataList::GetExtraXTarget((ExtraDataList *)(v138 + 0x44));
                  v137 = v86;
                }
                else
                {
                  v86 = v137;
                }
                if ( (*(unsigned __int8 (__thiscall **)(int *))(*ecx0 + 0x304))(ecx0) )
                {
                  if ( *((float *)ecx0 + 0x6C) <= 0.0
                    && (Actor_GetCurrentAction(a1) == 0xFFFFFFFF || Actor_GetCurrentAction(a1) == 6)
                    && ((v149 = TesObjectREF_GetDistance((TESObjectREFR *)TESDataHandler_g_PlayerRef, a1, 0),
                         v87 = TesObjectREF_GetDistance(a1, v86, 0),
                         v87 <= v149)
                     || !a1b) )
                  {
                    v88 = 0xFF;
                    v89 = GetRandomLargeInteger_(0) % 0x64;
                    if ( (*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1)
                      && *(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8)
                      && *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) + 4) == 0x21
                      && (v90 = *(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8)) != 0
                      && *(_BYTE *)(v90 + 0x90) == 5 )
                    {
                      sub_5F48D0((PlayerCharacter *)a1, v89, 0xFF, (int)a1, v14, v87, 0x13);
                      ecx0[0x6D] = *GameSetting_GetSafeFloatPointer((int *)&fBowHoldTimer);
                      v91 = flt_A3D65C;
                      ++ecx0[0x73];
                      *((float *)ecx0 + 0x6C) = v91;
                      if ( !v137 )
                        return 0;
                      sub_632090(ecx0, (MobileObject *)a1, (int)v137);
                    }
                    else if ( *((_BYTE *)ecx0 + 0xD0) )
                    {
                      if ( (*(int (__thiscall **)(int *))(*ecx0 + 0x2D0))(ecx0) == 0xFFFFFFFF )
                      {
                        if ( v137 && v137->vtbl->IsActor(v137) )
                        {
                          if ( !sub_5E05B0(v137) )
                          {
                            if ( v89 >= 0x1E && (Actor_GetCurrentAction(v137) == 2 || Actor_GetCurrentAction(v137) == 3) )
                            {
                              sub_5F4AE0((Actor *)a1, a7, v14, v87, 1);
                              *((float *)ecx0 + 0x6C) = flt_A57414;
                              return 0;
                            }
                            if ( v89 > 0xA )
                            {
                              if ( v89 > 0x14 )
                              {
                                if ( v89 > 0x1E )
                                {
                                  if ( v89 > 0x28 )
                                    v88 = (v89 > 0x46) + 0x14;
                                  else
                                    v88 = 0x19;
                                }
                                else
                                {
                                  v88 = 0x16;
                                }
                              }
                              else
                              {
                                v88 = 0x1A;
                              }
                            }
                            else
                            {
                              v88 = 0x18;
                            }
                          }
                        }
                        else if ( v89 > 0xA )
                        {
                          if ( v89 > 0x14 )
                          {
                            if ( v89 > 0x1E )
                            {
                              if ( v89 > 0x28 )
                                v88 = (v89 > 0x46) + 0x14;
                              else
                                v88 = 0x19;
                            }
                            else
                            {
                              v88 = 0x16;
                            }
                          }
                          else
                          {
                            v88 = 0x1A;
                          }
                        }
                        else
                        {
                          v88 = 0x18;
                        }
                        if ( sub_615F70(*(float *)&a1, v88, (float *)&v149) )
                        {
                          v87 = 0.0;
                          if ( 0.0 != *((float *)&v149 + 1) )
                            v88 = 0x15;
                        }
                        if ( Actor_IsSneaking(a1)
                          && !(*(unsigned __int8 (__thiscall **)(int *))(*ecx0 + 0x13C))(ecx0)
                          && !(*(unsigned __int8 (__thiscall **)(int *))(*ecx0 + 0x138))(ecx0)
                          && !Actor_IsSwimming(a1) )
                        {
                          v88 = 0x16;
                        }
                        if ( !Actor_IsBlocking(a1) )
                          sub_5F48D0((PlayerCharacter *)a1, v89, v88, (int)a1, v14, v87, v88);
                        *((float *)ecx0 + 0x6C) = flt_A524B0;
                      }
                      else if ( Actor_IsBlocking(a1) )
                      {
                        sub_5F4AE0((Actor *)a1, a7, v14, v87, 0);
                      }
                    }
                  }
                  else
                  {
                    sub_566DC0(v139, flt_A30634, v14, (Actor *)a1, 0, flt_A30634);
                    if ( !v92 && Actor_GetCurrentAction(a1) == 0xFFFFFFFF )
                    {
                      v93 = a1->vtbl->GetAnimData(a1);
                      if ( sub_472EA0(v93) )
                        (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(*ecx0 + 0x188))(
                          ecx0,
                          a1,
                          0xFFFFFFFF);
                    }
                    if ( *((float *)ecx0 + 0x6D) > 0.0 )
                    {
                      v94 = a1->vtbl->GetAnimData(a1);
                      AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v94, 3);
                      if ( sub_51AC80(AnimGroupFromField8Value) )
                      {
                        v96 = ActorAnimData_GetAnimGroupFromField8Value(v94, 3);
                        if ( !sub_51ACC0(v96) )
                        {
                          if ( *((float *)ecx0 + 0x6D) > 0.0
                            || (v149 = TesObjectREF_GetDistance((TESObjectREFR *)TESDataHandler_g_PlayerRef, a1, 0),
                                v97 = TesObjectREF_GetDistance(a1, v86, 0),
                                v97 > v149)
                            && a1b )
                          {
                            if ( ActorAnimData_GetSomethingFromField8Value(v94, 3) == 2 )
                              sub_4706D0(v94, 3);
                          }
                        }
                      }
                      v149 = TesObjectREF_GetDistance((TESObjectREFR *)TESDataHandler_g_PlayerRef, a1, 0);
                      v98 = TesObjectREF_GetDistance(a1, v86, 0);
                      if ( v98 <= v149 || !a1b )
                        *((float *)ecx0 + 0x6D) = *((float *)ecx0 + 0x6D) - flt_B33E9C;
                    }
                    else
                    {
                      *((float *)ecx0 + 0x6C) = *((float *)ecx0 + 0x6C) - flt_B33E9C;
                    }
                  }
                }
                else
                {
                  sub_5E6D70(a1, 1);
                  *((_BYTE *)ecx0 + 0x244) = 1;
                }
                if ( v137 )
                {
                  (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x484))(ecx0, v137);
                  return 0;
                }
                return 0;
              }
              v78 = ecx0[0xB];
              v66 = 0;
              LODWORD(v150) = 0;
              if ( v78 )
              {
                v79 = (*(int (__thiscall **)(int))(*(_DWORD *)v78 + 0x170))(v78);
                ContainerExtraData_GetEntryForForm(ContainerExtraDataForRef, v79, 1, 0);
              }
              else
              {
                if ( !form )
                {
                  v81 = sub_486150(ContainerExtraDataForRef, 0x18, (int *)&v150);
                  if ( v81 )
                  {
LABEL_168:
                    Actor_EquipItem(
                      (PlayerCharacter *)a1,
                      (unsigned __int16 *)v66,
                      a7,
                      v14,
                      a5,
                      v62,
                      a2,
                      a6,
                      a4,
                      st1_0,
                      v81,
                      1,
                      0,
                      1,
                      0,
                      v133,
                      v134,
                      v135,
                      v136,
                      (int)v137,
                      v138,
                      (int)v139,
                      (int)form,
                      (int)v141,
                      SLODWORD(v143),
                      (int)ContainerExtraDataForRef);
LABEL_173:
                    if ( !v66 )
                      goto LABEL_176;
                    Actor_EquipItem(
                      (PlayerCharacter *)a1,
                      (unsigned __int16 *)v66,
                      a7,
                      v14,
                      a5,
                      v62,
                      a2,
                      a6,
                      a4,
                      st1_0,
                      *(TESForm **)(v66 + 8),
                      1,
                      0,
                      1,
                      0,
                      v133,
                      v134,
                      v135,
                      v136,
                      (int)v137,
                      v138,
                      (int)v139,
                      (int)form,
                      (int)v141,
                      SLODWORD(v143),
                      (int)ContainerExtraDataForRef);
                    goto LABEL_175;
                  }
LABEL_172:
                  (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2);
                  goto LABEL_173;
                }
                ContainerExtraData_GetEntryForForm(ContainerExtraDataForRef, (int)form, 1, 0);
              }
              v66 = v80;
              if ( v80 )
              {
                v81 = *(TESForm **)(v80 + 8);
                if ( v81 )
                  goto LABEL_168;
              }
              goto LABEL_172;
            case 0xE:
              if ( SLODWORD(v143) > 0 && ecx0[0x73] >= SLODWORD(v143) && Actor_GetCurrentAction(a1) == 0xFFFFFFFF )
                goto LABEL_342;
              v40 = 0.0;
              if ( *((float *)ecx0 + 0x6D) <= 0.0
                && Actor_GetCurrentAction(a1) == 0xFFFFFFFF
                && v137
                && !v137->vtbl->IsActor(v137)
                && v148 > 0x46
                && ecx0[0x73] > 7 )
              {
                goto LABEL_67;
              }
              if ( !v138
                || (*(int (__thiscall **)(int))(*(_DWORD *)v138 + 0x170))(v138) != TESDataHandler_g_XMarkerHeading )
              {
                goto LABEL_77;
              }
              v143 = *(float *)(v138 + 0x28);
              v41 = v143;
              v42 = dbl_A3D5B0;
              if ( v143 >= 0.0 )
              {
                if ( v42 <= v41 )
                {
                  unknown_libname_14(v42, v41);
                  *(float *)&v150 = v143;
                  v41 = v143;
                }
              }
              else
              {
                unknown_libname_14(v42, v41);
                *(float *)&v150 = v143;
                v143 = v143 + dbl_A3D5B0;
                v41 = v143;
              }
              *(float *)&v150 = 0.0;
              a3b = v41;
              sub_683D80((int)a1, a3b, (int)&v150);
              *(float *)&v149 = v41;
              v43 = *ecx0;
              *(float *)&v149 = fabs(*(float *)&v149);
              v44 = *(float *)&v149;
              *(float *)&v149 = (double)iActorKeepTurnDegree * dbl_A31C78;
              v14 = *(float *)&v149;
              if ( *(float *)&v149 < v44 )
              {
                (*(void (__thiscall **)(int *, _DWORD))(v43 + 0x484))(ecx0, 0);
                sub_685530((Actor *)a1, v143, 1);
                return 0;
              }
              (*(void (__thiscall **)(int *))(v43 + 0x49C))(ecx0);
              sub_5E05F0((Actor *)a1, 0x30);
              v45 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v138 + 0x174))(v138);
              TESObjectREFR_SetPosition(a1, *v45, v45[1], v45[2]);
              v40 = *(float *)(v138 + 0x28);
              a1->vtbl[1].super.MarkAsModified((TESForm *)a1, COERCE_UINT32(*(float *)(v138 + 0x28)));
              (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x194))(ecx0, a1);
LABEL_77:
              v46 = 0;
              v147 = 0;
              if ( *(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) )
              {
                if ( *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) + 4) == 0x21 )
                {
                  v46 = *(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8);
                  v147 = v46;
                  if ( v46 )
                  {
                    if ( *(_BYTE *)(v46 + 0x90) == 5 )
                      goto LABEL_91;
                  }
                }
              }
              v47 = ((int (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_44)(a1, 5);
              v28 = v47;
              if ( v47 )
                Actor_EquipItem(
                  (PlayerCharacter *)a1,
                  (unsigned __int16 *)v47,
                  a7,
                  v14,
                  a5,
                  v40,
                  a2,
                  a6,
                  a4,
                  st1_0,
                  *(TESForm **)(v47 + 8),
                  1,
                  0,
                  1,
                  0,
                  v133,
                  v134,
                  v135,
                  v136,
                  (int)v137,
                  v138,
                  (int)v139,
                  (int)form,
                  (int)v141,
                  SLODWORD(v143),
                  (int)ContainerExtraDataForRef);
              if ( !ecx0[0x3B] )
              {
                v48 = (Sky *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].AddItem)(a1);
                v28 = (unsigned int)v48;
                if ( v48 )
                {
                  v49 = (TESForm *)v48->nodeMoonsRoot;
                  v50 = TESHealthForm_GetHealth(v48);
                  Actor_EquipItem(
                    (PlayerCharacter *)a1,
                    (unsigned __int16 *)v28,
                    a7,
                    v14,
                    a5,
                    v40,
                    a2,
                    a6,
                    a4,
                    st1_0,
                    v49,
                    (signed int)v50,
                    0,
                    1,
                    0,
                    v133,
                    v134,
                    v135,
                    v136,
                    (int)v137,
                    v138,
                    (int)v139,
                    (int)form,
                    (int)v141,
                    SLODWORD(v143),
                    (int)ContainerExtraDataForRef);
                  v46 = v147;
                }
              }
              if ( !(*(int (__thiscall **)(int *, int))(*ecx0 + 0xF4))(ecx0, 1) || v46 && *(_BYTE *)(v46 + 0x90) != 5 )
              {
LABEL_103:
                (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2);
                goto LABEL_343;
              }
              if ( v28 )
              {
                ContainerEntryExtraData_DestroyDataTable((unsigned int *)v28, v51);
                FormHeapFree(v28);
              }
LABEL_91:
              if ( !(*(unsigned __int8 (__thiscall **)(int *))(*ecx0 + 0x304))(ecx0) )
              {
                sub_5E6D70(a1, 1);
                *((_BYTE *)ecx0 + 0x244) = 1;
                return 0;
              }
              if ( *((float *)ecx0 + 0x6C) > 0.0
                || Actor_GetCurrentAction(a1) != 0xFFFFFFFF
                || (v150 = TesObjectREF_GetDistance((TESObjectREFR *)TESDataHandler_g_PlayerRef, a1, 0),
                    v52 = TesObjectREF_GetDistance(a1, v137, 0),
                    v52 > v150)
                && a1b )
              {
                *((float *)ecx0 + 0x6C) = *((float *)ecx0 + 0x6C) - dbl_A2F928;
                return 0;
              }
              sub_5F48D0((PlayerCharacter *)a1, (int)v137, v28, (int)a1, v14, v52, 0x13);
              v53 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fBowHoldTimer);
              ++ecx0[0x73];
              *((float *)ecx0 + 0x6D) = v53;
              *((float *)ecx0 + 0x6C) = flt_A3D65C;
              if ( v137 )
                sub_632090(ecx0, (MobileObject *)a1, (int)v137);
              v54 = (_DWORD *)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent
                               + 0x3B))(
                                a1[1].vtbl,
                                1);
              if ( v54 )
              {
                v55 = (_DWORD **)*v54;
                if ( v55 )
                {
                  sub_41F610(*v55);
                  return 0;
                }
              }
              return 0;
            case 0xF:
            case 0x10:
              return 0;
            case 0x1A:
            case 0x1B:
            case 0x1C:
            case 0x1D:
            case 0x1E:
            case 0x1F:
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x23:
              if ( SLODWORD(v143) > 0 && ecx0[0x73] >= SLODWORD(v143) && Actor_GetCurrentAction(a1) == 0xFFFFFFFF )
                goto LABEL_342;
              if ( *((float *)ecx0 + 0x6C) > 0.0 )
              {
                v116 = *((float *)ecx0 + 0x6C) - flt_B33E9C;
              }
              else
              {
                if ( !ecx0[0x52] )
                {
                  if ( form )
                    ecx0[0x52] = (int)OblivionDynamicCast(
                                        form,
                                        0,
                                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                        &MagicItem `RTTI Type Descriptor',
                                        0);
                }
                if ( !ecx0[0x52] )
                {
                  sub_5E91E0((Actor *)a1, ecx0[0x38], 0xFFFFFFFF, 1);
                  goto LABEL_330;
                }
                v115 = *(_DWORD *)(EffectItemList_GetStrongestItem(3, 0) + 0x10);
                if ( v115 == 2 )
                {
                  Actor_CastOnTarget((Actor *)a1, (void *)ecx0[0x52], (int)v137, 1);
                  v116 = flt_A524B0;
                  ++ecx0[0x73];
                  ecx0[0x52] = 0;
                }
                else if ( v115 == 1 )
                {
                  Actor_CastOnTouch((Actor *)a1, (void *)ecx0[0x52], (int)v137);
                  v116 = flt_A524B0;
                  ++ecx0[0x73];
                  ecx0[0x52] = 0;
                }
                else
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int *))(*ecx0 + 0x2DC))(ecx0) )
                  {
                    if ( Actor_GetCurrentAction(a1) == 0xFFFFFFFF && a1 == (TESObjectREFR *)0xFFFFFF98
                      || !(unsigned __int8)MagicTarget_HasMagicItem(&a1[1].member.super.modlist, ecx0[0x52]) )
                    {
                      (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x54C))(ecx0, a1);
                      ++ecx0[0x73];
                    }
                  }
                  v116 = flt_A524B0;
                }
              }
              *((float *)ecx0 + 0x6C) = v116;
LABEL_330:
              if ( !sub_565DF0(v139) )
                return 0;
              if ( v139->members.time.duration )
                return 0;
              v117 = a1->vtbl->GetAnimData(a1);
              if ( !sub_472EA0(v117) )
                return 0;
              (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2);
              return 0;
            default:
              if ( form )
                (*(void (__thiscall **)(int *, unsigned __int8 *))(*ecx0 + 0x154))(ecx0, form);
              if ( SLODWORD(v143) > 0 && ecx0[0x73] >= SLODWORD(v143) && Actor_GetCurrentAction(a1) == 0xFFFFFFFF )
              {
                v118 = a1->vtbl->GetAnimData(a1);
                if ( sub_472EA0(v118) )
                {
                  v119 = (TESForm *)ecx0[9];
                  if ( v119 )
                    Actor_EquipItem(
                      (PlayerCharacter *)a1,
                      (unsigned __int16 *)v28,
                      a7,
                      v14,
                      a5,
                      v27,
                      a2,
                      a6,
                      a4,
                      st1_0,
                      v119,
                      1,
                      0,
                      1,
                      0,
                      v133,
                      v134,
                      v135,
                      v136,
                      (int)v137,
                      v138,
                      (int)v139,
                      (int)form,
                      (int)v141,
                      SLODWORD(v143),
                      (int)ContainerExtraDataForRef);
                  goto LABEL_342;
                }
              }
              if ( !v138
                || (*(int (__thiscall **)(int))(*(_DWORD *)v138 + 0x170))(v138) != TESDataHandler_g_XMarkerHeading )
              {
                goto LABEL_354;
              }
              a1a = *(float *)(v138 + 0x28);
              v120 = a1a;
              v121 = dbl_A3D5B0;
              if ( a1a >= 0.0 )
              {
                if ( v121 <= v120 )
                {
                  unknown_libname_14(v121, v120);
                  v120 = a1a;
                }
              }
              else
              {
                unknown_libname_14(v121, v120);
                a1a = a1a + dbl_A3D5B0;
                v120 = a1a;
              }
              *(float *)&v150 = 0.0;
              a3f = v120;
              sub_683D80((int)a1, a3f, (int)&v150);
              *(float *)&v149 = v120;
              *(float *)&v149 = fabs(*(float *)&v149);
              v27 = *(float *)&v149;
              *(float *)&v149 = (double)iActorKeepTurnDegree * dbl_A31C78;
              v14 = *(float *)&v149;
              if ( *(float *)&v149 < v27 )
                goto LABEL_20;
              sub_5E05F0((Actor *)a1, 0x30);
              (*(void (__thiscall **)(int *))(*ecx0 + 0x49C))(ecx0);
LABEL_354:
              v122 = (unsigned __int16 *)a1->vtbl->GetAnimData(a1);
              if ( !ecx0[9] && ecx0[0x38] )
                goto LABEL_6;
              if ( v122 )
              {
                if ( sub_472EA0(v122) )
                {
                  sub_520F00(ecx0[9]);
                  (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x48))(ecx0, a1);
                  v123 = *ecx0;
                  a1e = (double)(GetRandomLargeInteger_(0) % 0x1388) * dbl_A30E40 + dbl_A3F3F0;
                  v27 = a1e;
                  (*(void (__thiscall **)(int *, _DWORD))(v123 + 0x224))(ecx0, LODWORD(a1e));
                  sub_520F00(0);
                  ++ecx0[0x73];
                }
              }
              if ( sub_472EA0(v122) )
              {
                v124 = (TESForm *)ecx0[9];
                if ( v124 )
                  Actor_EquipItem(
                    (PlayerCharacter *)a1,
                    v122,
                    a7,
                    v14,
                    a5,
                    v27,
                    a2,
                    a6,
                    a4,
                    st1_0,
                    v124,
                    1,
                    0,
                    1,
                    0,
                    v133,
                    v134,
                    v135,
                    v136,
                    (int)v137,
                    v138,
                    (int)v139,
                    (int)form,
                    (int)v141,
                    SLODWORD(v143),
                    (int)ContainerExtraDataForRef);
                if ( sub_565DF0(v139) && !v139->members.time.duration && sub_472EA0(v122) )
                  (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2);
              }
              return 0;
          }
        }
        v32 = (int)sub_569E80((TargetData *)target).form;
      }
    }
    else
    {
      v28 = *ecx0;
      v30.form = sub_569E60((TargetData *)target).form;
      (*(void (__thiscall **)(int *, ObjectType))(v28 + 0xD0))(ecx0, v30);
      form = (unsigned __int8 *)(*(int (__thiscall **)(int))(*(_DWORD *)ecx0[0xB] + 0x170))(ecx0[0xB]);
      v31 = (unsigned __int8 *)(*(int (__thiscall **)(int))(*(_DWORD *)ecx0[0xB] + 0x170))(ecx0[0xB]);
      v32 = sub_568240(v31);
      ExtraXTarget = (void **)&v137->vtbl;
    }
    ecx0[0x38] = v32;
    goto LABEL_38;
  }
  (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x594))(ecx0, a1);
LABEL_6:
  (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(*ecx0 + 0x188))(ecx0, a1, 0xFFFFFFFE);
  return 0;
}
