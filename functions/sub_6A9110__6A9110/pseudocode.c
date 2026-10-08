signed int *__cdecl sub_6A9110(int a1, int a2, signed int *a3, signed int **a4)
{
  int v7; // edi
  signed int *v8; // eax
  double v9; // st4
  MEF_U32PointerMapEntry32 *v10; // edx
  const char *v11; // eax
  unsigned int v12; // eax
  char *v13; // edi
  unsigned int v15; // eax
  char *v16; // edi
  int v18; // edx
  unsigned int v19; // eax
  unsigned int v20; // ecx
  _DWORD *v21; // edx
  _DWORD *v22; // esi
  MEF_U32PointerMapEntry32 *v23; // ecx
  float *v24; // esi
  NiDX9TextureData *v25; // ebx
  UInt32 Width; // eax
  bool v27; // c0
  bool v28; // c3
  float v29; // ecx
  float v30; // edx
  double v31; // st7
  double eComponent_low; // st6
  double v33; // st7
  double v34; // st7
  double v35; // st7
  double v36; // st6
  unsigned int v37; // eax
  char *v38; // edi
  int *v40; // eax
  char v41; // cl
  int v42; // ecx
  int (__cdecl *v43)(int, int, int, char, int, int, int); // edx
  char v44; // cl
  char *v45; // edi
  __int16 v47; // dx
  bool v48; // zf
  char *v49; // eax
  char *v51; // eax
  char *v53; // eax
  char *v55; // eax
  char *v57; // eax
  char *v59; // eax
  char *v61; // eax
  char *v63; // eax
  char *v65; // eax
  char v67; // cl
  char *v68; // eax
  char v70; // cl
  char *v71; // edi
  IDirect3DBaseTexture9 *Texture; // eax
  unsigned int v74; // eax
  char *v75; // edi
  IDirect3DBaseTexture9 *v77; // eax
  char *v78; // edi
  signed int *result; // eax
  signed int *v81; // ecx
  float v82; // [esp+28h] [ebp-210h]
  float v83; // [esp+28h] [ebp-210h]
  float v84; // [esp+28h] [ebp-210h]
  float v85; // [esp+28h] [ebp-210h]
  float v86; // [esp+2Ch] [ebp-20Ch]
  float v87; // [esp+2Ch] [ebp-20Ch]
  float v88; // [esp+2Ch] [ebp-20Ch]
  float v89; // [esp+2Ch] [ebp-20Ch]
  double v90; // [esp+30h] [ebp-208h]
  int v91; // [esp+34h] [ebp-204h]
  float v92; // [esp+4Ch] [ebp-1ECh]
  float v93; // [esp+4Ch] [ebp-1ECh]
  float v94; // [esp+4Ch] [ebp-1ECh]
  float v95; // [esp+4Ch] [ebp-1ECh]
  int v96; // [esp+50h] [ebp-1E8h]
  int v97; // [esp+50h] [ebp-1E8h]
  MEF_U32PointerMapEntry32 *position; // [esp+54h] [ebp-1E4h] BYREF
  float v99; // [esp+58h] [ebp-1E0h] BYREF
  float v100; // [esp+5Ch] [ebp-1DCh] BYREF
  int v101; // [esp+60h] [ebp-1D8h]
  float v102; // [esp+64h] [ebp-1D4h]
  float v103; // [esp+68h] [ebp-1D0h]
  float v104; // [esp+6Ch] [ebp-1CCh]
  signed int **v105; // [esp+70h] [ebp-1C8h]
  unsigned int keyOut; // [esp+74h] [ebp-1C4h] BYREF
  float v107; // [esp+78h] [ebp-1C0h]
  float v108; // [esp+7Ch] [ebp-1BCh]
  float v109; // [esp+80h] [ebp-1B8h]
  signed int *v110; // [esp+84h] [ebp-1B4h]
  void *valueOut; // [esp+88h] [ebp-1B0h] BYREF
  signed int *v112; // [esp+8Ch] [ebp-1ACh]
  double v113; // [esp+90h] [ebp-1A8h]
  int v114; // [esp+98h] [ebp-1A0h] BYREF
  _BYTE v115[3]; // [esp+9Ch] [ebp-19Ch] BYREF
  char v116; // [esp+9Fh] [ebp-199h] BYREF
  char v117[200]; // [esp+A0h] [ebp-198h] BYREF
  char v118[204]; // [esp+168h] [ebp-D0h] BYREF

  v7 = *a3; /*0x6a9136*/
  v110 = a3; /*0x6a9147*/
  v8 = *a4; /*0x6a914b*/
  v86 = (float)v7; /*0x6a914d*/
  v9 = (double)iDebugTextLeftRightOffset; /*0x6a9151*/
  v105 = a4; /*0x6a9157*/
  v10 = *(MEF_U32PointerMapEntry32 **)(*(_DWORD *)(a1 + 0x300) + 0xC); /*0x6a9161*/
  v82 = v9; /*0x6a9164*/
  v101 = a1; /*0x6a916c*/
  v112 = v8; /*0x6a9170*/
  position = v10; /*0x6a9174*/
  InterfaceMgr_DebugTextLine("AUDIO INFO", v82, v86, 1, 0xFFFFFFFF); /*0x6a9178*/
  v96 = 2 * a2 + v7; /*0x6a918e*/
  v11 = "C"; /*0x6a9192*/
  if ( !unk_B333B8 ) /*0x6a9187*/
    v11 = "N"; /*0x6a9199*/
  _sprintf(v117, "[%s] Music Playing: ", v11);
  switch ( *(_WORD *)(a1 + 0xB0) ) /*0x6a91bd*/
  {
    case 0: /*0x6a91bd*/
      _sprintf(v118, "Explore!"); /*0x6a91d1*/
      break; /*0x6a91d1*/
    case 1: /*0x6a91bd*/
      _sprintf(v118, "Public"); /*0x6a91d8*/
      break; /*0x6a91d8*/
    case 2: /*0x6a91bd*/
      _sprintf(v118, "Dungeon?"); /*0x6a91e7*/
      break; /*0x6a91e7*/
    case 4: /*0x6a91bd*/
      _sprintf(v118, "Battle!"); /*0x6a91f6*/
      break; /*0x6a91f6*/
    case 8: /*0x6a91bd*/
      _sprintf(v118, "Special"); /*0x6a9205*/
      break; /*0x6a9205*/
    default:
      break;
  }
  v12 = strlen(v118) + 1; /*0x6a920d*/
  v13 = &v116; /*0x6a9225*/
  while ( *++v13 ) /*0x6a9230*/
    ; /*0x6a9228*/
  qmemcpy(v13, v118, v12); /*0x6a9239*/
  _sprintf(v118, "(%.3f)", *(float *)(v101 + 0x2F0)); /*0x6a925f*/
  v15 = strlen(v118) + 1; /*0x6a9277*/
  v16 = &v116; /*0x6a927f*/
  while ( *++v16 ) /*0x6a928a*/
    ; /*0x6a9282*/
  qmemcpy(v16, v118, v15); /*0x6a9295*/
  v87 = (float)v96; /*0x6a92a4*/
  v83 = (float)iDebugTextLeftRightOffset; /*0x6a92b3*/
  InterfaceMgr_DebugTextLine(v117, v83, v87, 1, 0xFFFFFFFF); /*0x6a92b7*/
  _sprintf( /*0x6a92e7*/
    v117,
    "%d sounds loaded. %d moving sounds registered.",
    position,
    *(_DWORD *)(*(_DWORD *)(v101 + 0x304) + 0xC));
  v88 = (float)(a2 + v96); /*0x6a92fa*/
  v84 = (float)iDebugTextLeftRightOffset; /*0x6a9308*/
  InterfaceMgr_DebugTextLine(v117, v84, v88, 1, 0xFFFFFFFF); /*0x6a930c*/
  v18 = *(_DWORD *)(v101 + 0x300); /*0x6a9311*/
  v19 = *(_DWORD *)(v18 + 4); /*0x6a9317*/
  v20 = 0; /*0x6a931a*/
  v97 = 2 * a2 + a2 + v96; /*0x6a9323*/
  valueOut = 0; /*0x6a9327*/
  if ( v19 ) /*0x6a932b*/
  {
    v21 = *(_DWORD **)(v18 + 8); /*0x6a932d*/
    v22 = v21; /*0x6a9330*/
    while ( !*v22 ) /*0x6a9335*/
    {
      ++v20; /*0x6a9337*/
      ++v22; /*0x6a933a*/
      if ( v20 >= v19 ) /*0x6a933f*/
        goto LABEL_17; /*0x6a933f*/
    }
    v23 = (MEF_U32PointerMapEntry32 *)v21[v20]; /*0x6a9397*/
  }
  else
  {
LABEL_17:
    v23 = 0; /*0x6a9341*/
  }
  position = v23; /*0x6a9345*/
  if ( v23 ) /*0x6a9349*/
  {
    do /*0x6a9993*/
    {
      v24 = (float *)v101; /*0x6a9350*/
      NiTMap_U32Pointer_GetNextEntry(*(MEF_U32PointerMapLayout32 **)(v101 + 0x300), &position, &keyOut, &valueOut); /*0x6a9369*/
      v25 = (NiDX9TextureData *)valueOut; /*0x6a936e*/
      keyOut = *(_DWORD *)valueOut; /*0x6a9376*/
      if ( sub_6B67D0(valueOut) ) /*0x6a937a*/
      {
        if ( useSoundDebugInfo ) /*0x6a939c*/
        {
          v91 = sub_6B67D0(v25); /*0x6a93ac*/
          _sprintf(v117, "%s:\t", v91); /*0x6a93b7*/
        }
        else
        {
          _sprintf(v117, "%d:\t", *(_DWORD *)&v25->PixelFormat.BitsPerPixel); /*0x6a93c7*/
        }
      }
      else
      {
        _sprintf(v117, "%NoName:\t"); /*0x6a938d*/
      }
      v99 = 0.0; /*0x6a93d1*/
      v100 = 0.0; /*0x6a93d5*/
      Width = v25->Width; /*0x6a93d9*/
      if ( Width ) /*0x6a93de*/
      {
        (*(void (__stdcall **)(UInt32, float *))(*(_DWORD *)Width + 0x1C))(Width, &v100); /*0x6a93eb*/
        (*(void (__stdcall **)(UInt32, float *))(*(_DWORD *)v25->Width + 0x20))(v25->Width, &v99); /*0x6a93fb*/
      }
      if ( ((int)v25->_vtbl & 2) != 0 ) /*0x6a9400*/
      {
        v27 = v100 < kTerrainLODQuadRayStartZOffset; /*0x6a940d*/
        v28 = v100 == kTerrainLODQuadRayStartZOffset; /*0x6a940d*/
        v29 = *(float *)&v25->PixelFormat.Components[0].eComponent; /*0x6a9413*/
        v30 = *(float *)&v25->PixelFormat.Components[0].eRepresentation; /*0x6a9416*/
        v109 = *(float *)&v25->PixelFormat.Components[0].BitsPerComponent; /*0x6a9419*/
        v107 = v29; /*0x6a941d*/
        v108 = v30; /*0x6a9423*/
        if ( v27 || v28 ) /*0x6a9427*/
        {
          if ( BYTE2(v25->PixelFormat.Components[3].eRepresentation) ) /*0x6a94fb*/
            v34 = fCostant_100; /*0x6a9501*/
          else
            v34 = (double)HIWORD(v25->PixelFormat.Components[3].eComponent) / fCostant_100; /*0x6a9515*/
          v113 = v34; /*0x6a951b*/
          v102 = v107 - v24[0x20]; /*0x6a9529*/
          v103 = v108 - v24[0x21]; /*0x6a9537*/
          v104 = v109 - v24[0x22]; /*0x6a9545*/
          v94 = v103 * v103 + v102 * v102 + v104 * v104; /*0x6a9565*/
          v95 = sqrt(v94); /*0x6a9572*/
          eComponent_low = v100 * dbl_A76F60; /*0x6a959c*/
          v33 = (double)LOWORD(v25->PixelFormat.Components[3].eComponent) / fCostant_100; /*0x6a95b9*/
          _sprintf(v118, "(-%.1fdB)(-%.1fdB)(%.0f/%.0f) (%.0f)", v33, v113, dbl_A76F60 * v99, eComponent_low, v95); /*0x6a95c8*/
        }
        else
        {
          if ( BYTE2(v25->PixelFormat.Components[3].eRepresentation) ) /*0x6a9430*/
            v31 = fCostant_100; /*0x6a9436*/
          else
            v31 = (double)HIWORD(v25->PixelFormat.Components[3].eComponent) / fCostant_100; /*0x6a944a*/
          v113 = v31; /*0x6a9450*/
          v102 = v107 - v24[0x20]; /*0x6a945e*/
          v103 = v108 - v24[0x21]; /*0x6a946c*/
          v104 = v109 - v24[0x22]; /*0x6a947a*/
          eComponent_low = v104 * v104; /*0x6a9496*/
          v92 = v103 * v103 + v102 * v102 + eComponent_low; /*0x6a949a*/
          v93 = sqrt(v92); /*0x6a94a7*/
          v33 = (double)LOWORD(v25->PixelFormat.Components[3].eComponent) / fCostant_100; /*0x6a94df*/
          _sprintf(v118, "(-%.1fdB)(-%.1fdB)(%.0f/Default) (%.0f)", v33, v113, v99 * dbl_A76F60, v93); /*0x6a94ee*/
        }
      }
      else
      {
        if ( BYTE2(v25->PixelFormat.Components[3].eRepresentation) ) /*0x6a95d2*/
        {
          v35 = fCostant_100; /*0x6a95d8*/
          v36 = v35; /*0x6a95de*/
        }
        else
        {
          v36 = (double)HIWORD(v25->PixelFormat.Components[3].eComponent) / fCostant_100; /*0x6a95f6*/
          v35 = fCostant_100; /*0x6a95f6*/
        }
        v90 = v36; /*0x6a960a*/
        eComponent_low = (double)LOWORD(v25->PixelFormat.Components[3].eComponent); /*0x6a960e*/
        v33 = eComponent_low / v35; /*0x6a9612*/
        _sprintf(v118, "(-%.1fdB)(-%.1fdB)", v33, v90); /*0x6a961d*/
      }
      v37 = strlen(v118) + 1; /*0x6a9637*/
      v38 = &v116; /*0x6a963f*/
      while ( *++v38 ) /*0x6a964a*/
        ; /*0x6a9642*/
      qmemcpy(v38, v118, v37); /*0x6a9653*/
      if ( sub_6B6AF0((int)v25) ) /*0x6a965e*/
      {
        v40 = (int *)&v116; /*0x6a966b*/
        do /*0x6a9678*/
        {
          v41 = *((_BYTE *)v40 + 1); /*0x6a9670*/
          v40 = (int *)((char *)v40 + 1); /*0x6a9673*/
        }
        while ( v41 ); /*0x6a9678*/
        v42 = aPlay_0; /*0x6a967a*/
        v43 = (int (__cdecl *)(int, int, int, char, int, int, int))dword_A76EF8; /*0x6a9680*/
      }
      else
      {
        v40 = (int *)&v116; /*0x6a9688*/
        do /*0x6a9698*/
        {
          v44 = *((_BYTE *)v40 + 1); /*0x6a9690*/
          v40 = (int *)((char *)v40 + 1); /*0x6a9693*/
        }
        while ( v44 ); /*0x6a9698*/
        v42 = aPause_0; /*0x6a969a*/
        v43 = off_A76EF0; /*0x6a96a0*/
      }
      *v40 = v42; /*0x6a96aa*/
      v40[1] = (int)v43; /*0x6a96ac*/
      v45 = &v116; /*0x6a96af*/
      while ( *++v45 ) /*0x6a96ba*/
        ; /*0x6a96b2*/
      v47 = keyOut; /*0x6a96bc*/
      v48 = (keyOut & 1) == 0; /*0x6a96c0*/
      *(_WORD *)v45 = *(_WORD *)word_A61EA8; /*0x6a96c9*/
      if ( !v48 ) /*0x6a96cc*/
      {
        v49 = &v116; /*0x6a96d2*/
        while ( *++v49 ) /*0x6a96dd*/
          ; /*0x6a96d5*/
        *(_WORD *)v49 = a2d; /*0x6a96e6*/
        v49[2] = byte_A76EEA; /*0x6a96ef*/
      }
      if ( (v47 & 2) != 0 ) /*0x6a96f5*/
      {
        v51 = &v116; /*0x6a96fb*/
        while ( *++v51 ) /*0x6a9708*/
          ; /*0x6a9700*/
        *(_WORD *)v51 = a3d_1; /*0x6a9711*/
        v51[2] = byte_A76EE6; /*0x6a971a*/
      }
      if ( (v47 & 4) != 0 ) /*0x6a9720*/
      {
        v53 = &v116; /*0x6a9726*/
        while ( *++v53 ) /*0x6a9738*/
          ; /*0x6a9730*/
        *(_DWORD *)v53 = aVoce; /*0x6a9740*/
        *((_WORD *)v53 + 2) = word_A76EE0; /*0x6a9749*/
      }
      if ( (v47 & 8) != 0 ) /*0x6a9750*/
      {
        v55 = &v116; /*0x6a9756*/
        while ( *++v55 ) /*0x6a9768*/
          ; /*0x6a9760*/
        *(_DWORD *)v55 = aFoot_0; /*0x6a9770*/
        *((_WORD *)v55 + 2) = word_A76ED8; /*0x6a9779*/
      }
      if ( (v47 & 0x10) != 0 ) /*0x6a9780*/
      {
        v57 = &v116; /*0x6a9786*/
        while ( *++v57 ) /*0x6a9798*/
          ; /*0x6a9790*/
        *(_DWORD *)v57 = aLoop_0; /*0x6a97a0*/
        *((_WORD *)v57 + 2) = word_A76ED0; /*0x6a97a9*/
      }
      if ( (v47 & 0x20) != 0 ) /*0x6a97b0*/
      {
        v59 = &v116; /*0x6a97b6*/
        while ( *++v59 ) /*0x6a97c8*/
          ; /*0x6a97c0*/
        *(_DWORD *)v59 = aSyst; /*0x6a97d0*/
        *((_WORD *)v59 + 2) = word_A76EC8; /*0x6a97d9*/
      }
      if ( (v47 & 0x40) != 0 ) /*0x6a97e0*/
      {
        v61 = &v116; /*0x6a97e6*/
        while ( *++v61 ) /*0x6a97f8*/
          ; /*0x6a97f0*/
        *(_DWORD *)v61 = aLofr; /*0x6a9800*/
        *((_WORD *)v61 + 2) = word_A76EC0; /*0x6a9809*/
      }
      if ( (v47 & 0x100) != 0 ) /*0x6a9813*/
      {
        v63 = &v116; /*0x6a9819*/
        while ( *++v63 ) /*0x6a9828*/
          ; /*0x6a9820*/
        *(_DWORD *)v63 = a1off; /*0x6a9830*/
        *((_WORD *)v63 + 2) = word_A76EB8; /*0x6a9839*/
      }
      if ( (v47 & 0x1000) != 0 ) /*0x6a9843*/
      {
        v65 = &v116; /*0x6a9849*/
        while ( *++v65 ) /*0x6a9858*/
          ; /*0x6a9850*/
        v67 = byte_A76EB0; /*0x6a9860*/
        *(_DWORD *)v65 = aRgn; /*0x6a9866*/
        v65[4] = v67; /*0x6a9868*/
      }
      if ( BYTE2(v25->PixelFormat.Components[3].eRepresentation) ) /*0x6a986b*/
      {
        v68 = &v116; /*0x6a9875*/
        while ( *++v68 ) /*0x6a9880*/
          ; /*0x6a9878*/
        v70 = byte_A76EAA; /*0x6a9889*/
        *(_WORD *)v68 = word_A76EA8; /*0x6a988f*/
        v68[2] = v70; /*0x6a9892*/
      }
      v71 = &v116; /*0x6a9899*/
      while ( *++v71 ) /*0x6a98a8*/
        ; /*0x6a98a0*/
      *(_WORD *)v71 = *(_WORD *)word_A61E98; /*0x6a98b3*/
      if ( NiDX9TextureData::GetTexture(v25) ) /*0x6a98b6*/
      {
        Texture = NiDX9TextureData::GetTexture(v25); /*0x6a98c5*/
        ((void (__userpurge *)(IDirect3DBaseTexture9 *, int *, double@<st0>, double@<st1>))Texture->lpVtbl->FreePrivateData)( /*0x6a98d5*/
          Texture,
          &v114,
          v33,
          eComponent_low);
        _sprintf(v118, "[%i]", v114); /*0x6a98e9*/
        v74 = strlen(v118) + 1; /*0x6a9907*/
        v75 = &v116; /*0x6a9911*/
        while ( *++v75 ) /*0x6a991c*/
          ; /*0x6a9914*/
        qmemcpy(v75, v118, v74); /*0x6a9923*/
        v77 = NiDX9TextureData::GetTexture(v25); /*0x6a992e*/
        if ( (((int (__stdcall *)(IDirect3DBaseTexture9 *, _BYTE *))v77->lpVtbl->PreLoad)(v77, v115) & 2) != 0 ) /*0x6a9942*/
        {
          v78 = &v116; /*0x6a9948*/
          while ( *++v78 ) /*0x6a9958*/
            ; /*0x6a9950*/
          *(_DWORD *)v78 = dword_A76E9C; /*0x6a9960*/
        }
      }
      v89 = (float)v97; /*0x6a996d*/
      v85 = (float)iDebugTextLeftRightOffset; /*0x6a997b*/
      InterfaceMgr_DebugTextLine(v117, v85, v89, 1, 0xFFFFFFFF); /*0x6a997f*/
      v97 += a2; /*0x6a9987*/
    }
    while ( position ); /*0x6a9993*/
    result = v112; /*0x6a99a1*/
    *v110 = v97; /*0x6a99a5*/
    *v105 = result; /*0x6a99ab*/
  }
  else
  {
    result = v110; /*0x6a99c6*/
    v81 = v112; /*0x6a99ca*/
    *v110 = v97; /*0x6a99ce*/
    *v105 = v81; /*0x6a99d5*/
  }
  return result; /*0x6a99ad*/
}
