signed int *__usercall sub_5F8890@<eax>(
        int a1@<edi>,
        int a2@<ebx>,
        int a3@<esi>,
        TESObjectREFR *a4,
        int a5,
        int *a6,
        signed int **a7)
{
  int *v7; // ebx
  int v8; // edi
  double v9; // st7
  signed int *v10; // edi
  char *Name; // eax
  int v12; // ecx
  void *v13; // edx
  int i; // edi
  int v15; // eax
  double v16; // st7
  double v17; // st6
  double v18; // st7
  int j; // edi
  double v20; // st7
  double v21; // st6
  double v22; // st7
  int v23; // eax
  int v24; // edi
  double v25; // st7
  double v26; // st6
  double v27; // st7
  int v28; // eax
  double v29; // st7
  int v30; // edi
  double v31; // st7
  double v32; // st6
  double v33; // st7
  int v34; // eax
  double v35; // st7
  int v36; // edi
  double v37; // st7
  double v38; // st6
  double v39; // st7
  int v40; // eax
  double v41; // st7
  int v42; // edi
  int k; // edi
  double v44; // st7
  double v45; // st6
  double v46; // st7
  int v47; // eax
  int v48; // edi
  int v49; // ebx
  double v50; // st7
  double v51; // st6
  double v52; // st7
  int v53; // eax
  int v54; // eax
  ExtraContainerChanges_Data *ContainerChanges; // eax
  tListEntryData *objList; // edi
  EntryData *data; // ebx
  TESForm *type; // esi
  int v59; // eax
  int v60; // edi
  void *v61; // eax
  CHAR *v62; // eax
  const char *v63; // esi
  double v64; // st7
  void *v65; // eax
  CHAR *v66; // eax
  const char *v67; // esi
  double Health; // st7
  signed int *result; // eax
  float v70; // [esp+14h] [ebp-150h]
  int v71; // [esp+14h] [ebp-150h]
  int v72; // [esp+14h] [ebp-150h]
  float v73; // [esp+18h] [ebp-14Ch]
  float v74; // [esp+18h] [ebp-14Ch]
  float v75; // [esp+18h] [ebp-14Ch]
  double v76; // [esp+18h] [ebp-14Ch]
  double v77; // [esp+18h] [ebp-14Ch]
  float v78; // [esp+18h] [ebp-14Ch]
  double v79; // [esp+18h] [ebp-14Ch]
  float v80; // [esp+18h] [ebp-14Ch]
  float v81; // [esp+18h] [ebp-14Ch]
  float v82; // [esp+18h] [ebp-14Ch]
  double v83; // [esp+18h] [ebp-14Ch]
  float v84; // [esp+18h] [ebp-14Ch]
  float v85; // [esp+18h] [ebp-14Ch]
  double v86; // [esp+18h] [ebp-14Ch]
  float v87; // [esp+18h] [ebp-14Ch]
  float v88; // [esp+18h] [ebp-14Ch]
  float v89; // [esp+18h] [ebp-14Ch]
  float v90; // [esp+18h] [ebp-14Ch]
  float v91; // [esp+1Ch] [ebp-148h]
  float v92; // [esp+1Ch] [ebp-148h]
  float v93; // [esp+20h] [ebp-144h]
  int v96; // [esp+48h] [ebp-11Ch]
  float v97; // [esp+48h] [ebp-11Ch]
  float v98; // [esp+48h] [ebp-11Ch]
  float v99; // [esp+48h] [ebp-11Ch]
  float v100; // [esp+48h] [ebp-11Ch]
  float v101; // [esp+48h] [ebp-11Ch]
  float v102; // [esp+48h] [ebp-11Ch]
  float v103; // [esp+48h] [ebp-11Ch]
  float v104; // [esp+48h] [ebp-11Ch]
  float v105; // [esp+48h] [ebp-11Ch]
  int v106; // [esp+4Ch] [ebp-118h]
  float v107; // [esp+4Ch] [ebp-118h]
  float v108; // [esp+4Ch] [ebp-118h]
  float v109; // [esp+4Ch] [ebp-118h]
  int v110; // [esp+4Ch] [ebp-118h]
  int v111; // [esp+4Ch] [ebp-118h]
  float BaseCalcAVf; // [esp+50h] [ebp-114h]
  float v113; // [esp+50h] [ebp-114h]
  float v114; // [esp+50h] [ebp-114h]
  float v115; // [esp+50h] [ebp-114h]
  float v116; // [esp+50h] [ebp-114h]
  float v117; // [esp+50h] [ebp-114h]
  float v118; // [esp+50h] [ebp-114h]
  float v119; // [esp+50h] [ebp-114h]
  float v120; // [esp+50h] [ebp-114h]
  int v121; // [esp+54h] [ebp-110h]
  int v122; // [esp+54h] [ebp-110h]
  float v123; // [esp+58h] [ebp-10Ch]
  tListEntryData *next; // [esp+58h] [ebp-10Ch]
  signed int *v125; // [esp+5Ch] [ebp-108h]
  float v126; // [esp+60h] [ebp-104h]
  float v127; // [esp+64h] [ebp-100h]
  float v128[3]; // [esp+70h] [ebp-F4h]
  float v129[3]; // [esp+7Ch] [ebp-E8h]
  int v130; // [esp+88h] [ebp-DCh] BYREF
  int v131; // [esp+8Ch] [ebp-D8h] BYREF
  void *v132; // [esp+90h] [ebp-D4h] BYREF
  int v133; // [esp+94h] [ebp-D0h] BYREF
  int v134; // [esp+98h] [ebp-CCh] BYREF
  char v135[196]; // [esp+9Ch] [ebp-C8h] BYREF

  v126 = (float)iDebugTextLeftRightOffset; /*0x5f88be*/
  v7 = a6; /*0x5f88c3*/
  v127 = (float)(0x500 - iDebugTextLeftRightOffset); /*0x5f88d4*/
  v8 = *a6; /*0x5f88dd*/
  v9 = v126; /*0x5f88f1*/
  v106 = *a6; /*0x5f88f3*/
  v125 = *a7; /*0x5f88f7*/
  v123 = (v127 - v126) * dbl_A2FAA0 + v126; /*0x5f8903*/
  if ( !a4 ) /*0x5f8907*/
    goto LABEL_4; /*0x5f8907*/
  if ( !a4->vtbl->IsActor(a4) )
  {
    v9 = v126; /*0x5f891b*/
LABEL_4:
    v73 = (float)v106; /*0x5f891f*/
    v70 = v9; /*0x5f892e*/
    InterfaceMgr_DebugTextLine("ACTOR INFO: Current ref is not an actor.", v70, v73, 1, 0xFFFFFFFF);
    v10 = (signed int *)(a5 + v8); /*0x5f893e*/
    goto LABEL_65; /*0x5f8941*/
  }
  Name = TESObjectREFR_GetName(a4); /*0x5f8948*/
  _sprintf((char *)&v133, "ACTOR INFO: %s", Name);
  v74 = (float)v106; /*0x5f896b*/
  InterfaceMgr_DebugTextLine((char *)&v133, v126, v74, 1, 0xFFFFFFFF); /*0x5f897e*/
  v12 = dword_A6EAFC; /*0x5f898b*/
  v13 = off_A6EB00; /*0x5f8991*/
  v121 = a5 + v8; /*0x5f89ab*/
  v75 = (float)(a5 + v8); /*0x5f89af*/
  v130 = dword_A6EAF8; /*0x5f89b3*/
  v131 = v12; /*0x5f89bb*/
  v132 = v13; /*0x5f89c7*/
  InterfaceMgr_DebugTextLine("ATTRIBUTES", v126, v75, 1, 0xFFFFFFFF); /*0x5f89ce*/
  v96 = a5 + a5 + v8; /*0x5f89d8*/
  v107 = *(float *)&v96; /*0x5f89dc*/
  for ( i = 0; i < 0xC; ++i ) /*0x5f89e0*/
  {
    if ( i == 0xB ) /*0x5f89e7*/
    {
      v91 = ((double (__thiscall *)(TESObjectREFR *, _DWORD))a4->vtbl[1].Unk_38)(a4, 0); /*0x5f89f6*/
      v107 = Calc_ActorBaseEncumbrance(v91); /*0x5f89fe*/
      v15 = Double_To_SInt32(v107); /*0x5f8a09*/
      v76 = ((double (__thiscall *)(TESObjectREFR *, int, int))a4->vtbl[1].Unk_38)(a4, 0xB, v15); /*0x5f8a1f*/
      v71 = ActorValue_GetName(0xBu); /*0x5f8a2b*/
      _sprintf((char *)&v133, (const char *)&v130, v71, v76); /*0x5f8a39*/
    }
    else
    {
      BaseCalcAVf = Actor_GetBaseCalcAVf((int *)a4, a5, i, (int)a4, i); /*0x5f8a41*/
      v16 = BaseCalcAVf; /*0x5f8a45*/
      v113 = (float)Double_To_SInt32(BaseCalcAVf); /*0x5f8a58*/
      v17 = v16 - v113; /*0x5f8a64*/
      v18 = v113; /*0x5f8a64*/
      if ( v17 < dbl_A2FC68 ) /*0x5f8a71*/
        v18 = v18 - dbl_A2F928; /*0x5f8a73*/
      v114 = v18; /*0x5f8a79*/
      Double_To_SInt32(v114); /*0x5f8a81*/
      v77 = ((double (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].Unk_38)(a4, i); /*0x5f8a97*/
      v72 = ActorValue_GetName(i); /*0x5f8aa3*/
      _sprintf((char *)&v133, (const char *)&v130, v72, v77); /*0x5f8ab1*/
    }
    v78 = (float)SLODWORD(v107); /*0x5f8ac4*/
    InterfaceMgr_DebugTextLine((char *)&v133, v126, v78, 1, 0xFFFFFFFF); /*0x5f8ad7*/
    LODWORD(v107) += a5; /*0x5f8adc*/
  }
  for ( j = 0x21; j < 0x28; ++j ) /*0x5f8aef*/
  {
    v115 = Actor_GetBaseCalcAVf((int *)a4, a5, j, (int)a4, j); /*0x5f8afc*/
    v20 = v115; /*0x5f8b00*/
    v116 = (float)Double_To_SInt32(v115); /*0x5f8b13*/
    v21 = v20 - v116; /*0x5f8b1f*/
    v22 = v116; /*0x5f8b1f*/
    if ( v21 < dbl_A2FC68 ) /*0x5f8b2c*/
      v22 = v22 - dbl_A2F928; /*0x5f8b2e*/
    v117 = v22; /*0x5f8b34*/
    Double_To_SInt32(v117); /*0x5f8b3c*/
    v79 = ((double (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].Unk_38)(a4, j); /*0x5f8b52*/
    v23 = ActorValue_GetName(j); /*0x5f8b56*/
    _sprintf((char *)&v133, (const char *)&v130, v23, v79); /*0x5f8b6c*/
    v80 = (float)SLODWORD(v107); /*0x5f8b7f*/
    InterfaceMgr_DebugTextLine((char *)&v133, v126, v80, 1, 0xFFFFFFFF); /*0x5f8b92*/
    LODWORD(v107) += a5; /*0x5f8b97*/
  }
  v81 = (float)v121; /*0x5f8bb5*/
  InterfaceMgr_DebugTextLine("SKILLS", v123, v81, 2, 0xFFFFFFFF); /*0x5f8bc5*/
  v24 = v96; /*0x5f8bcc*/
  v122 = v96; /*0x5f8bdb*/
  if ( a4->vtbl->GetBaseForm(a4)->member.type == kFormType_Creature ) /*0x5f8be5*/
  {
    v97 = Actor_GetBaseCalcAVf((int *)a4, a5, v96, (int)a4, 0xC); /*0x5f8bf4*/
    v25 = v97; /*0x5f8bf8*/
    v98 = (float)Double_To_SInt32(v97); /*0x5f8c0b*/
    v26 = v25 - v98; /*0x5f8c17*/
    v27 = v98; /*0x5f8c17*/
    if ( v26 < dbl_A2FC68 ) /*0x5f8c24*/
      v27 = v27 - dbl_A2F928; /*0x5f8c26*/
    v99 = v27; /*0x5f8c2c*/
    v28 = Double_To_SInt32(v99); /*0x5f8c34*/
    v29 = ((double (__thiscall *)(TESObjectREFR *, int, int, int))a4->vtbl[1].Unk_38)(a4, 0xC, v28, a1); /*0x5f8c46*/
    _sprintf(v135, (const char *)&v132, "COMBAT", v29, a3, a2); /*0x5f8c60*/
    v93 = (float)(int)v125; /*0x5f8c73*/
    InterfaceMgr_DebugTextLine(v135, v126, v93, 2, 0xFFFFFFFF); /*0x5f8c86*/
    v30 = a5 + v24; /*0x5f8c8e*/
    v125 = (signed int *)v30; /*0x5f8c94*/
    v118 = Actor_GetBaseCalcAVf((int *)a4, a5, v30, (int)a4, 0x13); /*0x5f8c9d*/
    v31 = v118; /*0x5f8ca1*/
    v119 = (float)Double_To_SInt32(v118); /*0x5f8cb4*/
    v32 = v31 - v119; /*0x5f8cc0*/
    v33 = v119; /*0x5f8cc0*/
    if ( v32 < dbl_A2FC68 ) /*0x5f8ccd*/
      v33 = v33 - dbl_A2F928; /*0x5f8ccf*/
    v120 = v33; /*0x5f8cd5*/
    v34 = Double_To_SInt32(v120); /*0x5f8cdd*/
    v35 = ((double (__thiscall *)(TESObjectREFR *, int, int))a4->vtbl[1].Unk_38)(a4, 0x13, v34); /*0x5f8cef*/
    _sprintf((char *)&v134, (const char *)&v131, "MAGIC", v35); /*0x5f8d09*/
    v92 = (float)SLODWORD(v123); /*0x5f8d1c*/
    InterfaceMgr_DebugTextLine((char *)&v134, *(float *)&v30, v92, 2, 0xFFFFFFFF); /*0x5f8d2f*/
    v36 = a5 + v30; /*0x5f8d37*/
    v123 = *(float *)&v36; /*0x5f8d3d*/
    v108 = Actor_GetBaseCalcAVf((int *)a4, a5, v36, (int)a4, 0x1A); /*0x5f8d46*/
    v37 = v108; /*0x5f8d4a*/
    v109 = (float)Double_To_SInt32(v108); /*0x5f8d5d*/
    v38 = v37 - v109; /*0x5f8d69*/
    v39 = v109; /*0x5f8d69*/
    if ( v38 < dbl_A2FC68 ) /*0x5f8d76*/
      v39 = v39 - dbl_A2F928; /*0x5f8d78*/
    v107 = v39; /*0x5f8d7e*/
    v40 = Double_To_SInt32(v107); /*0x5f8d86*/
    v41 = ((double (__thiscall *)(TESObjectREFR *, int, int))a4->vtbl[1].Unk_38)(a4, 0x1A, v40); /*0x5f8d98*/
    _sprintf((char *)&v133, (const char *)&v130, "STEALTH", v41); /*0x5f8db2*/
    v82 = (float)v122; /*0x5f8dc5*/
    InterfaceMgr_DebugTextLine((char *)&v133, *(float *)&v36, v82, 2, 0xFFFFFFFF); /*0x5f8dd8*/
    v42 = a5 + v36; /*0x5f8de0*/
  }
  else
  {
    for ( k = 0xC; k < 0x21; ++k ) /*0x5f8de7*/
    {
      v100 = Actor_GetBaseCalcAVf((int *)a4, a5, k, (int)a4, k); /*0x5f8df8*/
      v44 = v100; /*0x5f8dfc*/
      v101 = (float)Double_To_SInt32(v100); /*0x5f8e0f*/
      v45 = v44 - v101; /*0x5f8e1b*/
      v46 = v101; /*0x5f8e1b*/
      if ( v45 < dbl_A2FC68 ) /*0x5f8e28*/
        v46 = v46 - dbl_A2F928; /*0x5f8e2a*/
      v102 = v46; /*0x5f8e30*/
      Double_To_SInt32(v102); /*0x5f8e38*/
      v83 = ((double (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].Unk_38)(a4, k); /*0x5f8e4e*/
      v47 = ActorValue_GetName(k); /*0x5f8e52*/
      _sprintf((char *)&v133, (const char *)&v130, v47, v83); /*0x5f8e68*/
      v84 = (float)v122; /*0x5f8e7b*/
      InterfaceMgr_DebugTextLine((char *)&v133, v123, v84, 2, 0xFFFFFFFF); /*0x5f8e8e*/
      v122 += a5; /*0x5f8e93*/
    }
    v42 = v122; /*0x5f8ea6*/
  }
  if ( v42 > SLODWORD(v107) ) /*0x5f8eae*/
    v107 = *(float *)&v42; /*0x5f8eb0*/
  v110 = a5 + LODWORD(v107); /*0x5f8eb4*/
  v85 = (float)v110; /*0x5f8ec3*/
  InterfaceMgr_DebugTextLine("ACTOR VALUES", v123, v85, 2, 0xFFFFFFFF); /*0x5f8ed3*/
  v129[0] = v126; /*0x5f8edc*/
  v111 = a5 + v110; /*0x5f8ee7*/
  v129[1] = v123; /*0x5f8eeb*/
  v48 = 0x28; /*0x5f8eef*/
  v129[2] = v127; /*0x5f8ef8*/
  v128[0] = 1.0; /*0x5f8efe*/
  v128[1] = fConstant_2; /*0x5f8f08*/
  v128[2] = *(float *)&dword_A46C30; /*0x5f8f12*/
  do /*0x5f8feb*/
  {
    v49 = v48 % 3; /*0x5f8f29*/
    v103 = Actor_GetBaseCalcAVf((int *)a4, v48 % 3, v48, (int)a4, v48); /*0x5f8f33*/
    v50 = v103; /*0x5f8f37*/
    v104 = (float)Double_To_SInt32(v103); /*0x5f8f4a*/
    v51 = v50 - v104; /*0x5f8f56*/
    v52 = v104; /*0x5f8f56*/
    if ( v51 < dbl_A2FC68 ) /*0x5f8f63*/
      v52 = v52 - dbl_A2F928; /*0x5f8f65*/
    v105 = v52; /*0x5f8f6b*/
    Double_To_SInt32(v105); /*0x5f8f73*/
    v86 = ((double (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].Unk_38)(a4, v48); /*0x5f8f89*/
    v53 = ActorValue_GetName(v48); /*0x5f8f8d*/
    _sprintf((char *)&v133, (const char *)&v130, v53, v86); /*0x5f8fa3*/
    v54 = Double_To_SInt32(v128[v49]); /*0x5f8fb1*/
    v87 = (float)v111; /*0x5f8fbe*/
    InterfaceMgr_DebugTextLine((char *)&v133, v129[v49], v87, v54, 0xFFFFFFFF); /*0x5f8fd1*/
    if ( v49 == 2 ) /*0x5f8fdc*/
      v111 += a5; /*0x5f8fe1*/
    ++v48; /*0x5f8fe5*/
  }
  while ( v48 < 0x48 ); /*0x5f8feb*/
  v88 = (float)(int)v125; /*0x5f8ffc*/
  InterfaceMgr_DebugTextLine("INVENTORY", v127, v88, 3, 0xFFFFFFFF); /*0x5f900c*/
  v125 = (signed int *)((char *)v125 + a5); /*0x5f9014*/
  ContainerChanges = ExtraDataList_GetContainerChanges(&a4->member.baseExtraList); /*0x5f901e*/
  if ( ContainerChanges )
  {
    objList = ContainerChanges->objList; /*0x5f902b*/
    next = ContainerChanges->objList; /*0x5f902f*/
    if ( ContainerChanges->objList )
    {
      while ( objList->node.next || objList->node.data )
      {
        data = objList->node.data; /*0x5f9053*/
        if ( objList->node.data ) /*0x5f9053*/
          type = data->type; /*0x5f9059*/
        else
          type = 0; /*0x5f905e*/
        if ( type && ContainerEntryExtraData_HasWorn(data, 0) )
        {
          v59 = type->member.type; /*0x5f9079*/
          if ( v59 == 0x14 )
          {
            v65 = OblivionDynamicCast( /*0x5f9131*/
                    type,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESFullName `RTTI Type Descriptor',
                    0);
            if ( v65 ) /*0x5f913b*/
            {
              v66 = *((CHAR **)v65 + 1); /*0x5f913d*/
              if ( !v66 ) /*0x5f9142*/
                v66 = EmptyString; /*0x5f9144*/
              v67 = v66; /*0x5f9149*/
            }
            else
            {
              v67 = EmptyString; /*0x5f914d*/
            }
            Health = ContainerEntryExtraData_GetHealth((void **)&data->extendData, 1); /*0x5f9156*/
            _sprintf((char *)&v133, "%.20s: %.1f%%", v67, Health);
            v90 = (float)(int)v125; /*0x5f917f*/
            InterfaceMgr_DebugTextLine((char *)&v133, v127, v90, 3, 0xFFFFFFFF); /*0x5f9192*/
          }
          else
          {
            if ( v59 != 0x21 ) /*0x5f9089*/
              goto LABEL_63; /*0x5f9089*/
            v60 = ((unsigned __int16 (__thiscall *)(TESForm::ModReferenceList *))type[5].member.modlist.data->bsFile)(&type[5].member.modlist); /*0x5f90af*/
            v61 = OblivionDynamicCast( /*0x5f90b2*/
                    type,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESFullName `RTTI Type Descriptor',
                    0);
            if ( v61 ) /*0x5f90bc*/
            {
              v62 = *((CHAR **)v61 + 1); /*0x5f90be*/
              if ( !v62 ) /*0x5f90c3*/
                v62 = EmptyString; /*0x5f90c5*/
              v63 = v62; /*0x5f90ca*/
            }
            else
            {
              v63 = EmptyString; /*0x5f90ce*/
            }
            v64 = ContainerEntryExtraData_GetHealth((void **)&data->extendData, 1); /*0x5f90d7*/
            _sprintf((char *)&v133, "%.20s: %ddmg %.1f%%", v63, v60, v64);
            v89 = (float)(int)v125; /*0x5f9104*/
            InterfaceMgr_DebugTextLine((char *)&v133, v127, v89, 3, 0xFFFFFFFF); /*0x5f9117*/
            objList = next; /*0x5f911c*/
          }
          v125 = (signed int *)((char *)v125 + a5); /*0x5f919d*/
        }
LABEL_63:
        next = (tListEntryData *)objList->node.next; /*0x5f91a1*/
        if ( !next ) /*0x5f91aa*/
          break; /*0x5f91aa*/
        objList = (tListEntryData *)objList->node.next; /*0x5f9040*/
      }
    }
  }
  v7 = a6; /*0x5f91b0*/
  v10 = (signed int *)v111; /*0x5f91b4*/
LABEL_65:
  result = v125; /*0x5f91b8*/
  *v7 = (int)v10; /*0x5f91be*/
  if ( (int)v10 <= (int)v125 ) /*0x5f91c0*/
  {
    *a7 = v125; /*0x5f91e2*/
  }
  else
  {
    *a7 = v10; /*0x5f91c6*/
    return (signed int *)a7; /*0x5f91c2*/
  }
  return result; /*0x5f91cb*/
}
