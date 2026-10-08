// TileText virtual slot 2: builds glyph geometry from FontManager FontInfo data directly in the InterfaceManager scene.
int __thiscall TileText_CreateSceneNode(unsigned int *this)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7
  double v5; // st7
  bool v6; // c0
  double v7; // st7
  int v8; // edi
  float *v9; // ebp
  double v10; // st7
  double v11; // st7
  double v12; // st7
  double v13; // st7
  bool v14; // al
  double v15; // st7
  double v16; // st6
  double v17; // st5
  double v18; // st4
  double v19; // st3
  double v20; // st2
  double v21; // st7
  double v22; // st5
  double v23; // st6
  double v24; // rt1
  double v25; // st4
  double v26; // rtt
  CHAR *v27; // eax
  double v28; // st7
  double VirtualScreenWidth; // st7
  NiNode *v30; // eax
  NiNode *v31; // eax
  float *v32; // edi
  unsigned int v33; // eax
  double v34; // st7
  double v35; // st7
  double v36; // st7
  NiNode *v37; // eax
  NiNode *v38; // eax
  _DWORD *Singleton; // eax
  NiNode *v41; // ecx
  bool v42; // cl
  int v43; // eax
  InterfaceManager *v44; // eax
  NiObject *v45; // eax
  unsigned int *v46; // eax
  const void **v47; // ecx
  int v48; // esi
  BSStringT v49; // [esp-4h] [ebp-C8h] BYREF
  unsigned int ArgList[7]; // [esp+4h] [ebp-C0h]
  bool v51; // [esp+23h] [ebp-A1h]
  float v52; // [esp+24h] [ebp-A0h]
  int v53; // [esp+28h] [ebp-9Ch] BYREF
  BSStringT v54; // [esp+2Ch] [ebp-98h] BYREF
  int v55; // [esp+34h] [ebp-90h]
  int v56; // [esp+38h] [ebp-8Ch] BYREF
  BSStringT *v57; // [esp+3Ch] [ebp-88h]
  float v58; // [esp+40h] [ebp-84h]
  NiNode *v59; // [esp+44h] [ebp-80h]
  float v60; // [esp+48h] [ebp-7Ch]
  float v61; // [esp+4Ch] [ebp-78h]
  float v62; // [esp+50h] [ebp-74h]
  float v63; // [esp+54h] [ebp-70h]
  float v64; // [esp+58h] [ebp-6Ch] BYREF
  float v65; // [esp+5Ch] [ebp-68h]
  float v66; // [esp+60h] [ebp-64h]
  float v67; // [esp+64h] [ebp-60h]
  float Float; // [esp+68h] [ebp-5Ch]
  float v69; // [esp+6Ch] [ebp-58h]
  float v70; // [esp+70h] [ebp-54h]
  float v71; // [esp+74h] [ebp-50h]
  _DWORD v72[6]; // [esp+78h] [ebp-4Ch] BYREF
  char v73; // [esp+90h] [ebp-34h]
  int v74; // [esp+94h] [ebp-30h]
  int v75; // [esp+98h] [ebp-2Ch]
  BSStringT *v76; // [esp+9Ch] [ebp-28h]
  int v77; // [esp+A0h] [ebp-24h]
  int v78; // [esp+A4h] [ebp-20h]
  int v79; // [esp+A8h] [ebp-1Ch]
  bool v80; // [esp+ACh] [ebp-18h]
  unsigned int v81; // [esp+B0h] [ebp-14h]
  __int16 v82; // [esp+B4h] [ebp-10h]
  __int16 v83; // [esp+B6h] [ebp-Eh]
  int v84; // [esp+C0h] [ebp-4h]

  v59 = (NiNode *)sub_5894D0((int)this); /*0x5923cb*/
  Float = Tile_GetFloat(this, 0xFAD); /*0x5923d4*/
  v63 = -Tile_GetFloat(this, 0xFAC); /*0x5923eb*/
  v2 = Tile_GetFloat(this, 0xFD4); /*0x5923f1*/
  v53 = Double_To_SInt32(v2); /*0x592402*/
  v3 = Tile_GetFloat(this, 0xFD5); /*0x592406*/
  v56 = Double_To_SInt32(v3); /*0x592417*/
  v4 = Tile_GetFloat(this, 0xFD6); /*0x59241b*/
  v55 = Double_To_SInt32(v4); /*0x59242c*/
  v5 = Tile_GetFloat(this, 0xFD1); /*0x592430*/
  v58 = COERCE_FLOAT(Double_To_SInt32(v5)); /*0x592441*/
  v6 = Tile_GetFloat(this, 0xFD3) > 1.0; /*0x59244c*/
  v7 = 1.0; /*0x592450*/
  if ( v6 ) /*0x592455*/
    v7 = Tile_GetFloat(this, 0xFD3); /*0x592460*/
  v52 = v7; /*0x592465*/
  v8 = Double_To_SInt32(v52 - dbl_A2F928); /*0x592478*/
  v9 = (float *)FontManager_GetSingleton()[v8]; /*0x59247f*/
  v10 = Tile_GetFloat(this, 0xFD7); /*0x592489*/
  v57 = (BSStringT *)Double_To_SInt32(v10); /*0x59249a*/
  v51 = Tile_GetFloat(this, 0xFD8) > *(float *)&SrcStr; /*0x5924b7*/
  if ( sub_588B80(this, 0xFCC) ) /*0x5924c2*/
    v11 = Tile_GetFloat(this, 0xFCC); /*0x5924d2*/
  else
    v11 = 0.0; /*0x5924d9*/
  v60 = v11; /*0x5924e0*/
  if ( sub_588B80(this, 0xFCD) ) /*0x5924e6*/
    v12 = Tile_GetFloat(this, 0xFCD); /*0x5924f6*/
  else
    v12 = 0.0; /*0x5924fd*/
  v61 = v12; /*0x592504*/
  if ( sub_588B80(this, 0xFCE) ) /*0x59250a*/
    v13 = Tile_GetFloat(this, 0xFCE); /*0x59251a*/
  else
    v13 = 0.0; /*0x592521*/
  v62 = v13; /*0x592528*/
  v14 = sub_588B80(this, 0xFA7); /*0x59252e*/
  v15 = 0.0; /*0x592533*/
  v16 = dbl_A3DDD8; /*0x592537*/
  if ( v14 ) /*0x59253d*/
  {
    v52 = Tile_GetFloat(this, 0xFA7); /*0x59254f*/
    v16 = dbl_A3DDD8; /*0x592560*/
    if ( 0.0 == v52 ) /*0x59255e*/
    {
      v15 = 0.0; /*0x592592*/
      v18 = 0.0; /*0x592594*/
      v17 = 0.0; /*0x592594*/
    }
    else
    {
      v17 = 0.0; /*0x592568*/
      v15 = 0.0; /*0x592568*/
      v18 = v52 / v16; /*0x59256e*/
    }
  }
  else
  {
    v52 = flt_A40098; /*0x592578*/
    v17 = 0.0; /*0x59257c*/
    v18 = v52 / v16; /*0x592582*/
  }
  if ( v62 == v17 ) /*0x5925a5*/
    v19 = v15; /*0x5925ad*/
  else
    v19 = v62 / v16; /*0x5925a7*/
  if ( v61 == v17 ) /*0x5925be*/
    v20 = v15; /*0x5925c6*/
  else
    v20 = v61 / v16; /*0x5925c0*/
  if ( v60 == v17 ) /*0x5925d5*/
  {
    v22 = v19; /*0x5925e1*/
    v24 = v18; /*0x5925e3*/
    v25 = v15; /*0x5925e5*/
    v21 = v20; /*0x5925e5*/
    v26 = v25; /*0x5925e7*/
    v18 = v24; /*0x5925e7*/
    v23 = v26; /*0x5925e7*/
  }
  else
  {
    v21 = v20; /*0x5925d7*/
    v22 = v19; /*0x5925d9*/
    v23 = v60 / v16; /*0x5925db*/
  }
  v64 = v23; /*0x5925ec*/
  v65 = v21; /*0x5925fb*/
  v54.m_data = 0; /*0x5925ff*/
  v54.m_dataLen = 0; /*0x592605*/
  v66 = v22; /*0x59260a*/
  v54.m_bufLen = 0; /*0x59260e*/
  v67 = v18; /*0x592613*/
  BSStringT_Set(&v54, word_A36430, 0); /*0x592617*/
  v84 = 0; /*0x592623*/
  if ( sub_588C10(this, 0xFDE) && *sub_588C10(this, 0xFDE) ) /*0x59263f*/
  {
    v27 = sub_588C10(this, 0xFDE); /*0x59264a*/
    BSStringT_Set(&v54, v27, 0); /*0x592655*/
  }
  else
  {
    v28 = Tile_GetFloat(this, 0xFDE); /*0x592663*/
    BSStringT_Static_Format(&v54, "%0.f", v28); /*0x592678*/
  }
  if ( v53 < 1 ) /*0x592685*/
  {
    VirtualScreenWidth = UI_GetVirtualScreenWidth(); /*0x592687*/
    v53 = Double_To_SInt32(VirtualScreenWidth); /*0x592691*/
  }
  if ( v55 < 1 ) /*0x59269a*/
    v55 = 0x7FFFFFFF; /*0x59269c*/
  if ( v51 || *((_BYTE *)FontManager_GetSingleton() + 0x14) ) /*0x5926b3*/
  {
    *(float *)&v37 = COERCE_FLOAT(FormHeapAlloc(0xDCu)); /*0x592789*/
    v63 = *(float *)&v37; /*0x592791*/
    LOBYTE(v84) = 1; /*0x592797*/
    if ( *(float *)&v37 == 0.0 ) /*0x59279f*/
      v38 = 0; /*0x5927ab*/
    else
      v38 = NiNode::NiNode(v37, 0); /*0x5927a4*/
    *(this + 9) = (unsigned int)v38; /*0x5927ad*/
    v81 = 0; /*0x5927b0*/
    v82 = 0; /*0x5927b7*/
    v83 = 0; /*0x5927bf*/
    v73 = 0xA; /*0x5927c7*/
    v78 = 0; /*0x5927cf*/
    v79 = 0; /*0x5927d6*/
    LOBYTE(v84) = 2; /*0x5927e3*/
    v72[0] = v8; /*0x5927eb*/
    v74 = v53; /*0x5927ef*/
    if ( !v53 ) /*0x5927f6*/
      v74 = 0x7FFFFFFF; /*0x5927f8*/
    *(float *)&v72[1] = v58; /*0x59280b*/
    *(float *)&v72[3] = v65; /*0x592813*/
    *(float *)&v72[5] = v67; /*0x59281b*/
    *(float *)&v72[2] = v64; /*0x592828*/
    *(float *)&v72[4] = v66; /*0x592830*/
    v75 = v56; /*0x592834*/
    if ( !v56 ) /*0x59283b*/
      v75 = 0x7FFFFFFF; /*0x59283d*/
    ArgList[1] = (unsigned int)v38; /*0x592850*/
    v76 = v57; /*0x592851*/
    ArgList[0] = (unsigned int)v72; /*0x592860*/
    v77 = v55; /*0x592864*/
    v80 = v51; /*0x59286d*/
    v57 = &v49; /*0x592874*/
    v49.m_data = 0; /*0x592878*/
    *(_DWORD *)&v49.m_dataLen = 0; /*0x59287a*/
    BSStringT_Set(&v49, v54.m_data, 0); /*0x592888*/
    LOBYTE(v84) = 3; /*0x59288d*/
    Singleton = FontManager_GetSingleton(); /*0x592895*/
    LOBYTE(v84) = 2; /*0x59289c*/
    if ( !sub_578C10(Singleton, v49.m_data, *(int *)&v49.m_dataLen, (_DWORD *)ArgList[0], ArgList[1]) ) /*0x5928a4*/
    {
      FormHeapFree(v81); /*0x5928b5*/
      v81 = 0; /*0x5928bf*/
      v83 = 0; /*0x5928c6*/
      v82 = 0; /*0x5928ce*/
      FormHeapFree((unsigned int)v54.m_data); /*0x5928d6*/
      return 0; /*0x5928e0*/
    }
    *(float *)&ArgList[1] = (float)v78; /*0x5928fb*/
    v53 = v74; /*0x592905*/
    v56 = v75; /*0x592909*/
    Tile_SetFloat((Tile *)this, 0xFEFu, *(float *)&ArgList[1]); /*0x59290d*/
    ArgList[1] = v81; /*0x592920*/
    *((_BYTE *)this + 0x50) = v80; /*0x592921*/
    LOBYTE(v84) = 0; /*0x592924*/
    FormHeapFree(ArgList[1]); /*0x59292b*/
  }
  else
  {
    v30 = (NiNode *)FormHeapAlloc(0xDCu); /*0x5926c1*/
    v57 = (BSStringT *)v30; /*0x5926c9*/
    LOBYTE(v84) = 4; /*0x5926cf*/
    if ( v30 ) /*0x5926d7*/
      v31 = NiNode::NiNode(v30, 0); /*0x5926dc*/
    else
      v31 = 0; /*0x5926e3*/
    LOBYTE(ArgList[1]) = 1; /*0x5926e9*/
    ArgList[0] = (unsigned int)&v64; /*0x5926ef*/
    *(_DWORD *)&v49.m_dataLen = 0xA; /*0x5926f0*/
    *(float *)&v49.m_data = v58; /*0x5926f2*/
    *(this + 9) = (unsigned int)v31; /*0x5926f3*/
    LOBYTE(v84) = 0; /*0x59270d*/
    v32 = (float *)sub_576670( /*0x592719*/
                     v9,
                     (const char **)&v54.m_data,
                     &v53,
                     &v56,
                     0,
                     v55,
                     (int)v49.m_data,
                     *(int *)&v49.m_dataLen,
                     (_DWORD *)ArgList[0],
                     ArgList[1]);
    *(this + 0x11) = *((_DWORD *)v32 + 0x15); /*0x59271e*/
    *(this + 0x12) = *((_DWORD *)v32 + 0x16); /*0x592724*/
    v33 = *((_DWORD *)v32 + 0x17); /*0x592727*/
    ArgList[1] = 0xFAB; /*0x59272a*/
    *(this + 0x13) = v33; /*0x592731*/
    v34 = Tile_GetFloat(this, ArgList[1]) * dbl_A68FD0; /*0x592739*/
    ArgList[1] = 0; /*0x59273f*/
    ArgList[0] = (unsigned int)v32; /*0x592740*/
    v58 = v34; /*0x592741*/
    v69 = Float; /*0x592749*/
    v35 = v58; /*0x592751*/
    v32[0x15] = Float; /*0x592755*/
    v70 = v35; /*0x592758*/
    v36 = v63; /*0x592760*/
    v32[0x16] = v70; /*0x592764*/
    v71 = v36; /*0x592767*/
    v32[0x17] = v71; /*0x59276f*/
    (*(void (__thiscall **)(_DWORD, unsigned int, unsigned int))(*(_DWORD *)*(this + 9) + 0x84))( /*0x59277d*/
      *(this + 9),
      ArgList[0],
      ArgList[1]);
  }
  *(float *)&ArgList[1] = (float)v53; /*0x59293a*/
  Tile_SetFloat((Tile *)this, 0xFCBu, *(float *)&ArgList[1]); /*0x592942*/
  *(float *)&ArgList[1] = (float)v56; /*0x59294e*/
  Tile_SetFloat((Tile *)this, 0xFCAu, *(float *)&ArgList[1]); /*0x592956*/
  *(this + 0xB) |= 1u; /*0x592960*/
  if ( Tile_GetFloat(this, 0xFC8) == fConstant_2 ) /*0x59297a*/
    *(this + 0xB) |= 0x200u; /*0x59297c*/
  v41 = v59; /*0x592983*/
  if ( !v59 ) /*0x592989*/
  {
    v59 = InterfaceManager_GetSingleton(0, 1)->unk054[0]; /*0x592998*/
    v41 = v59; /*0x59299c*/
  }
  ((void (__thiscall *)(NiNode *, _DWORD, int))v41->vtbl->AddObject)(v41, *(this + 9), 1); /*0x5929ab*/
  v42 = Tile_GetFloat(this, 0xFA1) == fConstant_1; /*0x5929c4*/
  v43 = *(this + 9); /*0x5929ce*/
  if ( v42 ) /*0x5929d1*/
    *(_WORD *)(v43 + 0x18) |= 1u; /*0x5929d3*/
  else
    *(_WORD *)(v43 + 0x18) &= ~1u; /*0x5929d9*/
  NiNode_UpdateDynamicEffectState((NiNode *)*(this + 9)); /*0x5929e2*/
  NiAVObject_InitializePropertyState((NiAVObject *)*(this + 9)); /*0x5929ea*/
  v44 = InterfaceManager_GetSingleton(0, 1); /*0x5929f1*/
  *(_DWORD *)&v49.m_dataLen = 0x14; /*0x5929f6*/
  LOBYTE(v44->unk07C) = 1; /*0x5929f8*/
  v45 = (NiObject *)FormHeapAlloc(*(unsigned int *)&v49.m_dataLen); /*0x5929fc*/
  v57 = (BSStringT *)v45; /*0x592a04*/
  LOBYTE(v84) = 5; /*0x592a0a*/
  if ( v45 ) /*0x592a12*/
    v46 = (unsigned int *)Tile::Extra::Extra(v45, (unsigned int)this, *(this + 9)); /*0x592a1b*/
  else
    v46 = 0; /*0x592a22*/
  v47 = (const void **)*(this + 9); /*0x592a24*/
  LOBYTE(v84) = 0; /*0x592a28*/
  NiObjectNET_AddExtraData(v47, 0, v46); /*0x592a2f*/
  v48 = *(this + 9); /*0x592a38*/
  FormHeapFree((unsigned int)v54.m_data); /*0x592a3c*/
  return v48; /*0x592a46*/
}
