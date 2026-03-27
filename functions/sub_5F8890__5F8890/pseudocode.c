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
  double v9; // st5
  double v10; // st7
  double v11; // st6
  double v12; // st6
  signed int v13; // edi
  char *Name; // eax
  int v15; // ecx
  void *v16; // edx
  int i; // edi
  int v18; // eax
  double v19; // st7
  double v20; // st7
  int j; // edi
  double v22; // st7
  double v23; // st5
  double v24; // st6
  double v25; // st7
  int v26; // eax
  int v27; // edi
  double v28; // st7
  double v29; // st5
  double v30; // st6
  double v31; // st7
  int v32; // eax
  double v33; // st7
  int v34; // edi
  double v35; // st7
  double v36; // st5
  double v37; // st6
  double v38; // st7
  int v39; // eax
  double v40; // st7
  int v41; // edi
  double v42; // st7
  double v43; // st5
  double v44; // st6
  double v45; // st7
  int v46; // eax
  double v47; // st7
  int v48; // edi
  int k; // edi
  double v50; // st7
  double v51; // st7
  int v52; // eax
  int v53; // edi
  int v54; // ebx
  double v55; // st7
  double v56; // st5
  double v57; // st6
  double v58; // st7
  int v59; // eax
  int v60; // eax
  ExtraContainerChanges_Data *ContainerChanges; // eax
  tListEntryData *objList; // edi
  EntryData *data; // ebx
  TESForm *type; // esi
  int v65; // eax
  int v66; // edi
  void *v67; // eax
  CHAR *v68; // eax
  const char *v69; // esi
  double v70; // st7
  void *v71; // eax
  CHAR *v72; // eax
  const char *v73; // esi
  double Health; // st7
  signed int *result; // eax
  float v76; // [esp+14h] [ebp-150h]
  int v77; // [esp+14h] [ebp-150h]
  int v78; // [esp+14h] [ebp-150h]
  float v79; // [esp+18h] [ebp-14Ch]
  float v80; // [esp+18h] [ebp-14Ch]
  float v81; // [esp+18h] [ebp-14Ch]
  double v82; // [esp+18h] [ebp-14Ch]
  double v83; // [esp+18h] [ebp-14Ch]
  float v84; // [esp+18h] [ebp-14Ch]
  double v85; // [esp+18h] [ebp-14Ch]
  float v86; // [esp+18h] [ebp-14Ch]
  float v87; // [esp+18h] [ebp-14Ch]
  float v88; // [esp+18h] [ebp-14Ch]
  double v89; // [esp+18h] [ebp-14Ch]
  float v90; // [esp+18h] [ebp-14Ch]
  float v91; // [esp+18h] [ebp-14Ch]
  double v92; // [esp+18h] [ebp-14Ch]
  float v93; // [esp+18h] [ebp-14Ch]
  float v94; // [esp+18h] [ebp-14Ch]
  float v95; // [esp+18h] [ebp-14Ch]
  float v96; // [esp+18h] [ebp-14Ch]
  float v97; // [esp+1Ch] [ebp-148h]
  float v98; // [esp+1Ch] [ebp-148h]
  float v99; // [esp+20h] [ebp-144h]
  int v102; // [esp+48h] [ebp-11Ch]
  float v103; // [esp+48h] [ebp-11Ch]
  float v104; // [esp+48h] [ebp-11Ch]
  float v105; // [esp+48h] [ebp-11Ch]
  float v106; // [esp+48h] [ebp-11Ch]
  float v107; // [esp+48h] [ebp-11Ch]
  float v108; // [esp+48h] [ebp-11Ch]
  float v109; // [esp+48h] [ebp-11Ch]
  float v110; // [esp+48h] [ebp-11Ch]
  float v111; // [esp+48h] [ebp-11Ch]
  int v112; // [esp+4Ch] [ebp-118h]
  float v113; // [esp+4Ch] [ebp-118h]
  float v114; // [esp+4Ch] [ebp-118h]
  float v115; // [esp+4Ch] [ebp-118h]
  int v116; // [esp+4Ch] [ebp-118h]
  int v117; // [esp+4Ch] [ebp-118h]
  float BaseCalcAVf; // [esp+50h] [ebp-114h]
  float v119; // [esp+50h] [ebp-114h]
  float v120; // [esp+50h] [ebp-114h]
  float v121; // [esp+50h] [ebp-114h]
  float v122; // [esp+50h] [ebp-114h]
  float v123; // [esp+50h] [ebp-114h]
  float v124; // [esp+50h] [ebp-114h]
  float v125; // [esp+50h] [ebp-114h]
  float v126; // [esp+50h] [ebp-114h]
  int v127; // [esp+54h] [ebp-110h]
  int v128; // [esp+54h] [ebp-110h]
  float v129; // [esp+58h] [ebp-10Ch]
  tListEntryData *next; // [esp+58h] [ebp-10Ch]
  signed int *v131; // [esp+5Ch] [ebp-108h]
  float v132; // [esp+60h] [ebp-104h]
  float v133; // [esp+64h] [ebp-100h]
  float v134[3]; // [esp+70h] [ebp-F4h]
  float v135[3]; // [esp+7Ch] [ebp-E8h]
  int v136; // [esp+88h] [ebp-DCh] BYREF
  int v137; // [esp+8Ch] [ebp-D8h] BYREF
  void *v138; // [esp+90h] [ebp-D4h] BYREF
  int v139; // [esp+94h] [ebp-D0h] BYREF
  int v140; // [esp+98h] [ebp-CCh] BYREF
  char v141[196]; // [esp+9Ch] [ebp-C8h] BYREF
  int savedregs; // [esp+164h] [ebp+0h] BYREF

  v132 = (float)iDebugTextLeftRightOffset;
  v7 = a6;
  v133 = (float)(0x500 - iDebugTextLeftRightOffset);
  v8 = *a6;
  v9 = v132;
  v10 = v132;
  v112 = *a6;
  v131 = *a7;
  v11 = (v133 - v132) * dbl_A2FAA0 + v132;
  v129 = v11;
  if ( !a4 )
    goto LABEL_4;
  if ( !a4->vtbl->IsActor(a4) )
  {
    v10 = v132;
LABEL_4:
    v12 = (double)v112;
    v79 = v12;
    v76 = v10;
    InterfaceMgr_DebugTextLine(
      (char)&savedregs,
      v9,
      v12,
      v10,
      "ACTOR INFO: Current ref is not an actor.",
      v76,
      v79,
      1,
      0xFFFFFFFF);
    v13 = a5 + v8;
    goto LABEL_65;
  }
  Name = TESObjectREFR_GetName(a4);
  _sprintf((char *)&v139, "ACTOR INFO: %s", Name);
  v80 = (float)v112;
  InterfaceMgr_DebugTextLine((char)&savedregs, v9, v11, v132, (char *)&v139, v132, v80, 1, 0xFFFFFFFF);
  v15 = dword_A6EAFC;
  v16 = off_A6EB00;
  v127 = a5 + v8;
  v81 = (float)(a5 + v8);
  v136 = dword_A6EAF8;
  v137 = v15;
  v138 = v16;
  InterfaceMgr_DebugTextLine((char)&savedregs, v9, v11, v132, "ATTRIBUTES", v132, v81, 1, 0xFFFFFFFF);
  v102 = a5 + a5 + v8;
  v113 = *(float *)&v102;
  for ( i = 0; i < 0xC; ++i )
  {
    if ( i == 0xB )
    {
      v97 = ((double (__thiscall *)(TESObjectREFR *, _DWORD))a4->vtbl[1].Unk_38)(a4, 0);
      v113 = Calc_ActorBaseEncumbrance(v97);
      v18 = Double_To_SInt32(v113);
      v82 = ((double (__thiscall *)(TESObjectREFR *, int, int))a4->vtbl[1].Unk_38)(a4, 0xB, v18);
      v77 = ActorValue_GetName(0xBu);
      _sprintf((char *)&v139, (const char *)&v136, v77, v82);
    }
    else
    {
      BaseCalcAVf = Actor_GetBaseCalcAVf((int *)a4, a5, i, (int)a4, i);
      v19 = BaseCalcAVf;
      v119 = (float)Double_To_SInt32(BaseCalcAVf);
      v9 = v119;
      v11 = v19 - v119;
      v20 = v119;
      if ( v11 < dbl_A2FC68 )
        v20 = v20 - dbl_A2F928;
      v120 = v20;
      Double_To_SInt32(v120);
      v83 = ((double (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].Unk_38)(a4, i);
      v78 = ActorValue_GetName(i);
      _sprintf((char *)&v139, (const char *)&v136, v78, v83);
    }
    v84 = (float)SLODWORD(v113);
    InterfaceMgr_DebugTextLine((char)&savedregs, v9, v11, v132, (char *)&v139, v132, v84, 1, 0xFFFFFFFF);
    LODWORD(v113) += a5;
  }
  for ( j = 0x21; j < 0x28; ++j )
  {
    v121 = Actor_GetBaseCalcAVf((int *)a4, a5, j, (int)a4, j);
    v22 = v121;
    v122 = (float)Double_To_SInt32(v121);
    v23 = v122;
    v24 = v22 - v122;
    v25 = v122;
    if ( v24 < dbl_A2FC68 )
      v25 = v25 - dbl_A2F928;
    v123 = v25;
    Double_To_SInt32(v123);
    v85 = ((double (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].Unk_38)(a4, j);
    v26 = ActorValue_GetName(j);
    _sprintf((char *)&v139, (const char *)&v136, v26, v85);
    v86 = (float)SLODWORD(v113);
    InterfaceMgr_DebugTextLine((char)&savedregs, v23, v24, v132, (char *)&v139, v132, v86, 1, 0xFFFFFFFF);
    LODWORD(v113) += a5;
  }
  v87 = (float)v127;
  InterfaceMgr_DebugTextLine((char)&savedregs, v23, v24, v129, "SKILLS", v129, v87, 2, 0xFFFFFFFF);
  v27 = v102;
  v128 = v102;
  if ( a4->vtbl->GetBaseForm(a4)->member.type == kFormType_Creature )
  {
    v103 = Actor_GetBaseCalcAVf((int *)a4, a5, v102, (int)a4, 0xC);
    v28 = v103;
    v104 = (float)Double_To_SInt32(v103);
    v29 = v104;
    v30 = v28 - v104;
    v31 = v104;
    if ( v30 < dbl_A2FC68 )
      v31 = v31 - dbl_A2F928;
    v105 = v31;
    v32 = Double_To_SInt32(v105);
    v33 = ((double (__thiscall *)(TESObjectREFR *, int, int, int))a4->vtbl[1].Unk_38)(a4, 0xC, v32, a1);
    _sprintf(v141, (const char *)&v138, "COMBAT", v33, a3, a2);
    v99 = (float)(int)v131;
    InterfaceMgr_DebugTextLine((char)&savedregs, v29, v30, v132, v141, v132, v99, 2, 0xFFFFFFFF);
    v34 = a5 + v27;
    v131 = (signed int *)v34;
    v124 = Actor_GetBaseCalcAVf((int *)a4, a5, v34, (int)a4, 0x13);
    v35 = v124;
    v125 = (float)Double_To_SInt32(v124);
    v36 = v125;
    v37 = v35 - v125;
    v38 = v125;
    if ( v37 < dbl_A2FC68 )
      v38 = v38 - dbl_A2F928;
    v126 = v38;
    v39 = Double_To_SInt32(v126);
    v40 = ((double (__thiscall *)(TESObjectREFR *, int, int))a4->vtbl[1].Unk_38)(a4, 0x13, v39);
    _sprintf((char *)&v140, (const char *)&v137, "MAGIC", v40);
    v98 = (float)SLODWORD(v129);
    InterfaceMgr_DebugTextLine(
      (char)&savedregs,
      v36,
      v37,
      *(float *)&v34,
      (char *)&v140,
      *(float *)&v34,
      v98,
      2,
      0xFFFFFFFF);
    v41 = a5 + v34;
    v129 = *(float *)&v41;
    v114 = Actor_GetBaseCalcAVf((int *)a4, a5, v41, (int)a4, 0x1A);
    v42 = v114;
    v115 = (float)Double_To_SInt32(v114);
    v43 = v115;
    v44 = v42 - v115;
    v45 = v115;
    if ( v44 < dbl_A2FC68 )
      v45 = v45 - dbl_A2F928;
    v113 = v45;
    v46 = Double_To_SInt32(v113);
    v47 = ((double (__thiscall *)(TESObjectREFR *, int, int))a4->vtbl[1].Unk_38)(a4, 0x1A, v46);
    _sprintf((char *)&v139, (const char *)&v136, "STEALTH", v47);
    v88 = (float)v128;
    InterfaceMgr_DebugTextLine(
      (char)&savedregs,
      v43,
      v44,
      *(float *)&v41,
      (char *)&v139,
      *(float *)&v41,
      v88,
      2,
      0xFFFFFFFF);
    v48 = a5 + v41;
  }
  else
  {
    for ( k = 0xC; k < 0x21; ++k )
    {
      v106 = Actor_GetBaseCalcAVf((int *)a4, a5, k, (int)a4, k);
      v50 = v106;
      v107 = (float)Double_To_SInt32(v106);
      v43 = v107;
      v44 = v50 - v107;
      v51 = v107;
      if ( v44 < dbl_A2FC68 )
        v51 = v51 - dbl_A2F928;
      v108 = v51;
      Double_To_SInt32(v108);
      v89 = ((double (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].Unk_38)(a4, k);
      v52 = ActorValue_GetName(k);
      _sprintf((char *)&v139, (const char *)&v136, v52, v89);
      v90 = (float)v128;
      InterfaceMgr_DebugTextLine((char)&savedregs, v43, v44, v129, (char *)&v139, v129, v90, 2, 0xFFFFFFFF);
      v128 += a5;
    }
    v48 = v128;
  }
  if ( v48 > SLODWORD(v113) )
    v113 = *(float *)&v48;
  v116 = a5 + LODWORD(v113);
  v91 = (float)v116;
  InterfaceMgr_DebugTextLine((char)&savedregs, v43, v44, v129, "ACTOR VALUES", v129, v91, 2, 0xFFFFFFFF);
  v135[0] = v132;
  v117 = a5 + v116;
  v135[1] = v129;
  v53 = 0x28;
  v135[2] = v133;
  v134[0] = 1.0;
  v134[1] = fConstant_2;
  v134[2] = *(float *)&dword_A46C30;
  do
  {
    v54 = v53 % 3;
    v109 = Actor_GetBaseCalcAVf((int *)a4, v53 % 3, v53, (int)a4, v53);
    v55 = v109;
    v110 = (float)Double_To_SInt32(v109);
    v56 = v110;
    v57 = v55 - v110;
    v58 = v110;
    if ( v57 < dbl_A2FC68 )
      v58 = v58 - dbl_A2F928;
    v111 = v58;
    Double_To_SInt32(v111);
    v92 = ((double (__thiscall *)(TESObjectREFR *, int))a4->vtbl[1].Unk_38)(a4, v53);
    v59 = ActorValue_GetName(v53);
    _sprintf((char *)&v139, (const char *)&v136, v59, v92);
    v60 = Double_To_SInt32(v134[v54]);
    v93 = (float)v117;
    InterfaceMgr_DebugTextLine((char)&savedregs, v56, v57, v135[v54], (char *)&v139, v135[v54], v93, v60, 0xFFFFFFFF);
    if ( v54 == 2 )
      v117 += a5;
    ++v53;
  }
  while ( v53 < 0x48 );
  v94 = (float)(int)v131;
  InterfaceMgr_DebugTextLine((char)&savedregs, v56, v57, v133, "INVENTORY", v133, v94, 3, 0xFFFFFFFF);
  v131 = (signed int *)((char *)v131 + a5);
  ContainerChanges = ExtraDataList_GetContainerChanges(&a4->member.baseExtraList);
  if ( ContainerChanges )
  {
    objList = ContainerChanges->objList;
    next = ContainerChanges->objList;
    if ( ContainerChanges->objList )
    {
      while ( objList->node.next || objList->node.data )
      {
        data = objList->node.data;
        if ( objList->node.data )
          type = data->type;
        else
          type = 0;
        if ( type && (unsigned __int8)ContainerEntryExtraData_HasWorn(data, 0) )
        {
          v65 = type->member.type;
          if ( v65 == 0x14 )
          {
            v71 = OblivionDynamicCast(
                    type,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESFullName `RTTI Type Descriptor',
                    0);
            if ( v71 )
            {
              v72 = *((CHAR **)v71 + 1);
              if ( !v72 )
                v72 = EmptyString;
              v73 = v72;
            }
            else
            {
              v73 = EmptyString;
            }
            Health = ContainerEntryExtraData_GetHealth((void **)&data->extendData, 1);
            _sprintf((char *)&v139, "%.20s: %.1f%%", v73, Health);
            v96 = (float)(int)v131;
            InterfaceMgr_DebugTextLine((char)&savedregs, v56, v57, v133, (char *)&v139, v133, v96, 3, 0xFFFFFFFF);
          }
          else
          {
            if ( v65 != 0x21 )
              goto LABEL_63;
            v66 = ((unsigned __int16 (__thiscall *)(TESForm::ModReferenceList *))type[5].member.modlist.data->bsFile)(&type[5].member.modlist);
            v67 = OblivionDynamicCast(
                    type,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESFullName `RTTI Type Descriptor',
                    0);
            if ( v67 )
            {
              v68 = *((CHAR **)v67 + 1);
              if ( !v68 )
                v68 = EmptyString;
              v69 = v68;
            }
            else
            {
              v69 = EmptyString;
            }
            v70 = ContainerEntryExtraData_GetHealth((void **)&data->extendData, 1);
            _sprintf((char *)&v139, "%.20s: %ddmg %.1f%%", v69, v66, v70);
            v95 = (float)(int)v131;
            InterfaceMgr_DebugTextLine((char)&savedregs, v56, v57, v133, (char *)&v139, v133, v95, 3, 0xFFFFFFFF);
            objList = next;
          }
          v131 = (signed int *)((char *)v131 + a5);
        }
LABEL_63:
        next = (tListEntryData *)objList->node.next;
        if ( !next )
          break;
        objList = (tListEntryData *)objList->node.next;
      }
    }
  }
  v7 = a6;
  v13 = v117;
LABEL_65:
  result = v131;
  *v7 = v13;
  if ( v13 <= (int)v131 )
  {
    *a7 = v131;
  }
  else
  {
    *a7 = (signed int *)v13;
    return (signed int *)a7;
  }
  return result;
}
