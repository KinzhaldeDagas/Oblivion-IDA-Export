void __userpurge sub_445DF0(
        TES *a1@<ecx>,
        int _EDI@<edi>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>,
        double a10@<st0>,
        int a11,
        int a12)
{
  TES *v12; // ebp
  bool v13; // zf
  TESWorldSpace **v14; // eax
  int v15; // ecx
  TESDataHandler *v16; // ecx
  OblivionTESFormListNode *p_worldspaceList; // eax
  clock_t v18; // eax
  int v20; // eax
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  const char *v24; // eax
  TESForm *ExteriorCellAtCoord; // eax
  TESForm *v26; // esi
  int v27; // ebx
  int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // eax
  float x; // eax
  float z; // edx
  TESObjectREFR *v34; // eax
  int v35; // eax
  TESObjectLAND *v36; // eax
  void *ObjectPointerAt_054; // eax
  int v39; // ebp
  UInt32 *p_unk78; // edi
  TES *v41; // ebx
  _DWORD *sound; // ecx
  int v43; // eax
  const char *v44; // eax
  int v45; // eax
  int XCoordinate; // eax
  const char *v47; // eax
  int v48; // eax
  int v49; // ecx
  _DWORD *v50; // eax
  _WORD *v51; // eax
  int v52; // [esp-4h] [ebp-158h]
  double v53; // [esp+0h] [ebp-154h]
  int v54; // [esp+4h] [ebp-150h]
  double v55; // [esp+4h] [ebp-150h]
  int v56; // [esp+8h] [ebp-14Ch]
  int v57; // [esp+8h] [ebp-14Ch]
  int YCoordinate; // [esp+8h] [ebp-14Ch]
  int v59; // [esp+8h] [ebp-14Ch]
  int v60; // [esp+Ch] [ebp-148h]
  double v61; // [esp+Ch] [ebp-148h]
  double v62; // [esp+Ch] [ebp-148h]
  int v63; // [esp+Ch] [ebp-148h]
  int v64; // [esp+10h] [ebp-144h]
  double v65; // [esp+10h] [ebp-144h]
  double v66; // [esp+10h] [ebp-144h]
  int v67; // [esp+14h] [ebp-140h]
  int v68; // [esp+14h] [ebp-140h]
  float v69; // [esp+14h] [ebp-140h]
  unsigned int v70; // [esp+14h] [ebp-140h]
  int v71; // [esp+14h] [ebp-140h]
  int v72; // [esp+18h] [ebp-13Ch]
  int v73; // [esp+1Ch] [ebp-138h]
  int v74; // [esp+20h] [ebp-134h]
  int v75; // [esp+24h] [ebp-130h]
  int v76; // [esp+28h] [ebp-12Ch] BYREF
  int v77; // [esp+2Ch] [ebp-128h]
  __int64 v78; // [esp+30h] [ebp-124h] BYREF
  void *(__thiscall *v79)(NiAVObject *); // [esp+38h] [ebp-11Ch]
  clock_t v80; // [esp+3Ch] [ebp-118h]
  TES *v81; // [esp+40h] [ebp-114h]
  _BYTE *v82; // [esp+44h] [ebp-110h]
  int v83; // [esp+48h] [ebp-10Ch]
  void *(__thiscall *v84)(NiAVObject *); // [esp+4Ch] [ebp-108h]
  int OutputString[6]; // [esp+50h] [ebp-104h] BYREF
  char v86; // [esp+68h] [ebp-ECh]
  float v87; // [esp+6Ch] [ebp-E8h]
  float v88; // [esp+70h] [ebp-E4h]
  CHAR v89; // [esp+74h] [ebp-E0h]
  int v90; // [esp+78h] [ebp-DCh]
  int v91; // [esp+7Ch] [ebp-D8h]
  int v92; // [esp+80h] [ebp-D4h]
  int v93; // [esp+84h] [ebp-D0h]
  int v94; // [esp+88h] [ebp-CCh]
  int v95; // [esp+8Ch] [ebp-C8h]
  int v96; // [esp+90h] [ebp-C4h]
  int v97; // [esp+94h] [ebp-C0h]
  int v98; // [esp+98h] [ebp-BCh]
  int v99; // [esp+9Ch] [ebp-B8h]
  int v100; // [esp+A0h] [ebp-B4h]
  int v101; // [esp+A4h] [ebp-B0h]
  int v102; // [esp+A8h] [ebp-ACh]
  int v103; // [esp+ACh] [ebp-A8h]
  int v104; // [esp+B0h] [ebp-A4h]
  int v105; // [esp+B4h] [ebp-A0h]
  int v106; // [esp+B8h] [ebp-9Ch]
  int v107; // [esp+BCh] [ebp-98h]
  int v108; // [esp+C0h] [ebp-94h]
  int v109; // [esp+C4h] [ebp-90h]
  int v110; // [esp+C8h] [ebp-8Ch]
  int v111; // [esp+CCh] [ebp-88h]
  int v112; // [esp+D0h] [ebp-84h]
  int v113; // [esp+D4h] [ebp-80h]
  int v114; // [esp+D8h] [ebp-7Ch]
  int v115; // [esp+DCh] [ebp-78h]
  int v116; // [esp+E0h] [ebp-74h]
  int v117; // [esp+E4h] [ebp-70h]
  int v118; // [esp+E8h] [ebp-6Ch]
  int v119; // [esp+ECh] [ebp-68h]
  int v120; // [esp+F0h] [ebp-64h]

  v12 = a1; /*0x445e11*/
  v81 = a1; /*0x445e14*/
  if ( a11 == 4 || a11 == 5 ) /*0x445e1d*/
    unk_B33A8C = 1; /*0x445e1f*/
  if ( a11 == 0xFFFFFFFF ) /*0x445e29*/
  {
    a1->unk51 = 0; /*0x445f47*/
    bDisableWarning_MESSAGES = 0; /*0x445f4b*/
  }
  else
  {
    _EDI = 0; /*0x445e2f*/
    if ( !a11 ) /*0x445e33*/
      goto LABEL_31; /*0x445e33*/
    v13 = unk_B33A8C == 0; /*0x445e39*/
    a1->unk51 = 1; /*0x445e40*/
    unk_B33A88 = a11; /*0x445e44*/
    bDisableWarning_MESSAGES = 1; /*0x445e4a*/
    if ( v13 ) /*0x445e51*/
    {
      DeleteFileA("TestAllCells.xls"); /*0x445e58*/
      PrintError("\r\n\r\n**************** Base Object Models ****************"); /*0x445e63*/
      sub_44E720( /*0x445e72*/
        (int)g_TESDataHandler,
        a11,
        a8,
        a9,
        a10,
        0,
        v72,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78,
        SHIDWORD(v78),
        (int)v79,
        v80,
        (int)v81,
        v82,
        v83,
        (int)v84,
        OutputString[0],
        OutputString[1],
        OutputString[2],
        OutputString[3],
        OutputString[4],
        OutputString[5],
        v86,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92,
        v93,
        v94,
        v95,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101,
        v102,
        v103,
        v104,
        v105,
        v106,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119,
        v120);
      PrintError("\r\n\r\n**************** Base Object Icons/Textures ****************"); /*0x445e7c*/
      sub_44CF80(); /*0x445e8a*/
      unk_B33A8C = 1; /*0x445e8f*/
    }
    v14 = (TESWorldSpace **)unk_B33A84; /*0x445e99*/
    v15 = unk_B33A80; /*0x445e9e*/
    if ( (a11 == 1 || a11 == 4 || a11 == 5) && !v14 && !v15 ) /*0x445eb6*/
    {
      v16 = g_TESDataHandler; /*0x445eb8*/
      p_worldspaceList = &g_TESDataHandler->worldspaceList; /*0x445ebe*/
      goto LABEL_14; /*0x445ebe*/
    }
    if ( a11 == 3 ) /*0x445ed2*/
    {
      v16 = g_TESDataHandler; /*0x445ed6*/
      if ( v14 && *v14 == v12->currentWorldSpace ) /*0x445ee3*/
        goto LABEL_15; /*0x445ee3*/
      p_worldspaceList = &v16->worldspaceList; /*0x445ee5*/
      unk_B33A84 = (int)&v16->worldspaceList; /*0x445eea*/
      if ( v16 == (TESDataHandler *)0xFFFFFFF4 ) /*0x445eef*/
        goto LABEL_31; /*0x445eef*/
      while ( !p_worldspaceList->item || p_worldspaceList->item != (TESForm *)v12->currentWorldSpace ) /*0x445efa*/
      {
        p_worldspaceList = p_worldspaceList->next; /*0x445efc*/
        if ( !p_worldspaceList ) /*0x445f01*/
        {
          unk_B33A84 = 0; /*0x445f03*/
          goto LABEL_31; /*0x445f08*/
        }
      }
LABEL_14:
      unk_B33A84 = (int)p_worldspaceList; /*0x445ec1*/
LABEL_15:
      unk_B33A7C = 1; /*0x445ec6*/
LABEL_29:
      sub_447580(v16); /*0x445f2a*/
      unk_B33A80 = (int)Actor::GetTemplateForm((Actor *)g_TESDataHandler); /*0x445f3a*/
      unk_B33A78 = 0; /*0x445f3f*/
      goto LABEL_31; /*0x445f45*/
    }
    if ( a11 == 2 ) /*0x445f0d*/
    {
      if ( v14 ) /*0x445f11*/
      {
        unk_B33A84 = 0; /*0x445f13*/
        unk_B33A7C = 0; /*0x445f19*/
      }
      if ( !v15 ) /*0x445f22*/
      {
        v16 = g_TESDataHandler; /*0x445f24*/
        goto LABEL_29; /*0x445f24*/
      }
    }
  }
LABEL_31:
  if ( v12->unk51 )
  {
    v18 = clock(); /*0x445f5c*/
    v13 = unk_B33A7C == 0; /*0x445f61*/
    v80 = v18; /*0x445f68*/
    if ( !v13 ) /*0x445f6c*/
    {
      if ( unk_B33A84 ) /*0x445f72*/
      {
        sub_4431F0(v12, a8, a9, a10, *(TESWorldSpace **)unk_B33A84); /*0x445f84*/
        _ESI = v12->currentWorldSpace; /*0x445f89*/
        __asm { fld     dword ptr [esi+98h] } /*0x445f8c*/
        v20 = Double_To_SInt32(a10); /*0x445f92*/
        __asm { fld     dword ptr [esi+9Ch] } /*0x445f97*/
        _EDI = v20 >> 0xC; /*0x445f9f*/
        *(_DWORD *)unk_B33A74 = v20 >> 0xC; /*0x445fa2*/
        v21 = Double_To_SInt32(a10); /*0x445fa8*/
        __asm /*0x445fad*/
        {
          fld     dword ptr [esi+0A0h]
          fstp    [esp+13Ch+var_12C]
        }
        __asm { fld     dword ptr [esi+0A4h] }
        v22 = v21 >> 0xC; /*0x445fbf*/
        __asm { fstp    [esp+13Ch+var_128] } /*0x445fc2*/
        unk_B33A70 = v21 >> 0xC; /*0x445fc6*/
        __asm { fld     [esp+13Ch+var_128] } /*0x445fcc*/
        __asm { fld     [esp+13Ch+var_12C] }
        v67 = Double_To_SInt32(a10) >> 0xC; /*0x445fdc*/
        v23 = Double_To_SInt32(a10); /*0x445fdd*/
        v24 = (const char *)((int (__thiscall *)(TESWorldSpace *, int, int, int, int))_ESI->vtbl->GetEditorName)( /*0x445ff2*/
                              _ESI,
                              _EDI,
                              v22,
                              v23 >> 0xC,
                              v67);
        PrintError("\r\n\r\n**************** %s (%d,%d) - (%d,%d) ****************", v24, v56, v60, v64, v68); /*0x445ffa*/
      }
      unk_B33A7C = 0; /*0x446002*/
    }
    if ( unk_B33A84 ) /*0x446009*/
    {
      ExteriorCellAtCoord = TESWorldSpace_LoadExteriorCellAtCoord( /*0x446027*/
                              v12->currentWorldSpace,
                              a8,
                              a9,
                              a10,
                              *(_DWORD *)unk_B33A74,
                              unk_B33A70);
      v26 = ExteriorCellAtCoord; /*0x44602c*/
      if ( ExteriorCellAtCoord ) /*0x446030*/
        sub_43FED0(v12, a8, a9, a10, (TESObjectCELL *)ExteriorCellAtCoord); /*0x446035*/
      _EDI = (int)v12->currentWorldSpace; /*0x446040*/
      __asm { fld     dword ptr [edi+0A4h] } /*0x446043*/
      v27 = unk_B33A70 + 1; /*0x446049*/
      unk_B33A70 = v27; /*0x44604c*/
      if ( v27 > Double_To_SInt32(a10) >> 0xC ) /*0x44605c*/
      {
        __asm { fld     dword ptr [edi+9Ch] } /*0x446062*/
        v28 = Double_To_SInt32(a10); /*0x446068*/
        __asm { fld     dword ptr [edi+0A0h] } /*0x44606d*/
        v29 = *(_DWORD *)unk_B33A74 + 1; /*0x44607c*/
        unk_B33A70 = v28 >> 0xC; /*0x44607f*/
        *(_DWORD *)unk_B33A74 = v29; /*0x446084*/
        if ( v29 > Double_To_SInt32(a10) >> 0xC ) /*0x446094*/
        {
          v30 = *(_DWORD *)(unk_B33A84 + 4); /*0x44609b*/
          unk_B33A84 = v30; /*0x4460a0*/
          if ( v30 ) /*0x4460a5*/
            unk_B33A7C = 1; /*0x4460a7*/
        }
      }
    }
    else
    {
      if ( !unk_B33A78 ) /*0x4460b0*/
        PrintError("\r\n\r\n**************** Interiors ****************"); /*0x4460be*/
      v31 = sub_447560(g_TESDataHandler, unk_B33A78); /*0x4460d3*/
      ++unk_B33A78; /*0x4460d8*/
      v26 = (TESForm *)v31; /*0x4460df*/
    }
    if ( v26 )
    {
      if ( (v26->member.flags & 0x20) == 0 )
      {
        if ( sub_4CBA50((TESObjectCELL *)v26) )
        {
          __asm { fld     dword ptr ds:0A31C80h } /*0x446107*/
          __asm { fstp    [esp+140h+var_140]; float }
          TimeGlobals_AdvanceGameTime(&MEMORY[0xB332E0], v69); /*0x446116*/
          x = g_zeroNiPoint3.x; /*0x446121*/
          z = g_zeroNiPoint3.z; /*0x446126*/
          HIDWORD(v78) = LODWORD(g_zeroNiPoint3.y); /*0x44612c*/
          *(float *)&v78 = x; /*0x446132*/
          *(float *)&v79 = z; /*0x446136*/
          if ( !TESObjectCELL_IsInterior((TESObjectCELL *)v26) ) /*0x44613a*/
          {
            v76 = TESObjectCELL_GetXCoordinate((TESObjectCELL *)v26) << 0xC; /*0x44614d*/
            __asm { fild    [esp+13Ch+var_12C] } /*0x446151*/
            __asm
            {
              fadd    qword ptr ds:0A30F70h
              fstp    [esp+13Ch+var_110]
            }
            v76 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v26) << 0xC; /*0x446169*/
            __asm { fild    [esp+13Ch+var_12C] } /*0x44616d*/
            LODWORD(v78) = v82; /*0x446175*/
            __asm /*0x446179*/
            {
              fadd    qword ptr ds:0A30F70h
              fstp    [esp+13Ch+var_10C]
            }
            __asm { fldz }
            HIDWORD(v78) = v83; /*0x446189*/
            __asm { fstp    [esp+13Ch+var_108] } /*0x44618d*/
            v79 = v84; /*0x446195*/
          }
          if ( TESObjectCELL_IsInterior((TESObjectCELL *)v26) ) /*0x44619b*/
          {
            sub_4D4310((TESObjectCELL *)v26, a8, a9, a10); /*0x4461a6*/
            v34 = sub_4CBB20((TESObjectCELL *)v26, 0x1C, 1); /*0x4461b1*/
            if ( v34 || (v34 = sub_4CBA50((TESObjectCELL *)v26)) != 0 ) /*0x4461c3*/
            {
              v35 = (int)v34->vtbl->GetPos(v34); /*0x4461cf*/
              v78 = *(_QWORD *)v35; /*0x4461d3*/
              v79 = *(void *(__thiscall **)(NiAVObject *))(v35 + 8); /*0x4461e1*/
            }
            sub_4455E0((unsigned int)v12, a10, a7, a8, a9, a3, a6, a4, a5, _EDI, (TESObjectREFR *)v26, (float *)&v78); /*0x4461ed*/
          }
          else
          {
            if ( v12->currentInteriorCell ) /*0x4461f4*/
              sub_445A10((unsigned int)v12, _EDI, a7, a8, a9, a10, a3, a6, a4, a5, (float *)&v78); /*0x446201*/
            else
              a10 = sub_444FB0( /*0x446238*/
                      (unsigned int)v12,
                      (TESObjectREFR *)v12,
                      a10,
                      a3,
                      a9,
                      a8,
                      a7,
                      a6,
                      a4,
                      a5,
                      (float *)&v78,
                      0);
            v36 = sub_4CE3C0((TESObjectCELL *)v26); /*0x446212*/
            sub_4C5B50(v36, (float *)&v78, (float *)&v76); /*0x446219*/
            __asm /*0x44621e*/
            {
              fldz
              fld     [esp+13Ch+var_12C]
              fcom    st(1)
              fnstsw  ax
              fstp    st(1)
            }
            if ( (_AX & 0x100) != 0 ) /*0x44622d*/
              __asm { fstp    st } /*0x44623f*/
            else
              __asm { fstp    [esp+13Ch+var_11C] } /*0x44622f*/
          }
          PlayerCharacter_ChangeCellAndPosition( /*0x446279*/
            (TESObjectREFR *)reference,
            a10,
            a7,
            a8,
            a9,
            a3,
            a6,
            a4,
            a5,
            (void (__thiscall *)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))v78,
            (NiAVObject *(__thiscall *)(NiAVObject *, const char *))HIDWORD(v78),
            v79,
            LODWORD(reference->super.super.super.super.rot.x),
            LODWORD(reference->super.super.super.super.rot.y),
            LODWORD(reference->super.super.super.super.rot.z),
            (TESObjectCELL *)v26,
            0);
          sub_434020(MEMORY[0xB33A10], a8, a9, a10, 5); /*0x446286*/
          v80 = clock() - v80; /*0x446296*/
          __asm { fild    [esp+140h+var_118] } /*0x44629a*/
          __asm
          {
            fdiv    qword ptr ds:0A2FC70h
            fstp    [esp+140h+var_128]
          }
          ObjectPointerAt_054 = GetObjectPointerAt_054(v26); /*0x4462aa*/
          v39 = sub_4A2BA0((int)ObjectPointerAt_054, 0); /*0x4462b5*/
          p_unk78 = &MEMORY[0xB333A0]->unk78; /*0x4462bc*/
          v41 = MEMORY[0xB333A0]; /*0x4462c6*/
          if ( MEMORY[0xB333A0]->unk7C ) /*0x4462c2*/
          {
            do /*0x4462ec*/
            {
              v70 = p_unk78[1]; /*0x4462d6*/
              v80 = *(_DWORD *)(v70 + 4); /*0x4462d7*/
              FormHeapFree(v70); /*0x4462db*/
              v13 = v80 == 0; /*0x4462e7*/
              p_unk78[1] = v80; /*0x4462e9*/
            }
            while ( !v13 ); /*0x4462ec*/
          }
          *p_unk78 = 0; /*0x4462ee*/
          if ( v41->currentInteriorCell ) /*0x4462f4*/
            sub_4425D0(v41); /*0x4462fc*/
          sound = MEMORY[0xB33398]->sound; /*0x446306*/
          if ( sound ) /*0x44630b*/
            sub_6AC210(sound); /*0x44630d*/
          sub_43FFF0(v41, a8, a9, a10, 1, 0); /*0x446318*/
          sub_43FE30(v41, a8, a9, a10, 1); /*0x446321*/
          v41->unkA8 = 1; /*0x446326*/
          sub_43FC20(MEMORY[0xB333A0], 0); /*0x446335*/
          OSGlobals_PurgeModels(1); /*0x446342*/
          sub_43FC20(MEMORY[0xB333A0], 0); /*0x44634f*/
          if ( TESObjectCELL_IsInterior((TESObjectCELL *)v26) )
          {
            v43 = sub_4CB730((TESObjectCELL *)v26); /*0x446361*/
            __asm { fld     [esp+13Ch+var_128] } /*0x446366*/
            __asm { fstp    [esp+148h+var_148] }
            v44 = (const char *)((int (__thiscall *)(TESForm *, int, _DWORD, _DWORD, int))v26->vtbl->GetEditorName)( /*0x44637c*/
                                  v26,
                                  v39,
                                  LODWORD(v61),
                                  HIDWORD(v61),
                                  v43);
            PrintError("Cell \"%s\" (Interior) Verts: %d Time: %.1f Lights: %d", v44, v57, v62, v71);
            v45 = sub_4CB730((TESObjectCELL *)v26); /*0x446394*/
            __asm { fld     [esp+148h+var_128] } /*0x446399*/
            __asm { fstp    [esp+154h+var_154] }
            ((void (__thiscall *)(TESForm *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD))v26->vtbl->GetEditorName)( /*0x4463af*/
              v26,
              v39,
              LODWORD(v53),
              HIDWORD(v53),
              v45,
              0,
              0,
              0);
          }
          else
          {
            __asm { fld     [esp+13Ch+var_128] } /*0x4463c9*/
            ++unk_B33A6C; /*0x4463cd*/
            __asm { fstp    [esp+144h+var_148+4] } /*0x4463d7*/
            YCoordinate = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v26); /*0x4463e0*/
            XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)v26); /*0x4463e3*/
            v47 = (const char *)((int (__thiscall *)(TESForm *, int, int, int, _DWORD, _DWORD))v26->vtbl->GetEditorName)( /*0x4463f3*/
                                  v26,
                                  XCoordinate,
                                  YCoordinate,
                                  v39,
                                  LODWORD(v65),
                                  HIDWORD(v65));
            PrintError("Cell \"%s\" (%d, %d) Verts: %d Time: %.1f", v47, v54, v59, v63, v66);
            __asm { fld     [esp+158h+var_128] } /*0x446400*/
            __asm { fstp    [esp+150h+var_154+4] }
            v52 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v26); /*0x44641b*/
            v48 = TESObjectCELL_GetXCoordinate((TESObjectCELL *)v26); /*0x44641e*/
            ((void (__thiscall *)(TESForm *, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v26->vtbl->GetEditorName)( /*0x44642e*/
              v26,
              v48,
              v52,
              v39,
              LODWORD(v55),
              HIDWORD(v55),
              0,
              0,
              0);
          }
          nullsub_return0_0arg(); /*0x4463bc*/
          if ( unk_B33A88 == 4 || unk_B33A88 == 5 ) /*0x446450*/
            sub_466BE0( /*0x446459*/
              (NiTMap<unsigned int,NiTSimpleList<ExpiredCellData *> *> *)g_TESSaveLoadGame,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              a9,
              a10,
              unk_B33A88);
          v12 = v81; /*0x44645e*/
        }
      }
    }
    if ( unk_B33A78 >= (unsigned int)unk_B33A80 ) /*0x44646e*/
    {
      v12->unk51 = 0; /*0x446470*/
      v49 = MEMORY[0xB35C24]; /*0x446474*/
      v13 = MEMORY[0xB35C24] == 0; /*0x44647a*/
      unk_B33A80 = 0; /*0x44647c*/
      bDisableWarning_MESSAGES = 0; /*0x446486*/
      if ( !v13 ) /*0x44648d*/
      {
        v50 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v49 + 0x58))(v49); /*0x446494*/
        v51 = sub_8991C0(v50); /*0x446498*/
        _sprintf((char *)OutputString, "RBs = %d, Phantoms = %d\r\n", *((_DWORD *)v51 + 3), *((_DWORD *)v51 + 0xC)); /*0x4464af*/
        OutputDebugStringA((LPCSTR)OutputString); /*0x4464bc*/
        DebugBreak(); /*0x4464c2*/
      }
    }
  }
}
