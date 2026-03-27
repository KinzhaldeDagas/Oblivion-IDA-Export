unsigned int *__userpurge sub_5B87D0@<eax>(
        float a1@<ecx>,
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
  TESObjectCELL *ParentCell; // eax
  int v17; // eax
  TESObjectREFR *v18; // ecx
  TESObjectCELL *v19; // eax
  int v20; // ebp
  int v21; // ebx
  int XCoordinate; // esi
  int YCoordinate; // edi
  TESForm *CellFromCoords; // eax
  unsigned int v25; // eax
  bool v26; // cc
  unsigned int v27; // esi
  int v28; // eax
  int v29; // esi
  float v30; // edi
  double Float; // st7
  _DWORD *v32; // esi
  unsigned int *TileFromTemplate; // ebx
  unsigned int v34; // ebp
  unsigned int v35; // esi
  NiObject *v36; // eax
  NiObject *v37; // eax
  int v38; // edx
  double v39; // st6
  double v40; // st7
  double v41; // st6
  double v42; // st5
  int v43; // edx
  float v44; // ecx
  char *v45; // edi
  char v46; // al
  float a2; // [esp+0h] [ebp-98h]
  float a2a; // [esp+0h] [ebp-98h]
  float a2b; // [esp+0h] [ebp-98h]
  float a2c; // [esp+0h] [ebp-98h]
  float a2d; // [esp+0h] [ebp-98h]
  float a2e; // [esp+0h] [ebp-98h]
  float a2f; // [esp+0h] [ebp-98h]
  float a2g; // [esp+0h] [ebp-98h]
  TESObjectCELL *v56; // [esp+14h] [ebp-84h]
  unsigned int a3; // [esp+18h] [ebp-80h]
  unsigned int a3a; // [esp+18h] [ebp-80h]
  unsigned int a3b; // [esp+18h] [ebp-80h]
  float a3c; // [esp+18h] [ebp-80h]
  _DWORD *v61; // [esp+20h] [ebp-78h] BYREF
  _DWORD *v62; // [esp+24h] [ebp-74h]
  _DWORD *v63; // [esp+28h] [ebp-70h]
  float v64; // [esp+2Ch] [ebp-6Ch] BYREF
  float v65; // [esp+30h] [ebp-68h]
  int v66; // [esp+34h] [ebp-64h]
  float v67; // [esp+38h] [ebp-60h]
  float v68; // [esp+3Ch] [ebp-5Ch]
  float v69; // [esp+40h] [ebp-58h]
  float v70; // [esp+44h] [ebp-54h]
  float v71; // [esp+48h] [ebp-50h]
  float v72; // [esp+4Ch] [ebp-4Ch]
  float v73; // [esp+50h] [ebp-48h]
  char v74[64]; // [esp+54h] [ebp-44h] BYREF

  v61 = a4;
  v62 = a5;
  v70 = a1;
  *(float *)&v63 = 0.0;
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  sub_4CCE20((ExtraDataList *)ParentCell, (float *)&v61, &v61, COERCE_FLOAT(1));
  a3 = (unsigned int)(uGridsToLoad - 1) >> 1;
  v17 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>))TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos)(
          TESDataHandler_g_PlayerRef,
          st7_0,
          st6_0);
  v64 = *(float *)v17;
  v65 = *(float *)(v17 + 4);
  v18 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  v66 = *(_DWORD *)(v17 + 8);
  v19 = TESObjectREFR_GetParentCell(v18);
  sub_4CCE20((ExtraDataList *)v19, &v64, &v64, COERCE_FLOAT(1));
  if ( sub_4D8B90((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
  {
    v20 = ((int)v64 - 0x800) >> 0xC;
    v21 = ((int)v65 - 0x800) >> 0xC;
    XCoordinate = ((int)*(float *)&v61 - 0x800) >> 0xC;
    YCoordinate = ((int)*(float *)&v62 - 0x800) >> 0xC;
  }
  else
  {
    v20 = (int)v64 >> 0xC;
    v21 = (int)v65 >> 0xC;
    XCoordinate = (int)*(float *)&v61 >> 0xC;
    YCoordinate = (int)*(float *)&v62 >> 0xC;
    CellFromCoords = TES_GetCellFromCoords(TES, a3 + 1, a3 + 1);
    v56 = (TESObjectCELL *)CellFromCoords;
    if ( CellFromCoords )
    {
      XCoordinate = TESObjectCELL_GetXCoordinate((TESObjectCELL *)CellFromCoords);
      YCoordinate = TESObjectCELL_GetYCoordinate(v56);
    }
  }
  v25 = a3;
  v26 = XCoordinate < (int)(v20 - a3);
  a3a = v20 - a3;
  if ( !v26 && XCoordinate <= (int)(v25 + v20) )
  {
    v27 = v21 - v25;
    if ( YCoordinate >= (int)(v21 - v25) && YCoordinate <= (int)(v25 + v21) )
    {
      if ( sub_4D8B90((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
      {
        v28 = (a3a << 0xC) + 0x800;
        v29 = (v27 << 0xC) + 0x800;
      }
      else
      {
        v28 = a3a << 0xC;
        v29 = v27 << 0xC;
      }
      v67 = (float)v28;
      v68 = (float)v29;
      v30 = v70;
      Float = 0.0;
      v69 = 0.0;
      v71 = v67;
      v32 = *(_DWORD **)(*(_DWORD *)(LODWORD(v70) + 0x68) + 0x34);
      v73 = 0.0;
      v72 = v68;
      if ( !v32 )
        goto LABEL_17;
      while ( 1 )
      {
        TileFromTemplate = (unsigned int *)v32[2];
        v32 = (_DWORD *)*v32;
        Float = Tile_GetFloat(TileFromTemplate, 0xFA7);
        if ( Float == *(float *)&SrcStr )
          break;
        if ( !v32 )
          goto LABEL_17;
      }
      if ( !TileFromTemplate )
      {
LABEL_17:
        TileFromTemplate = Menu_CreateTileFromTemplate(
                             (_DWORD *)LODWORD(v30),
                             0.0,
                             st6_0,
                             Float,
                             *(TileWindow **)(LODWORD(v30) + 0x68),
                             "map_local_icon",
                             0);
        if ( !TileFromTemplate )
          return TileFromTemplate;
      }
      v34 = TileFromTemplate[9];
      *((_BYTE *)TileFromTemplate + 6) = 0;
      if ( v34 )
      {
        qmemcpy((void *)(v34 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
        v35 = 0;
        for ( a3b = 0; v35 < *(unsigned __int16 *)(v34 + 0xB8); a3b = ++v35 )
        {
          if ( *(unsigned __int16 *)(v34 + 0xB6) > v35 )
            v36 = *(NiObject **)(*(_DWORD *)(v34 + 0xB0) + 4 * v35);
          else
            v36 = 0;
          v37 = NiRTTI_Cast((BSStringT *)dword_B3FCD4, v36);
          if ( v37 )
          {
            qmemcpy(&v37[6], &stru_B26AF0[0xA].unk2C, 0x24u);
            v35 = a3b;
          }
        }
      }
      v38 = uGridsToLoad - 1;
      v67 = *(float *)&v61 - v71;
      v68 = *(float *)&v62 - v72;
      v39 = dbl_A46040;
      v40 = dbl_A6CC88;
      v70 = v67 * v39 * v40;
      v41 = v39 * (dbl_A37650 - v68) * v40;
      v42 = (double)v38;
      if ( v38 < 0 )
        v42 = v42 + flt_A2FC78;
      v43 = 0;
      v44 = *(float *)&a6;
      v45 = (char *)(v74 - a6);
      do
      {
        if ( *(float *)&a6 == 0.0 )
          break;
        v46 = *(_BYTE *)LODWORD(v44);
        if ( !*(_BYTE *)LODWORD(v44) )
          break;
        v45[LODWORD(v44)] = (v46 < 0x30 || v46 > 0x39) && (v46 < 0x41 || v46 > 0x5A) && (v46 < 0x61 || v46 > 0x7A)
                          ? 0x5F
                          : v46;
        ++v43;
        ++LODWORD(v44);
      }
      while ( v43 < 0x3F );
      v74[v43] = 0;
      BSStringT_Set((BSStringT *)TileFromTemplate + 1, v74, 0);
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, fConstant_2);
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAF, v70);
      a3c = v40 * v42 + v41;
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB0, a3c);
      Tile_SetString(TileFromTemplate, (_DWORD *)0xFB2, a6);
      a2 = (float)a7;
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB3, a2);
      a2a = (float)((a8 != 0) + 1);
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB4, a2a);
      a2b = (float)a9;
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB5, a2b);
      a2c = (float)((a10 != 0) + 1);
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB6, a2c);
      a2d = (float)a11;
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA7, a2d);
      a2e = (float)((a12 != 0) + 1);
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB8, a2e);
      a2f = (float)((a13 != 0) + 1);
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB9, a2f);
      a2g = (float)((a14 != 0) + 1);
      Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFBA, a2g);
      return TileFromTemplate;
    }
  }
  return 0;
}
