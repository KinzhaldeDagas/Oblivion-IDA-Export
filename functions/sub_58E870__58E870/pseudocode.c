char __usercall sub_58E870@<al>(int a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double Float@<st0>)
{
  int v5; // ecx
  char result; // al
  bool v8; // bl
  int ParentMenu; // eax
  int v10; // eax
  int v11; // edi
  int v12; // edi
  char v15; // al
  int v16; // eax
  int v17; // eax
  char v18; // bl
  int v19; // eax
  NiNode *v20; // edi
  NiTexturingProperty *NiPropertyByID; // eax
  NiNode *v22; // ecx
  NiAVObject *ChildAtIndex; // eax
  NiTexturingProperty *v24; // ebx
  _DWORD *v25; // ecx
  char *v26; // edi
  char *v27; // eax
  int *v29; // eax
  int v30; // edi
  char *v32; // eax
  signed int v34; // eax
  signed int v35; // eax
  int (__thiscall *v38)(int); // eax
  _DWORD *v39; // ecx
  int (__thiscall *v40)(int); // eax
  int v41; // eax
  NiNode *v42; // ecx
  NiAVObject *v43; // ebp
  int v44; // eax
  char *m_data; // ecx
  int v46; // edx
  float v47; // ecx
  char *v48; // edx
  int v49; // ecx
  float v50; // ecx
  char *v51; // edx
  int v52; // ecx
  float v53; // edx
  NiProperty *v54; // eax
  NiProperty *v55; // edi
  int v56; // eax
  char *v61; // eax
  const char *m_pcName; // ecx
  int *v63; // ecx
  int v64; // edx
  int (__thiscall *v65)(int *); // eax
  int v66; // eax
  int *v67; // eax
  int v68; // edx
  const char *v69; // ecx
  int v70; // ecx
  int (__thiscall *v71)(int); // eax
  int v72; // eax
  int v73; // eax
  char **v74; // eax
  int v75; // eax
  const char *v76; // ebp
  int v77; // eax
  float x; // ecx
  float v80; // edx
  float v81; // edi
  int v82; // eax
  int (__thiscall *v83)(int); // eax
  int v84; // ebp
  unsigned int v85; // edi
  UInt32 v86; // ebx
  NiObject *v87; // eax
  NiObject *v88; // eax
  NiObjectVtbl *v89; // edx
  float y; // edx
  float z; // eax
  int (__thiscall *v92)(int); // eax
  int v93; // ecx
  float *v94; // eax
  float v95; // edx
  int v96; // ebp
  unsigned int i; // edi
  NiObject *v98; // eax
  float *v99; // eax
  int v100; // eax
  int v101; // eax
  _DWORD *v102; // edi
  _DWORD *v103; // eax
  unsigned __int16 v105; // cx
  double v107; // st7
  _WORD *v108; // edi
  unsigned int v109; // ebp
  int v110; // eax
  int v111; // edi
  int v112; // eax
  char v113; // al
  _DWORD *v114; // edi
  float v115; // eax
  int v116; // eax
  float *v117; // eax
  int v118; // eax
  int v119; // eax
  int v120; // eax
  bool v121; // zf
  NiNode *v122; // ebx
  NiProperty *v123; // edi
  BSFogProperty *v124; // ebp
  NiObject *v125; // eax
  NiObject *v126; // ebx
  int v128; // edi
  UInt32 m_uiRefCount; // eax
  int v130; // ecx
  int v131; // eax
  int v136; // eax
  unsigned int v137; // edx
  BSStringT v138; // [esp-4h] [ebp-80h] BYREF
  float *v139; // [esp+4h] [ebp-78h]
  int v140; // [esp+8h] [ebp-74h]
  _DWORD *a2; // [esp+Ch] [ebp-70h] BYREF
  char v142; // [esp+25h] [ebp-57h]
  char v143; // [esp+26h] [ebp-56h]
  bool v144; // [esp+27h] [ebp-55h]
  int v145; // [esp+28h] [ebp-54h]
  int v146; // [esp+2Ch] [ebp-50h] BYREF
  BSStringT v149; // [esp+3Ch] [ebp-40h] BYREF
  int v150; // [esp+44h] [ebp-38h] BYREF
  float v151; // [esp+48h] [ebp-34h]
  double v152; // [esp+4Ch] [ebp-30h]
  float v153; // [esp+54h] [ebp-28h]
  BSStringT v154; // [esp+5Ch] [ebp-20h] BYREF
  void **v155; // [esp+64h] [ebp-18h]
  int v156; // [esp+78h] [ebp-4h]

  _ESI = a1; /*0x58e89d*/
  v5 = *(_DWORD *)(a1 + 0x2C); /*0x58e89f*/
  result = 0; /*0x58e8a4*/
  v142 = 0; /*0x58e8a8*/
  if ( !v5 ) /*0x58e8ac*/
    return result; /*0x58e8ac*/
  if ( *(_DWORD *)(_ESI + 0x24) ) /*0x58e8b2*/
  {
    if ( (v5 & 0x200) != 0 ) /*0x58e8bf*/
    {
      Float = Tile_GetFloat((_DWORD *)_ESI, 0xFA4); /*0x58e8c8*/
      __asm /*0x58e8cd*/
      {
        fcomp   dword ptr ds:0A379B4h
        fnstsw  ax
      }
      v8 = !__SETP__(HIBYTE(_AX) & 0x44, 0); /*0x58e8c8*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)_ESI + 0xC))(_ESI) == 0x386 ) /*0x58e8ee*/
      {
        if ( v8 ) /*0x58e8f2*/
        {
          if ( *(_BYTE *)(_ESI + 0x48) ) /*0x58e8f4*/
            goto LABEL_13; /*0x58e8f8*/
        }
        else if ( !*(_BYTE *)(_ESI + 0x48) ) /*0x58e900*/
        {
          goto LABEL_13; /*0x58e900*/
        }
        *(_DWORD *)(_ESI + 0x2C) |= 2u; /*0x58e902*/
      }
    }
  }
LABEL_13:
  if ( (*(_BYTE *)(_ESI + 0x2C) & 2) != 0 ) /*0x58e90a*/
  {
    if ( Tile_GetParentMenu((_DWORD *)_ESI) ) /*0x58e90e*/
    {
      ParentMenu = Tile_GetParentMenu((_DWORD *)_ESI); /*0x58e919*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3EF ) /*0x58e92c*/
        sub_578E00(st5_0, Float); /*0x58e92e*/
    }
    sub_589AA0((_DWORD *)_ESI); /*0x58e935*/
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)_ESI + 8))(_ESI) ) /*0x58e941*/
    {
      v10 = *(_DWORD *)(_ESI + 0x2C); /*0x58e947*/
      v142 = 1; /*0x58e94c*/
      if ( (v10 & 2) != 0 ) /*0x58e951*/
        *(_DWORD *)(_ESI + 0x2C) = v10 ^ 2; /*0x58e956*/
    }
  }
  if ( *(char *)(_ESI + 0x2C) < 0 && *(_DWORD *)(_ESI + 0x28) ) /*0x58e95f*/
  {
    while ( 1 ) /*0x58e964*/
    {
      v11 = *(_DWORD *)(_ESI + 0x28); /*0x58e964*/
      if ( !v11 ) /*0x58e969*/
        break; /*0x58e969*/
      while ( !sub_58D960((float *)v11) ) /*0x58e979*/
      {
        v11 = *(_DWORD *)(v11 + 0x14); /*0x58e97b*/
        if ( !v11 ) /*0x58e980*/
          goto LABEL_27; /*0x58e980*/
      }
    }
  }
LABEL_27:
  if ( (*(_BYTE *)(_ESI + 0x2C) & 4) != 0 ) /*0x58e98c*/
  {
    v12 = *(_DWORD *)(_ESI + 0x24); /*0x58e98e*/
    if ( v12 ) /*0x58e993*/
    {
      Tile_GetFloat((_DWORD *)_ESI, 0xFA1); /*0x58e99c*/
      __asm /*0x58e9a1*/
      {
        fcomp   dword ptr ds:0A2F948h
        fnstsw  ax
      }
      if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x58e9a9*/
        goto LABEL_32; /*0x58e9a9*/
      Tile_GetFloat((_DWORD *)_ESI, 0xFA3); /*0x58e9b5*/
      __asm /*0x58e9ba*/
      {
        fcomp   dword ptr ds:0A379B4h
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x58e9c2*/
        v15 = 0; /*0x58e9c7*/
      else
LABEL_32:
        v15 = 1; /*0x58e9cb*/
      if ( v15 ) /*0x58e9cf*/
        *(_WORD *)(v12 + 0x18) |= 1u; /*0x58e9d1*/
      else
        *(_WORD *)(v12 + 0x18) &= ~1u; /*0x58e9d8*/
      v16 = *(_DWORD *)(_ESI + 0x2C); /*0x58e9de*/
      v142 = 1; /*0x58e9e3*/
      if ( (v16 & 4) != 0 ) /*0x58e9e8*/
        *(_DWORD *)(_ESI + 0x2C) = v16 ^ 4; /*0x58e9ed*/
    }
  }
  v17 = *(_DWORD *)(_ESI + 0x24); /*0x58e9f0*/
  if ( v17 ) /*0x58e9f5*/
  {
    v18 = *(_BYTE *)(v17 + 0x18) & 1; /*0x58e9fa*/
    v143 = v18; /*0x58e9fd*/
  }
  else
  {
    v143 = 1; /*0x58ea03*/
    v18 = 1; /*0x58ea08*/
  }
  if ( v17 ) /*0x58ea0e*/
  {
    while ( !v18 ) /*0x58ea12*/
    {
      v17 = *(_DWORD *)(v17 + 0x1C); /*0x58ea14*/
      if ( !v17 ) /*0x58ea19*/
        break; /*0x58ea19*/
      v143 = *(_BYTE *)(v17 + 0x18) & 1; /*0x58ea21*/
      v18 = v143; /*0x58ea25*/
    }
  }
  v144 = (*(int (__thiscall **)(int))(*(_DWORD *)_ESI + 0xC))(_ESI) == 0x386; /*0x58ea3a*/
  if ( LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk0B8) ) /*0x58ea44*/
  {
    if ( v18 ) /*0x58ea53*/
    {
      v19 = *(_DWORD *)(_ESI + 0x24); /*0x58ea55*/
      if ( *(_WORD *)(v19 + 0xB6) ) /*0x58ea58*/
        v20 = **(NiNode ***)(v19 + 0xB0); /*0x58ea6b*/
      else
        v20 = 0; /*0x58ea61*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)_ESI + 0xC))(_ESI) == 0x386 ) /*0x58ea7b*/
      {
        if ( v20 ) /*0x58ea7f*/
        {
          NiPropertyByID = (NiTexturingProperty *)NiNode_GetNiPropertyByID(v20, 6); /*0x58ea85*/
          if ( NiPropertyByID ) /*0x58ea8c*/
          {
            OB_NiTexturingProperty_SetBaseTexture_010201A0(NiPropertyByID, 0); /*0x58ea91*/
            *(_DWORD *)(_ESI + 0x2C) |= 0x20u; /*0x58ea96*/
          }
        }
      }
    }
  }
  if ( v144 && (*(_BYTE *)(_ESI + 0x2C) & 0x20) != 0 ) /*0x58eaa9*/
  {
    v22 = *(NiNode **)(_ESI + 0x24); /*0x58eaaf*/
    if ( v22 ) /*0x58eab4*/
    {
      if ( !v18 || unk_B3B0A2 ) /*0x58eabe*/
      {
        ChildAtIndex = NiNode_GetChildAtIndex(v22, 0); /*0x58eacc*/
        if ( ChildAtIndex ) /*0x58ead3*/
        {
          v24 = (NiTexturingProperty *)NiNode_GetNiPropertyByID((NiNode *)ChildAtIndex, 6); /*0x58eae2*/
          if ( v24 ) /*0x58eae6*/
          {
            *(float *)&v146 = 0.0; /*0x58eaec*/
            v156 = 0; /*0x58eaf7*/
            v26 = sub_588C10((_DWORD *)_ESI, 0xFE6); /*0x58eb00*/
            if ( v26 ) /*0x58eb04*/
            {
              a2 = v25; /*0x58eb0a*/
              v151 = COERCE_FLOAT(&a2); /*0x58eb10*/
              sub_4A19F0((int *)&a2, (int *)(_ESI + 0x44)); /*0x58eb15*/
              LOBYTE(v156) = 1; /*0x58eb21*/
              Tile_GetFloat((_DWORD *)_ESI, 0xFD2); /*0x58eb26*/
              v27 = *(char **)(_ESI + 8); /*0x58eb2b*/
              __asm { fstp    [esp+74h+var_74]; float } /*0x58eb2f*/
              _EBP = _ESI + 0x40; /*0x58eb32*/
              v139 = (float *)(_ESI + 0x40); /*0x58eb35*/
              v149.m_data = (char *)&v138; /*0x58eb3b*/
              BSStringT_constr_str(&v138, v27); /*0x58eb40*/
              LOBYTE(v156) = 0; /*0x58eb4b*/
              v29 = sub_591360( /*0x58eb53*/
                      &v150,
                      v26,
                      (unsigned int)v138.m_data,
                      *(int *)&v138.m_dataLen,
                      v139,
                      *(float *)&v140,
                      (UInt32)a2);
              LOBYTE(v156) = 2; /*0x58eb60*/
              OB_NiSmartPointer_Assign_010201A0(&v146, v29); /*0x58eb65*/
              LOBYTE(v156) = 0; /*0x58eb6e*/
              NiPointerSlot_Release((NiD3DVertexShader *)&v150); /*0x58eb73*/
              v30 = v146; /*0x58eb78*/
              if ( *(float *)&v146 != 0.0 ) /*0x58eb7e*/
              {
                OB_NiTexturingProperty_SetBaseTexture_010201A0(v24, (NiRenderedTexture *)v146); /*0x58eb87*/
                Tile_GetFloat((_DWORD *)_ESI, 0xFCF); /*0x58eb93*/
                __asm { fcomp   dword ptr ds:0A379B4h } /*0x58eb98*/
                __asm { fnstsw  ax }
                if ( __SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x58eba5*/
                  *(float *)&a2 = 0.0; /*0x58ebab*/
                else
                  a2 = (_DWORD *)3; /*0x58eba7*/
                OB_NiTexturingProperty_SetClampMode_010201A0(v24, (int)a2); /*0x58ebad*/
                Tile_GetFloat((_DWORD *)_ESI, 0xFD2); /*0x58ebb9*/
                __asm { fstp    [esp+6Ch+var_54] } /*0x58ebbe*/
                v32 = sub_588C10((_DWORD *)_ESI, 0xFE6); /*0x58ebc9*/
                BSStringT_constr_str(&v149, v32); /*0x58ebd3*/
                LOBYTE(v156) = 3; /*0x58ebdf*/
                Tile_GetFloat((_DWORD *)_ESI, 0xFCF); /*0x58ebe4*/
                __asm /*0x58ebe9*/
                {
                  fcomp   dword ptr ds:0A30634h
                  fnstsw  ax
                }
                if ( __SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x58ebf4*/
                {
                  __asm /*0x58ecd2*/
                  {
                    fldz
                    fld     [esp+6Ch+var_54]
                    fcom    st(1)
                    fnstsw  ax
                  }
                  if ( (_AX & 0x100) != 0 ) /*0x58ecdf*/
                  {
                    __asm /*0x58ee1c*/
                    {
                      fstp    st(1)
                      fstp    st
                    }
                  }
                  else
                  {
                    __asm /*0x58ece5*/
                    {
                      fucompp
                      fnstsw  ax
                    }
                    if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x58ecec*/
                    {
                      __asm /*0x58ecee*/
                      {
                        fld     dword ptr ds:0A2FE7Ch
                        fstp    [esp+6Ch+var_54]
                      }
                    }
                    if ( v149.m_data && BSStringT_GetLen(&v149) && !sub_5755D0(&v149.m_data, word_A36430) ) /*0x58ed1d*/
                    {
                      __asm { fld     [esp+6Ch+var_54] } /*0x58ed26*/
                      __asm { fdiv    qword ptr ds:0A309F0h }
                      v38 = *(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x4C); /*0x58ed32*/
                      __asm { fstp    [esp+6Ch+var_48] } /*0x58ed37*/
                      v151 = COERCE_FLOAT(v38(v30)); /*0x58ed3f*/
                      __asm { fild    [esp+6Ch+var_34] } /*0x58ed43*/
                      if ( v151 < 0.0 ) /*0x58ed47*/
                        __asm { fadd    qword ptr ds:0A30E60h } /*0x58ed49*/
                      __asm { fmul    [esp+6Ch+var_48] } /*0x58ed4f*/
                      a2 = v39; /*0x58ed53*/
                      __asm /*0x58ed56*/
                      {
                        fdiv    dword ptr [ebp+0]
                        fstp    [esp+70h+slot]
                        fld     [esp+70h+slot]
                        fstp    [esp+70h+a2]; value
                      }
                      Tile_SetFloat((Tile *)_ESI, 0xFE7u, *(float *)&a2); /*0x58ed69*/
                      v151 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x50))(v30)); /*0x58ed79*/
                      __asm { fild    [esp+6Ch+var_34] } /*0x58ed7d*/
                      if ( v151 < 0.0 ) /*0x58ed81*/
                        __asm { fadd    qword ptr ds:0A30E60h } /*0x58ed83*/
                      __asm /*0x58ed89*/
                      {
                        fmul    [esp+6Ch+var_48]
                        fdiv    dword ptr [ebp+0]
                        fstp    [esp+6Ch+slot]
                        fld     [esp+6Ch+slot]
                      }
                    }
                    else
                    {
                      __asm { fld     [esp+6Ch+var_54] } /*0x58ed9a*/
                      __asm { fdiv    qword ptr ds:0A309F0h }
                      v40 = *(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x4C); /*0x58eda6*/
                      __asm { fstp    [esp+6Ch+var_48] } /*0x58edab*/
                      v151 = COERCE_FLOAT(v40(v30)); /*0x58edb3*/
                      __asm { fild    [esp+6Ch+var_34] } /*0x58edb7*/
                      if ( v151 < 0.0 ) /*0x58edbb*/
                        __asm { fadd    qword ptr ds:0A30E60h } /*0x58edbd*/
                      __asm { fmul    [esp+6Ch+var_48] } /*0x58edc3*/
                      __asm
                      {
                        fstp    [esp+70h+slot]
                        fld     [esp+70h+slot]
                        fstp    [esp+70h+a2]; value
                      }
                      Tile_SetFloat((Tile *)_ESI, 0xFE7u, *(float *)&a2); /*0x58edda*/
                      v151 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x50))(v30)); /*0x58edea*/
                      __asm { fild    [esp+6Ch+var_34] } /*0x58edee*/
                      if ( v151 < 0.0 ) /*0x58edf2*/
                        __asm { fadd    qword ptr ds:0A30E60h } /*0x58edf4*/
                      __asm /*0x58edfa*/
                      {
                        fmul    [esp+6Ch+var_48]
                        fstp    [esp+6Ch+slot]
                        fld     [esp+6Ch+slot]
                      }
                    }
                    __asm { fstp    [esp+70h+a2]; value } /*0x58ee07*/
                    Tile_SetFloat((Tile *)_ESI, 0xFE8u, *(float *)&a2); /*0x58ee11*/
                    *(_DWORD *)(_ESI + 0x2C) |= 0x10u; /*0x58ee16*/
                  }
                }
                else if ( v149.m_data && BSStringT_GetLen(&v149) && !sub_5755D0(&v149.m_data, word_A36430) ) /*0x58ec1f*/
                {
                  v151 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x4C))(v30)); /*0x58ec33*/
                  __asm { fild    [esp+6Ch+var_34] } /*0x58ec37*/
                  if ( v151 < 0.0 ) /*0x58ec3b*/
                    __asm { fadd    dword ptr ds:0A2FC78h } /*0x58ec3d*/
                  __asm { fdiv    dword ptr [ebp+0] } /*0x58ec43*/
                  __asm
                  {
                    fstp    [esp+70h+slot]
                    fld     [esp+70h+slot]
                    fstp    [esp+70h+a2]; value
                  }
                  Tile_SetFloat((Tile *)_ESI, 0xFE7u, *(float *)&a2); /*0x58ec59*/
                  v151 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x50))(v30)); /*0x58ec69*/
                  __asm { fild    [esp+6Ch+var_34] } /*0x58ec6d*/
                  if ( v151 < 0.0 ) /*0x58ec71*/
                    __asm { fadd    dword ptr ds:0A2FC78h } /*0x58ec73*/
                  __asm { fdiv    dword ptr [ebp+0] } /*0x58ec79*/
                  __asm
                  {
                    fstp    [esp+70h+slot]
                    fld     [esp+70h+slot]
                    fstp    [esp+70h+a2]; value
                  }
                  Tile_SetFloat((Tile *)_ESI, 0xFE8u, *(float *)&a2); /*0x58ec8f*/
                  *(_DWORD *)(_ESI + 0x2C) |= 0x10u; /*0x58ec94*/
                }
                else
                {
                  v34 = (*(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x4C))(v30); /*0x58eca4*/
                  sub_57D300((Tile *)_ESI, (Tile *)0xFE7, v34); /*0x58ecae*/
                  v35 = (*(int (__thiscall **)(int))(*(_DWORD *)v30 + 0x50))(v30); /*0x58ecba*/
                  sub_57D300((Tile *)_ESI, (Tile *)0xFE8, v35); /*0x58ecc4*/
                  *(_DWORD *)(_ESI + 0x2C) |= 0x10u; /*0x58ecc9*/
                }
                v41 = *(_DWORD *)(_ESI + 0x2C); /*0x58ee20*/
                v142 = 1; /*0x58ee25*/
                if ( (v41 & 0x20) != 0 ) /*0x58ee2a*/
                  *(_DWORD *)(_ESI + 0x2C) = v41 ^ 0x20; /*0x58ee2f*/
                LOBYTE(v156) = 0; /*0x58ee36*/
                BSStringT_Clear((unsigned int *)&v149); /*0x58ee3b*/
              }
            }
            v156 = 0xFFFFFFFF; /*0x58ee44*/
            NiPointerSlot_Release((NiD3DVertexShader *)&v146); /*0x58ee4c*/
          }
          v18 = v143; /*0x58ee51*/
        }
      }
    }
  }
  if ( (*(_BYTE *)(_ESI + 0x2C) & 0x10) != 0 ) /*0x58ee59*/
  {
    v42 = *(NiNode **)(_ESI + 0x24); /*0x58ee5f*/
    if ( v42 ) /*0x58ee64*/
    {
      if ( !v18 ) /*0x58ee6c*/
      {
        v43 = NiNode_GetChildAtIndex(v42, 0); /*0x58ee80*/
        Tile_GetFloat((_DWORD *)_ESI, 0xFCB); /*0x58ee82*/
        __asm { fstp    [esp+6Ch+var_4C] } /*0x58ee87*/
        Tile_GetFloat((_DWORD *)_ESI, 0xFCA); /*0x58ee92*/
        __asm { fstp    dword ptr [esp+6Ch+var_48] } /*0x58ee97*/
        Tile_GetFloat((_DWORD *)_ESI, 0xFDA); /*0x58eea2*/
        __asm { fstp    dword ptr [esp+6Ch+var_40] } /*0x58eea7*/
        Tile_GetFloat((_DWORD *)_ESI, 0xFD9); /*0x58eeb2*/
        __asm { fstp    [esp+6Ch+var_34] } /*0x58eeb7*/
        if ( v43 ) /*0x58eebd*/
        {
          __asm { fldz } /*0x58eec3*/
          v44 = *((_DWORD *)v43[1].members.super.m_pcName + 7); /*0x58eecb*/
          __asm { fst     dword ptr [esp+6Ch+var_20] } /*0x58eece*/
          m_data = v154.m_data; /*0x58eed2*/
          __asm { fst     dword ptr [esp+6Ch+var_20+4] } /*0x58eed6*/
          v46 = *(_DWORD *)&v154.m_dataLen; /*0x58eeda*/
          __asm /*0x58eede*/
          {
            fst     [esp+6Ch+var_18]
            fst     dword ptr [esp+6Ch+var_20]
          }
          *(_DWORD *)v44 = m_data; /*0x58eee6*/
          v47 = *(float *)&v155; /*0x58eee8*/
          __asm /*0x58eeec*/
          {
            fst     dword ptr [esp+6Ch+var_20+4]
            fld     dword ptr [esp+6Ch+var_48]
          }
          *(_DWORD *)(v44 + 4) = v46; /*0x58eef4*/
          v48 = v154.m_data; /*0x58eef7*/
          __asm /*0x58eefb*/
          {
            fld     st
            fchs
          }
          *(float *)(v44 + 8) = v47; /*0x58eeff*/
          v49 = *(_DWORD *)&v154.m_dataLen; /*0x58ef02*/
          __asm /*0x58ef06*/
          {
            fstp    [esp+6Ch+slot]
            fld     [esp+6Ch+slot]
          }
          *(_DWORD *)(v44 + 0xC) = v48; /*0x58ef0e*/
          __asm { fst     [esp+6Ch+var_18] } /*0x58ef11*/
          *(_DWORD *)(v44 + 0x10) = v49; /*0x58ef15*/
          __asm { fld     [esp+6Ch+var_4C] } /*0x58ef18*/
          __asm { fst     dword ptr [esp+6Ch+var_20] }
          *(float *)(v44 + 0x14) = *(float *)&v155; /*0x58ef24*/
          __asm /*0x58ef2b*/
          {
            fxch    st(3)
            fst     dword ptr [esp+6Ch+var_20+4]
          }
          *(_DWORD *)(v44 + 0x18) = v154.m_data; /*0x58ef31*/
          __asm { fst     [esp+6Ch+var_18] } /*0x58ef38*/
          v50 = *(float *)&v155; /*0x58ef3c*/
          __asm /*0x58ef40*/
          {
            fxch    st(3)
            fst     dword ptr [esp+6Ch+var_20]
          }
          *(_DWORD *)(v44 + 0x1C) = *(_DWORD *)&v154.m_dataLen; /*0x58ef46*/
          v51 = v154.m_data; /*0x58ef49*/
          __asm /*0x58ef4d*/
          {
            fxch    st(3)
            fstp    dword ptr [esp+6Ch+var_20+4]
          }
          *(float *)(v44 + 0x20) = v50; /*0x58ef53*/
          v52 = *(_DWORD *)&v154.m_dataLen; /*0x58ef56*/
          *(_DWORD *)(v44 + 0x24) = v51; /*0x58ef5a*/
          __asm { fstp    [esp+6Ch+var_18] } /*0x58ef5d*/
          v53 = *(float *)&v155; /*0x58ef61*/
          __asm { fxch    st(1) } /*0x58ef65*/
          *(_DWORD *)(v44 + 0x28) = v52; /*0x58ef67*/
          __asm { fstp    [esp+6Ch+var_54] } /*0x58ef6a*/
          a2 = (_DWORD *)6; /*0x58ef6e*/
          __asm { fstp    [esp+70h+texture] } /*0x58ef72*/
          *(float *)(v44 + 0x2C) = v53; /*0x58ef76*/
          v54 = NiNode_GetNiPropertyByID((NiNode *)v43, (signed int)a2); /*0x58ef79*/
          v55 = v54; /*0x58ef7e*/
          if ( !v54 ) /*0x58ef82*/
            goto LABEL_142; /*0x58ef82*/
          if ( !v144 ) /*0x58ef8c*/
            goto LABEL_142; /*0x58ef8c*/
          v56 = *(_DWORD *)v54[1].members.m_pcName; /*0x58ef95*/
          if ( !v56 || !*(_DWORD *)(v56 + 8) ) /*0x58ef9f*/
            goto LABEL_142; /*0x58efa3*/
          Tile_GetFloat((_DWORD *)_ESI, 0xFCF); /*0x58efb0*/
          __asm { fcomp   dword ptr ds:0A379B4h } /*0x58efb5*/
          __asm { fnstsw  ax }
          if ( __SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x58efc2*/
            *(float *)&a2 = 0.0; /*0x58efc8*/
          else
            a2 = (_DWORD *)3; /*0x58efc4*/
          OB_NiTexturingProperty_SetClampMode_010201A0(v55, (int)a2); /*0x58efca*/
          Tile_GetFloat((_DWORD *)_ESI, 0xFD2); /*0x58efd6*/
          __asm { fstp    [esp+6Ch+var_54] } /*0x58efdb*/
          Tile_GetFloat((_DWORD *)_ESI, 0xFCF); /*0x58efe6*/
          __asm /*0x58efeb*/
          {
            fcomp   dword ptr ds:0A30634h
            fnstsw  ax
          }
          if ( __SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x58eff3*/
          {
            __asm /*0x58effc*/
            {
              fldz
              fld     [esp+6Ch+var_54]
              fcom    st(1)
              fnstsw  ax
            }
            if ( (_AX & 0x100) == 0 ) /*0x58f009*/
            {
              __asm /*0x58f00f*/
              {
                fucompp
                fnstsw  ax
              }
              if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x58f016*/
              {
                __asm /*0x58f018*/
                {
                  fld     dword ptr ds:0A2FE7Ch
                  fstp    [esp+6Ch+var_54]
                }
              }
              v61 = sub_588C10((_DWORD *)_ESI, 0xFE6); /*0x58f029*/
              BSStringT_constr_str(&v154, v61); /*0x58f033*/
              v156 = 4; /*0x58f03d*/
              if ( v154.m_data && BSStringT_GetLen(&v154) && !sub_5755D0(&v154.m_data, word_A36430) ) /*0x58f065*/
              {
                m_pcName = v55[1].members.m_pcName; /*0x58f072*/
                if ( *(_DWORD *)m_pcName ) /*0x58f075*/
                  v63 = *(int **)(*(_DWORD *)m_pcName + 8); /*0x58f07b*/
                else
                  v63 = 0; /*0x58f080*/
                __asm { fld     dword ptr [esi+40h] } /*0x58f082*/
                v64 = *v63; /*0x58f085*/
                __asm { fstp    [esp+6Ch+slot] } /*0x58f087*/
                v65 = *(int (__thiscall **)(int *))(v64 + 0x4C); /*0x58f08b*/
                __asm /*0x58f08e*/
                {
                  fld     [esp+6Ch+var_54]
                  fdiv    qword ptr ds:0A309F0h
                  fstp    [esp+6Ch+var_30]
                }
                *(float *)&v146 = COERCE_FLOAT(v65(v63)); /*0x58f0a0*/
                __asm { fild    [esp+6Ch+texture] } /*0x58f0a4*/
                if ( v146 < 0 ) /*0x58f0a8*/
                  __asm { fadd    qword ptr ds:0A30E60h } /*0x58f0aa*/
                __asm { fmul    [esp+6Ch+var_30] } /*0x58f0b0*/
                v66 = *(_DWORD *)v55[1].members.m_pcName; /*0x58f0b7*/
                __asm /*0x58f0bb*/
                {
                  fdiv    [esp+6Ch+slot]
                  fstp    [esp+6Ch+var_54]
                }
                if ( v66 ) /*0x58f0c3*/
                  v67 = *(int **)(v66 + 8); /*0x58f0c5*/
                else
                  v67 = 0; /*0x58f0ca*/
                v68 = *v67; /*0x58f0cc*/
                __asm { fld     dword ptr [esi+40h] } /*0x58f0ce*/
                __asm { fstp    [esp+6Ch+slot] }
                *(float *)&v146 = COERCE_FLOAT((*(int (__thiscall **)(int *))(v68 + 0x50))(v67)); /*0x58f0de*/
                __asm { fild    [esp+6Ch+texture] } /*0x58f0e2*/
                if ( v146 < 0 ) /*0x58f0e6*/
                  __asm { fadd    qword ptr ds:0A30E60h } /*0x58f0e8*/
                __asm /*0x58f0ee*/
                {
                  fmul    [esp+6Ch+var_30]
                  fdiv    [esp+6Ch+slot]
                }
              }
              else
              {
                v69 = v55[1].members.m_pcName; /*0x58f0f8*/
                if ( *(_DWORD *)v69 ) /*0x58f0fb*/
                  v70 = *(_DWORD *)(*(_DWORD *)v69 + 8); /*0x58f101*/
                else
                  v70 = 0; /*0x58f106*/
                __asm { fld     [esp+6Ch+var_54] } /*0x58f108*/
                __asm { fdiv    qword ptr ds:0A309F0h }
                v71 = *(int (__thiscall **)(int))(*(_DWORD *)v70 + 0x4C); /*0x58f114*/
                __asm { fstp    [esp+6Ch+var_30] } /*0x58f117*/
                *(float *)&v150 = COERCE_FLOAT(v71(v70)); /*0x58f11f*/
                __asm { fild    [esp+6Ch+slot] } /*0x58f123*/
                if ( v150 < 0 ) /*0x58f127*/
                  __asm { fadd    qword ptr ds:0A30E60h } /*0x58f129*/
                __asm { fmul    [esp+6Ch+var_30] } /*0x58f132*/
                v72 = *(_DWORD *)v55[1].members.m_pcName; /*0x58f136*/
                __asm { fstp    [esp+6Ch+var_54] } /*0x58f13a*/
                if ( v72 ) /*0x58f13e*/
                  v73 = *(_DWORD *)(v72 + 8); /*0x58f140*/
                else
                  v73 = 0; /*0x58f145*/
                *(float *)&v150 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v73 + 0x50))(v73)); /*0x58f152*/
                __asm { fild    [esp+6Ch+slot] } /*0x58f156*/
                if ( v150 < 0 ) /*0x58f15a*/
                  __asm { fadd    qword ptr ds:0A30E60h } /*0x58f15c*/
                __asm { fmul    [esp+6Ch+var_30] } /*0x58f162*/
              }
              __asm { fstp    [esp+6Ch+texture] } /*0x58f16a*/
              v156 = 0xFFFFFFFF; /*0x58f16e*/
              BSStringT_Clear((unsigned int *)&v154); /*0x58f176*/
              goto LABEL_142; /*0x58f17b*/
            }
            __asm /*0x58f17d*/
            {
              fstp    st
              fstp    st
            }
          }
          __asm /*0x58f181*/
          {
            fld     [esp+6Ch+var_4C]
            fstp    [esp+6Ch+var_54]
            fld     dword ptr [esp+6Ch+var_48]
            fstp    [esp+6Ch+texture]
          }
LABEL_142:
          v74 = *((char ***)v43[1].members.super.m_pcName + 0xA); /*0x58f191*/
          if ( v74 ) /*0x58f19c*/
          {
            __asm /*0x58f1a2*/
            {
              fld     dword ptr [esp+6Ch+var_40]
              fld     [esp+6Ch+var_54]
              fld     st
              fdivp   st(2), st
              fxch    st(1)
              fstp    [esp+6Ch+slot]
              fld     [esp+6Ch+var_34]
              fld     [esp+6Ch+texture]
              fld     st
              fdivp   st(2), st
              fxch    st(1)
              fstp    [esp+6Ch+var_34]
              fld     [esp+6Ch+var_4C]
              fdivrp  st(2), st
              fxch    st(1)
              fstp    [esp+6Ch+var_4C]
              fdivr   dword ptr [esp+6Ch+var_48]
              fstp    dword ptr [esp+6Ch+var_40]
              fld     [esp+6Ch+slot]
              fst     dword ptr [esp+6Ch+var_20]
              fld     [esp+6Ch+var_34]
            }
            __asm
            {
              fst     dword ptr [esp+6Ch+var_20+4]
              fxch    st(1)
            }
            *v74 = v154.m_data; /*0x58f1f0*/
            __asm /*0x58f1f6*/
            {
              fst     dword ptr [esp+6Ch+var_20]
              fld     dword ptr [esp+6Ch+var_40]
            }
            v74[1] = *(char **)&v154.m_dataLen; /*0x58f1fe*/
            __asm { fadd    st, st(2) } /*0x58f205*/
            v74[2] = v154.m_data; /*0x58f207*/
            __asm /*0x58f20a*/
            {
              fstp    [esp+6Ch+var_34]
              fld     [esp+6Ch+var_34]
              fst     dword ptr [esp+6Ch+var_20+4]
            }
            __asm { fld     [esp+6Ch+var_4C] }
            v74[3] = *(char **)&v154.m_dataLen; /*0x58f21e*/
            __asm /*0x58f221*/
            {
              faddp   st(2), st
              fxch    st(1)
              fstp    [esp+6Ch+var_34]
              fld     [esp+6Ch+var_34]
              fst     dword ptr [esp+6Ch+var_20]
            }
            __asm { fxch    st(2) }
            v74[4] = v154.m_data; /*0x58f237*/
            __asm { fstp    dword ptr [esp+6Ch+var_20+4] } /*0x58f23a*/
            __asm { fxch    st(1) }
            v74[5] = *(char **)&v154.m_dataLen; /*0x58f244*/
            __asm { fstp    dword ptr [esp+6Ch+var_20] } /*0x58f247*/
            v74[6] = v154.m_data; /*0x58f24f*/
            __asm { fstp    dword ptr [esp+6Ch+var_20+4] } /*0x58f252*/
            v74[7] = *(char **)&v154.m_dataLen; /*0x58f25a*/
          }
          *((_WORD *)v43[1].members.super.m_pcName + 0x17) |= 9u; /*0x58f263*/
          NiSphere_ComputeFromVertices( /*0x58f27a*/
            (NiSphere *)(v43[1].members.super.m_pcName + 0xC),
            *((unsigned __int16 *)v43[1].members.super.m_pcName + 4),
            *((const NiPoint3 **)v43[1].members.super.m_pcName + 7));
          v75 = *(_DWORD *)(_ESI + 0x2C); /*0x58f27f*/
          v142 = 1; /*0x58f284*/
          if ( (v75 & 0x10) != 0 ) /*0x58f289*/
            *(_DWORD *)(_ESI + 0x2C) = v75 ^ 0x10; /*0x58f28e*/
          v76 = v43[1].members.super.m_pcName; /*0x58f291*/
          if ( v76 ) /*0x58f299*/
            *((_WORD *)v76 + 0x17) = *((_WORD *)v76 + 0x17) & 0xFFF | 0x8000; /*0x58f2a9*/
        }
      }
    }
  }
  if ( (*(_BYTE *)(_ESI + 0x2C) & 0x40) != 0 ) /*0x58f2b1*/
  {
    if ( *(_DWORD *)(_ESI + 0x24) ) /*0x58f2b3*/
    {
      if ( !v18 ) /*0x58f2bb*/
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)_ESI + 0xC))(_ESI) == 0x388 ) /*0x58f2cb*/
          sub_590970((BSStringT *)_ESI); /*0x58f2cf*/
        v77 = *(_DWORD *)(_ESI + 0x2C); /*0x58f2d4*/
        v142 = 1; /*0x58f2d9*/
        if ( (v77 & 0x40) != 0 ) /*0x58f2de*/
          *(_DWORD *)(_ESI + 0x2C) = v77 ^ 0x40; /*0x58f2e3*/
      }
    }
  }
  if ( (*(_BYTE *)(_ESI + 0x2C) & 1) == 0 )
  {
LABEL_186:
    if ( *(_DWORD *)(_ESI + 0x24) )
    {
      if ( (*(_DWORD *)(_ESI + 0x2C) & 0x100) != 0 ) /*0x58f5d3*/
      {
        __asm /*0x58f5d9*/
        {
          fild    dword ptr ds:0B06C4Ch
          fstp    [esp+6Ch+var_34]
          fld     [esp+6Ch+var_34]
          fstp    [esp+6Ch+var_20]
        }
        UI_GetVirtualScreenWidth(); /*0x58f5eb*/
        __asm /*0x58f5f0*/
        {
          fdivr   [esp+6Ch+var_20]
          fstp    dword ptr [esp+6Ch+var_40]
          fild    dword ptr ds:0B06C50h
          fstp    [esp+6Ch+var_34]
          fld     [esp+6Ch+var_34]
          fstp    [esp+6Ch+var_20]
        }
        UI_GetVirtualScreenHeight(); /*0x58f60a*/
        __asm { fdivr   [esp+6Ch+var_20] } /*0x58f60f*/
        __asm { fstp    [esp+6Ch+var_4C] }
        sub_588C50((_DWORD *)_ESI); /*0x58f619*/
        __asm { fstp    [esp+6Ch+slot] } /*0x58f61e*/
        sub_588CF0((_DWORD *)_ESI); /*0x58f624*/
        __asm { fstp    dword ptr [esp+6Ch+var_48] } /*0x58f629*/
        Tile_GetFloat((_DWORD *)_ESI, 0xFCA); /*0x58f634*/
        __asm { fadd    dword ptr [esp+6Ch+var_48] } /*0x58f639*/
        __asm
        {
          fmul    [esp+70h+var_4C]
          fstp    [esp+70h+var_34]
          fld     [esp+70h+var_34]
          fstp    [esp+70h+a2]; float
        }
        Tile_GetFloat((_DWORD *)_ESI, 0xFCB); /*0x58f654*/
        __asm /*0x58f659*/
        {
          fld     [esp+70h+slot]
          fld     st
        }
        __asm { faddp   st(2), st }
        __asm
        {
          fld     dword ptr [esp+7Ch+var_40]
          fld     st
          fmulp   st(3), st
          fxch    st(2)
          fstp    [esp+7Ch+var_34]
          fld     [esp+7Ch+var_34]
          fstp    [esp+7Ch+var_74]; float
          fld     dword ptr [esp+7Ch+var_48]
          fmul    [esp+7Ch+var_4C]
          fstp    [esp+7Ch+var_34]
          fld     [esp+7Ch+var_34]
          fstp    [esp+7Ch+var_78]; float
          fmulp   st(1), st
          fstp    [esp+7Ch+var_34]
          fld     [esp+7Ch+var_34]
          fstp    [esp+7Ch+var_7C]; float
        }
        sub_58B670((_DWORD *)_ESI, *(float *)&v138.m_dataLen, *(float *)&v139, *(float *)&v140, *(float *)&a2); /*0x58f69d*/
        v101 = *(_DWORD *)(_ESI + 0x2C); /*0x58f6a2*/
        v142 = 1; /*0x58f6a7*/
        if ( (v101 & 1) != 0 ) /*0x58f6ac*/
          *(_DWORD *)(_ESI + 0x2C) = v101 ^ 0x100; /*0x58f6b3*/
      }
      if ( *(_DWORD *)(_ESI + 0x24) && (*(_DWORD *)(_ESI + 0x2C) & 0x200) != 0 )
      {
        v102 = *(_DWORD **)(_ESI + 0x10); /*0x58f6cd*/
        if ( v102 )
        {
          __asm { fld     dword ptr ds:0A379B4h } /*0x58f6d8*/
          while ( 1 ) /*0x58f6de*/
          {
            v103 = (_DWORD *)v102[6]; /*0x58f6de*/
            if ( v103 ) /*0x58f6e3*/
            {
              while ( 1 ) /*0x58f6e5*/
              {
                _EDX = v103[2]; /*0x58f6e5*/
                v105 = *(_WORD *)(_EDX + 0x18); /*0x58f6eb*/
                v103 = (_DWORD *)*v103; /*0x58f6f4*/
                if ( v105 == 0xFA4 ) /*0x58f6f6*/
                  break; /*0x58f6f6*/
                if ( v105 > 0xFA4u || !v103 ) /*0x58f6fc*/
                  goto LABEL_200; /*0x58f6fc*/
              }
              __asm /*0x58f700*/
              {
                fld     dword ptr [edx+4]
                fstp    [esp+6Ch+var_34]
                fcom    [esp+6Ch+var_34]
                fnstsw  ax
              }
              if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) ) /*0x58f70d*/
                break; /*0x58f70d*/
            }
LABEL_200:
            v102 = (_DWORD *)v102[4]; /*0x58f712*/
            if ( !v102 ) /*0x58f717*/
            {
              __asm { fstp    st } /*0x58f719*/
              goto LABEL_212; /*0x58f71b*/
            }
          }
          __asm /*0x58f720*/
          {
            fstp    st
            fild    dword ptr ds:0B06C4Ch
            fstp    [esp+6Ch+var_34]
            fld     [esp+6Ch+var_34]
            fstp    [esp+6Ch+var_20]
          }
          UI_GetVirtualScreenWidth(); /*0x58f734*/
          __asm /*0x58f739*/
          {
            fdivr   [esp+6Ch+var_20]
            fstp    [esp+6Ch+var_4C]
            fild    dword ptr ds:0B06C50h
            fstp    [esp+6Ch+var_34]
            fld     [esp+6Ch+var_34]
            fstp    [esp+6Ch+var_20]
          }
          UI_GetVirtualScreenHeight(); /*0x58f753*/
          __asm { fdivr   [esp+6Ch+var_20] } /*0x58f758*/
          __asm { fstp    [esp+6Ch+var_34] }
          sub_588C50(v102); /*0x58f762*/
          __asm { fstp    [esp+6Ch+texture] } /*0x58f767*/
          sub_588CF0(v102); /*0x58f76d*/
          __asm { fstp    dword ptr [esp+6Ch+var_48] } /*0x58f772*/
          Tile_GetFloat(v102, 0xFCB); /*0x58f77d*/
          __asm { fadd    [esp+6Ch+texture] } /*0x58f782*/
          __asm
          {
            fmul    [esp+70h+var_4C]
            fstp    [esp+70h+slot]
          }
          v107 = Tile_GetFloat(v102, 0xFCA); /*0x58f795*/
          __asm { fld     dword ptr [esp+6Ch+var_48] } /*0x58f79a*/
          __asm { fld     st }
          v108 = (_WORD *)(*(_DWORD *)(_ESI + 0x24) + 0xAC); /*0x58f7a3*/
          __asm { faddp   st(2), st } /*0x58f7a9*/
          __asm { fld     [esp+6Ch+var_34] }
          v109 = 0; /*0x58f7b1*/
          __asm /*0x58f7b3*/
          {
            fld     st
            fmulp   st(3), st
            fxch    st(2)
            fstp    [esp+6Ch+var_34]
            fld     [esp+6Ch+texture]
            fmul    [esp+6Ch+var_4C]
            fstp    [esp+6Ch+texture]
            fmulp   st(1), st
            fstp    dword ptr [esp+6Ch+var_48]
          }
          sub_4784A0(v108); /*0x58f7cf*/
          sub_477F90((int)v108); /*0x58f7d6*/
          if ( *(_WORD *)(*(_DWORD *)(_ESI + 0x24) + 0xB8) )
          {
            do
            {
              v110 = *(_DWORD *)(_ESI + 0x24); /*0x58f7f0*/
              if ( *(unsigned __int16 *)(v110 + 0xB6) > v109 )
              {
                v111 = *(_DWORD *)(*(_DWORD *)(v110 + 0xB0) + 4 * v109); /*0x58f804*/
                if ( v111 )
                {
                  v112 = (*(int (__thiscall **)(int))(*(_DWORD *)v111 + 4))(v111); /*0x58f812*/
                  if ( v112 ) /*0x58f816*/
                  {
                    while ( (char *)v112 != &MEMORY[0xB33E90][0x1414] ) /*0x58f825*/
                    {
                      v112 = *(_DWORD *)(v112 + 4); /*0x58f82b*/
                      if ( !v112 ) /*0x58f830*/
                        goto LABEL_208; /*0x58f830*/
                    }
                    v113 = 1; /*0x58f8d2*/
                  }
                  else
                  {
LABEL_208:
                    v113 = 0; /*0x58f832*/
                  }
                  v114 = v113 != 0 ? (_DWORD *)v111 : 0;
                  if ( v114 ) /*0x58f83c*/
                  {
                    __asm { fld     [esp+6Ch+var_34] } /*0x58f83e*/
                    v115 = COERCE_FLOAT(Double_To_SInt32(v107)); /*0x58f842*/
                    __asm { fld     [esp+6Ch+slot] } /*0x58f847*/
                    *(float *)&a2 = v115; /*0x58f84b*/
                    *(float *)&v116 = COERCE_FLOAT(Double_To_SInt32(v107)); /*0x58f84c*/
                    __asm { fld     dword ptr [esp+70h+var_48] } /*0x58f851*/
                    v140 = v116; /*0x58f855*/
                    *(float *)&v117 = COERCE_FLOAT(Double_To_SInt32(v107)); /*0x58f856*/
                    __asm { fld     [esp+74h+texture] } /*0x58f85b*/
                    v139 = v117; /*0x58f85f*/
                    v118 = Double_To_SInt32(v107); /*0x58f860*/
                    sub_4A17F0(v114, v118, (int)v139, v140, (int)a2); /*0x58f868*/
                  }
                }
              }
              ++v109; /*0x58f877*/
            }
            while ( v109 < *(unsigned __int16 *)(*(_DWORD *)(_ESI + 0x24) + 0xB8) );
          }
        }
LABEL_212:
        v119 = *(_DWORD *)(_ESI + 0x2C); /*0x58f882*/
        v142 = 1; /*0x58f88a*/
        if ( (v119 & 0x200) != 0 ) /*0x58f88f*/
          *(_DWORD *)(_ESI + 0x2C) = v119 ^ 0x200; /*0x58f896*/
      }
    }
    goto LABEL_214; /*0x58f896*/
  }
  if ( *(_DWORD *)(_ESI + 0x24) ) /*0x58f2f0*/
  {
    if ( !v18 ) /*0x58f2fc*/
    {
      Tile_GetFloat((_DWORD *)_ESI, 0xFA6); /*0x58f309*/
      __asm /*0x58f30e*/
      {
        fcomp   dword ptr ds:0A379B4h
        fnstsw  ax
      }
      if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) || *(Tile **)(_ESI + 0x10) == InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x58f331*/
      {
        y = g_zeroNiPoint3.y; /*0x58f458*/
        z = g_zeroNiPoint3.z; /*0x58f45e*/
        *(float *)&v152 = g_zeroNiPoint3.x; /*0x58f463*/
        *((float *)&v152 + 1) = y; /*0x58f46e*/
        v153 = z; /*0x58f472*/
        Tile_GetFloat((_DWORD *)_ESI, 0xFAD); /*0x58f476*/
        __asm { fstp    dword ptr [esp+6Ch+var_30] } /*0x58f47b*/
        Tile_GetFloat((_DWORD *)_ESI, 0xFAC); /*0x58f486*/
        __asm { fchs } /*0x58f48b*/
        __asm { fstp    [esp+70h+var_28] }
        Tile_GetFloat((_DWORD *)_ESI, 0xFAB); /*0x58f498*/
        __asm { fmul    qword ptr ds:0A68FD0h } /*0x58f49d*/
        v92 = *(int (__thiscall **)(int))(*(_DWORD *)_ESI + 0xC); /*0x58f4a5*/
        __asm { fstp    dword ptr [esp+6Ch+var_30+4] } /*0x58f4aa*/
        if ( v92(_ESI) == 0x388 ) /*0x58f4b5*/
        {
          __asm { fld     dword ptr [esp+6Ch+var_30+4] } /*0x58f4b7*/
          __asm { fstp    [esp+70h+var_20] }
          Tile_GetFloat((_DWORD *)_ESI, 0xFED); /*0x58f4c6*/
          __asm /*0x58f4cb*/
          {
            fsubr   [esp+6Ch+var_20]
            fstp    dword ptr [esp+6Ch+var_30+4]
          }
        }
        if ( *(Tile **)(_ESI + 0x10) == InterfaceManager_GetSingleton(0, 1)->menuRoot ) /*0x58f4e5*/
        {
          __asm /*0x58f4e7*/
          {
            fld     dword ptr [esp+6Ch+var_30]
            fstp    [esp+6Ch+var_20]
          }
          UI_GetVirtualScreenWidth(); /*0x58f4ef*/
          __asm /*0x58f4f4*/
          {
            fmul    qword ptr ds:0A2FAA0h
            fsubr   [esp+6Ch+var_20]
            fstp    dword ptr [esp+6Ch+var_30]
          }
          UI_GetVirtualScreenHeight(); /*0x58f502*/
          __asm /*0x58f507*/
          {
            fadd    [esp+6Ch+var_28]
            fstp    [esp+6Ch+var_20]
          }
          UI_GetVirtualScreenHeight(); /*0x58f50f*/
          __asm /*0x58f514*/
          {
            fmul    qword ptr ds:0A2FAA0h
            fsubr   [esp+6Ch+var_20]
            fstp    [esp+6Ch+var_28]
          }
        }
        v93 = HIDWORD(v152); /*0x58f529*/
        v94 = (float *)(*(_DWORD *)(_ESI + 0x24) + 0x54); /*0x58f52d*/
        *v94 = *(float *)&v152; /*0x58f530*/
        v95 = v153; /*0x58f532*/
        *((_DWORD *)v94 + 1) = v93; /*0x58f536*/
        v94[2] = v95; /*0x58f539*/
        v96 = *(_DWORD *)(_ESI + 0x24); /*0x58f53c*/
        for ( i = 0; i < *(unsigned __int16 *)(v96 + 0xB8); ++i ) /*0x58f541*/
        {
          if ( *(unsigned __int16 *)(v96 + 0xB6) > i ) /*0x58f559*/
            v98 = *(NiObject **)(*(_DWORD *)(v96 + 0xB0) + 4 * i); /*0x58f565*/
          else
            v98 = 0; /*0x58f55b*/
          v99 = (float *)NiRTTI_Cast((BSStringT *)&stru_B3FCD4, v98); /*0x58f56e*/
          if ( v99 ) /*0x58f578*/
          {
            if ( !*(_BYTE *)(_ESI + 6) ) /*0x58f57a*/
            {
              v99[0x15] = g_zeroNiPoint3.x; /*0x58f586*/
              v99[0x16] = g_zeroNiPoint3.y; /*0x58f58f*/
              v99[0x17] = g_zeroNiPoint3.z; /*0x58f598*/
            }
          }
        }
        sub_589430((_DWORD *)_ESI); /*0x58f5ab*/
      }
      else
      {
        Tile_GetFloat((_DWORD *)_ESI, 0xFAB); /*0x58f33e*/
        __asm { fstp    [esp+6Ch+var_34] } /*0x58f343*/
        x = g_zeroNiPoint3.x; /*0x58f34a*/
        v80 = g_zeroNiPoint3.y; /*0x58f350*/
        v81 = g_zeroNiPoint3.z; /*0x58f356*/
        v82 = *(_DWORD *)(_ESI + 0x24) + 0x54; /*0x58f35c*/
        *(float *)v82 = g_zeroNiPoint3.x; /*0x58f35f*/
        *(float *)&v152 = x; /*0x58f361*/
        *(float *)(v82 + 4) = v80; /*0x58f365*/
        a2 = (_DWORD *)0xFAD; /*0x58f368*/
        *((float *)&v152 + 1) = v80; /*0x58f36f*/
        v153 = v81; /*0x58f373*/
        *(float *)(v82 + 8) = v81; /*0x58f377*/
        Tile_GetFloat((_DWORD *)_ESI, (int)a2); /*0x58f37a*/
        __asm { fadd    dword ptr [esp+6Ch+var_30] } /*0x58f37f*/
        __asm
        {
          fstp    dword ptr [esp+70h+var_30]
          fld     [esp+70h+var_28]
          fstp    [esp+70h+var_20]
        }
        Tile_GetFloat((_DWORD *)_ESI, 0xFAC); /*0x58f396*/
        __asm { fsubr   [esp+6Ch+var_20] } /*0x58f39b*/
        v83 = *(int (__thiscall **)(int))(*(_DWORD *)_ESI + 0xC); /*0x58f3a1*/
        __asm /*0x58f3a6*/
        {
          fstp    [esp+6Ch+var_28]
          fld     [esp+6Ch+var_34]
          fmul    qword ptr ds:0A68FD0h
          fadd    dword ptr [esp+6Ch+var_30+4]
          fstp    dword ptr [esp+6Ch+var_30+4]
        }
        if ( v83(_ESI) == 0x388 ) /*0x58f3c3*/
        {
          __asm { fld     dword ptr [esp+6Ch+var_30+4] } /*0x58f3c5*/
          __asm { fstp    [esp+70h+var_20] }
          Tile_GetFloat((_DWORD *)_ESI, 0xFED); /*0x58f3d4*/
          __asm /*0x58f3d9*/
          {
            fsubr   [esp+6Ch+var_20]
            fstp    dword ptr [esp+6Ch+var_30+4]
          }
        }
        v84 = *(_DWORD *)(_ESI + 0x24); /*0x58f3e1*/
        v85 = 0; /*0x58f3e4*/
        if ( *(_WORD *)(v84 + 0xB8) ) /*0x58f3e6*/
        {
          v86 = LODWORD(v153); /*0x58f3f3*/
          do /*0x58f447*/
          {
            if ( *(unsigned __int16 *)(v84 + 0xB6) > v85 ) /*0x58f409*/
              v87 = *(NiObject **)(*(_DWORD *)(v84 + 0xB0) + 4 * v85); /*0x58f415*/
            else
              v87 = 0; /*0x58f40b*/
            v88 = NiRTTI_Cast((BSStringT *)&stru_B3FCD4, v87); /*0x58f41e*/
            if ( v88 ) /*0x58f428*/
            {
              v89 = (NiObjectVtbl *)HIDWORD(v152); /*0x58f42e*/
              v88[0xA].members.m_uiRefCount = LODWORD(v152); /*0x58f432*/
              v88[0xB].__vftable = v89; /*0x58f435*/
              v88[0xB].members.m_uiRefCount = v86; /*0x58f438*/
            }
            ++v85; /*0x58f442*/
          }
          while ( v85 < *(unsigned __int16 *)(v84 + 0xB8) ); /*0x58f447*/
          v18 = v143; /*0x58f449*/
        }
      }
      v100 = *(_DWORD *)(_ESI + 0x2C); /*0x58f5b0*/
      v142 = 1; /*0x58f5b5*/
      if ( (v100 & 1) != 0 ) /*0x58f5ba*/
        *(_DWORD *)(_ESI + 0x2C) = v100 ^ 1; /*0x58f5bf*/
    }
    goto LABEL_186; /*0x58f5bf*/
  }
LABEL_214:
  if ( (*(_BYTE *)(_ESI + 0x2C) & 8) != 0 && !v18 ) /*0x58f8a5*/
  {
    v145 = *(int *)(_ESI + 0x24); /*0x58f8b0*/
    v120 = v145; /*0x58f8ab*/
    if ( *(float *)&v145 != 0.0 ) /*0x58f8b4*/
    {
      v121 = *(_WORD *)(v145 + 0xB8) == 0; /*0x58f8ba*/
      *(float *)&v146 = 0.0; /*0x58f8c2*/
      if ( !v121 ) /*0x58f8ca*/
      {
        while ( 1 ) /*0x58f8e2*/
        {
          if ( *(unsigned __int16 *)(v120 + 0xB6) > (unsigned int)v146 ) /*0x58f8ed*/
          {
            v122 = *(NiNode **)(*(_DWORD *)(v145 + 0xB0) + 4 * v146); /*0x58f901*/
            if ( v122 ) /*0x58f906*/
            {
              v123 = NiNode_GetNiPropertyByID(v122, 2); /*0x58f91a*/
              v124 = sub_588E60(v145); /*0x58f924*/
              Tile_GetFloat(v124, 0xFA7); /*0x58f92d*/
              __asm { fdiv    qword ptr ds:0A3DDD8h } /*0x58f932*/
              __asm { fstp    dword ptr [esp+70h+var_48] }
              Tile_GetFloat(v124, 0xFCC); /*0x58f943*/
              __asm { fdiv    qword ptr ds:0A3DDD8h } /*0x58f948*/
              __asm { fstp    [esp+70h+var_4C] }
              Tile_GetFloat(v124, 0xFCD); /*0x58f959*/
              __asm { fdiv    qword ptr ds:0A3DDD8h } /*0x58f95e*/
              __asm { fstp    dword ptr [esp+70h+var_40] }
              Tile_GetFloat(v124, 0xFCE); /*0x58f96f*/
              __asm { fdiv    qword ptr ds:0A3DDD8h } /*0x58f974*/
              __asm { fstp    [esp+74h+slot] }
              v125 = NiRTTI_Cast((BSStringT *)&stru_B3FCD4, (NiObject *)v122); /*0x58f984*/
              v126 = v125; /*0x58f98e*/
              if ( v123 ) /*0x58f990*/
              {
                __asm { fld     dword ptr [esp+6Ch+var_48] } /*0x58f992*/
                v123[3].members.m_controller = (NiInterpController *)((char *)v123[3].members.m_controller + 2); /*0x58f996*/
                __asm { fstp    dword ptr [edi+50h] } /*0x58f99a*/
                *(float *)&v123[3].members.m_pcName = _ET1; /*0x58f99a*/
                __asm /*0x58f99d*/
                {
                  fld     [esp+6Ch+var_4C]
                  fstp    dword ptr [esp+6Ch+var_20]
                }
                __asm { fld     dword ptr [esp+6Ch+var_40] }
                v123[2].members.m_extraDataList = (NiExtraData **)v154.m_data; /*0x58f9ad*/
                __asm { fstp    dword ptr [esp+6Ch+var_20+4] } /*0x58f9b0*/
                __asm { fld     [esp+6Ch+slot] }
                *(_DWORD *)&v123[2].members.m_extraDataListLen = *(_DWORD *)&v154.m_dataLen; /*0x58f9bc*/
                __asm { fstp    [esp+6Ch+var_18] } /*0x58f9bf*/
                v123[3].vtbl = v155; /*0x58f9c7*/
LABEL_235:
                v136 = *(_DWORD *)(_ESI + 0x2C); /*0x58fa59*/
                v142 = 1; /*0x58fa5e*/
                if ( (v136 & 8) != 0 ) /*0x58fa63*/
                  *(_DWORD *)(_ESI + 0x2C) = v136 ^ 8; /*0x58fa68*/
                goto LABEL_237; /*0x58fa68*/
              }
              if ( v125 ) /*0x58f9d1*/
              {
                v128 = *(_DWORD *)(v125[0x16].members.m_uiRefCount + 0x24); /*0x58f9dd*/
                if ( v128 ) /*0x58f9e2*/
                {
                  if ( (*(int (__thiscall **)(BSFogProperty *))(*(_DWORD *)v124 + 0xC))(v124) != 0x387 /*0x58f9f9*/
                    || !*((_BYTE *)v124 + 0x50) )
                  {
                    m_uiRefCount = v126[0x16].members.m_uiRefCount; /*0x58f9ff*/
                    v130 = *(unsigned __int16 *)(m_uiRefCount + 8); /*0x58fa05*/
                    if ( *(_WORD *)(m_uiRefCount + 8) ) /*0x58fa05*/
                    {
                      __asm { fld     dword ptr [esp+6Ch+var_48] } /*0x58fa0d*/
                      v131 = v128 + 4; /*0x58fa11*/
                      __asm /*0x58fa14*/
                      {
                        fld     [esp+6Ch+var_4C]
                        fld     dword ptr [esp+6Ch+var_40]
                        fld     [esp+6Ch+slot]
                      }
                      while ( 1 ) /*0x58fa2a*/
                      {
                        __asm { fxch    st(3) } /*0x58fa2a*/
                        v131 += 0x10; /*0x58fa2c*/
                        --v130; /*0x58fa2f*/
                        __asm { fst     dword ptr [eax-8] } /*0x58fa32*/
                        *(float *)(v131 - 8) = _ET1; /*0x58fa32*/
                        __asm /*0x58fa35*/
                        {
                          fxch    st(2)
                          fst     dword ptr [eax-14h]
                        }
                        *(float *)(v131 - 0x14) = _ET1; /*0x58fa37*/
                        __asm /*0x58fa3a*/
                        {
                          fxch    st(1)
                          fst     dword ptr [eax-10h]
                        }
                        *(float *)(v131 - 0x10) = _ET1; /*0x58fa3c*/
                        __asm /*0x58fa3f*/
                        {
                          fxch    st(3)
                          fst     dword ptr [eax-0Ch]
                        }
                        *(float *)(v131 - 0xC) = _ET1; /*0x58fa41*/
                        if ( !v130 ) /*0x58fa44*/
                          break; /*0x58fa44*/
                        __asm /*0x58fa22*/
                        {
                          fxch    st(2)
                          fxch    st(3)
                          fxch    st(1)
                          fxch    st(2)
                        }
                      }
                      __asm /*0x58fa46*/
                      {
                        fstp    st(2)
                        fstp    st
                        fstp    st(1)
                        fstp    st
                      }
                    }
                    *(_WORD *)(v126[0x16].members.m_uiRefCount + 0x2E) |= 4u; /*0x58fa54*/
                  }
                  goto LABEL_235; /*0x58fa54*/
                }
              }
            }
          }
LABEL_237:
          v137 = *(unsigned __int16 *)(v145 + 0xB8); /*0x58fa6b*/
          if ( ++v146 >= v137 ) /*0x58fa83*/
            return v142; /*0x58fa83*/
          v120 = v145; /*0x58f8e0*/
        }
      }
    }
  }
  return v142; /*0x58fa8d*/
}
