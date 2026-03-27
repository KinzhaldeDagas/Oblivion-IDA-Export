signed int *__usercall sub_6A9110@<eax>(
        double a1@<st2>,
        double a2@<st1>,
        double st7_0@<st0>,
        int a4,
        int a5,
        signed int *a6,
        int *a7)
{
  int v7; // edi
  int v8; // eax
  double v9; // st4
  NiTMap_Entry_TESCELL *v10; // edx
  const char *v11; // eax
  unsigned int v12; // eax
  char *v13; // edi
  unsigned int v15; // eax
  char *v16; // edi
  double v18; // st5
  double v19; // st6
  int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  _DWORD *v23; // edx
  _DWORD *v24; // esi
  NiTMap_Entry_TESCELL *v25; // ecx
  float *v26; // esi
  TESObjectCELL *v27; // ebx
  NiNode *niNode; // eax
  bool v29; // c0
  bool v30; // c3
  float v31; // ecx
  float v32; // edx
  double v33; // st7
  double pathGrid_low; // st6
  double v35; // st7
  double v36; // st7
  double v37; // st7
  double v38; // st6
  unsigned int v39; // eax
  char *v40; // edi
  int *v42; // eax
  char v43; // cl
  int v44; // ecx
  int (__cdecl *v45)(int, int, int, char, int, int, int); // edx
  char v46; // cl
  char *v47; // edi
  __int16 v49; // dx
  bool v50; // zf
  char *v51; // eax
  char *v53; // eax
  char *v55; // eax
  char *v57; // eax
  char *v59; // eax
  char *v61; // eax
  char *v63; // eax
  char *v65; // eax
  char *v67; // eax
  char v69; // cl
  char *v70; // eax
  char v72; // cl
  char *v73; // edi
  IDirect3DBaseTexture9 *Texture; // eax
  unsigned int v76; // eax
  char *v77; // edi
  IDirect3DBaseTexture9 *v79; // eax
  char *v80; // edi
  double v82; // st6
  signed int *result; // eax
  int v84; // ecx
  float v85; // [esp+28h] [ebp-210h]
  float v86; // [esp+28h] [ebp-210h]
  float v87; // [esp+28h] [ebp-210h]
  float v88; // [esp+28h] [ebp-210h]
  float v89; // [esp+2Ch] [ebp-20Ch]
  float v90; // [esp+2Ch] [ebp-20Ch]
  float v91; // [esp+2Ch] [ebp-20Ch]
  float v92; // [esp+2Ch] [ebp-20Ch]
  double v93; // [esp+30h] [ebp-208h]
  int v94; // [esp+34h] [ebp-204h]
  float v95; // [esp+4Ch] [ebp-1ECh]
  float v96; // [esp+4Ch] [ebp-1ECh]
  float v97; // [esp+4Ch] [ebp-1ECh]
  float v98; // [esp+4Ch] [ebp-1ECh]
  int v99; // [esp+50h] [ebp-1E8h]
  int v100; // [esp+50h] [ebp-1E8h]
  NiTMap_Entry_TESCELL *v101; // [esp+54h] [ebp-1E4h] BYREF
  float v102; // [esp+58h] [ebp-1E0h] BYREF
  float v103; // [esp+5Ch] [ebp-1DCh] BYREF
  int v104; // [esp+60h] [ebp-1D8h]
  float v105; // [esp+64h] [ebp-1D4h]
  float v106; // [esp+68h] [ebp-1D0h]
  float v107; // [esp+6Ch] [ebp-1CCh]
  int *v108; // [esp+70h] [ebp-1C8h]
  TESFormVtbl *vtbl; // [esp+74h] [ebp-1C4h] BYREF
  float v110; // [esp+78h] [ebp-1C0h]
  float v111; // [esp+7Ch] [ebp-1BCh]
  void **v112; // [esp+80h] [ebp-1B8h]
  signed int *v113; // [esp+84h] [ebp-1B4h]
  TESObjectCELL *v114; // [esp+88h] [ebp-1B0h] BYREF
  int v115; // [esp+8Ch] [ebp-1ACh]
  double v116; // [esp+90h] [ebp-1A8h]
  int v117; // [esp+98h] [ebp-1A0h] BYREF
  _BYTE v118[3]; // [esp+9Ch] [ebp-19Ch] BYREF
  char v119; // [esp+9Fh] [ebp-199h] BYREF
  char v120[200]; // [esp+A0h] [ebp-198h] BYREF
  char v121[204]; // [esp+168h] [ebp-D0h] BYREF
  int savedregs; // [esp+238h] [ebp+0h] BYREF

  v7 = *a6;
  v113 = a6;
  v8 = *a7;
  v89 = (float)v7;
  v9 = (double)iDebugTextLeftRightOffset;
  v108 = a7;
  v10 = *(NiTMap_Entry_TESCELL **)(*(_DWORD *)(a4 + 0x300) + 0xC);
  v85 = v9;
  v104 = a4;
  v115 = v8;
  v101 = v10;
  InterfaceMgr_DebugTextLine((char)&savedregs, a1, a2, st7_0, "AUDIO INFO", v85, v89, 1, 0xFFFFFFFF);
  v99 = 2 * a5 + v7;
  v11 = "C";
  if ( !byte_B333B8 )
    v11 = "N";
  _sprintf(v120, "[%s] Music Playing: ", v11);
  switch ( *(_WORD *)(a4 + 0xB0) )
  {
    case 0:
      _sprintf(v121, "Explore!");
      break;
    case 1:
      _sprintf(v121, "Public");
      break;
    case 2:
      _sprintf(v121, "Dungeon?");
      break;
    case 4:
      _sprintf(v121, "Battle!");
      break;
    case 8:
      _sprintf(v121, "Special");
      break;
    default:
      break;
  }
  v12 = strlen(v121) + 1;
  v13 = &v119;
  while ( *++v13 )
    ;
  qmemcpy(v13, v121, v12);
  _sprintf(v121, "(%.3f)", *(float *)(v104 + 0x2F0));
  v15 = strlen(v121) + 1;
  v16 = &v119;
  while ( *++v16 )
    ;
  qmemcpy(v16, v121, v15);
  v90 = (float)v99;
  v18 = (double)iDebugTextLeftRightOffset;
  v86 = v18;
  InterfaceMgr_DebugTextLine((char)&savedregs, v18, a2, st7_0, v120, v86, v90, 1, 0xFFFFFFFF);
  _sprintf(v120, "%d sounds loaded. %d moving sounds registered.", v101, *(_DWORD *)(*(_DWORD *)(v104 + 0x304) + 0xC));
  v91 = (float)(a5 + v99);
  v19 = (double)iDebugTextLeftRightOffset;
  v87 = v19;
  InterfaceMgr_DebugTextLine((char)&savedregs, v18, v19, st7_0, v120, v87, v91, 1, 0xFFFFFFFF);
  v20 = *(_DWORD *)(v104 + 0x300);
  v21 = *(_DWORD *)(v20 + 4);
  v22 = 0;
  v100 = 2 * a5 + a5 + v99;
  v114 = 0;
  if ( v21 )
  {
    v23 = *(_DWORD **)(v20 + 8);
    v24 = v23;
    while ( !*v24 )
    {
      ++v22;
      ++v24;
      if ( v22 >= v21 )
        goto LABEL_17;
    }
    v25 = (NiTMap_Entry_TESCELL *)v23[v22];
  }
  else
  {
LABEL_17:
    v25 = 0;
  }
  v101 = v25;
  if ( v25 )
  {
    do
    {
      v26 = (float *)v104;
      sub_452600(*(NiTMap_TESCELL **)(v104 + 0x300), &v101, (void **)&vtbl, &v114);
      v27 = v114;
      vtbl = v114->vtbl;
      if ( sub_6B67D0(v114) )
      {
        if ( useSoundDebugInfo )
        {
          v94 = sub_6B67D0(v27);
          _sprintf(v120, "%s:\t", v94);
        }
        else
        {
          _sprintf(v120, "%d:\t", v27->members.super.refID);
        }
      }
      else
      {
        _sprintf(v120, "%NoName:\t");
      }
      v102 = 0.0;
      v103 = 0.0;
      niNode = v27->members.niNode;
      if ( niNode )
      {
        ((void (__stdcall *)(NiNode *, float *))niNode->vtbl->super.super.Load)(niNode, &v103);
        ((void (__stdcall *)(NiNode *, float *))v27->members.niNode->vtbl->super.super.PostLoad)(
          v27->members.niNode,
          &v102);
      }
      if ( ((int)v27->vtbl & 2) != 0 )
      {
        v29 = v103 < dbl_A47CA8;
        v30 = v103 == dbl_A47CA8;
        v31 = *(float *)&v27->members.fullName.name.m_dataLen;
        v32 = *(float *)&v27->members.flags0;
        v112 = v27->members.extraData.vtbl;
        v110 = v31;
        v111 = v32;
        if ( v29 || v30 )
        {
          if ( BYTE2(v27->members.objectList.refr) )
            v36 = fCostant_100;
          else
            v36 = (double)HIWORD(v27->members.pathGrid) / fCostant_100;
          v116 = v36;
          v105 = v110 - v26[0x20];
          v106 = v111 - v26[0x21];
          v107 = *(float *)&v112 - v26[0x22];
          v18 = v105 * v105;
          v97 = v106 * v106 + v18 + v107 * v107;
          v98 = sqrt(v97);
          pathGrid_low = v103 * dbl_A76F60;
          v35 = (double)LOWORD(v27->members.pathGrid) / fCostant_100;
          _sprintf(v121, "(-%.1fdB)(-%.1fdB)(%.0f/%.0f) (%.0f)", v35, v116, dbl_A76F60 * v102, pathGrid_low, v98);
        }
        else
        {
          if ( BYTE2(v27->members.objectList.refr) )
            v33 = fCostant_100;
          else
            v33 = (double)HIWORD(v27->members.pathGrid) / fCostant_100;
          v116 = v33;
          v105 = v110 - v26[0x20];
          v106 = v111 - v26[0x21];
          v107 = *(float *)&v112 - v26[0x22];
          v18 = v105 * v105;
          pathGrid_low = v107 * v107;
          v95 = v106 * v106 + v18 + pathGrid_low;
          v96 = sqrt(v95);
          v35 = (double)LOWORD(v27->members.pathGrid) / fCostant_100;
          _sprintf(v121, "(-%.1fdB)(-%.1fdB)(%.0f/Default) (%.0f)", v35, v116, v102 * dbl_A76F60, v96);
        }
      }
      else
      {
        if ( BYTE2(v27->members.objectList.refr) )
        {
          v37 = fCostant_100;
          v38 = v37;
        }
        else
        {
          v38 = (double)HIWORD(v27->members.pathGrid) / fCostant_100;
          v37 = fCostant_100;
        }
        v93 = v38;
        pathGrid_low = (double)LOWORD(v27->members.pathGrid);
        v35 = pathGrid_low / v37;
        _sprintf(v121, "(-%.1fdB)(-%.1fdB)", v35, v93);
      }
      v39 = strlen(v121) + 1;
      v40 = &v119;
      while ( *++v40 )
        ;
      qmemcpy(v40, v121, v39);
      if ( sub_6B6AF0((int)v27) )
      {
        v42 = (int *)&v119;
        do
        {
          v43 = *((_BYTE *)v42 + 1);
          v42 = (int *)((char *)v42 + 1);
        }
        while ( v43 );
        v44 = aPlay_0;
        v45 = (int (__cdecl *)(int, int, int, char, int, int, int))dword_A76EF8;
      }
      else
      {
        v42 = (int *)&v119;
        do
        {
          v46 = *((_BYTE *)v42 + 1);
          v42 = (int *)((char *)v42 + 1);
        }
        while ( v46 );
        v44 = aPause_0;
        v45 = off_A76EF0;
      }
      *v42 = v44;
      v42[1] = (int)v45;
      v47 = &v119;
      while ( *++v47 )
        ;
      v49 = (__int16)vtbl;
      v50 = ((unsigned __int8)vtbl & 1) == 0;
      *(_WORD *)v47 = word_A61EA8;
      if ( !v50 )
      {
        v51 = &v119;
        while ( *++v51 )
          ;
        *(_WORD *)v51 = a2d;
        v51[2] = byte_A76EEA;
      }
      if ( (v49 & 2) != 0 )
      {
        v53 = &v119;
        while ( *++v53 )
          ;
        *(_WORD *)v53 = a3d_1;
        v53[2] = byte_A76EE6;
      }
      if ( (v49 & 4) != 0 )
      {
        v55 = &v119;
        while ( *++v55 )
          ;
        *(_DWORD *)v55 = aVoce;
        *((_WORD *)v55 + 2) = word_A76EE0;
      }
      if ( (v49 & 8) != 0 )
      {
        v57 = &v119;
        while ( *++v57 )
          ;
        *(_DWORD *)v57 = aFoot_0;
        *((_WORD *)v57 + 2) = word_A76ED8;
      }
      if ( (v49 & 0x10) != 0 )
      {
        v59 = &v119;
        while ( *++v59 )
          ;
        *(_DWORD *)v59 = aLoop_0;
        *((_WORD *)v59 + 2) = word_A76ED0;
      }
      if ( (v49 & 0x20) != 0 )
      {
        v61 = &v119;
        while ( *++v61 )
          ;
        *(_DWORD *)v61 = aSyst;
        *((_WORD *)v61 + 2) = word_A76EC8;
      }
      if ( (v49 & 0x40) != 0 )
      {
        v63 = &v119;
        while ( *++v63 )
          ;
        *(_DWORD *)v63 = aLofr;
        *((_WORD *)v63 + 2) = word_A76EC0;
      }
      if ( (v49 & 0x100) != 0 )
      {
        v65 = &v119;
        while ( *++v65 )
          ;
        *(_DWORD *)v65 = a1off;
        *((_WORD *)v65 + 2) = word_A76EB8;
      }
      if ( (v49 & 0x1000) != 0 )
      {
        v67 = &v119;
        while ( *++v67 )
          ;
        v69 = byte_A76EB0;
        *(_DWORD *)v67 = aRgn;
        v67[4] = v69;
      }
      if ( BYTE2(v27->members.objectList.refr) )
      {
        v70 = &v119;
        while ( *++v70 )
          ;
        v72 = byte_A76EAA;
        *(_WORD *)v70 = word_A76EA8;
        v70[2] = v72;
      }
      v73 = &v119;
      while ( *++v73 )
        ;
      *(_WORD *)v73 = word_A61E98;
      if ( NiDX9TextureData::GetTexture((NiDX9TextureData *)v27) )
      {
        Texture = NiDX9TextureData::GetTexture((NiDX9TextureData *)v27);
        ((void (__userpurge *)(IDirect3DBaseTexture9 *, int *, double@<st0>, double@<st1>))Texture->lpVtbl->FreePrivateData)(
          Texture,
          &v117,
          v35,
          pathGrid_low);
        _sprintf(v121, "[%i]", v117);
        v76 = strlen(v121) + 1;
        v77 = &v119;
        while ( *++v77 )
          ;
        qmemcpy(v77, v121, v76);
        v79 = NiDX9TextureData::GetTexture((NiDX9TextureData *)v27);
        if ( (((int (__stdcall *)(IDirect3DBaseTexture9 *, _BYTE *))v79->lpVtbl->PreLoad)(v79, v118) & 2) != 0 )
        {
          v80 = &v119;
          while ( *++v80 )
            ;
          *(_DWORD *)v80 = dword_A76E9C;
        }
      }
      v92 = (float)v100;
      v82 = (double)iDebugTextLeftRightOffset;
      v88 = v82;
      InterfaceMgr_DebugTextLine((char)&savedregs, v18, v82, v35, v120, v88, v92, 1, 0xFFFFFFFF);
      v100 += a5;
    }
    while ( v101 );
    result = (signed int *)v115;
    *v113 = v100;
    *v108 = (int)result;
  }
  else
  {
    result = v113;
    v84 = v115;
    *v113 = v100;
    *v108 = v84;
  }
  return result;
}
