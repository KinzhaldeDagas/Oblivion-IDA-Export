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
  _DWORD *v16; // ecx
  TESWorldSpace **v17; // eax
  clock_t v18; // eax
  int v20; // eax
  int v21; // eax
  int v22; // ebx
  int v23; // eax
  const char *v24; // eax
  TESForm *v25; // eax
  TESForm *v26; // esi
  int v27; // ebx
  int v28; // eax
  int v29; // ebx
  int v30; // eax
  int v31; // eax
  float v32; // eax
  float v33; // edx
  int v34; // eax
  int v35; // eax
  TESObjectLAND *v36; // eax
  NiNode *NiNode; // eax
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

  v12 = a1;
  v81 = a1;
  if ( a11 == 4 || a11 == 5 )
    byte_B33A8C = 1;
  if ( a11 == 0xFFFFFFFF )
  {
    a1->unk51 = 0;
    bDisableWarning_MESSAGES = 0;
  }
  else
  {
    _EDI = 0;
    if ( !a11 )
      goto LABEL_31;
    v13 = byte_B33A8C == 0;
    a1->unk51 = 1;
    dword_B33A88 = a11;
    bDisableWarning_MESSAGES = 1;
    if ( v13 )
    {
      DeleteFileA("TestAllCells.xls");
      PrintError("\r\n\r\n**************** Base Object Models ****************");
      sub_44E720(
        TESDataHandler,
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
      PrintError("\r\n\r\n**************** Base Object Icons/Textures ****************");
      sub_44CF80();
      byte_B33A8C = 1;
    }
    v14 = (TESWorldSpace **)dword_B33A84;
    v15 = dword_B33A80;
    if ( (a11 == 1 || a11 == 4 || a11 == 5) && !v14 && !v15 )
    {
      v16 = (_DWORD *)TESDataHandler;
      v17 = (TESWorldSpace **)(TESDataHandler + 0xC);
      goto LABEL_14;
    }
    if ( a11 == 3 )
    {
      v16 = (_DWORD *)TESDataHandler;
      if ( v14 && *v14 == v12->currentWorldSpace )
        goto LABEL_15;
      v17 = (TESWorldSpace **)(v16 + 3);
      dword_B33A84 = (int)(v16 + 3);
      if ( v16 == (_DWORD *)0xFFFFFFF4 )
        goto LABEL_31;
      while ( !*v17 || *v17 != v12->currentWorldSpace )
      {
        v17 = (TESWorldSpace **)v17[1];
        if ( !v17 )
        {
          dword_B33A84 = 0;
          goto LABEL_31;
        }
      }
LABEL_14:
      dword_B33A84 = (int)v17;
LABEL_15:
      byte_B33A7C = 1;
LABEL_29:
      sub_447580(v16);
      dword_B33A80 = (int)Actor::GetTemplateForm((Actor *)TESDataHandler);
      dword_B33A78 = 0;
      goto LABEL_31;
    }
    if ( a11 == 2 )
    {
      if ( v14 )
      {
        dword_B33A84 = 0;
        byte_B33A7C = 0;
      }
      if ( !v15 )
      {
        v16 = (_DWORD *)TESDataHandler;
        goto LABEL_29;
      }
    }
  }
LABEL_31:
  if ( v12->unk51 )
  {
    v18 = clock();
    v13 = byte_B33A7C == 0;
    v80 = v18;
    if ( !v13 )
    {
      if ( dword_B33A84 )
      {
        sub_4431F0(v12, a8, (char)v12, a9, a10, *(TESWorldSpace **)dword_B33A84);
        _ESI = v12->currentWorldSpace;
        __asm { fld     dword ptr [esi+98h] }
        v20 = Double_To_SInt32(a10);
        __asm { fld     dword ptr [esi+9Ch] }
        _EDI = v20 >> 0xC;
        *(_DWORD *)dword_B33A74 = v20 >> 0xC;
        v21 = Double_To_SInt32(a10);
        __asm
        {
          fld     dword ptr [esi+0A0h]
          fstp    [esp+13Ch+var_12C]
        }
        __asm { fld     dword ptr [esi+0A4h] }
        v22 = v21 >> 0xC;
        __asm { fstp    [esp+13Ch+var_128] }
        dword_B33A70 = v21 >> 0xC;
        __asm { fld     [esp+13Ch+var_128] }
        __asm { fld     [esp+13Ch+var_12C] }
        v67 = Double_To_SInt32(a10) >> 0xC;
        v23 = Double_To_SInt32(a10);
        v24 = (const char *)((int (__thiscall *)(TESWorldSpace *, int, int, int, int))_ESI->vtbl->GetEditorName)(
                              _ESI,
                              _EDI,
                              v22,
                              v23 >> 0xC,
                              v67);
        PrintError("\r\n\r\n**************** %s (%d,%d) - (%d,%d) ****************", v24, v56, v60, v64, v68);
      }
      byte_B33A7C = 0;
    }
    if ( dword_B33A84 )
    {
      v25 = sub_4F1630(v12->currentWorldSpace, a8, a9, a10, *(_DWORD *)dword_B33A74, dword_B33A70);
      v26 = v25;
      if ( v25 )
        sub_43FED0(v12, a8, a9, a10, (TESObjectCELL *)v25);
      _EDI = (int)v12->currentWorldSpace;
      __asm { fld     dword ptr [edi+0A4h] }
      v27 = dword_B33A70 + 1;
      dword_B33A70 = v27;
      if ( v27 > Double_To_SInt32(a10) >> 0xC )
      {
        __asm { fld     dword ptr [edi+9Ch] }
        v28 = Double_To_SInt32(a10);
        __asm { fld     dword ptr [edi+0A0h] }
        v29 = *(_DWORD *)dword_B33A74 + 1;
        dword_B33A70 = v28 >> 0xC;
        *(_DWORD *)dword_B33A74 = v29;
        if ( v29 > Double_To_SInt32(a10) >> 0xC )
        {
          v30 = *(_DWORD *)(dword_B33A84 + 4);
          dword_B33A84 = v30;
          if ( v30 )
            byte_B33A7C = 1;
        }
      }
    }
    else
    {
      if ( !dword_B33A78 )
        PrintError("\r\n\r\n**************** Interiors ****************");
      v31 = sub_447560((_DWORD *)TESDataHandler, dword_B33A78);
      ++dword_B33A78;
      v26 = (TESForm *)v31;
    }
    if ( v26 )
    {
      if ( (v26->member.flags & 0x20) == 0 )
      {
        if ( sub_4CBA50(v26) )
        {
          __asm { fld     dword ptr ds:0A31C80h }
          __asm { fstp    [esp+140h+var_140]; float }
          sub_4029E0(&TimeGlobals, v69);
          v32 = Vector3_InitValue_;
          v33 = dword_B3F9B0;
          *((float *)&v78 + 1) = *(&Vector3_InitValue_ + 1);
          *(float *)&v78 = v32;
          *(float *)&v79 = v33;
          if ( !TESObjectCELL_IsInterior((TESObjectCELL *)v26) )
          {
            v76 = TESObjectCELL_GetXCoordinate((TESObjectCELL *)v26) << 0xC;
            __asm { fild    [esp+13Ch+var_12C] }
            __asm
            {
              fadd    qword ptr ds:0A30F70h
              fstp    [esp+13Ch+var_110]
            }
            v76 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v26) << 0xC;
            __asm { fild    [esp+13Ch+var_12C] }
            LODWORD(v78) = v82;
            __asm
            {
              fadd    qword ptr ds:0A30F70h
              fstp    [esp+13Ch+var_10C]
            }
            __asm { fldz }
            HIDWORD(v78) = v83;
            __asm { fstp    [esp+13Ch+var_108] }
            v79 = v84;
          }
          if ( TESObjectCELL_IsInterior((TESObjectCELL *)v26) )
          {
            sub_4D4310((TESObjectCELL *)v26);
            v34 = sub_4CBB20(v26, 0x1C, 1);
            if ( v34 || (v34 = sub_4CBA50(v26)) != 0 )
            {
              v35 = (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 0x174))(v34);
              v78 = *(_QWORD *)v35;
              v79 = *(void *(__thiscall **)(NiAVObject *))(v35 + 8);
            }
            sub_4455E0((unsigned int)v12, a10, a7, a8, a9, a3, a6, a4, a5, _EDI, (TESObjectREFR *)v26, (float *)&v78);
          }
          else
          {
            if ( v12->currentInteriorCell )
              sub_445A10((unsigned int)v12, _EDI, a7, a8, a9, a10, a3, a6, a4, a5, (float *)&v78);
            else
              a10 = sub_444FB0(
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
            v36 = sub_4CE3C0((TESObjectCELL *)v26);
            sub_4C5B50(v36, (float *)&v78, (float *)&v76);
            __asm
            {
              fldz
              fld     [esp+13Ch+var_12C]
              fcom    st(1)
              fnstsw  ax
              fstp    st(1)
            }
            if ( (_AX & 0x100) != 0 )
              __asm { fstp    st }
            else
              __asm { fstp    [esp+13Ch+var_11C] }
          }
          sub_66EAF0(
            (int *)TESDataHandler_g_PlayerRef,
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
            LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.rot.x),
            LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.rot.y),
            LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.rot.z),
            (TESObjectCELL *)v26,
            0);
          sub_434020(ioManager, a8, a9, a10, 5);
          v80 = clock() - v80;
          __asm { fild    [esp+140h+var_118] }
          __asm
          {
            fdiv    qword ptr ds:0A2FC70h
            fstp    [esp+140h+var_128]
          }
          NiNode = TESObjectCELL_GetNiNode_((TESObjectCELL *)v26);
          v39 = sub_4A2BA0((int)NiNode, 0);
          p_unk78 = &TES->unk78;
          v41 = TES;
          if ( TES->unk7C )
          {
            do
            {
              v70 = p_unk78[1];
              v80 = *(_DWORD *)(v70 + 4);
              FormHeapFree(v70);
              v13 = v80 == 0;
              p_unk78[1] = v80;
            }
            while ( !v13 );
          }
          *p_unk78 = 0;
          if ( v41->currentInteriorCell )
            sub_4425D0(v41);
          sound = OSGlobals->sound;
          if ( sound )
            sub_6AC210(sound);
          sub_43FFF0(v41, a8, a9, a10, 1, 0);
          sub_43FE30(v41, a8, a9, a10, 1);
          v41->unkA8 = 1;
          sub_43FC20(TES, 0);
          OSGlobals_PurgeModels(1);
          sub_43FC20(TES, 0);
          if ( TESObjectCELL_IsInterior((TESObjectCELL *)v26) )
          {
            v43 = sub_4CB730((char *)v26);
            __asm { fld     [esp+13Ch+var_128] }
            __asm { fstp    [esp+148h+var_148] }
            v44 = (const char *)((int (__thiscall *)(TESForm *, int, _DWORD, _DWORD, int))v26->vtbl->GetEditorName)(
                                  v26,
                                  v39,
                                  LODWORD(v61),
                                  HIDWORD(v61),
                                  v43);
            PrintError("Cell \"%s\" (Interior) Verts: %d Time: %.1f Lights: %d", v44, v57, v62, v71);
            v45 = sub_4CB730((char *)v26);
            __asm { fld     [esp+148h+var_128] }
            __asm { fstp    [esp+154h+var_154] }
            ((void (__thiscall *)(TESForm *, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD))v26->vtbl->GetEditorName)(
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
            __asm { fld     [esp+13Ch+var_128] }
            ++dword_B33A6C;
            __asm { fstp    [esp+144h+var_148+4] }
            YCoordinate = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v26);
            XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)v26);
            v47 = (const char *)((int (__thiscall *)(TESForm *, int, int, int, _DWORD, _DWORD))v26->vtbl->GetEditorName)(
                                  v26,
                                  XCoordinate,
                                  YCoordinate,
                                  v39,
                                  LODWORD(v65),
                                  HIDWORD(v65));
            PrintError("Cell \"%s\" (%d, %d) Verts: %d Time: %.1f", v47, v54, v59, v63, v66);
            __asm { fld     [esp+158h+var_128] }
            __asm { fstp    [esp+150h+var_154+4] }
            v52 = TESObjectCELL_GetYCoordinate((TESObjectCELL *)v26);
            v48 = TESObjectCELL_GetXCoordinate((TESObjectCELL *)v26);
            ((void (__thiscall *)(TESForm *, int, int, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v26->vtbl->GetEditorName)(
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
          nullsub_return0_0arg();
          if ( dword_B33A88 == 4 || dword_B33A88 == 5 )
            sub_466BE0((int)SaveLoad_CurrentSavegame, a3, a4, a5, a6, a7, a8, a9, a10, dword_B33A88);
          v12 = v81;
        }
      }
    }
    if ( dword_B33A78 >= (unsigned int)dword_B33A80 )
    {
      v12->unk51 = 0;
      v49 = bhkWorldM;
      v13 = bhkWorldM == 0;
      dword_B33A80 = 0;
      bDisableWarning_MESSAGES = 0;
      if ( !v13 )
      {
        v50 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v49 + 0x58))(v49);
        v51 = sub_8991C0(v50);
        _sprintf((char *)OutputString, "RBs = %d, Phantoms = %d\r\n", *((_DWORD *)v51 + 3), *((_DWORD *)v51 + 0xC));
        OutputDebugStringA((LPCSTR)OutputString);
        DebugBreak();
      }
    }
  }
}
