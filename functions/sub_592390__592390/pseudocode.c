int __thiscall sub_592390(unsigned int *this)
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
  double v29; // st7
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
  Tile::Extra *v45; // eax
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

  v59 = (NiNode *)sub_5894D0((int)this);
  Float = Tile_GetFloat(this, 0xFAD);
  v63 = -Tile_GetFloat(this, 0xFAC);
  v2 = Tile_GetFloat(this, 0xFD4);
  v53 = Double_To_SInt32(v2);
  v3 = Tile_GetFloat(this, 0xFD5);
  v56 = Double_To_SInt32(v3);
  v4 = Tile_GetFloat(this, 0xFD6);
  v55 = Double_To_SInt32(v4);
  v5 = Tile_GetFloat(this, 0xFD1);
  v58 = COERCE_FLOAT(Double_To_SInt32(v5));
  v6 = Tile_GetFloat(this, 0xFD3) > 1.0;
  v7 = 1.0;
  if ( v6 )
    v7 = Tile_GetFloat(this, 0xFD3);
  v52 = v7;
  v8 = Double_To_SInt32(v52 - dbl_A2F928);
  v9 = (float *)FontManager_GetSingleton()[v8];
  v10 = Tile_GetFloat(this, 0xFD7);
  v57 = (BSStringT *)Double_To_SInt32(v10);
  v51 = Tile_GetFloat(this, 0xFD8) > *(float *)&SrcStr;
  if ( sub_588B80(this, 0xFCC) )
    v11 = Tile_GetFloat(this, 0xFCC);
  else
    v11 = 0.0;
  v60 = v11;
  if ( sub_588B80(this, 0xFCD) )
    v12 = Tile_GetFloat(this, 0xFCD);
  else
    v12 = 0.0;
  v61 = v12;
  if ( sub_588B80(this, 0xFCE) )
    v13 = Tile_GetFloat(this, 0xFCE);
  else
    v13 = 0.0;
  v62 = v13;
  v14 = sub_588B80(this, 0xFA7);
  v15 = 0.0;
  v16 = dbl_A3DDD8;
  if ( v14 )
  {
    v52 = Tile_GetFloat(this, 0xFA7);
    v16 = dbl_A3DDD8;
    if ( 0.0 == v52 )
    {
      v15 = 0.0;
      v18 = 0.0;
      v17 = 0.0;
    }
    else
    {
      v17 = 0.0;
      v15 = 0.0;
      v18 = v52 / v16;
    }
  }
  else
  {
    v52 = flt_A40098;
    v17 = 0.0;
    v18 = v52 / v16;
  }
  if ( v62 == v17 )
    v19 = v15;
  else
    v19 = v62 / v16;
  if ( v61 == v17 )
    v20 = v15;
  else
    v20 = v61 / v16;
  if ( v60 == v17 )
  {
    v22 = v19;
    v24 = v18;
    v25 = v15;
    v21 = v20;
    v26 = v25;
    v18 = v24;
    v23 = v26;
  }
  else
  {
    v21 = v20;
    v22 = v19;
    v23 = v60 / v16;
  }
  v64 = v23;
  v65 = v21;
  v54.m_data = 0;
  v54.m_dataLen = 0;
  v66 = v22;
  v54.m_bufLen = 0;
  v67 = v18;
  BSStringT_Set(&v54, word_A36430, 0);
  v84 = 0;
  if ( sub_588C10(this, 0xFDE) && *sub_588C10(this, 0xFDE) )
  {
    v27 = sub_588C10(this, 0xFDE);
    BSStringT_Set(&v54, v27, 0);
  }
  else
  {
    v28 = Tile_GetFloat(this, 0xFDE);
    BSStringT_Static_Format(&v54, "%0.f", v28);
  }
  if ( v53 < 1 )
  {
    v29 = sub_57D7A0();
    v53 = Double_To_SInt32(v29);
  }
  if ( v55 < 1 )
    v55 = 0x7FFFFFFF;
  if ( v51 || *((_BYTE *)FontManager_GetSingleton() + 0x14) )
  {
    *(float *)&v37 = COERCE_FLOAT(FormHeapAlloc(0xDCu));
    v63 = *(float *)&v37;
    LOBYTE(v84) = 1;
    if ( *(float *)&v37 == 0.0 )
      v38 = 0;
    else
      v38 = NiNode::NiNode(v37, 0);
    *(this + 9) = (unsigned int)v38;
    v81 = 0;
    v82 = 0;
    v83 = 0;
    v73 = 0xA;
    v78 = 0;
    v79 = 0;
    LOBYTE(v84) = 2;
    v72[0] = v8;
    v74 = v53;
    if ( !v53 )
      v74 = 0x7FFFFFFF;
    *(float *)&v72[1] = v58;
    *(float *)&v72[3] = v65;
    *(float *)&v72[5] = v67;
    *(float *)&v72[2] = v64;
    *(float *)&v72[4] = v66;
    v75 = v56;
    if ( !v56 )
      v75 = 0x7FFFFFFF;
    ArgList[1] = (unsigned int)v38;
    v76 = v57;
    ArgList[0] = (unsigned int)v72;
    v77 = v55;
    v80 = v51;
    v57 = &v49;
    v49.m_data = 0;
    *(_DWORD *)&v49.m_dataLen = 0;
    BSStringT_Set(&v49, v54.m_data, 0);
    LOBYTE(v84) = 3;
    Singleton = FontManager_GetSingleton();
    LOBYTE(v84) = 2;
    if ( !sub_578C10(Singleton, v49.m_data, *(int *)&v49.m_dataLen, (_DWORD *)ArgList[0], ArgList[1]) )
    {
      FormHeapFree(v81);
      v81 = 0;
      v83 = 0;
      v82 = 0;
      FormHeapFree((unsigned int)v54.m_data);
      return 0;
    }
    *(float *)&ArgList[1] = (float)v78;
    v53 = v74;
    v56 = v75;
    Tile_SetFloat((Tile *)this, (_DWORD *)0xFEF, *(float *)&ArgList[1]);
    ArgList[1] = v81;
    *((_BYTE *)this + 0x50) = v80;
    LOBYTE(v84) = 0;
    FormHeapFree(ArgList[1]);
  }
  else
  {
    v30 = (NiNode *)FormHeapAlloc(0xDCu);
    v57 = (BSStringT *)v30;
    LOBYTE(v84) = 4;
    if ( v30 )
      v31 = NiNode::NiNode(v30, 0);
    else
      v31 = 0;
    LOBYTE(ArgList[1]) = 1;
    ArgList[0] = (unsigned int)&v64;
    *(_DWORD *)&v49.m_dataLen = 0xA;
    *(float *)&v49.m_data = v58;
    *(this + 9) = (unsigned int)v31;
    LOBYTE(v84) = 0;
    v32 = (float *)sub_576670(
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
    *(this + 0x11) = *((_DWORD *)v32 + 0x15);
    *(this + 0x12) = *((_DWORD *)v32 + 0x16);
    v33 = *((_DWORD *)v32 + 0x17);
    ArgList[1] = 0xFAB;
    *(this + 0x13) = v33;
    v34 = Tile_GetFloat(this, ArgList[1]) * dbl_A68FD0;
    ArgList[1] = 0;
    ArgList[0] = (unsigned int)v32;
    v58 = v34;
    v69 = Float;
    v35 = v58;
    v32[0x15] = Float;
    v70 = v35;
    v36 = v63;
    v32[0x16] = v70;
    v71 = v36;
    v32[0x17] = v71;
    (*(void (__thiscall **)(_DWORD, unsigned int, unsigned int))(*(_DWORD *)*(this + 9) + 0x84))(
      *(this + 9),
      ArgList[0],
      ArgList[1]);
  }
  *(float *)&ArgList[1] = (float)v53;
  Tile_SetFloat((Tile *)this, (_DWORD *)0xFCB, *(float *)&ArgList[1]);
  *(float *)&ArgList[1] = (float)v56;
  Tile_SetFloat((Tile *)this, (_DWORD *)0xFCA, *(float *)&ArgList[1]);
  *(this + 0xB) |= 1u;
  if ( Tile_GetFloat(this, 0xFC8) == fConstant_2 )
    *(this + 0xB) |= 0x200u;
  v41 = v59;
  if ( !v59 )
  {
    v59 = InterfaceManager_GetSingleton(0, 1)->unk054[0];
    v41 = v59;
  }
  ((void (__thiscall *)(NiNode *, _DWORD, int))v41->vtbl->AddObject)(v41, *(this + 9), 1);
  v42 = Tile_GetFloat(this, 0xFA1) == fConstant_1;
  v43 = *(this + 9);
  if ( v42 )
    *(_WORD *)(v43 + 0x18) |= 1u;
  else
    *(_WORD *)(v43 + 0x18) &= ~1u;
  NiNode_UpdateDynamicEffectState((NiNode *)*(this + 9));
  NiAVObject_InitializePropertyState((NiAVObject *)*(this + 9));
  v44 = InterfaceManager_GetSingleton(0, 1);
  *(_DWORD *)&v49.m_dataLen = 0x14;
  LOBYTE(v44->unk07C) = 1;
  v45 = (Tile::Extra *)FormHeapAlloc(*(unsigned int *)&v49.m_dataLen);
  v57 = (BSStringT *)v45;
  LOBYTE(v84) = 5;
  if ( v45 )
    v46 = (unsigned int *)Tile::Extra::Extra(v45, (unsigned int)this, *(this + 9));
  else
    v46 = 0;
  v47 = (const void **)*(this + 9);
  LOBYTE(v84) = 0;
  NiNode_AddNiExtraData(v47, 0, v46);
  v48 = *(this + 9);
  FormHeapFree((unsigned int)v54.m_data);
  return v48;
}
