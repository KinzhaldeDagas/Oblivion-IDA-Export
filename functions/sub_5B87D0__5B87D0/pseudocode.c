Tile *__userpurge sub_5B87D0@<eax>(
        Menu *a1@<ecx>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        _DWORD *a4,
        _DWORD *a5,
        char *a6,
        int a7,
        char a8,
        int a9,
        char a10,
        int a11,
        char a12,
        char a13,
        char a14)
{
  ExtraDataList *DwordAtOffset40; // eax
  int v15; // eax
  PlayerCharacter *v16; // ecx
  ExtraDataList *v17; // eax
  int v18; // ebp
  int v19; // ebx
  int XCoordinate; // esi
  int YCoordinate; // edi
  TESForm *CellFromCoords; // eax
  unsigned int v23; // eax
  bool v24; // cc
  unsigned int v25; // esi
  int v26; // eax
  int v27; // esi
  Menu *v28; // edi
  _DWORD *v29; // esi
  Tile *v30; // ebx
  int v31; // ebp
  unsigned int v32; // esi
  NiObject *v33; // eax
  NiObject *v34; // eax
  int v35; // edx
  double v36; // st6
  double v37; // st7
  double v38; // st6
  double v39; // st5
  int v40; // edx
  char *v41; // ecx
  int v42; // edi
  char v43; // al
  float a2; // [esp+0h] [ebp-98h]
  float a2a; // [esp+0h] [ebp-98h]
  float a2b; // [esp+0h] [ebp-98h]
  float a2c; // [esp+0h] [ebp-98h]
  float a2d; // [esp+0h] [ebp-98h]
  float a2e; // [esp+0h] [ebp-98h]
  float a2f; // [esp+0h] [ebp-98h]
  float a2g; // [esp+0h] [ebp-98h]
  TESObjectCELL *v53; // [esp+14h] [ebp-84h]
  unsigned int a3; // [esp+18h] [ebp-80h]
  unsigned int a3a; // [esp+18h] [ebp-80h]
  unsigned int a3b; // [esp+18h] [ebp-80h]
  float a3c; // [esp+18h] [ebp-80h]
  _DWORD *v58; // [esp+20h] [ebp-78h] BYREF
  _DWORD *v59; // [esp+24h] [ebp-74h]
  _DWORD *v60; // [esp+28h] [ebp-70h]
  float v61; // [esp+2Ch] [ebp-6Ch] BYREF
  float v62; // [esp+30h] [ebp-68h]
  int v63; // [esp+34h] [ebp-64h]
  float v64; // [esp+38h] [ebp-60h]
  float v65; // [esp+3Ch] [ebp-5Ch]
  float v66; // [esp+40h] [ebp-58h]
  Menu *v67; // [esp+44h] [ebp-54h]
  float v68; // [esp+48h] [ebp-50h]
  float v69; // [esp+4Ch] [ebp-4Ch]
  float v70; // [esp+50h] [ebp-48h]
  char v71[64]; // [esp+54h] [ebp-44h] BYREF

  v58 = a4; /*0x5b87f3*/
  v59 = a5; /*0x5b8800*/
  v67 = a1; /*0x5b8807*/
  *(float *)&v60 = 0.0; /*0x5b880b*/
  DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(reference); /*0x5b8823*/
  sub_4CCE20(DwordAtOffset40, (float *)&v58, &v58, COERCE_FLOAT(1)); /*0x5b882a*/
  a3 = (unsigned int)(uGridsToLoad - 1) >> 1; /*0x5b883f*/
  v15 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>))reference->vtbl->super.super.super.GetPos)( /*0x5b884b*/
          reference,
          st7_0,
          st6_0);
  v61 = *(float *)v15; /*0x5b884f*/
  v62 = *(float *)(v15 + 4); /*0x5b885c*/
  v16 = reference; /*0x5b8866*/
  v63 = *(_DWORD *)(v15 + 8); /*0x5b886d*/
  v17 = (ExtraDataList *)Shared_GetDwordAtOffset40(v16); /*0x5b8871*/
  sub_4CCE20(v17, &v61, &v61, COERCE_FLOAT(1)); /*0x5b8878*/
  if ( sub_4D8B90((TESObjectREFR *)reference) ) /*0x5b8883*/
  {
    v18 = ((int)v61 - 0x800) >> 0xC; /*0x5b889e*/
    v19 = ((int)v62 - 0x800) >> 0xC; /*0x5b88b3*/
    XCoordinate = ((int)*(float *)&v58 - 0x800) >> 0xC; /*0x5b88c8*/
    YCoordinate = ((int)*(float *)&v59 - 0x800) >> 0xC; /*0x5b88dd*/
  }
  else
  {
    v18 = (int)v61 >> 0xC; /*0x5b88ee*/
    v19 = (int)v62 >> 0xC; /*0x5b88fd*/
    XCoordinate = (int)*(float *)&v58 >> 0xC; /*0x5b890c*/
    YCoordinate = (int)*(float *)&v59 >> 0xC; /*0x5b892a*/
    CellFromCoords = TES_GetCellFromCoords(MEMORY[0xB333A0], a3 + 1, a3 + 1); /*0x5b892d*/
    v53 = (TESObjectCELL *)CellFromCoords; /*0x5b8934*/
    if ( CellFromCoords ) /*0x5b8938*/
    {
      XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)CellFromCoords); /*0x5b8945*/
      YCoordinate = TESObjectCELL_GetYCoordinate(v53); /*0x5b894c*/
    }
  }
  v23 = a3; /*0x5b894e*/
  v24 = XCoordinate < (int)(v18 - a3); /*0x5b8956*/
  a3a = v18 - a3; /*0x5b8958*/
  if ( !v24 && XCoordinate <= (int)(v23 + v18) )
  {
    v25 = v19 - v23; /*0x5b896e*/
    if ( YCoordinate >= (int)(v19 - v23) && YCoordinate <= (int)(v23 + v19) )
    {
      if ( sub_4D8B90((TESObjectREFR *)reference) ) /*0x5b8988*/
      {
        v26 = (a3a << 0xC) + 0x800; /*0x5b8998*/
        v27 = (v25 << 0xC) + 0x800; /*0x5b89a8*/
      }
      else
      {
        v26 = a3a << 0xC; /*0x5b89bc*/
        v27 = v25 << 0xC; /*0x5b89c7*/
      }
      v64 = (float)v26; /*0x5b89b2*/
      v65 = (float)v27; /*0x5b89da*/
      v28 = v67; /*0x5b89de*/
      v66 = 0.0; /*0x5b89e8*/
      v68 = v64; /*0x5b89f0*/
      v29 = *(_DWORD **)(v67[2].members.unk18 + 0x34); /*0x5b89f7*/
      v70 = 0.0; /*0x5b89fc*/
      v69 = v65; /*0x5b8a00*/
      if ( !v29 ) /*0x5b8a04*/
        goto LABEL_17; /*0x5b8a04*/
      while ( 1 ) /*0x5b8a06*/
      {
        v30 = (Tile *)v29[2]; /*0x5b8a06*/
        v29 = (_DWORD *)*v29; /*0x5b8a0c*/
        if ( Tile_GetFloat(v30, 0xFA7) == *(float *)&SrcStr ) /*0x5b8a25*/
          break; /*0x5b8a25*/
        if ( !v29 ) /*0x5b8a29*/
          goto LABEL_17; /*0x5b8a29*/
      }
      if ( !v30 ) /*0x5b8a2f*/
      {
LABEL_17:
        v30 = Menu::RenderTemplate(v28, (Tile *)v28[2].members.unk18, "map_local_icon", 0); /*0x5b8a31*/
        if ( !v30 ) /*0x5b8a47*/
          return v30; /*0x5b8cdf*/
      }
      v31 = *((_DWORD *)v30 + 9); /*0x5b8a4d*/
      *((_BYTE *)v30 + 6) = 0; /*0x5b8a52*/
      if ( v31 ) /*0x5b8a56*/
      {
        qmemcpy((void *)(v31 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x5b8a65*/
        v32 = 0; /*0x5b8a67*/
        for ( a3b = 0; v32 < *(unsigned __int16 *)(v31 + 0xB8); a3b = ++v32 ) /*0x5b8a69*/
        {
          if ( *(unsigned __int16 *)(v31 + 0xB6) > v32 ) /*0x5b8a89*/
            v33 = *(NiObject **)(*(_DWORD *)(v31 + 0xB0) + 4 * v32); /*0x5b8a95*/
          else
            v33 = 0; /*0x5b8a8b*/
          v34 = NiRTTI_Cast((BSStringT *)&stru_B3FCD4, v33); /*0x5b8a9e*/
          if ( v34 ) /*0x5b8aa8*/
          {
            qmemcpy(&v34[6], &stru_B26AF0[0xA].unk2C, 0x24u); /*0x5b8ab7*/
            v32 = a3b; /*0x5b8ab9*/
          }
        }
      }
      v35 = uGridsToLoad - 1; /*0x5b8add*/
      v64 = *(float *)&v58 - v68; /*0x5b8ae6*/
      v65 = *(float *)&v59 - v69; /*0x5b8af2*/
      v36 = dbl_A46040; /*0x5b8afa*/
      v37 = dbl_A6CC88; /*0x5b8b0a*/
      *(float *)&v67 = v64 * v36 * v37; /*0x5b8b0c*/
      v38 = v36 * (dbl_A37650 - v65) * v37; /*0x5b8b1c*/
      v39 = (double)v35; /*0x5b8b1e*/
      if ( v35 < 0 ) /*0x5b8b22*/
        v39 = v39 + flt_A2FC78; /*0x5b8b24*/
      v40 = 0; /*0x5b8b34*/
      v41 = a6; /*0x5b8b38*/
      v42 = v71 - a6; /*0x5b8b3a*/
      do
      {
        if ( !a6 ) /*0x5b8b42*/
          break; /*0x5b8b42*/
        v43 = *v41; /*0x5b8b44*/
        if ( !*v41 ) /*0x5b8b44*/
          break; /*0x5b8b48*/
        v41[v42] = (v43 < 0x30 || v43 > 0x39) && (v43 < 0x41 || v43 > 0x5A) && (v43 < 0x61 || v43 > 0x7A) ? 0x5F : v43;
        ++v40; /*0x5b8b6b*/
        ++v41; /*0x5b8b6e*/
      }
      while ( v40 < 0x3F );
      v71[v40] = 0; /*0x5b8b80*/
      BSStringT_Set((BSStringT *)v30 + 1, v71, 0); /*0x5b8b85*/
      Tile_SetFloat(v30, 0xFAEu, fConstant_2); /*0x5b8b9b*/
      Tile_SetFloat(v30, 0xFAFu, *(float *)&v67); /*0x5b8baf*/
      a3c = v37 * v39 + v38; /*0x5b8b3c*/
      Tile_SetFloat(v30, 0xFB0u, a3c); /*0x5b8bc3*/
      Tile_SetString(v30, (_DWORD *)0xFB2, a6); /*0x5b8bd0*/
      a2 = (float)a7; /*0x5b8bdf*/
      Tile_SetFloat(v30, 0xFB3u, a2); /*0x5b8be7*/
      a2a = (float)((a8 != 0) + 1); /*0x5b8c06*/
      Tile_SetFloat(v30, 0xFB4u, a2a); /*0x5b8c0e*/
      a2b = (float)a9; /*0x5b8c1d*/
      Tile_SetFloat(v30, 0xFB5u, a2b); /*0x5b8c25*/
      a2c = (float)((a10 != 0) + 1); /*0x5b8c44*/
      Tile_SetFloat(v30, 0xFB6u, a2c); /*0x5b8c4c*/
      a2d = (float)a11; /*0x5b8c5b*/
      Tile_SetFloat(v30, 0xFA7u, a2d); /*0x5b8c63*/
      a2e = (float)((a12 != 0) + 1); /*0x5b8c82*/
      Tile_SetFloat(v30, 0xFB8u, a2e); /*0x5b8c8a*/
      a2f = (float)((a13 != 0) + 1); /*0x5b8ca9*/
      Tile_SetFloat(v30, 0xFB9u, a2f); /*0x5b8cb1*/
      a2g = (float)((a14 != 0) + 1); /*0x5b8cd0*/
      Tile_SetFloat(v30, 0xFBAu, a2g); /*0x5b8cd8*/
      return v30; /*0x5b8cd8*/
    }
  }
  return 0; /*0x5b8cee*/
}
