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
  int v22; // ecx
  NiNode *v23; // eax
  NiTexturingProperty *v24; // ebx
  _DWORD *v25; // ecx
  char *v26; // edi
  char *v27; // eax
  int *v29; // eax
  float v30; // edi
  char *v32; // eax
  signed int v34; // eax
  signed int v35; // eax
  int (__thiscall *v38)(_DWORD); // eax
  _DWORD *v39; // ecx
  int (__thiscall *v40)(_DWORD); // eax
  int v41; // eax
  int v42; // ecx
  int v43; // ebp
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
  NiTexturingProperty *v55; // edi
  int v56; // eax
  char *v61; // eax
  NiTexturingProperty_Map *data; // ecx
  UInt32 (__thiscall *Unk08)(NiTexturingProperty_Map *, UInt32); // ecx
  int v64; // edx
  int (__thiscall *v65)(UInt32 (__thiscall *)(NiTexturingProperty_Map *, UInt32)); // eax
  NiTexturingProperty_Map_Vtbl *vtbl; // eax
  UInt32 (__thiscall *v67)(NiTexturingProperty_Map *, UInt32); // eax
  int v68; // edx
  NiTexturingProperty_Map *v69; // ecx
  UInt32 (__thiscall *v70)(NiTexturingProperty_Map *, UInt32); // ecx
  int (__thiscall *v71)(UInt32 (__thiscall *)(NiTexturingProperty_Map *, UInt32)); // eax
  NiTexturingProperty_Map_Vtbl *v72; // eax
  UInt32 (__thiscall *v73)(NiTexturingProperty_Map *, UInt32); // eax
  char **v74; // eax
  int v75; // eax
  int v76; // ebp
  int v77; // eax
  float v79; // ecx
  int v80; // edx
  float v81; // edi
  int v82; // eax
  int (__thiscall *v83)(int); // eax
  int v84; // ebp
  unsigned int v85; // edi
  UInt32 v86; // ebx
  NiObject *v87; // eax
  NiObject *v88; // eax
  NiObjectVtbl *v89; // edx
  int v90; // edx
  float v91; // eax
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
  int v117; // eax
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
  int v139; // [esp+4h] [ebp-78h]
  int v140; // [esp+8h] [ebp-74h]
  _DWORD *a2; // [esp+Ch] [ebp-70h] BYREF
  char v142; // [esp+25h] [ebp-57h]
  char v143; // [esp+26h] [ebp-56h]
  bool v144; // [esp+27h] [ebp-55h]
  int v145; // [esp+28h] [ebp-54h]
  float v146; // [esp+2Ch] [ebp-50h] BYREF
  BSStringT v149; // [esp+3Ch] [ebp-40h] BYREF
  int v150; // [esp+44h] [ebp-38h] BYREF
  float v151; // [esp+48h] [ebp-34h]
  double v152; // [esp+4Ch] [ebp-30h]
  float v153; // [esp+54h] [ebp-28h]
  BSStringT v154; // [esp+5Ch] [ebp-20h] BYREF
  void **v155; // [esp+64h] [ebp-18h]
  int v156; // [esp+78h] [ebp-4h]

  _ESI = a1;
  v5 = *(_DWORD *)(a1 + 0x2C);
  result = 0;
  v142 = 0;
  if ( !v5 )
    return result;
  if ( *(_DWORD *)(_ESI + 0x24) )
  {
    if ( (v5 & 0x200) != 0 )
    {
      Float = Tile_GetFloat((_DWORD *)_ESI, 0xFA4);
      __asm
      {
        fcomp   dword ptr ds:0A379B4h
        fnstsw  ax
      }
      v8 = !__SETP__(HIBYTE(_AX) & 0x44, 0);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)_ESI + 0xC))(_ESI) == 0x386 )
      {
        if ( v8 )
        {
          if ( *(_BYTE *)(_ESI + 0x48) )
            goto LABEL_13;
        }
        else if ( !*(_BYTE *)(_ESI + 0x48) )
        {
          goto LABEL_13;
        }
        *(_DWORD *)(_ESI + 0x2C) |= 2u;
      }
    }
  }
LABEL_13:
  if ( (*(_BYTE *)(_ESI + 0x2C) & 2) != 0 )
  {
    if ( Tile_GetParentMenu((_DWORD *)_ESI) )
    {
      ParentMenu = Tile_GetParentMenu((_DWORD *)_ESI);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x3EF )
        sub_578E00(st5_0, Float);
    }
    sub_589AA0((_DWORD *)_ESI);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)_ESI + 8))(_ESI) )
    {
      v10 = *(_DWORD *)(_ESI + 0x2C);
      v142 = 1;
      if ( (v10 & 2) != 0 )
        *(_DWORD *)(_ESI + 0x2C) = v10 ^ 2;
    }
  }
  if ( *(char *)(_ESI + 0x2C) < 0 && *(_DWORD *)(_ESI + 0x28) )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(_ESI + 0x28);
      if ( !v11 )
        break;
      while ( !sub_58D960((float *)v11) )
      {
        v11 = *(_DWORD *)(v11 + 0x14);
        if ( !v11 )
          goto LABEL_27;
      }
    }
  }
LABEL_27:
  if ( (*(_BYTE *)(_ESI + 0x2C) & 4) != 0 )
  {
    v12 = *(_DWORD *)(_ESI + 0x24);
    if ( v12 )
    {
      Tile_GetFloat((_DWORD *)_ESI, 0xFA1);
      __asm
      {
        fcomp   dword ptr ds:0A2F948h
        fnstsw  ax
      }
      if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
        goto LABEL_32;
      Tile_GetFloat((_DWORD *)_ESI, 0xFA3);
      __asm
      {
        fcomp   dword ptr ds:0A379B4h
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
        v15 = 0;
      else
LABEL_32:
        v15 = 1;
      if ( v15 )
        *(_WORD *)(v12 + 0x18) |= 1u;
      else
        *(_WORD *)(v12 + 0x18) &= ~1u;
      v16 = *(_DWORD *)(_ESI + 0x2C);
      v142 = 1;
      if ( (v16 & 4) != 0 )
        *(_DWORD *)(_ESI + 0x2C) = v16 ^ 4;
    }
  }
  v17 = *(_DWORD *)(_ESI + 0x24);
  if ( v17 )
  {
    v18 = *(_BYTE *)(v17 + 0x18) & 1;
    v143 = v18;
  }
  else
  {
    v143 = 1;
    v18 = 1;
  }
  if ( v17 )
  {
    while ( !v18 )
    {
      v17 = *(_DWORD *)(v17 + 0x1C);
      if ( !v17 )
        break;
      v143 = *(_BYTE *)(v17 + 0x18) & 1;
      v18 = v143;
    }
  }
  v144 = (*(int (__thiscall **)(int))(*(_DWORD *)_ESI + 0xC))(_ESI) == 0x386;
  if ( LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk0B8) )
  {
    if ( v18 )
    {
      v19 = *(_DWORD *)(_ESI + 0x24);
      if ( *(_WORD *)(v19 + 0xB6) )
        v20 = **(NiNode ***)(v19 + 0xB0);
      else
        v20 = 0;
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)_ESI + 0xC))(_ESI) == 0x386 )
      {
        if ( v20 )
        {
          NiPropertyByID = (NiTexturingProperty *)NiNode_GetNiPropertyByID(v20, 6);
          if ( NiPropertyByID )
          {
            NiTexturingProperty::SetUnk08(NiPropertyByID, 0);
            *(_DWORD *)(_ESI + 0x2C) |= 0x20u;
          }
        }
      }
    }
  }
  if ( v144 && (*(_BYTE *)(_ESI + 0x2C) & 0x20) != 0 )
  {
    v22 = *(_DWORD *)(_ESI + 0x24);
    if ( v22 )
    {
      if ( !v18 || byte_B3B0A2 )
      {
        v23 = (NiNode *)sub_405790(v22, 0);
        if ( v23 )
        {
          v24 = (NiTexturingProperty *)NiNode_GetNiPropertyByID(v23, 6);
          if ( v24 )
          {
            v146 = 0.0;
            v156 = 0;
            v26 = sub_588C10((_DWORD *)_ESI, 0xFE6);
            if ( v26 )
            {
              a2 = v25;
              v151 = COERCE_FLOAT(&a2);
              sub_4A19F0((int *)&a2, (int *)(_ESI + 0x44));
              LOBYTE(v156) = 1;
              Tile_GetFloat((_DWORD *)_ESI, 0xFD2);
              v27 = *(char **)(_ESI + 8);
              __asm { fstp    [esp+74h+var_74]; float }
              _EBP = _ESI + 0x40;
              v139 = _ESI + 0x40;
              v149.m_data = (char *)&v138;
              BSStringT_constr_str(&v138, v27);
              LOBYTE(v156) = 0;
              v29 = sub_591360(&v150, v26, (int)v138.m_data, *(int *)&v138.m_dataLen, v139, *(float *)&v140, (int)a2);
              LOBYTE(v156) = 2;
              sub_55E2A0((int *)&v146, v29);
              LOBYTE(v156) = 0;
              sub_7016A0((NiD3DVertexShader *)&v150);
              v30 = v146;
              if ( v146 != 0.0 )
              {
                NiTexturingProperty::SetUnk08(v24, (NiRenderedTexture *)LODWORD(v146));
                Tile_GetFloat((_DWORD *)_ESI, 0xFCF);
                __asm { fcomp   dword ptr ds:0A379B4h }
                __asm { fnstsw  ax }
                if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
                  *(float *)&a2 = 0.0;
                else
                  a2 = (_DWORD *)3;
                sub_405870(v24, (int)a2);
                Tile_GetFloat((_DWORD *)_ESI, 0xFD2);
                __asm { fstp    [esp+6Ch+var_54] }
                v32 = sub_588C10((_DWORD *)_ESI, 0xFE6);
                BSStringT_constr_str(&v149, v32);
                LOBYTE(v156) = 3;
                Tile_GetFloat((_DWORD *)_ESI, 0xFCF);
                __asm
                {
                  fcomp   dword ptr ds:0A30634h
                  fnstsw  ax
                }
                if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
                {
                  __asm
                  {
                    fldz
                    fld     [esp+6Ch+var_54]
                    fcom    st(1)
                    fnstsw  ax
                  }
                  if ( (_AX & 0x100) != 0 )
                  {
                    __asm
                    {
                      fstp    st(1)
                      fstp    st
                    }
                  }
                  else
                  {
                    __asm
                    {
                      fucompp
                      fnstsw  ax
                    }
                    if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
                    {
                      __asm
                      {
                        fld     dword ptr ds:0A2FE7Ch
                        fstp    [esp+6Ch+var_54]
                      }
                    }
                    if ( v149.m_data && BSStringT_GetLen(&v149) && !sub_5755D0(&v149.m_data, word_A36430) )
                    {
                      __asm { fld     [esp+6Ch+var_54] }
                      __asm { fdiv    qword ptr ds:0A309F0h }
                      v38 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v30) + 0x4C);
                      __asm { fstp    [esp+6Ch+var_48] }
                      v151 = COERCE_FLOAT(v38(LODWORD(v30)));
                      __asm { fild    [esp+6Ch+var_34] }
                      if ( v151 < 0.0 )
                        __asm { fadd    qword ptr ds:0A30E60h }
                      __asm { fmul    [esp+6Ch+var_48] }
                      a2 = v39;
                      __asm
                      {
                        fdiv    dword ptr [ebp+0]
                        fstp    [esp+70h+var_38]
                        fld     [esp+70h+var_38]
                        fstp    [esp+70h+a2]; a3
                      }
                      Tile_SetFloat((Tile *)_ESI, (_DWORD *)0xFE7, *(float *)&a2);
                      v151 = COERCE_FLOAT((*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v30) + 0x50))(COERCE_FLOAT(LODWORD(v30))));
                      __asm { fild    [esp+6Ch+var_34] }
                      if ( v151 < 0.0 )
                        __asm { fadd    qword ptr ds:0A30E60h }
                      __asm
                      {
                        fmul    [esp+6Ch+var_48]
                        fdiv    dword ptr [ebp+0]
                        fstp    [esp+6Ch+var_38]
                        fld     [esp+6Ch+var_38]
                      }
                    }
                    else
                    {
                      __asm { fld     [esp+6Ch+var_54] }
                      __asm { fdiv    qword ptr ds:0A309F0h }
                      v40 = *(int (__thiscall **)(_DWORD))(*(_DWORD *)LODWORD(v30) + 0x4C);
                      __asm { fstp    [esp+6Ch+var_48] }
                      v151 = COERCE_FLOAT(v40(LODWORD(v30)));
                      __asm { fild    [esp+6Ch+var_34] }
                      if ( v151 < 0.0 )
                        __asm { fadd    qword ptr ds:0A30E60h }
                      __asm { fmul    [esp+6Ch+var_48] }
                      __asm
                      {
                        fstp    [esp+70h+var_38]
                        fld     [esp+70h+var_38]
                        fstp    [esp+70h+a2]; a3
                      }
                      Tile_SetFloat((Tile *)_ESI, (_DWORD *)0xFE7, *(float *)&a2);
                      v151 = COERCE_FLOAT((*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v30) + 0x50))(COERCE_FLOAT(LODWORD(v30))));
                      __asm { fild    [esp+6Ch+var_34] }
                      if ( v151 < 0.0 )
                        __asm { fadd    qword ptr ds:0A30E60h }
                      __asm
                      {
                        fmul    [esp+6Ch+var_48]
                        fstp    [esp+6Ch+var_38]
                        fld     [esp+6Ch+var_38]
                      }
                    }
                    __asm { fstp    [esp+70h+a2]; a3 }
                    Tile_SetFloat((Tile *)_ESI, (_DWORD *)0xFE8, *(float *)&a2);
                    *(_DWORD *)(_ESI + 0x2C) |= 0x10u;
                  }
                }
                else if ( v149.m_data && BSStringT_GetLen(&v149) && !sub_5755D0(&v149.m_data, word_A36430) )
                {
                  v151 = COERCE_FLOAT((*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v30) + 0x4C))(COERCE_FLOAT(LODWORD(v30))));
                  __asm { fild    [esp+6Ch+var_34] }
                  if ( v151 < 0.0 )
                    __asm { fadd    dword ptr ds:0A2FC78h }
                  __asm { fdiv    dword ptr [ebp+0] }
                  __asm
                  {
                    fstp    [esp+70h+var_38]
                    fld     [esp+70h+var_38]
                    fstp    [esp+70h+a2]; a3
                  }
                  Tile_SetFloat((Tile *)_ESI, (_DWORD *)0xFE7, *(float *)&a2);
                  v151 = COERCE_FLOAT((*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v30) + 0x50))(COERCE_FLOAT(LODWORD(v30))));
                  __asm { fild    [esp+6Ch+var_34] }
                  if ( v151 < 0.0 )
                    __asm { fadd    dword ptr ds:0A2FC78h }
                  __asm { fdiv    dword ptr [ebp+0] }
                  __asm
                  {
                    fstp    [esp+70h+var_38]
                    fld     [esp+70h+var_38]
                    fstp    [esp+70h+a2]; a3
                  }
                  Tile_SetFloat((Tile *)_ESI, (_DWORD *)0xFE8, *(float *)&a2);
                  *(_DWORD *)(_ESI + 0x2C) |= 0x10u;
                }
                else
                {
                  v34 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v30) + 0x4C))(COERCE_FLOAT(LODWORD(v30)));
                  sub_57D300((Tile *)_ESI, (Tile *)0xFE7, v34);
                  v35 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(v30) + 0x50))(COERCE_FLOAT(LODWORD(v30)));
                  sub_57D300((Tile *)_ESI, (Tile *)0xFE8, v35);
                  *(_DWORD *)(_ESI + 0x2C) |= 0x10u;
                }
                v41 = *(_DWORD *)(_ESI + 0x2C);
                v142 = 1;
                if ( (v41 & 0x20) != 0 )
                  *(_DWORD *)(_ESI + 0x2C) = v41 ^ 0x20;
                LOBYTE(v156) = 0;
                BSStringT_Clear((unsigned int *)&v149);
              }
            }
            v156 = 0xFFFFFFFF;
            sub_7016A0((NiD3DVertexShader *)&v146);
          }
          v18 = v143;
        }
      }
    }
  }
  if ( (*(_BYTE *)(_ESI + 0x2C) & 0x10) != 0 )
  {
    v42 = *(_DWORD *)(_ESI + 0x24);
    if ( v42 )
    {
      if ( !v18 )
      {
        v43 = sub_405790(v42, 0);
        Tile_GetFloat((_DWORD *)_ESI, 0xFCB);
        __asm { fstp    [esp+6Ch+var_4C] }
        Tile_GetFloat((_DWORD *)_ESI, 0xFCA);
        __asm { fstp    dword ptr [esp+6Ch+var_48] }
        Tile_GetFloat((_DWORD *)_ESI, 0xFDA);
        __asm { fstp    dword ptr [esp+6Ch+var_40] }
        Tile_GetFloat((_DWORD *)_ESI, 0xFD9);
        __asm { fstp    [esp+6Ch+var_34] }
        if ( v43 )
        {
          __asm { fldz }
          v44 = *(_DWORD *)(*(_DWORD *)(v43 + 0xB4) + 0x1C);
          __asm { fst     dword ptr [esp+6Ch+var_20] }
          m_data = v154.m_data;
          __asm { fst     dword ptr [esp+6Ch+var_20+4] }
          v46 = *(_DWORD *)&v154.m_dataLen;
          __asm
          {
            fst     [esp+6Ch+var_18]
            fst     dword ptr [esp+6Ch+var_20]
          }
          *(_DWORD *)v44 = m_data;
          v47 = *(float *)&v155;
          __asm
          {
            fst     dword ptr [esp+6Ch+var_20+4]
            fld     dword ptr [esp+6Ch+var_48]
          }
          *(_DWORD *)(v44 + 4) = v46;
          v48 = v154.m_data;
          __asm
          {
            fld     st
            fchs
          }
          *(float *)(v44 + 8) = v47;
          v49 = *(_DWORD *)&v154.m_dataLen;
          __asm
          {
            fstp    [esp+6Ch+var_38]
            fld     [esp+6Ch+var_38]
          }
          *(_DWORD *)(v44 + 0xC) = v48;
          __asm { fst     [esp+6Ch+var_18] }
          *(_DWORD *)(v44 + 0x10) = v49;
          __asm { fld     [esp+6Ch+var_4C] }
          __asm { fst     dword ptr [esp+6Ch+var_20] }
          *(float *)(v44 + 0x14) = *(float *)&v155;
          __asm
          {
            fxch    st(3)
            fst     dword ptr [esp+6Ch+var_20+4]
          }
          *(_DWORD *)(v44 + 0x18) = v154.m_data;
          __asm { fst     [esp+6Ch+var_18] }
          v50 = *(float *)&v155;
          __asm
          {
            fxch    st(3)
            fst     dword ptr [esp+6Ch+var_20]
          }
          *(_DWORD *)(v44 + 0x1C) = *(_DWORD *)&v154.m_dataLen;
          v51 = v154.m_data;
          __asm
          {
            fxch    st(3)
            fstp    dword ptr [esp+6Ch+var_20+4]
          }
          *(float *)(v44 + 0x20) = v50;
          v52 = *(_DWORD *)&v154.m_dataLen;
          *(_DWORD *)(v44 + 0x24) = v51;
          __asm { fstp    [esp+6Ch+var_18] }
          v53 = *(float *)&v155;
          __asm { fxch    st(1) }
          *(_DWORD *)(v44 + 0x28) = v52;
          __asm { fstp    [esp+6Ch+var_54] }
          a2 = (_DWORD *)6;
          __asm { fstp    [esp+70h+var_50] }
          *(float *)(v44 + 0x2C) = v53;
          v54 = NiNode_GetNiPropertyByID((NiNode *)v43, (signed int)a2);
          v55 = (NiTexturingProperty *)v54;
          if ( !v54 )
            goto LABEL_142;
          if ( !v144 )
            goto LABEL_142;
          v56 = *(_DWORD *)v54[1].members.m_pcName;
          if ( !v56 || !*(_DWORD *)(v56 + 8) )
            goto LABEL_142;
          Tile_GetFloat((_DWORD *)_ESI, 0xFCF);
          __asm { fcomp   dword ptr ds:0A379B4h }
          __asm { fnstsw  ax }
          if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
            *(float *)&a2 = 0.0;
          else
            a2 = (_DWORD *)3;
          sub_405870(v55, (int)a2);
          Tile_GetFloat((_DWORD *)_ESI, 0xFD2);
          __asm { fstp    [esp+6Ch+var_54] }
          Tile_GetFloat((_DWORD *)_ESI, 0xFCF);
          __asm
          {
            fcomp   dword ptr ds:0A30634h
            fnstsw  ax
          }
          if ( __SETP__(HIBYTE(_AX) & 0x44, 0) )
          {
            __asm
            {
              fldz
              fld     [esp+6Ch+var_54]
              fcom    st(1)
              fnstsw  ax
            }
            if ( (_AX & 0x100) == 0 )
            {
              __asm
              {
                fucompp
                fnstsw  ax
              }
              if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
              {
                __asm
                {
                  fld     dword ptr ds:0A2FE7Ch
                  fstp    [esp+6Ch+var_54]
                }
              }
              v61 = sub_588C10((_DWORD *)_ESI, 0xFE6);
              BSStringT_constr_str(&v154, v61);
              v156 = 4;
              if ( v154.m_data && BSStringT_GetLen(&v154) && !sub_5755D0(&v154.m_data, word_A36430) )
              {
                data = v55->unk01C.data;
                if ( data->vtbl )
                  Unk08 = data->vtbl->Unk08;
                else
                  Unk08 = 0;
                __asm { fld     dword ptr [esi+40h] }
                v64 = *(_DWORD *)Unk08;
                __asm { fstp    [esp+6Ch+var_38] }
                v65 = *(int (__thiscall **)(UInt32 (__thiscall *)(NiTexturingProperty_Map *, UInt32)))(v64 + 0x4C);
                __asm
                {
                  fld     [esp+6Ch+var_54]
                  fdiv    qword ptr ds:0A309F0h
                  fstp    [esp+6Ch+var_30]
                }
                v146 = COERCE_FLOAT(v65(Unk08));
                __asm { fild    [esp+6Ch+var_50] }
                if ( v146 < 0.0 )
                  __asm { fadd    qword ptr ds:0A30E60h }
                __asm { fmul    [esp+6Ch+var_30] }
                vtbl = v55->unk01C.data->vtbl;
                __asm
                {
                  fdiv    [esp+6Ch+var_38]
                  fstp    [esp+6Ch+var_54]
                }
                if ( vtbl )
                  v67 = vtbl->Unk08;
                else
                  v67 = 0;
                v68 = *(_DWORD *)v67;
                __asm { fld     dword ptr [esi+40h] }
                __asm { fstp    [esp+6Ch+var_38] }
                v146 = COERCE_FLOAT((*(int (__thiscall **)(UInt32 (__thiscall *)(NiTexturingProperty_Map *, UInt32)))(v68 + 0x50))(v67));
                __asm { fild    [esp+6Ch+var_50] }
                if ( v146 < 0.0 )
                  __asm { fadd    qword ptr ds:0A30E60h }
                __asm
                {
                  fmul    [esp+6Ch+var_30]
                  fdiv    [esp+6Ch+var_38]
                }
              }
              else
              {
                v69 = v55->unk01C.data;
                if ( v69->vtbl )
                  v70 = v69->vtbl->Unk08;
                else
                  v70 = 0;
                __asm { fld     [esp+6Ch+var_54] }
                __asm { fdiv    qword ptr ds:0A309F0h }
                v71 = *(int (__thiscall **)(UInt32 (__thiscall *)(NiTexturingProperty_Map *, UInt32)))(*(_DWORD *)v70 + 0x4C);
                __asm { fstp    [esp+6Ch+var_30] }
                *(float *)&v150 = COERCE_FLOAT(v71(v70));
                __asm { fild    [esp+6Ch+var_38] }
                if ( v150 < 0 )
                  __asm { fadd    qword ptr ds:0A30E60h }
                __asm { fmul    [esp+6Ch+var_30] }
                v72 = v55->unk01C.data->vtbl;
                __asm { fstp    [esp+6Ch+var_54] }
                if ( v72 )
                  v73 = v72->Unk08;
                else
                  v73 = 0;
                *(float *)&v150 = COERCE_FLOAT((*(int (__thiscall **)(UInt32 (__thiscall *)(NiTexturingProperty_Map *, UInt32)))(*(_DWORD *)v73 + 0x50))(v73));
                __asm { fild    [esp+6Ch+var_38] }
                if ( v150 < 0 )
                  __asm { fadd    qword ptr ds:0A30E60h }
                __asm { fmul    [esp+6Ch+var_30] }
              }
              __asm { fstp    [esp+6Ch+var_50] }
              v156 = 0xFFFFFFFF;
              BSStringT_Clear((unsigned int *)&v154);
              goto LABEL_142;
            }
            __asm
            {
              fstp    st
              fstp    st
            }
          }
          __asm
          {
            fld     [esp+6Ch+var_4C]
            fstp    [esp+6Ch+var_54]
            fld     dword ptr [esp+6Ch+var_48]
            fstp    [esp+6Ch+var_50]
          }
LABEL_142:
          v74 = *(char ***)(*(_DWORD *)(v43 + 0xB4) + 0x28);
          if ( v74 )
          {
            __asm
            {
              fld     dword ptr [esp+6Ch+var_40]
              fld     [esp+6Ch+var_54]
              fld     st
              fdivp   st(2), st
              fxch    st(1)
              fstp    [esp+6Ch+var_38]
              fld     [esp+6Ch+var_34]
              fld     [esp+6Ch+var_50]
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
              fld     [esp+6Ch+var_38]
              fst     dword ptr [esp+6Ch+var_20]
              fld     [esp+6Ch+var_34]
            }
            __asm
            {
              fst     dword ptr [esp+6Ch+var_20+4]
              fxch    st(1)
            }
            *v74 = v154.m_data;
            __asm
            {
              fst     dword ptr [esp+6Ch+var_20]
              fld     dword ptr [esp+6Ch+var_40]
            }
            v74[1] = *(char **)&v154.m_dataLen;
            __asm { fadd    st, st(2) }
            v74[2] = v154.m_data;
            __asm
            {
              fstp    [esp+6Ch+var_34]
              fld     [esp+6Ch+var_34]
              fst     dword ptr [esp+6Ch+var_20+4]
            }
            __asm { fld     [esp+6Ch+var_4C] }
            v74[3] = *(char **)&v154.m_dataLen;
            __asm
            {
              faddp   st(2), st
              fxch    st(1)
              fstp    [esp+6Ch+var_34]
              fld     [esp+6Ch+var_34]
              fst     dword ptr [esp+6Ch+var_20]
            }
            __asm { fxch    st(2) }
            v74[4] = v154.m_data;
            __asm { fstp    dword ptr [esp+6Ch+var_20+4] }
            __asm { fxch    st(1) }
            v74[5] = *(char **)&v154.m_dataLen;
            __asm { fstp    dword ptr [esp+6Ch+var_20] }
            v74[6] = v154.m_data;
            __asm { fstp    dword ptr [esp+6Ch+var_20+4] }
            v74[7] = *(char **)&v154.m_dataLen;
          }
          *(_WORD *)(*(_DWORD *)(v43 + 0xB4) + 0x2E) |= 9u;
          sub_72A0F0(
            (float *)(*(_DWORD *)(v43 + 0xB4) + 0xC),
            *(unsigned __int16 *)(*(_DWORD *)(v43 + 0xB4) + 8),
            *(float **)(*(_DWORD *)(v43 + 0xB4) + 0x1C));
          v75 = *(_DWORD *)(_ESI + 0x2C);
          v142 = 1;
          if ( (v75 & 0x10) != 0 )
            *(_DWORD *)(_ESI + 0x2C) = v75 ^ 0x10;
          v76 = *(_DWORD *)(v43 + 0xB4);
          if ( v76 )
            *(_WORD *)(v76 + 0x2E) = *(_WORD *)(v76 + 0x2E) & 0xFFF | 0x8000;
        }
      }
    }
  }
  if ( (*(_BYTE *)(_ESI + 0x2C) & 0x40) != 0 )
  {
    if ( *(_DWORD *)(_ESI + 0x24) )
    {
      if ( !v18 )
      {
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)_ESI + 0xC))(_ESI) == 0x388 )
          sub_590970((BSStringT *)_ESI);
        v77 = *(_DWORD *)(_ESI + 0x2C);
        v142 = 1;
        if ( (v77 & 0x40) != 0 )
          *(_DWORD *)(_ESI + 0x2C) = v77 ^ 0x40;
      }
    }
  }
  if ( (*(_BYTE *)(_ESI + 0x2C) & 1) == 0 )
  {
LABEL_186:
    if ( *(_DWORD *)(_ESI + 0x24) )
    {
      if ( (*(_DWORD *)(_ESI + 0x2C) & 0x100) != 0 )
      {
        __asm
        {
          fild    dword ptr ds:0B06C4Ch
          fstp    [esp+6Ch+var_34]
          fld     [esp+6Ch+var_34]
          fstp    [esp+6Ch+var_20]
        }
        sub_57D7A0();
        __asm
        {
          fdivr   [esp+6Ch+var_20]
          fstp    dword ptr [esp+6Ch+var_40]
          fild    dword ptr ds:0B06C50h
          fstp    [esp+6Ch+var_34]
          fld     [esp+6Ch+var_34]
          fstp    [esp+6Ch+var_20]
        }
        sub_57D7F0();
        __asm { fdivr   [esp+6Ch+var_20] }
        __asm { fstp    [esp+6Ch+var_4C] }
        sub_588C50((_DWORD *)_ESI);
        __asm { fstp    [esp+6Ch+var_38] }
        sub_588CF0((_DWORD *)_ESI);
        __asm { fstp    dword ptr [esp+6Ch+var_48] }
        Tile_GetFloat((_DWORD *)_ESI, 0xFCA);
        __asm { fadd    dword ptr [esp+6Ch+var_48] }
        __asm
        {
          fmul    [esp+70h+var_4C]
          fstp    [esp+70h+var_34]
          fld     [esp+70h+var_34]
          fstp    [esp+70h+a2]; float
        }
        Tile_GetFloat((_DWORD *)_ESI, 0xFCB);
        __asm
        {
          fld     [esp+70h+var_38]
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
        sub_58B670((_DWORD *)_ESI, *(float *)&v138.m_dataLen, *(float *)&v139, *(float *)&v140, *(float *)&a2);
        v101 = *(_DWORD *)(_ESI + 0x2C);
        v142 = 1;
        if ( (v101 & 1) != 0 )
          *(_DWORD *)(_ESI + 0x2C) = v101 ^ 0x100;
      }
      if ( *(_DWORD *)(_ESI + 0x24) && (*(_DWORD *)(_ESI + 0x2C) & 0x200) != 0 )
      {
        v102 = *(_DWORD **)(_ESI + 0x10);
        if ( v102 )
        {
          __asm { fld     dword ptr ds:0A379B4h }
          while ( 1 )
          {
            v103 = (_DWORD *)v102[6];
            if ( v103 )
            {
              while ( 1 )
              {
                _EDX = v103[2];
                v105 = *(_WORD *)(_EDX + 0x18);
                v103 = (_DWORD *)*v103;
                if ( v105 == 0xFA4 )
                  break;
                if ( v105 > 0xFA4u || !v103 )
                  goto LABEL_200;
              }
              __asm
              {
                fld     dword ptr [edx+4]
                fstp    [esp+6Ch+var_34]
                fcom    [esp+6Ch+var_34]
                fnstsw  ax
              }
              if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) )
                break;
            }
LABEL_200:
            v102 = (_DWORD *)v102[4];
            if ( !v102 )
            {
              __asm { fstp    st }
              goto LABEL_212;
            }
          }
          __asm
          {
            fstp    st
            fild    dword ptr ds:0B06C4Ch
            fstp    [esp+6Ch+var_34]
            fld     [esp+6Ch+var_34]
            fstp    [esp+6Ch+var_20]
          }
          sub_57D7A0();
          __asm
          {
            fdivr   [esp+6Ch+var_20]
            fstp    [esp+6Ch+var_4C]
            fild    dword ptr ds:0B06C50h
            fstp    [esp+6Ch+var_34]
            fld     [esp+6Ch+var_34]
            fstp    [esp+6Ch+var_20]
          }
          sub_57D7F0();
          __asm { fdivr   [esp+6Ch+var_20] }
          __asm { fstp    [esp+6Ch+var_34] }
          sub_588C50(v102);
          __asm { fstp    [esp+6Ch+var_50] }
          sub_588CF0(v102);
          __asm { fstp    dword ptr [esp+6Ch+var_48] }
          Tile_GetFloat(v102, 0xFCB);
          __asm { fadd    [esp+6Ch+var_50] }
          __asm
          {
            fmul    [esp+70h+var_4C]
            fstp    [esp+70h+var_38]
          }
          v107 = Tile_GetFloat(v102, 0xFCA);
          __asm { fld     dword ptr [esp+6Ch+var_48] }
          __asm { fld     st }
          v108 = (_WORD *)(*(_DWORD *)(_ESI + 0x24) + 0xAC);
          __asm { faddp   st(2), st }
          __asm { fld     [esp+6Ch+var_34] }
          v109 = 0;
          __asm
          {
            fld     st
            fmulp   st(3), st
            fxch    st(2)
            fstp    [esp+6Ch+var_34]
            fld     [esp+6Ch+var_50]
            fmul    [esp+6Ch+var_4C]
            fstp    [esp+6Ch+var_50]
            fmulp   st(1), st
            fstp    dword ptr [esp+6Ch+var_48]
          }
          sub_4784A0(v108);
          sub_477F90((int)v108);
          if ( *(_WORD *)(*(_DWORD *)(_ESI + 0x24) + 0xB8) )
          {
            do
            {
              v110 = *(_DWORD *)(_ESI + 0x24);
              if ( *(unsigned __int16 *)(v110 + 0xB6) > v109 )
              {
                v111 = *(_DWORD *)(*(_DWORD *)(v110 + 0xB0) + 4 * v109);
                if ( v111 )
                {
                  v112 = (*(int (__thiscall **)(int))(*(_DWORD *)v111 + 4))(v111);
                  if ( v112 )
                  {
                    while ( (_UNKNOWN *)v112 != &unk_B352A4 )
                    {
                      v112 = *(_DWORD *)(v112 + 4);
                      if ( !v112 )
                        goto LABEL_208;
                    }
                    v113 = 1;
                  }
                  else
                  {
LABEL_208:
                    v113 = 0;
                  }
                  v114 = v113 != 0 ? (_DWORD *)v111 : 0;
                  if ( v114 )
                  {
                    __asm { fld     [esp+6Ch+var_34] }
                    v115 = COERCE_FLOAT(Double_To_SInt32(v107));
                    __asm { fld     [esp+6Ch+var_38] }
                    *(float *)&a2 = v115;
                    *(float *)&v116 = COERCE_FLOAT(Double_To_SInt32(v107));
                    __asm { fld     dword ptr [esp+70h+var_48] }
                    v140 = v116;
                    *(float *)&v117 = COERCE_FLOAT(Double_To_SInt32(v107));
                    __asm { fld     [esp+74h+var_50] }
                    v139 = v117;
                    v118 = Double_To_SInt32(v107);
                    sub_4A17F0(v114, v118, v139, v140, (int)a2);
                  }
                }
              }
              ++v109;
            }
            while ( v109 < *(unsigned __int16 *)(*(_DWORD *)(_ESI + 0x24) + 0xB8) );
          }
        }
LABEL_212:
        v119 = *(_DWORD *)(_ESI + 0x2C);
        v142 = 1;
        if ( (v119 & 0x200) != 0 )
          *(_DWORD *)(_ESI + 0x2C) = v119 ^ 0x200;
      }
    }
    goto LABEL_214;
  }
  if ( *(_DWORD *)(_ESI + 0x24) )
  {
    if ( !v18 )
    {
      Tile_GetFloat((_DWORD *)_ESI, 0xFA6);
      __asm
      {
        fcomp   dword ptr ds:0A379B4h
        fnstsw  ax
      }
      if ( !__SETP__(HIBYTE(_AX) & 0x44, 0) || *(Tile **)(_ESI + 0x10) == InterfaceManager_GetSingleton(0, 1)->menuRoot )
      {
        v90 = *((_DWORD *)&Vector3_InitValue_ + 1);
        v91 = dword_B3F9B0;
        *(float *)&v152 = Vector3_InitValue_;
        HIDWORD(v152) = v90;
        v153 = v91;
        Tile_GetFloat((_DWORD *)_ESI, 0xFAD);
        __asm { fstp    dword ptr [esp+6Ch+var_30] }
        Tile_GetFloat((_DWORD *)_ESI, 0xFAC);
        __asm { fchs }
        __asm { fstp    [esp+70h+var_28] }
        Tile_GetFloat((_DWORD *)_ESI, 0xFAB);
        __asm { fmul    qword ptr ds:0A68FD0h }
        v92 = *(int (__thiscall **)(int))(*(_DWORD *)_ESI + 0xC);
        __asm { fstp    dword ptr [esp+6Ch+var_30+4] }
        if ( v92(_ESI) == 0x388 )
        {
          __asm { fld     dword ptr [esp+6Ch+var_30+4] }
          __asm { fstp    [esp+70h+var_20] }
          Tile_GetFloat((_DWORD *)_ESI, 0xFED);
          __asm
          {
            fsubr   [esp+6Ch+var_20]
            fstp    dword ptr [esp+6Ch+var_30+4]
          }
        }
        if ( *(Tile **)(_ESI + 0x10) == InterfaceManager_GetSingleton(0, 1)->menuRoot )
        {
          __asm
          {
            fld     dword ptr [esp+6Ch+var_30]
            fstp    [esp+6Ch+var_20]
          }
          sub_57D7A0();
          __asm
          {
            fmul    qword ptr ds:0A2FAA0h
            fsubr   [esp+6Ch+var_20]
            fstp    dword ptr [esp+6Ch+var_30]
          }
          sub_57D7F0();
          __asm
          {
            fadd    [esp+6Ch+var_28]
            fstp    [esp+6Ch+var_20]
          }
          sub_57D7F0();
          __asm
          {
            fmul    qword ptr ds:0A2FAA0h
            fsubr   [esp+6Ch+var_20]
            fstp    [esp+6Ch+var_28]
          }
        }
        v93 = HIDWORD(v152);
        v94 = (float *)(*(_DWORD *)(_ESI + 0x24) + 0x54);
        *v94 = *(float *)&v152;
        v95 = v153;
        *((_DWORD *)v94 + 1) = v93;
        v94[2] = v95;
        v96 = *(_DWORD *)(_ESI + 0x24);
        for ( i = 0; i < *(unsigned __int16 *)(v96 + 0xB8); ++i )
        {
          if ( *(unsigned __int16 *)(v96 + 0xB6) > i )
            v98 = *(NiObject **)(*(_DWORD *)(v96 + 0xB0) + 4 * i);
          else
            v98 = 0;
          v99 = (float *)NiRTTI_Cast((BSStringT *)dword_B3FCD4, v98);
          if ( v99 )
          {
            if ( !*(_BYTE *)(_ESI + 6) )
            {
              v99[0x15] = Vector3_InitValue_;
              v99[0x16] = *(&Vector3_InitValue_ + 1);
              v99[0x17] = dword_B3F9B0;
            }
          }
        }
        sub_589430((_DWORD *)_ESI);
      }
      else
      {
        Tile_GetFloat((_DWORD *)_ESI, 0xFAB);
        __asm { fstp    [esp+6Ch+var_34] }
        v79 = Vector3_InitValue_;
        v80 = *((_DWORD *)&Vector3_InitValue_ + 1);
        v81 = dword_B3F9B0;
        v82 = *(_DWORD *)(_ESI + 0x24) + 0x54;
        *(float *)v82 = Vector3_InitValue_;
        *(float *)&v152 = v79;
        *(_DWORD *)(v82 + 4) = v80;
        a2 = (_DWORD *)0xFAD;
        HIDWORD(v152) = v80;
        v153 = v81;
        *(float *)(v82 + 8) = v81;
        Tile_GetFloat((_DWORD *)_ESI, (int)a2);
        __asm { fadd    dword ptr [esp+6Ch+var_30] }
        __asm
        {
          fstp    dword ptr [esp+70h+var_30]
          fld     [esp+70h+var_28]
          fstp    [esp+70h+var_20]
        }
        Tile_GetFloat((_DWORD *)_ESI, 0xFAC);
        __asm { fsubr   [esp+6Ch+var_20] }
        v83 = *(int (__thiscall **)(int))(*(_DWORD *)_ESI + 0xC);
        __asm
        {
          fstp    [esp+6Ch+var_28]
          fld     [esp+6Ch+var_34]
          fmul    qword ptr ds:0A68FD0h
          fadd    dword ptr [esp+6Ch+var_30+4]
          fstp    dword ptr [esp+6Ch+var_30+4]
        }
        if ( v83(_ESI) == 0x388 )
        {
          __asm { fld     dword ptr [esp+6Ch+var_30+4] }
          __asm { fstp    [esp+70h+var_20] }
          Tile_GetFloat((_DWORD *)_ESI, 0xFED);
          __asm
          {
            fsubr   [esp+6Ch+var_20]
            fstp    dword ptr [esp+6Ch+var_30+4]
          }
        }
        v84 = *(_DWORD *)(_ESI + 0x24);
        v85 = 0;
        if ( *(_WORD *)(v84 + 0xB8) )
        {
          v86 = LODWORD(v153);
          do
          {
            if ( *(unsigned __int16 *)(v84 + 0xB6) > v85 )
              v87 = *(NiObject **)(*(_DWORD *)(v84 + 0xB0) + 4 * v85);
            else
              v87 = 0;
            v88 = NiRTTI_Cast((BSStringT *)dword_B3FCD4, v87);
            if ( v88 )
            {
              v89 = (NiObjectVtbl *)HIDWORD(v152);
              v88[0xA].members.m_uiRefCount = LODWORD(v152);
              v88[0xB].__vftable = v89;
              v88[0xB].members.m_uiRefCount = v86;
            }
            ++v85;
          }
          while ( v85 < *(unsigned __int16 *)(v84 + 0xB8) );
          v18 = v143;
        }
      }
      v100 = *(_DWORD *)(_ESI + 0x2C);
      v142 = 1;
      if ( (v100 & 1) != 0 )
        *(_DWORD *)(_ESI + 0x2C) = v100 ^ 1;
    }
    goto LABEL_186;
  }
LABEL_214:
  if ( (*(_BYTE *)(_ESI + 0x2C) & 8) != 0 && !v18 )
  {
    v145 = *(int *)(_ESI + 0x24);
    v120 = v145;
    if ( *(float *)&v145 != 0.0 )
    {
      v121 = *(_WORD *)(v145 + 0xB8) == 0;
      v146 = 0.0;
      if ( !v121 )
      {
        while ( 1 )
        {
          if ( (unsigned int)*(unsigned __int16 *)(v120 + 0xB6) > LODWORD(v146) )
          {
            v122 = *(NiNode **)(*(_DWORD *)(v145 + 0xB0) + 4 * LODWORD(v146));
            if ( v122 )
            {
              v123 = NiNode_GetNiPropertyByID(v122, 2);
              v124 = sub_588E60(v145);
              Tile_GetFloat(v124, 0xFA7);
              __asm { fdiv    qword ptr ds:0A3DDD8h }
              __asm { fstp    dword ptr [esp+70h+var_48] }
              Tile_GetFloat(v124, 0xFCC);
              __asm { fdiv    qword ptr ds:0A3DDD8h }
              __asm { fstp    [esp+70h+var_4C] }
              Tile_GetFloat(v124, 0xFCD);
              __asm { fdiv    qword ptr ds:0A3DDD8h }
              __asm { fstp    dword ptr [esp+70h+var_40] }
              Tile_GetFloat(v124, 0xFCE);
              __asm { fdiv    qword ptr ds:0A3DDD8h }
              __asm { fstp    [esp+74h+var_38] }
              v125 = NiRTTI_Cast((BSStringT *)dword_B3FCD4, (NiObject *)v122);
              v126 = v125;
              if ( v123 )
              {
                __asm { fld     dword ptr [esp+6Ch+var_48] }
                v123[3].members.m_controller = (NiInterpController *)((char *)v123[3].members.m_controller + 2);
                __asm { fstp    dword ptr [edi+50h] }
                *(float *)&v123[3].members.m_pcName = _ET1;
                __asm
                {
                  fld     [esp+6Ch+var_4C]
                  fstp    dword ptr [esp+6Ch+var_20]
                }
                __asm { fld     dword ptr [esp+6Ch+var_40] }
                v123[2].members.m_extraDataList = (NiExtraData **)v154.m_data;
                __asm { fstp    dword ptr [esp+6Ch+var_20+4] }
                __asm { fld     [esp+6Ch+var_38] }
                *(_DWORD *)&v123[2].members.m_extraDataListLen = *(_DWORD *)&v154.m_dataLen;
                __asm { fstp    [esp+6Ch+var_18] }
                v123[3].vtbl = v155;
LABEL_235:
                v136 = *(_DWORD *)(_ESI + 0x2C);
                v142 = 1;
                if ( (v136 & 8) != 0 )
                  *(_DWORD *)(_ESI + 0x2C) = v136 ^ 8;
                goto LABEL_237;
              }
              if ( v125 )
              {
                v128 = *(_DWORD *)(v125[0x16].members.m_uiRefCount + 0x24);
                if ( v128 )
                {
                  if ( (*(int (__thiscall **)(BSFogProperty *))(*(_DWORD *)v124 + 0xC))(v124) != 0x387
                    || !*((_BYTE *)v124 + 0x50) )
                  {
                    m_uiRefCount = v126[0x16].members.m_uiRefCount;
                    v130 = *(unsigned __int16 *)(m_uiRefCount + 8);
                    if ( *(_WORD *)(m_uiRefCount + 8) )
                    {
                      __asm { fld     dword ptr [esp+6Ch+var_48] }
                      v131 = v128 + 4;
                      __asm
                      {
                        fld     [esp+6Ch+var_4C]
                        fld     dword ptr [esp+6Ch+var_40]
                        fld     [esp+6Ch+var_38]
                      }
                      while ( 1 )
                      {
                        __asm { fxch    st(3) }
                        v131 += 0x10;
                        --v130;
                        __asm { fst     dword ptr [eax-8] }
                        *(float *)(v131 - 8) = _ET1;
                        __asm
                        {
                          fxch    st(2)
                          fst     dword ptr [eax-14h]
                        }
                        *(float *)(v131 - 0x14) = _ET1;
                        __asm
                        {
                          fxch    st(1)
                          fst     dword ptr [eax-10h]
                        }
                        *(float *)(v131 - 0x10) = _ET1;
                        __asm
                        {
                          fxch    st(3)
                          fst     dword ptr [eax-0Ch]
                        }
                        *(float *)(v131 - 0xC) = _ET1;
                        if ( !v130 )
                          break;
                        __asm
                        {
                          fxch    st(2)
                          fxch    st(3)
                          fxch    st(1)
                          fxch    st(2)
                        }
                      }
                      __asm
                      {
                        fstp    st(2)
                        fstp    st
                        fstp    st(1)
                        fstp    st
                      }
                    }
                    *(_WORD *)(v126[0x16].members.m_uiRefCount + 0x2E) |= 4u;
                  }
                  goto LABEL_235;
                }
              }
            }
          }
LABEL_237:
          v137 = *(unsigned __int16 *)(v145 + 0xB8);
          if ( ++LODWORD(v146) >= v137 )
            return v142;
          v120 = v145;
        }
      }
    }
  }
  return v142;
}
