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
  void **XTarget; // ebx
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
  TESHealthForm *v48; // eax
  TESForm *v49; // ebx
  unsigned int v50; // eax
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
  TESForm *v69; // eax
  EntryData *EntryForForm; // eax
  TESForm *type; // eax
  int v72; // edx
  TESHealthForm *v73; // eax
  TESForm *vtbl; // ebx
  unsigned int Health; // eax
  int v76; // edx
  char v77; // al
  int v78; // ecx
  TESForm *v79; // eax
  EntryData *v80; // eax
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
  unsigned __int16 AnimGroupFromField8Value; // ax
  unsigned __int16 v96; // ax
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
  double v107; // st6
  double v108; // st7
  ActorAnimData *v109; // eax
  double v110; // st7
  double v111; // st6
  double v112; // st7
  ActorAnimData *v113; // eax
  int v114; // eax
  int v115; // eax
  double v116; // st7
  ActorAnimData *v117; // eax
  ActorAnimData *v118; // eax
  TESForm *v119; // eax
  double v120; // st7
  double v121; // st6
  ActorAnimData *v122; // ebp
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
  int v138; // [esp+50h] [ebp-48h]
  int v139; // [esp+54h] [ebp-44h]
  TESPackage *v140; // [esp+58h] [ebp-40h]
  unsigned __int8 *form; // [esp+5Ch] [ebp-3Ch]
  TESObjectREFR *v142; // [esp+60h] [ebp-38h]
  TESObjectREFR *v143; // [esp+60h] [ebp-38h]
  float v144; // [esp+64h] [ebp-34h]
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // [esp+68h] [ebp-30h]
  float v146; // [esp+68h] [ebp-30h]
  Atmosphere *target; // [esp+6Ch] [ebp-2Ch]
  int v148; // [esp+6Ch] [ebp-2Ch]
  int v149; // [esp+70h] [ebp-28h]
  double v150; // [esp+74h] [ebp-24h] BYREF
  double v151; // [esp+80h] [ebp-18h] BYREF
  int v152; // [esp+88h] [ebp-10h] BYREF
  float v153[3]; // [esp+8Ch] [ebp-Ch] BYREF
  float a1a; // [esp+9Ch] [ebp+4h]
  float a1d; // [esp+9Ch] [ebp+4h]
  bool a1b; // [esp+9Ch] [ebp+4h]
  float a1c; // [esp+9Ch] [ebp+4h]
  float a1e; // [esp+9Ch] [ebp+4h]

  v140 = (TESPackage *)(*(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))(*ecx0 + 0x184))( /*0x63d0d7*/
                         ecx0,
                         a9,
                         st6_0,
                         a7,
                         a6,
                         a5,
                         a4,
                         st1_0,
                         a2);
  v12 = 0; /*0x63d0e0*/
  Distance = TesObjectREF_GetDistance(a1, (TESObjectREFR *)reference, 0); /*0x63d0e6*/
  v14 = unk_B36CC8; /*0x63d0eb*/
  if ( v14 < Distance ) /*0x63d0f8*/
    return 1; /*0x63d0f8*/
  if ( !ecx0[9] || (v15 = ecx0[0x38], v15 == sub_568240((unsigned __int8 *)ecx0[9])) || !v15 ) /*0x63d11a*/
  {
    v142 = 0; /*0x63d159*/
    form = 0; /*0x63d15d*/
    v139 = 0; /*0x63d161*/
    v137 = 0; /*0x63d165*/
    v144 = 0.0; /*0x63d169*/
    v149 = Game_RandomLargeInteger(0) % 0x64; /*0x63d16d*/
    location = v140->members.location; /*0x63d175*/
    Actor_GetActorBaseForm((Actor *)a1, 0); /*0x63d178*/
    ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(a1); /*0x63d18f*/
    target = (Atmosphere *)v140->members.target; /*0x63d19f*/
    if ( location ) /*0x63d1a3*/
    {
      if ( sub_5697E0(location) ) /*0x63d1a7*/
      {
        v12 = (float *)sub_5697E0(location); /*0x63d1b7*/
        v139 = (int)v12; /*0x63d1b9*/
      }
    }
    sub_566DC0(v140, kTerrainLODQuadRayDirectionZ, v14, a7, (Actor *)a1, 0, kTerrainLODQuadRayDirectionZ); /*0x63d1ce*/
    if ( !v18 ) /*0x63d1d5*/
    {
      (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(*ecx0 + 0x188))(ecx0, a1, 0xFFFFFFFF); /*0x63d1e4*/
      return 0; /*0x63d1ef*/
    }
    if ( Actor_GetCurrentAction(a1) == 0xFFFFFFFF /*0x63d21d*/
      && v12
      && (*(int (__thiscall **)(float *))(*(_DWORD *)v12 + 0x170))(v12) == MEMORY[0xB35EB0] )
    {
      a1a = v12[0xA]; /*0x63d226*/
      v19 = a1a; /*0x63d234*/
      v20 = dbl_A3D5B0; /*0x63d239*/
      if ( a1a >= 0.0 ) /*0x63d23f*/
      {
        if ( v20 <= v19 ) /*0x63d265*/
        {
          unknown_libname_14(v20, v19); /*0x63d267*/
          v19 = a1a; /*0x63d278*/
        }
      }
      else
      {
        unknown_libname_14(v20, v19); /*0x63d241*/
        a1a = a1a + dbl_A3D5B0; /*0x63d254*/
        v19 = a1a; /*0x63d258*/
      }
      *(float *)&v150 = 0.0; /*0x63d287*/
      a3 = v19; /*0x63d28c*/
      sub_683D80((int)a1, a3, (float *)&v150); /*0x63d290*/
      *(float *)&v151 = v19; /*0x63d295*/
      *(float *)&v151 = fabs(*(float *)&v151); /*0x63d2a2*/
      v21 = *(float *)&v151; /*0x63d2a6*/
      *(float *)&v151 = (double)(int)MEMORY[0xB36C18].value * dbl_A31C78; /*0x63d2b6*/
      v14 = *(float *)&v151; /*0x63d2ba*/
      if ( *(float *)&v151 < v21 ) /*0x63d2c5*/
      {
LABEL_20:
        v22 = a1a; /*0x63d2c7*/
LABEL_21:
        a3a = v22; /*0x63d2cb*/
        sub_685530((Actor *)a1, a3a, 1); /*0x63d2d2*/
        (*(void (__thiscall **)(int *, _DWORD))(*ecx0 + 0x484))(ecx0, 0); /*0x63d2e6*/
        return 0; /*0x63d2f1*/
      }
      sub_5E05F0((Actor *)a1, 0x30); /*0x63d2f8*/
      (*(void (__thiscall **)(int *))(*ecx0 + 0x49C))(ecx0); /*0x63d307*/
      v23 = (float *)(*(int (__thiscall **)(float *))(*(_DWORD *)v12 + 0x174))(v12); /*0x63d314*/
      TESObjectREFR_SetPosition(a1, *v23, v23[1], v23[2]); /*0x63d32d*/
      a1->vtbl[1].super.MarkAsModified((TESForm *)a1, COERCE_UINT32(v12[0xA])); /*0x63d343*/
      (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x194))(ecx0, a1); /*0x63d350*/
    }
    v24 = a1->vtbl->GetPos(a1); /*0x63d366*/
    v25 = reference->vtbl->super.super.super.GetPos(reference); /*0x63d36e*/
    a1d = v25[1] - v24[1]; /*0x63d37b*/
    *(float *)&v151 = v25[2] - v24[2]; /*0x63d385*/
    v153[0] = *v25 - *v24; /*0x63d38e*/
    v153[1] = a1d; /*0x63d396*/
    v153[2] = *(float *)&v151; /*0x63d39e*/
    *(float *)&v151 = Vector3_CalculateHeadingRadiansXY(v153); /*0x63d3aa*/
    v26 = *(float *)&v151; /*0x63d3ae*/
    sub_683D80((int)a1, *(float *)&v151, (float *)&v152); /*0x63d3c1*/
    *(float *)&v151 = fabs(v26); /*0x63d3c8*/
    v27 = *(float *)&v151; /*0x63d3cf*/
    a1b = *(float *)&v151 < dbl_A4D918; /*0x63d3e0*/
    v28 = (unsigned int)target; /*0x63d3e5*/
    if ( !target ) /*0x63d3eb*/
      goto LABEL_45; /*0x63d3eb*/
    if ( location ) /*0x63d3f3*/
    {
      if ( sub_5697E0(location) ) /*0x63d3f7*/
        v139 = sub_5697E0(location); /*0x63d407*/
    }
    if ( v139 && (*(int (__thiscall **)(int))(*(_DWORD *)v139 + 0x170))(v139) == MEMORY[0xB35EB0] ) /*0x63d426*/
    {
      XTarget = ExtraDataList_GetXTarget((ExtraDataList *)(v139 + 0x44)); /*0x63d434*/
      v137 = (TESObjectREFR *)XTarget; /*0x63d436*/
    }
    else
    {
      XTarget = (void **)v139; /*0x63d43c*/
      v137 = (TESObjectREFR *)v139; /*0x63d440*/
    }
    v144 = COERCE_FLOAT(Shared_GetPointerAtOffset08(target)); /*0x63d44d*/
    if ( TargetData::GetTargetType((TargetData *)target) ) /*0x63d451*/
    {
      if ( TargetData::GetTargetType((TargetData *)target) == 1 ) /*0x63d4a9*/
      {
        form = (unsigned __int8 *)sub_569E70((TargetData *)target).form; /*0x63d4b1*/
        v32 = sub_568240(form); /*0x63d4b5*/
      }
      else
      {
        if ( TargetData::GetTargetType((TargetData *)target) != 2 ) /*0x63d4c7*/
        {
LABEL_38:
          if ( ecx0[0x38] ) /*0x63d4d6*/
            goto LABEL_46; /*0x63d4dd*/
          if ( XTarget || (XTarget = (void **)v139) != 0 ) /*0x63d508*/
          {
            (*(void (__thiscall **)(int *, void **))(*ecx0 + 0xD0))(ecx0, XTarget); /*0x63d4ee*/
            v33 = (*((int (__thiscall **)(void **))*XTarget + 0x5C))(XTarget); /*0x63d4fa*/
            v34 = (int (__fastcall **)(void **))*XTarget; /*0x63d4fc*/
            v35 = XTarget; /*0x63d4fe*/
LABEL_44:
            form = (unsigned __int8 *)v33; /*0x63d530*/
            v36 = (unsigned __int8 *)v34[0x5C](v35); /*0x63d53a*/
            ecx0[0x38] = sub_568240(v36); /*0x63d545*/
            goto LABEL_46; /*0x63d54b*/
          }
          if ( ecx0[0xC] ) /*0x63d50a*/
          {
            (*(void (__thiscall **)(int *, int))(*ecx0 + 0xD0))(ecx0, ecx0[0xC]); /*0x63d51c*/
            v33 = (*(int (__thiscall **)(int))(*(_DWORD *)ecx0[0xC] + 0x170))(ecx0[0xC]); /*0x63d529*/
            v35 = (void **)ecx0[0xC]; /*0x63d52b*/
            v34 = (int (__fastcall **)(void **))*v35; /*0x63d52e*/
            goto LABEL_44; /*0x63d52e*/
          }
LABEL_45:
          ecx0[0x38] = 0; /*0x63d54d*/
LABEL_46:
          if ( (*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) ) /*0x63d563*/
          {
            if ( *(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) ) /*0x63d577*/
            {
              if ( *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) + 4) == 0x21 ) /*0x63d592*/
                v142 = *(TESObjectREFR **)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8); /*0x63d5a5*/
            }
          }
          switch ( ecx0[0x38] ) /*0x63d5c2*/
          {
            case 1: /*0x63d5c2*/
              goto LABEL_291;
            case 3: /*0x63d5c2*/
              v37 = v140->members.target; /*0x63d5cd*/
              if ( TargetData::GetTargetType(v37) == 1 ) /*0x63d5dc*/
              {
                v38.form = sub_569E70(v37).form; /*0x63d5de*/
              }
              else
              {
                if ( TargetData::GetTargetType(v37) ) /*0x63d5e5*/
                  return 0; /*0x63d5ec*/
                v39.form = sub_569E60(v37).form; /*0x63d5f4*/
                v38.objectCode = (UInt32)v39.form->vtbl->GetBaseForm(v39.objectCode); /*0x63d603*/
              }
              if ( !TESBipedModelForm_CoversSlot((unsigned __int16 *)(v38.objectCode + 0x64), 0xD, 0) /*0x63d61b*/
                || Actor_IsBlocking(a1) )
              {
                return 0; /*0x63d622*/
              }
              Actor_UpdateBlockingState((Actor *)a1, 1); /*0x63d62c*/
              return 0; /*0x63d63a*/
            case 5: /*0x63d5c2*/
            case 0x15: /*0x63d5c2*/
              v99 = v140->members.target; /*0x63e457*/
              if ( !(*(unsigned __int8 (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x554))(ecx0, a1, 1) ) /*0x63e465*/
              {
                (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2); /*0x63e478*/
                (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x594))(ecx0, a1); /*0x63e485*/
                if ( *((_BYTE *)ecx0 + 0xD0) ) /*0x63e487*/
                  return 0; /*0x63e48e*/
LABEL_107:
                (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x194))(ecx0, a1); /*0x63da7f*/
                return 0; /*0x63da95*/
              }
              if ( TargetData::GetTargetType(v99) == 1 ) /*0x63e4b9*/
              {
                v100.form = sub_569E70(v99).form; /*0x63e4bb*/
              }
              else
              {
                if ( TargetData::GetTargetType(v99) ) /*0x63e4c2*/
                {
LABEL_291:
                  if ( SLODWORD(v144) <= 0 /*0x63e750*/
                    || ecx0[0x73] < SLODWORD(v144)
                    || Actor_GetCurrentAction(a1) != 0xFFFFFFFF
                    || (v109 = a1->vtbl->GetAnimData(a1), !ActorAnimData_IsIdleInactive(v109)) )
                  {
                    if ( v139 && (*(int (__thiscall **)(int))(*(_DWORD *)v139 + 0x170))(v139) == MEMORY[0xB35EB0] ) /*0x63e77b*/
                    {
                      a1c = *(float *)(v139 + 0x28); /*0x63e784*/
                      v110 = a1c; /*0x63e792*/
                      v111 = dbl_A3D5B0; /*0x63e797*/
                      if ( a1c >= 0.0 ) /*0x63e79d*/
                      {
                        if ( v111 <= v110 ) /*0x63e7c3*/
                        {
                          unknown_libname_14(v111, v110); /*0x63e7c5*/
                          v110 = a1c; /*0x63e7d6*/
                        }
                      }
                      else
                      {
                        unknown_libname_14(v111, v110); /*0x63e79f*/
                        a1c = a1c + dbl_A3D5B0; /*0x63e7b2*/
                        v110 = a1c; /*0x63e7b6*/
                      }
                      *(float *)&v151 = 0.0; /*0x63e7e5*/
                      a3e = v110; /*0x63e7ea*/
                      sub_683D80((int)a1, a3e, (float *)&v151); /*0x63e7ee*/
                      *(float *)&v150 = v110; /*0x63e7f3*/
                      *(float *)&v150 = fabs(*(float *)&v150); /*0x63e800*/
                      v112 = *(float *)&v150; /*0x63e804*/
                      *(float *)&v150 = (double)(int)MEMORY[0xB36C18].value * dbl_A31C78; /*0x63e814*/
                      if ( *(float *)&v150 < v112 ) /*0x63e823*/
                      {
LABEL_282:
                        (*(void (__thiscall **)(int *, _DWORD))(*ecx0 + 0x484))(ecx0, 0); /*0x63e67f*/
                        sub_685530((Actor *)a1, a1c, 1); /*0x63e698*/
                        return 0; /*0x63e6a9*/
                      }
                      sub_5E05F0((Actor *)a1, 0x30); /*0x63e82d*/
                    }
                    if ( (*(unsigned __int8 (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x51C))(ecx0, a1, 1) ) /*0x63e83f*/
                      ++ecx0[0x73]; /*0x63e845*/
                    if ( sub_565DF0(v140) && !v140->members.time.duration ) /*0x63e85f*/
                    {
                      v113 = a1->vtbl->GetAnimData(a1); /*0x63e873*/
                      if ( ActorAnimData_IsIdleInactive(v113) ) /*0x63e877*/
                      {
                        (*(void (__thiscall **)(int *))(*ecx0 + 0x49C))(ecx0); /*0x63e88e*/
                        (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2); /*0x63e89d*/
                        return 0; /*0x63e8a8*/
                      }
                    }
                    return 0; /*0x63ecc5*/
                  }
LABEL_342:
                  (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2); /*0x63eab9*/
                  (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x594))(ecx0, a1); /*0x63ead3*/
LABEL_343:
                  if ( !*((_BYTE *)ecx0 + 0xD0) ) /*0x63ead5*/
                    (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x194))(ecx0, a1); /*0x63eae9*/
                  return 1; /*0x63eaf4*/
                }
                v101.form = sub_569E60(v99).form; /*0x63e4d1*/
                v100.objectCode = (UInt32)v101.form->vtbl->GetBaseForm(v101.objectCode); /*0x63e4e0*/
              }
              if ( v100.objectCode ) /*0x63e4e4*/
              {
                v102 = (TESObjectARMO *)OblivionDynamicCast( /*0x63e4f9*/
                                          v100.form,
                                          0,
                                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                          &TESObjectARMO `RTTI Type Descriptor',
                                          0);
                v103 = (unsigned __int16 *)v102; /*0x63e4fe*/
                if ( v102 ) /*0x63e505*/
                {
                  v104 = (unsigned __int16 *)sub_4691B0(v102); /*0x63e50c*/
                  if ( TESBipedModelForm_CoversSlot(v104, 0xD, 0) ) /*0x63e51a*/
                  {
                    if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent /*0x63e534*/
                           + 0x3E))(
                            a1[1].vtbl,
                            1) )
                      Actor_EquipItem( /*0x63e543*/
                        a1,
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
                        v139,
                        (int)v140,
                        (int)form,
                        (int)v142,
                        SLODWORD(v144),
                        (int)ContainerExtraDataForRef);
                    Actor_SetAlerted(a1, 1); /*0x63e54c*/
                    if ( SLODWORD(v144) > 0 && ecx0[0x73] >= SLODWORD(v144) && Actor_GetCurrentAction(a1) == 0xFFFFFFFF ) /*0x63e56b*/
                    {
                      v105 = a1->vtbl->GetAnimData(a1); /*0x63e577*/
                      if ( ActorAnimData_IsIdleInactive(v105) ) /*0x63e57b*/
                      {
                        (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2); /*0x63e591*/
                        (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x594))(ecx0, a1); /*0x63e59e*/
                        Actor_UpdateBlockingState((Actor *)a1, 0); /*0x63e5a4*/
                        Actor_SetAlerted(a1, 0); /*0x63e5ad*/
                        goto LABEL_343; /*0x63e5b2*/
                      }
                    }
                    if ( v139 && (*(int (__thiscall **)(int))(*(_DWORD *)v139 + 0x170))(v139) == MEMORY[0xB35EB0] ) /*0x63e5d5*/
                    {
                      a1c = *(float *)(v139 + 0x28); /*0x63e5de*/
                      v106 = a1c; /*0x63e5ec*/
                      v107 = dbl_A3D5B0; /*0x63e5f1*/
                      if ( a1c >= 0.0 ) /*0x63e5f7*/
                      {
                        if ( v107 <= v106 ) /*0x63e61d*/
                        {
                          unknown_libname_14(v107, v106); /*0x63e61f*/
                          v106 = a1c; /*0x63e630*/
                        }
                      }
                      else
                      {
                        unknown_libname_14(v107, v106); /*0x63e5f9*/
                        a1c = a1c + dbl_A3D5B0; /*0x63e60c*/
                        v106 = a1c; /*0x63e610*/
                      }
                      *(float *)&v151 = 0.0; /*0x63e63f*/
                      a3d = v106; /*0x63e644*/
                      sub_683D80((int)a1, a3d, (float *)&v151); /*0x63e648*/
                      *(float *)&v150 = v106; /*0x63e64d*/
                      *(float *)&v150 = fabs(*(float *)&v150); /*0x63e65a*/
                      v108 = *(float *)&v150; /*0x63e65e*/
                      *(float *)&v150 = (double)(int)MEMORY[0xB36C18].value * dbl_A31C78; /*0x63e66e*/
                      if ( *(float *)&v150 < v108 ) /*0x63e67d*/
                        goto LABEL_282; /*0x63e67d*/
                      sub_5E05F0((Actor *)a1, 0x30); /*0x63e6b0*/
                    }
                    if ( v137 ) /*0x63e6bb*/
                      (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x484))(ecx0, v137); /*0x63e6c8*/
                    if ( *((float *)ecx0 + 0x6C) >= 0.0 || *((float *)ecx0 + 0x6D) >= 0.0 ) /*0x63e6e4*/
                    {
                      Actor_UpdateBlockingState((Actor *)a1, 0); /*0x63e703*/
                      *((float *)ecx0 + 0x6C) = flt_A524B0; /*0x63e70e*/
                    }
                    else
                    {
                      Actor_UpdateBlockingState((Actor *)a1, 1); /*0x63e6ea*/
                      *((float *)ecx0 + 0x6D) = flt_A35AA4; /*0x63e6f5*/
                    }
                    *((float *)ecx0 + 0x6D) = *((float *)ecx0 + 0x6D) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x63e720*/
                  }
                }
              }
              goto LABEL_291; /*0x63e720*/
            case 0xD: /*0x63d5c2*/
            case 0x17: /*0x63d5c2*/
            case 0x18: /*0x63d5c2*/
            case 0x19: /*0x63d5c2*/
              v56 = v140->members.target; /*0x63da39*/
              if ( !(*(unsigned __int8 (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x554))(ecx0, a1, 1) /*0x63da54*/
                && ecx0[0x38] != 0x17 )
              {
                (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2); /*0x63da63*/
                (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x594))(ecx0, a1); /*0x63da70*/
                if ( *((_BYTE *)ecx0 + 0xD0) ) /*0x63da72*/
                  return 0; /*0x63da79*/
                goto LABEL_107; /*0x63da79*/
              }
              v57 = v142; /*0x63da98*/
              if ( v142 ) /*0x63da9e*/
              {
                if ( TargetData::GetTargetType(v56) == 1 ) /*0x63dab0*/
                {
                  if ( v142 != sub_569E70(v56).form ) /*0x63dab9*/
                  {
                    v58.form = sub_569E70(v56).form; /*0x63dac5*/
                    Actor_EquipItem( /*0x63dacd*/
                      a1,
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
                      v139,
                      (int)v140,
                      (int)form,
                      (int)v142,
                      SLODWORD(v144),
                      (int)ContainerExtraDataForRef);
                  }
                }
                else if ( !TargetData::GetTargetType(v56) ) /*0x63dad4*/
                {
                  v59.form = sub_569E60(v56).form; /*0x63dadf*/
                  if ( v142 != (TESObjectREFR *)v59.form->vtbl->GetBaseForm(v59.objectCode) ) /*0x63daf2*/
                  {
                    v60.form = sub_569E60(v56).form; /*0x63dafd*/
                    p_baseExtraList = (ExtraDataList **)&sub_569E60(v56).form->member.baseExtraList; /*0x63db0d*/
                    v61 = (TESForm *)((int (__thiscall *)(ObjectType))v60.form->vtbl->GetBaseForm)(v60); /*0x63db18*/
                    Actor_EquipItem( /*0x63db1d*/
                      a1,
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
                      v139,
                      (int)v140,
                      (int)form,
                      (int)v142,
                      SLODWORD(v144),
                      (int)ContainerExtraDataForRef);
                    v57 = v142; /*0x63db22*/
                  }
                }
              }
              if ( SLODWORD(v144) > 0 && ecx0[0x73] >= SLODWORD(v144) && Actor_GetCurrentAction(a1) == 0xFFFFFFFF ) /*0x63db40*/
                goto LABEL_342; /*0x63db40*/
              if ( *((float *)ecx0 + 0x6D) <= 0.0 /*0x63db88*/
                && Actor_GetCurrentAction(a1) == 0xFFFFFFFF
                && v137
                && !v137->vtbl->IsActor(v137)
                && v149 > 0x46
                && ecx0[0x73] > 7 )
              {
LABEL_67:
                (*(void (__thiscall **)(int *, _DWORD))(*ecx0 + 0x300))(ecx0, 0); /*0x63d6a0*/
                (*(void (__thiscall **)(int *, _DWORD))(*ecx0 + 0x214))(ecx0, 0); /*0x63d6ba*/
                sub_631DC0((Actor *)a1, (int)v137); /*0x63d6c0*/
                return 0; /*0x63d6ce*/
              }
              v62 = sub_566DC0( /*0x63dbcc*/
                      v140,
                      kTerrainLODQuadRayDirectionZ,
                      v14,
                      a7,
                      (Actor *)a1,
                      0,
                      kTerrainLODQuadRayDirectionZ);
              v63 = *ecx0; /*0x63dbd3*/
              if ( !v64 ) /*0x63dbd7*/
              {
                (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(v63 + 0x188))(ecx0, a1, 0xFFFFFFFF); /*0x63dbe2*/
                return 0; /*0x63dbed*/
              }
              if ( (*(int (__thiscall **)(int *, int))(v63 + 0xEC))(ecx0, 1) ) /*0x63dbf8*/
              {
                v57 = 0; /*0x63dc06*/
                v142 = 0; /*0x63dc0c*/
                if ( *(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) ) /*0x63dc12*/
                {
                  if ( *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) + 4) == 0x21 ) /*0x63dc2c*/
                  {
                    v57 = *(TESObjectREFR **)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8); /*0x63dc3c*/
                    v142 = v57; /*0x63dc3f*/
                  }
                }
              }
              v65 = ecx0[0x38]; /*0x63dc43*/
              if ( v65 == 0x17 ) /*0x63dc4c*/
              {
                if ( v57 ) /*0x63dc50*/
                  Actor_UnequipItem((Actor *)a1, v62, a7, v14, (__int16)v57, 1, 0, 0, 0, 0); /*0x63dc63*/
                goto LABEL_176; /*0x63dc68*/
              }
              if ( v65 == 0x19 ) /*0x63dc70*/
              {
                v66 = 0; /*0x63dc76*/
                if ( v57 ) /*0x63dc7a*/
                {
                  scale_low = LOBYTE(v57[1].member.scale); /*0x63dc7c*/
                  if ( scale_low == 5 || scale_low == 4 ) /*0x63dc8c*/
                  {
LABEL_152:
                    if ( !ecx0[0x3B] ) /*0x63dd85*/
                    {
                      v73 = (TESHealthForm *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].AddItem)(a1); /*0x63dd98*/
                      v66 = (unsigned int)v73; /*0x63dd9a*/
                      if ( v73 ) /*0x63dd9e*/
                      {
                        vtbl = (TESForm *)v73[1].vtbl; /*0x63dda0*/
                        Health = TESHealthForm_GetHealth(v73); /*0x63ddab*/
                        Actor_EquipItem( /*0x63ddb4*/
                          a1,
                          (unsigned __int16 *)v66,
                          a7,
                          v14,
                          a5,
                          v62,
                          a2,
                          a6,
                          a4,
                          st1_0,
                          vtbl,
                          Health,
                          0,
                          1,
                          0,
                          v133,
                          v134,
                          v135,
                          v136,
                          (int)v137,
                          v139,
                          (int)v140,
                          (int)form,
                          (int)v142,
                          SLODWORD(v144),
                          (int)ContainerExtraDataForRef);
                        v57 = v143; /*0x63ddb9*/
                      }
                    }
                    if ( !(*(int (__thiscall **)(int *, int))(*ecx0 + 0xF4))(ecx0, 1) /*0x63ddde*/
                      || v57 && LOBYTE(v57[1].member.scale) != 5 )
                    {
                      goto LABEL_103; /*0x63ddde*/
                    }
                    if ( !v66 ) /*0x63dde6*/
                      goto LABEL_176; /*0x63dde6*/
LABEL_175:
                    ContainerEntryExtraData_DestroyDataTable((unsigned int *)v66, v76); /*0x63de9f*/
                    FormHeapFree(v66); /*0x63dea7*/
                    goto LABEL_176; /*0x63dea7*/
                  }
                }
                v68 = ecx0[0xB]; /*0x63dc92*/
                LODWORD(v151) = 0; /*0x63dc97*/
                if ( v68 ) /*0x63dc9b*/
                {
                  v69 = (TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v68 + 0x170))(v68); /*0x63dcad*/
                  EntryForForm = ContainerExtraData_GetEntryForForm(ContainerExtraDataForRef, v69, 1, 0); /*0x63dcb4*/
                }
                else
                {
                  if ( !form ) /*0x63dd3d*/
                  {
                    type = sub_486150(ContainerExtraDataForRef, 0x19, (int *)&v151); /*0x63dd53*/
                    if ( type ) /*0x63dd5a*/
                    {
LABEL_141:
                      Actor_EquipItem( /*0x63dcce*/
                        a1,
                        (unsigned __int16 *)v66,
                        a7,
                        v14,
                        a5,
                        v62,
                        a2,
                        a6,
                        a4,
                        st1_0,
                        type,
                        1,
                        0,
                        1,
                        0,
                        v133,
                        v134,
                        v135,
                        v136,
                        (int)v137,
                        v139,
                        (int)v140,
                        (int)form,
                        (int)v142,
                        SLODWORD(v144),
                        (int)ContainerExtraDataForRef);
                      if ( (*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) ) /*0x63dcea*/
                      {
                        v57 = 0; /*0x63dcf8*/
                        v142 = 0; /*0x63dcfe*/
                        if ( *(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) ) /*0x63dd04*/
                        {
                          if ( *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) /*0x63dd1e*/
                                        + 4) == 0x21 )
                          {
                            v57 = *(TESObjectREFR **)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8); /*0x63dd2e*/
                            v142 = v57; /*0x63dd31*/
                          }
                        }
                      }
                      goto LABEL_149; /*0x63dd35*/
                    }
LABEL_148:
                    (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2); /*0x63dd60*/
LABEL_149:
                    if ( v66 ) /*0x63dd71*/
                    {
                      ContainerEntryExtraData_DestroyDataTable((unsigned int *)v66, v72); /*0x63dd75*/
                      FormHeapFree(v66); /*0x63dd7b*/
                    }
                    v66 = 0; /*0x63dd83*/
                    goto LABEL_152; /*0x63dd83*/
                  }
                  EntryForForm = ContainerExtraData_GetEntryForForm(ContainerExtraDataForRef, (TESForm *)form, 1, 0); /*0x63dd43*/
                }
                v66 = (unsigned int)EntryForForm; /*0x63dcb9*/
                if ( EntryForForm ) /*0x63dcbd*/
                {
                  type = EntryForForm->type; /*0x63dcc3*/
                  if ( type ) /*0x63dcc8*/
                    goto LABEL_141; /*0x63dcc8*/
                }
                goto LABEL_148; /*0x63dcc8*/
              }
              if ( v65 != 0x18 || v57 && (v77 = LOBYTE(v57[1].member.scale), v77 != 5) && v77 != 4 ) /*0x63de0a*/
              {
LABEL_176:
                if ( v139 && (*(int (__thiscall **)(int))(*(_DWORD *)v139 + 0x170))(v139) == MEMORY[0xB35EB0] ) /*0x63dece*/
                {
                  v146 = *(float *)(v139 + 0x28); /*0x63ded7*/
                  v82 = v146; /*0x63dee5*/
                  v83 = dbl_A3D5B0; /*0x63deea*/
                  if ( v146 >= 0.0 ) /*0x63def0*/
                  {
                    if ( v83 <= v82 ) /*0x63df16*/
                    {
                      unknown_libname_14(v83, v82); /*0x63df18*/
                      *(float *)&v151 = v146; /*0x63df1d*/
                      v82 = v146; /*0x63df29*/
                    }
                  }
                  else
                  {
                    unknown_libname_14(v83, v82); /*0x63def2*/
                    *(float *)&v151 = v146; /*0x63def7*/
                    v146 = v146 + dbl_A3D5B0; /*0x63df05*/
                    v82 = v146; /*0x63df09*/
                  }
                  *(float *)&v151 = 0.0; /*0x63df38*/
                  a3c = v82; /*0x63df3d*/
                  sub_683D80((int)a1, a3c, (float *)&v151); /*0x63df41*/
                  *(float *)&v150 = v82; /*0x63df46*/
                  *(float *)&v150 = fabs(*(float *)&v150); /*0x63df53*/
                  v84 = *(float *)&v150; /*0x63df57*/
                  *(float *)&v150 = (double)(int)MEMORY[0xB36C18].value * dbl_A31C78; /*0x63df67*/
                  v14 = *(float *)&v150; /*0x63df6b*/
                  if ( *(float *)&v150 < v84 ) /*0x63df76*/
                  {
                    v22 = v146; /*0x63df78*/
                    goto LABEL_21; /*0x63df7c*/
                  }
                  sub_5E05F0((Actor *)a1, 0x30); /*0x63df85*/
                  (*(void (__thiscall **)(int *))(*ecx0 + 0x49C))(ecx0); /*0x63df94*/
                  v85 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v139 + 0x174))(v139); /*0x63dfa1*/
                  TESObjectREFR_SetPosition(a1, *v85, v85[1], v85[2]); /*0x63dfba*/
                  a1->vtbl[1].super.MarkAsModified((TESForm *)a1, COERCE_UINT32(*(float *)(v139 + 0x28))); /*0x63dfd0*/
                  (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x194))(ecx0, a1); /*0x63dfdd*/
                  v86 = (TESObjectREFR *)ExtraDataList_GetXTarget((ExtraDataList *)(v139 + 0x44)); /*0x63dfe7*/
                  v137 = v86; /*0x63dfe9*/
                }
                else
                {
                  v86 = v137; /*0x63dfef*/
                }
                if ( (*(unsigned __int8 (__thiscall **)(int *))(*ecx0 + 0x304))(ecx0) ) /*0x63dffd*/
                {
                  if ( *((float *)ecx0 + 0x6C) <= 0.0 /*0x63e073*/
                    && (Actor_GetCurrentAction(a1) == 0xFFFFFFFF || Actor_GetCurrentAction(a1) == 6)
                    && ((v150 = TesObjectREF_GetDistance((TESObjectREFR *)reference, a1, 0),
                         v87 = TesObjectREF_GetDistance(a1, v86, 0),
                         v87 <= v150)
                     || !a1b) )
                  {
                    v88 = 0xFF; /*0x63e08f*/
                    v89 = Game_RandomLargeInteger(0) % 0x64; /*0x63e094*/
                    if ( (*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) /*0x63e0ef*/
                      && *(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8)
                      && *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) + 4) == 0x21
                      && (v90 = *(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8)) != 0
                      && *(_BYTE *)(v90 + 0x90) == 5 )
                    {
                      PlayerCharacter_TryStartAttackAnimGroup( /*0x63e0f5*/
                        (PlayerCharacter *)a1,
                        (BSAnimGroupSequence *)v89,
                        0xFF,
                        (int)a1,
                        v14,
                        v87,
                        0x13u);
                      ecx0[0x6D] = *(int *)GameSetting_GetSafeFloatPointer(MEMORY[0xB36C60]); /*0x63e10a*/
                      v91 = kHeadBodyNormalMatchRadius; /*0x63e110*/
                      ++ecx0[0x73]; /*0x63e116*/
                      *((float *)ecx0 + 0x6C) = v91; /*0x63e11f*/
                      if ( !v137 ) /*0x63e125*/
                        return 0; /*0x63e125*/
                      sub_632090(ecx0, (MobileObject *)a1, (int)v137); /*0x63e12f*/
                    }
                    else if ( *((_BYTE *)ecx0 + 0xD0) ) /*0x63e139*/
                    {
                      if ( (*(int (__thiscall **)(int *))(*ecx0 + 0x2D0))(ecx0) == 0xFFFFFFFF ) /*0x63e155*/
                      {
                        if ( v137 && v137->vtbl->IsActor(v137) ) /*0x63e172*/
                        {
                          if ( !sub_5E05B0(v137) ) /*0x63e180*/
                          {
                            if ( v89 >= 0x1E && (Actor_GetCurrentAction(v137) == 2 || Actor_GetCurrentAction(v137) == 3) ) /*0x63e1ac*/
                            {
                              Actor_UpdateBlockingState((Actor *)a1, 1); /*0x63e1b2*/
                              *((float *)ecx0 + 0x6C) = flt_A57414; /*0x63e1bd*/
                              return 0; /*0x63e1cc*/
                            }
                            if ( v89 > 0xA ) /*0x63e1d2*/
                            {
                              if ( v89 > 0x14 ) /*0x63e1de*/
                              {
                                if ( v89 > 0x1E ) /*0x63e1ea*/
                                {
                                  if ( v89 > 0x28 ) /*0x63e1f6*/
                                    v88 = (v89 > 0x46) + 0x14; /*0x63e20a*/
                                  else
                                    v88 = 0x19; /*0x63e1f8*/
                                }
                                else
                                {
                                  v88 = 0x16; /*0x63e1ec*/
                                }
                              }
                              else
                              {
                                v88 = 0x1A; /*0x63e1e0*/
                              }
                            }
                            else
                            {
                              v88 = 0x18; /*0x63e1d4*/
                            }
                          }
                        }
                        else if ( v89 > 0xA ) /*0x63e211*/
                        {
                          if ( v89 > 0x14 ) /*0x63e21d*/
                          {
                            if ( v89 > 0x1E ) /*0x63e229*/
                            {
                              if ( v89 > 0x28 ) /*0x63e235*/
                                v88 = (v89 > 0x46) + 0x14; /*0x63e249*/
                              else
                                v88 = 0x19; /*0x63e237*/
                            }
                            else
                            {
                              v88 = 0x16; /*0x63e22b*/
                            }
                          }
                          else
                          {
                            v88 = 0x1A; /*0x63e21f*/
                          }
                        }
                        else
                        {
                          v88 = 0x18; /*0x63e213*/
                        }
                        if ( sub_615F70(*(float *)&a1, v88, (float *)&v150) ) /*0x63e252*/
                        {
                          v87 = 0.0; /*0x63e25e*/
                          if ( 0.0 != *((float *)&v150 + 1) ) /*0x63e269*/
                            v88 = 0x15; /*0x63e26b*/
                        }
                        if ( Actor_IsSneaking(a1) /*0x63e29d*/
                          && !(*(unsigned __int8 (__thiscall **)(int *))(*ecx0 + 0x13C))(ecx0)
                          && !(*(unsigned __int8 (__thiscall **)(int *))(*ecx0 + 0x138))(ecx0)
                          && !Actor_IsSwimming((Actor *)a1) )
                        {
                          v88 = 0x16; /*0x63e2a6*/
                        }
                        if ( !Actor_IsBlocking(a1) ) /*0x63e2ad*/
                          PlayerCharacter_TryStartAttackAnimGroup( /*0x63e2b9*/
                            (PlayerCharacter *)a1,
                            (BSAnimGroupSequence *)v89,
                            v88,
                            (int)a1,
                            v14,
                            v87,
                            v88);
                        *((float *)ecx0 + 0x6C) = flt_A524B0; /*0x63e2c4*/
                      }
                      else if ( Actor_IsBlocking(a1) ) /*0x63e2d1*/
                      {
                        Actor_UpdateBlockingState((Actor *)a1, 0); /*0x63e2e2*/
                      }
                    }
                  }
                  else
                  {
                    sub_566DC0( /*0x63e2fd*/
                      v140,
                      kTerrainLODQuadRayDirectionZ,
                      v14,
                      a7,
                      (Actor *)a1,
                      0,
                      kTerrainLODQuadRayDirectionZ);
                    if ( !v92 && Actor_GetCurrentAction(a1) == 0xFFFFFFFF ) /*0x63e310*/
                    {
                      v93 = a1->vtbl->GetAnimData(a1); /*0x63e31c*/
                      if ( ActorAnimData_IsIdleInactive(v93) ) /*0x63e320*/
                        (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(*ecx0 + 0x188))( /*0x63e336*/
                          ecx0,
                          a1,
                          0xFFFFFFFF);
                    }
                    if ( *((float *)ecx0 + 0x6D) > 0.0 ) /*0x63e345*/
                    {
                      v94 = a1->vtbl->GetAnimData(a1); /*0x63e36a*/
                      AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v94, 3); /*0x63e370*/
                      if ( AnimGroup_UsesAttackOrCastNoteTemplate(AnimGroupFromField8Value) ) /*0x63e376*/
                      {
                        v96 = ActorAnimData_GetAnimGroupFromField8Value(v94, 3); /*0x63e386*/
                        if ( !AnimGroup_UsesPowerOrCastNoteTemplate(v96) ) /*0x63e38c*/
                        {
                          if ( *((float *)ecx0 + 0x6D) > 0.0 /*0x63e3d3*/
                            || (v150 = TesObjectREF_GetDistance((TESObjectREFR *)reference, a1, 0),
                                v97 = TesObjectREF_GetDistance(a1, v86, 0),
                                v97 > v150)
                            && a1b )
                          {
                            if ( ActorAnimData_GetSlotActionState(v94, 3) == 2 ) /*0x63e3e1*/
                              ActorAnimData_SetUpdateState(v94, 3); /*0x63e3e7*/
                          }
                        }
                      }
                      v150 = TesObjectREF_GetDistance((TESObjectREFR *)reference, a1, 0); /*0x63e3fa*/
                      v98 = TesObjectREF_GetDistance(a1, v86, 0); /*0x63e403*/
                      if ( v98 <= v150 || !a1b ) /*0x63e418*/
                        *((float *)ecx0 + 0x6D) = *((float *)ecx0 + 0x6D) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x63e426*/
                    }
                    else
                    {
                      *((float *)ecx0 + 0x6C) = *((float *)ecx0 + 0x6C) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x63e353*/
                    }
                  }
                }
                else
                {
                  sub_5E6D70(a1, 1); /*0x63e007*/
                  *((_BYTE *)ecx0 + 0x244) = 1; /*0x63e00c*/
                }
                if ( v137 ) /*0x63e432*/
                {
                  (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x484))(ecx0, v137); /*0x63e443*/
                  return 0; /*0x63e44e*/
                }
                return 0; /*0x63e432*/
              }
              v78 = ecx0[0xB]; /*0x63de10*/
              v66 = 0; /*0x63de13*/
              LODWORD(v151) = 0; /*0x63de17*/
              if ( v78 ) /*0x63de1f*/
              {
                v79 = (TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v78 + 0x170))(v78); /*0x63de2c*/
                v80 = ContainerExtraData_GetEntryForForm(ContainerExtraDataForRef, v79, 1, 0); /*0x63de33*/
              }
              else
              {
                if ( !form ) /*0x63de5d*/
                {
                  v81 = sub_486150(ContainerExtraDataForRef, 0x18, (int *)&v151); /*0x63de70*/
                  if ( v81 ) /*0x63de77*/
                  {
LABEL_168:
                    Actor_EquipItem( /*0x63de45*/
                      a1,
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
                      v139,
                      (int)v140,
                      (int)form,
                      (int)v142,
                      SLODWORD(v144),
                      (int)ContainerExtraDataForRef);
LABEL_173:
                    if ( !v66 ) /*0x63de8a*/
                      goto LABEL_176; /*0x63de8a*/
                    Actor_EquipItem( /*0x63de9a*/
                      a1,
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
                      v139,
                      (int)v140,
                      (int)form,
                      (int)v142,
                      SLODWORD(v144),
                      (int)ContainerExtraDataForRef);
                    goto LABEL_175; /*0x63de9a*/
                  }
LABEL_172:
                  (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2); /*0x63de79*/
                  goto LABEL_173; /*0x63de86*/
                }
                v80 = ContainerExtraData_GetEntryForForm(ContainerExtraDataForRef, (TESForm *)form, 1, 0); /*0x63de63*/
              }
              v66 = (unsigned int)v80; /*0x63de38*/
              if ( v80 ) /*0x63de3c*/
              {
                v81 = v80->type; /*0x63de3e*/
                if ( v81 ) /*0x63de43*/
                  goto LABEL_168; /*0x63de43*/
              }
              goto LABEL_172; /*0x63de43*/
            case 0xE: /*0x63d5c2*/
              if ( SLODWORD(v144) > 0 && ecx0[0x73] >= SLODWORD(v144) && Actor_GetCurrentAction(a1) == 0xFFFFFFFF ) /*0x63d657*/
                goto LABEL_342; /*0x63d657*/
              v40 = 0.0; /*0x63d65d*/
              if ( *((float *)ecx0 + 0x6D) <= 0.0 /*0x63d69e*/
                && Actor_GetCurrentAction(a1) == 0xFFFFFFFF
                && v137
                && !v137->vtbl->IsActor(v137)
                && v149 > 0x46
                && ecx0[0x73] > 7 )
              {
                goto LABEL_67; /*0x63d69e*/
              }
              if ( !v139 || (*(int (__thiscall **)(int))(*(_DWORD *)v139 + 0x170))(v139) != MEMORY[0xB35EB0] ) /*0x63d6ef*/
                goto LABEL_77; /*0x63d6ef*/
              v144 = *(float *)(v139 + 0x28); /*0x63d6f8*/
              v41 = v144; /*0x63d706*/
              v42 = dbl_A3D5B0; /*0x63d70b*/
              if ( v144 >= 0.0 ) /*0x63d711*/
              {
                if ( v42 <= v41 ) /*0x63d737*/
                {
                  unknown_libname_14(v42, v41); /*0x63d739*/
                  *(float *)&v151 = v144; /*0x63d73e*/
                  v41 = v144; /*0x63d74a*/
                }
              }
              else
              {
                unknown_libname_14(v42, v41); /*0x63d713*/
                *(float *)&v151 = v144; /*0x63d718*/
                v144 = v144 + dbl_A3D5B0; /*0x63d726*/
                v41 = v144; /*0x63d72a*/
              }
              *(float *)&v151 = 0.0; /*0x63d759*/
              a3b = v41; /*0x63d75e*/
              sub_683D80((int)a1, a3b, (float *)&v151); /*0x63d762*/
              *(float *)&v150 = v41; /*0x63d767*/
              v43 = *ecx0; /*0x63d76f*/
              *(float *)&v150 = fabs(*(float *)&v150); /*0x63d776*/
              v44 = *(float *)&v150; /*0x63d77c*/
              *(float *)&v150 = (double)(int)MEMORY[0xB36C18].value * dbl_A31C78; /*0x63d78c*/
              v14 = *(float *)&v150; /*0x63d790*/
              if ( *(float *)&v150 < v44 ) /*0x63d79b*/
              {
                (*(void (__thiscall **)(int *, _DWORD))(v43 + 0x484))(ecx0, 0); /*0x63d7a5*/
                sub_685530((Actor *)a1, v144, 1); /*0x63d7b2*/
                return 0; /*0x63d7c3*/
              }
              (*(void (__thiscall **)(int *))(v43 + 0x49C))(ecx0); /*0x63d7cc*/
              sub_5E05F0((Actor *)a1, 0x30); /*0x63d7d2*/
              v45 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v139 + 0x174))(v139); /*0x63d7e1*/
              TESObjectREFR_SetPosition(a1, *v45, v45[1], v45[2]); /*0x63d7fa*/
              v40 = *(float *)(v139 + 0x28); /*0x63d7ff*/
              a1->vtbl[1].super.MarkAsModified((TESForm *)a1, COERCE_UINT32(*(float *)(v139 + 0x28))); /*0x63d810*/
              (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x194))(ecx0, a1); /*0x63d81d*/
LABEL_77:
              v46 = 0; /*0x63d81f*/
              v148 = 0; /*0x63d82d*/
              if ( *(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) ) /*0x63d833*/
              {
                if ( *(_BYTE *)(*(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8) + 4) == 0x21 ) /*0x63d84d*/
                {
                  v46 = *(_DWORD *)((*(int (__thiscall **)(int *, int))(*ecx0 + 0xEC))(ecx0, 1) + 8); /*0x63d85d*/
                  v148 = v46; /*0x63d862*/
                  if ( v46 ) /*0x63d866*/
                  {
                    if ( *(_BYTE *)(v46 + 0x90) == 5 ) /*0x63d86f*/
                      goto LABEL_91; /*0x63d86f*/
                  }
                }
              }
              v47 = ((int (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_44)(a1, 5); /*0x63d881*/
              v28 = v47; /*0x63d883*/
              if ( v47 ) /*0x63d887*/
                Actor_EquipItem( /*0x63d897*/
                  a1,
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
                  v139,
                  (int)v140,
                  (int)form,
                  (int)v142,
                  SLODWORD(v144),
                  (int)ContainerExtraDataForRef);
              if ( !ecx0[0x3B] ) /*0x63d89c*/
              {
                v48 = (TESHealthForm *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].AddItem)(a1); /*0x63d8af*/
                v28 = (unsigned int)v48; /*0x63d8b1*/
                if ( v48 ) /*0x63d8b5*/
                {
                  v49 = (TESForm *)v48[1].vtbl; /*0x63d8b7*/
                  v50 = TESHealthForm_GetHealth(v48); /*0x63d8c2*/
                  Actor_EquipItem( /*0x63d8cb*/
                    a1,
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
                    v50,
                    0,
                    1,
                    0,
                    v133,
                    v134,
                    v135,
                    v136,
                    (int)v137,
                    v139,
                    (int)v140,
                    (int)form,
                    (int)v142,
                    SLODWORD(v144),
                    (int)ContainerExtraDataForRef);
                  v46 = v148; /*0x63d8d0*/
                }
              }
              if ( !(*(int (__thiscall **)(int *, int))(*ecx0 + 0xF4))(ecx0, 1) || v46 && *(_BYTE *)(v46 + 0x90) != 5 ) /*0x63d8f5*/
              {
LABEL_103:
                (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2); /*0x63da1f*/
                goto LABEL_343; /*0x63da2e*/
              }
              if ( v28 ) /*0x63d8fd*/
              {
                ContainerEntryExtraData_DestroyDataTable((unsigned int *)v28, v51); /*0x63d901*/
                FormHeapFree(v28); /*0x63d907*/
              }
LABEL_91:
              if ( !(*(unsigned __int8 (__thiscall **)(int *))(*ecx0 + 0x304))(ecx0) ) /*0x63d919*/
              {
                sub_5E6D70(a1, 1); /*0x63d923*/
                *((_BYTE *)ecx0 + 0x244) = 1; /*0x63d928*/
                return 0; /*0x63d938*/
              }
              if ( *((float *)ecx0 + 0x6C) > 0.0 /*0x63d98e*/
                || Actor_GetCurrentAction(a1) != 0xFFFFFFFF
                || (v151 = TesObjectREF_GetDistance((TESObjectREFR *)reference, a1, 0),
                    v52 = TesObjectREF_GetDistance(a1, v137, 0),
                    v52 > v151)
                && a1b )
              {
                *((float *)ecx0 + 0x6C) = *((float *)ecx0 + 0x6C) - dbl_A2F928; /*0x63da0f*/
                return 0; /*0x63da1c*/
              }
              PlayerCharacter_TryStartAttackAnimGroup( /*0x63d994*/
                (PlayerCharacter *)a1,
                (BSAnimGroupSequence *)v137,
                v28,
                (int)a1,
                v14,
                v52,
                0x13u);
              v53 = *GameSetting_GetSafeFloatPointer(MEMORY[0xB36C60]); /*0x63d9a3*/
              ++ecx0[0x73]; /*0x63d9a5*/
              *((float *)ecx0 + 0x6D) = v53; /*0x63d9ac*/
              *((float *)ecx0 + 0x6C) = kHeadBodyNormalMatchRadius; /*0x63d9ba*/
              if ( v137 ) /*0x63d9c0*/
                sub_632090(ecx0, (MobileObject *)a1, (int)v137); /*0x63d9c6*/
              v54 = (_DWORD *)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent /*0x63d9da*/
                               + 0x3B))(
                                a1[1].vtbl,
                                1);
              if ( v54 ) /*0x63d9de*/
              {
                v55 = (_DWORD **)*v54; /*0x63d9e4*/
                if ( v55 ) /*0x63d9e8*/
                {
                  sub_41F610(*v55); /*0x63d9f0*/
                  return 0; /*0x63d9fe*/
                }
              }
              return 0; /*0x63d9e8*/
            case 0xF: /*0x63d5c2*/
            case 0x10: /*0x63d5c2*/
              return 0;
            case 0x1A: /*0x63d5c2*/
            case 0x1B: /*0x63d5c2*/
            case 0x1C: /*0x63d5c2*/
            case 0x1D: /*0x63d5c2*/
            case 0x1E: /*0x63d5c2*/
            case 0x1F: /*0x63d5c2*/
            case 0x20: /*0x63d5c2*/
            case 0x21: /*0x63d5c2*/
            case 0x22: /*0x63d5c2*/
            case 0x23: /*0x63d5c2*/
              if ( SLODWORD(v144) > 0 && ecx0[0x73] >= SLODWORD(v144) && Actor_GetCurrentAction(a1) == 0xFFFFFFFF ) /*0x63e8c7*/
                goto LABEL_342; /*0x63e8c7*/
              if ( *((float *)ecx0 + 0x6C) > 0.0 ) /*0x63e8da*/
              {
                v116 = *((float *)ecx0 + 0x6C) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x63e9f3*/
              }
              else
              {
                if ( !ecx0[0x52] ) /*0x63e8e0*/
                {
                  if ( form ) /*0x63e8ee*/
                    ecx0[0x52] = (int)OblivionDynamicCast( /*0x63e905*/
                                        form,
                                        0,
                                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                        &MagicItem `RTTI Type Descriptor',
                                        0);
                }
                v114 = ecx0[0x52]; /*0x63e90b*/
                if ( !v114 ) /*0x63e913*/
                {
                  sub_5E91E0((Actor *)a1, ecx0[0x38], 0xFFFFFFFF, 1, v133); /*0x63e9e6*/
                  goto LABEL_330; /*0x63e9eb*/
                }
                v115 = *(_DWORD *)(EffectItemList_GetStrongestItem( /*0x63e924*/
                                     (_DWORD *)(v114 + 0xC),
                                     3,
                                     0,
                                     v133,
                                     v134,
                                     v135,
                                     v136,
                                     (char)v137)
                                 + 0x10);
                if ( v115 == 2 ) /*0x63e92a*/
                {
                  Actor_CastOnTarget((Actor *)a1, (void *)ecx0[0x52], v138, 1); /*0x63e93c*/
                  v116 = flt_A524B0; /*0x63e941*/
                  ++ecx0[0x73]; /*0x63e947*/
                  ecx0[0x52] = 0; /*0x63e94e*/
                }
                else if ( v115 == 1 ) /*0x63e960*/
                {
                  Actor_CastOnTouch((Actor *)a1, (void *)ecx0[0x52], v138); /*0x63e970*/
                  v116 = flt_A524B0; /*0x63e975*/
                  ++ecx0[0x73]; /*0x63e97b*/
                  ecx0[0x52] = 0; /*0x63e981*/
                }
                else
                {
                  if ( (*(unsigned __int8 (__thiscall **)(int *))(*ecx0 + 0x2DC))(ecx0) ) /*0x63e993*/
                  {
                    if ( Actor_GetCurrentAction(a1) == 0xFFFFFFFF && a1 == (TESObjectREFR *)0xFFFFFF98 /*0x63e9b5*/
                      || !(unsigned __int8)MagicTarget_HasMagicItem(&a1[1].member.super.modlist, ecx0[0x52]) )
                    {
                      (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x54C))(ecx0, a1); /*0x63e9c9*/
                      ++ecx0[0x73]; /*0x63e9cb*/
                    }
                  }
                  v116 = flt_A524B0; /*0x63e9d1*/
                }
              }
              *((float *)ecx0 + 0x6C) = v116; /*0x63e9f9*/
LABEL_330:
              if ( !sub_565DF0(v140) ) /*0x63ea05*/
                return 0; /*0x63ea05*/
              if ( v140->members.time.duration ) /*0x63ea12*/
                return 0; /*0x63ea12*/
              v117 = a1->vtbl->GetAnimData(a1); /*0x63ea26*/
              if ( !ActorAnimData_IsIdleInactive(v117) ) /*0x63ea2a*/
                return 0; /*0x63ea31*/
              (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2); /*0x63ea44*/
              return 0; /*0x63ea4f*/
            default:
              if ( form ) /*0x63ea5c*/
                (*(void (__thiscall **)(int *, unsigned __int8 *))(*ecx0 + 0x154))(ecx0, form); /*0x63ea69*/
              if ( SLODWORD(v144) > 0 && ecx0[0x73] >= SLODWORD(v144) && Actor_GetCurrentAction(a1) == 0xFFFFFFFF ) /*0x63ea89*/
              {
                v118 = a1->vtbl->GetAnimData(a1); /*0x63ea95*/
                if ( ActorAnimData_IsIdleInactive(v118) ) /*0x63ea99*/
                {
                  v119 = (TESForm *)ecx0[9]; /*0x63eaa2*/
                  if ( v119 ) /*0x63eaa7*/
                    Actor_EquipItem( /*0x63eab4*/
                      a1,
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
                      v139,
                      (int)v140,
                      (int)form,
                      (int)v142,
                      SLODWORD(v144),
                      (int)ContainerExtraDataForRef);
                  goto LABEL_342; /*0x63eab4*/
                }
              }
              if ( !v139 || (*(int (__thiscall **)(int))(*(_DWORD *)v139 + 0x170))(v139) != MEMORY[0xB35EB0] ) /*0x63eb11*/
                goto LABEL_354; /*0x63eb11*/
              a1a = *(float *)(v139 + 0x28); /*0x63eb1a*/
              v120 = a1a; /*0x63eb28*/
              v121 = dbl_A3D5B0; /*0x63eb2d*/
              if ( a1a >= 0.0 ) /*0x63eb33*/
              {
                if ( v121 <= v120 ) /*0x63eb59*/
                {
                  unknown_libname_14(v121, v120); /*0x63eb5b*/
                  v120 = a1a; /*0x63eb6c*/
                }
              }
              else
              {
                unknown_libname_14(v121, v120); /*0x63eb35*/
                a1a = a1a + dbl_A3D5B0; /*0x63eb48*/
                v120 = a1a; /*0x63eb4c*/
              }
              *(float *)&v151 = 0.0; /*0x63eb7b*/
              a3f = v120; /*0x63eb80*/
              sub_683D80((int)a1, a3f, (float *)&v151); /*0x63eb84*/
              *(float *)&v150 = v120; /*0x63eb89*/
              *(float *)&v150 = fabs(*(float *)&v150); /*0x63eb96*/
              v27 = *(float *)&v150; /*0x63eb9a*/
              *(float *)&v150 = (double)(int)MEMORY[0xB36C18].value * dbl_A31C78; /*0x63ebaa*/
              v14 = *(float *)&v150; /*0x63ebae*/
              if ( *(float *)&v150 < v27 ) /*0x63ebb9*/
                goto LABEL_20; /*0x63ebb9*/
              sub_5E05F0((Actor *)a1, 0x30); /*0x63ebc3*/
              (*(void (__thiscall **)(int *))(*ecx0 + 0x49C))(ecx0); /*0x63ebd2*/
LABEL_354:
              v122 = a1->vtbl->GetAnimData(a1); /*0x63ebd4*/
              if ( !ecx0[9] && ecx0[0x38] ) /*0x63ebe9*/
                goto LABEL_6; /*0x63ebef*/
              if ( v122 ) /*0x63ec03*/
              {
                if ( ActorAnimData_IsIdleInactive(v122) ) /*0x63ec07*/
                {
                  sub_520F00(ecx0[9]); /*0x63ec14*/
                  (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x48))(ecx0, a1); /*0x63ec24*/
                  v123 = *ecx0; /*0x63ec26*/
                  a1e = (double)(Game_RandomLargeInteger(0) % 0x1388) * dbl_A30E40 + dbl_A3F3F0; /*0x63ec53*/
                  v27 = a1e; /*0x63ec57*/
                  (*(void (__thiscall **)(int *, _DWORD))(v123 + 0x224))(ecx0, LODWORD(a1e)); /*0x63ec5e*/
                  sub_520F00(0); /*0x63ec62*/
                  ++ecx0[0x73]; /*0x63ec6a*/
                }
              }
              if ( ActorAnimData_IsIdleInactive(v122) ) /*0x63ec73*/
              {
                v124 = (TESForm *)ecx0[9]; /*0x63ec7c*/
                if ( v124 ) /*0x63ec81*/
                  Actor_EquipItem( /*0x63ec8e*/
                    a1,
                    (unsigned __int16 *)v122,
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
                    v139,
                    (int)v140,
                    (int)form,
                    (int)v142,
                    SLODWORD(v144),
                    (int)ContainerExtraDataForRef);
                if ( sub_565DF0(v140) && !v140->members.time.duration && ActorAnimData_IsIdleInactive(v122) ) /*0x63ecaa*/
                  (*(void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x188))(ecx0, a1, 2); /*0x63ecc0*/
              }
              return 0; /*0x63ecc0*/
          }
        }
        v32 = (int)sub_569E80((TargetData *)target).form; /*0x63d4cb*/
      }
    }
    else
    {
      v28 = *ecx0; /*0x63d45e*/
      v30.form = sub_569E60((TargetData *)target).form; /*0x63d460*/
      (*(void (__thiscall **)(int *, ObjectType))(v28 + 0xD0))(ecx0, v30); /*0x63d46e*/
      form = (unsigned __int8 *)(*(int (__thiscall **)(int))(*(_DWORD *)ecx0[0xB] + 0x170))(ecx0[0xB]); /*0x63d482*/
      v31 = (unsigned __int8 *)(*(int (__thiscall **)(int))(*(_DWORD *)ecx0[0xB] + 0x170))(ecx0[0xB]); /*0x63d48c*/
      v32 = sub_568240(v31); /*0x63d48f*/
      XTarget = (void **)&v137->vtbl; /*0x63d494*/
    }
    ecx0[0x38] = v32; /*0x63d4d0*/
    goto LABEL_38; /*0x63d4d0*/
  }
  (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x594))(ecx0, a1); /*0x63d127*/
LABEL_6:
  (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(*ecx0 + 0x188))(ecx0, a1, 0xFFFFFFFE); /*0x63d129*/
  return 0; /*0x63d13a*/
}
