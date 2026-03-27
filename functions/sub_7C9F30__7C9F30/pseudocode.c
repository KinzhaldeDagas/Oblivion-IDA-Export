int __thiscall sub_7C9F30(Ni2DBuffer **this, _DWORD *a2, int a3, int a4, NiRenderedTexture *a5, int a6, int a7, int a8)
{
  PixelLayout pixelLayout; // ebp
  BOOL v11; // eax
  int v12; // ebx
  BOOL v13; // ebx
  int v14; // eax
  const char *m_pcName; // ecx
  double v16; // st7
  int v17; // eax
  int v18; // ecx
  unsigned __int16 v19; // ax
  int *v20; // eax
  unsigned __int16 v21; // ax
  Ni2DBuffer *v22; // eax
  float v24; // [esp+0h] [ebp-74h]
  char v25; // [esp+1Ah] [ebp-5Ah]
  char v26; // [esp+1Bh] [ebp-59h]
  int v27; // [esp+1Ch] [ebp-58h]
  int v28; // [esp+20h] [ebp-54h]
  bool v29; // [esp+84h] [ebp+10h]

  ((void (__thiscall *)(Ni2DBuffer **))(*this)[6].members.width)(this);
  v27 = dword_B42E90;
  pixelLayout = a5->member.super.formatPrefs.pixelLayout;
  v26 = 0;
  v25 = 0;
  v11 = pixelLayout
     && (*(int (__thiscall **)(PixelLayout))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) >= 1
     && (*(int (__thiscall **)(PixelLayout))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) <= 0xA;
  v12 = 0;
  if ( (v11 ? pixelLayout : 0) != kPixelLayout_Palettized8 )
  {
    v13 = pixelLayout
       && (*(int (__thiscall **)(PixelLayout))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) >= 5
       && (*(int (__thiscall **)(PixelLayout))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) <= 0xA;
    v12 = v13 ? pixelLayout : 0;
  }
  if ( pixelLayout == kPixelLayout_Palettized8 )
  {
    if ( dword_B42E8C )
      dword_B42E8C("Attempting to render geometry with a shader, but no shader property", 0);
    return 0;
  }
  sub_7C87C0(v12, (int)a5->member.super.super.m_extraDataList, v27);
  v14 = *(_DWORD *)(pixelLayout + 0x1C);
  m_pcName = a5->member.super.super.m_pcName;
  v29 = (v14 & 2) != 0;
  if ( m_pcName )
  {
    if ( (*((_WORD *)m_pcName + 0xC) & 0x200) != 0 )
      v25 = 1;
    v16 = 1.0;
    if ( *(float *)(pixelLayout + 0x20) < 1.0 || (m_pcName[0x18] & 1) != 0 && (v14 & 0x100) != 0 )
    {
      v26 = 1;
      goto LABEL_25;
    }
  }
  else
  {
    v16 = 1.0;
  }
  v24 = v16;
  sub_7E2430(pixelLayout, v24);
LABEL_25:
  v28 = *(int *)(pixelLayout + 0x20);
  v17 = dword_B4649C;
  v18 = dword_B464A0;
  dword_B46498 = dword_B46498;
  dword_B4649C = v17;
  dword_B464A0 = v18;
  dword_B464A4 = v28;
  if ( v12 )
  {
    if ( LOWORD(dword_B42EAC) == 1 )
    {
      v21 = sub_7ED5D0((_DWORD *)v12);
      if ( v21 > 0xAu )
        v21 = 0xA;
      v20 = (int *)((char *)&unk_B2DD50 + 0x10 * v21);
      goto LABEL_34;
    }
    if ( LOWORD(dword_B42EAC) == 2 )
    {
      v19 = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v12 + 0x60))(v12, a2);
      if ( v19 > 0x10u )
        v19 = 0x10;
      v20 = (int *)((char *)&unk_B2DE00 + 0x10 * v19);
LABEL_34:
      sub_7ECAE0(0, *v20, v20[1], v20[2], v20[3]);
      sub_7ECAE0(0x19u, dword_B25AD0, dword_B25AD4, dword_B25AD8, dword_B25ADC);
    }
  }
  if ( v29 )
  {
    v22 = *(this + 0x20);
  }
  else if ( v12 && (*(_DWORD *)(v12 + 0x1C) & 0x1000) != 0 )
  {
    v22 = *(this + 0x21);
  }
  else if ( v27 == 0x48 || v27 == 0x49 || v27 >= 0x168 && v27 <= 0x175 )
  {
    v22 = *(this + 0x22);
  }
  else
  {
    v22 = *(this + 0x1F);
  }
  NiSmartPointer_Set__(this + 9, v22);
  if ( byte_B42E86 )
    sub_7ECAE0(0, COERCE_INT(1.0), COERCE_INT(1.0), COERCE_INT(1.0), COERCE_INT(1.0));
  switch ( v27 )
  {
    case 0:
      sub_852030(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 2:
      sub_8520C0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 3:
      sub_8490F0((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, (NiD3DPass *)v12);
      goto LABEL_251;
    case 6:
      sub_8480C0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 7:
      sub_848190(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 8:
      sub_848270(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 9:
      sub_848300(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0xA:
      sub_850B50(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0xB:
      sub_850BE0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x10:
      sub_849220(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x11:
      sub_8492B0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x12:
      sub_849440(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x13:
      sub_849550(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x14:
      sub_8496E0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x15:
      sub_849770(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x16:
      sub_849900(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x17:
      sub_849A10(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x19:
      sub_849BA0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x1A:
      sub_849D60(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x1B:
      sub_84A2E0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x1C:
      sub_84A510(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x1D:
      sub_84ABC0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x1E:
      sub_84AE80(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x1F:
      sub_84B040(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x20:
    case 0x21:
      sub_84B5C0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x22:
      sub_84B7F0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x23:
    case 0x2E:
    case 0x3D:
    case 0x47:
      nullsub_19((int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x24:
      sub_84C200(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x25:
      sub_84C3C0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x26:
    case 0x27:
      sub_84C940(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x28:
      sub_84CFF0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x29:
      sub_84D580(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x2A:
      sub_84D740(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x2B:
      sub_84DCC0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x2C:
      sub_84DEF0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x2D:
      sub_84E120(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x31:
      sub_84E860(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x32:
      sub_84E9E0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x34:
      sub_849F20(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x35:
      sub_84A100(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x36:
      sub_84A740(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x37:
      sub_84A980(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x38:
      sub_84B200(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x39:
      sub_84B3E0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x3A:
      sub_84BAB0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x3B:
      sub_84BD80(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x3C:
      sub_84BFC0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x3E:
      sub_84C580(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x3F:
      sub_84C760(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x40:
      sub_84CB70(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x41:
      sub_84CDB0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x42:
      sub_84D900(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x43:
      sub_84DAE0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x44:
      sub_84D2B0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x45:
      sub_84E3E0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x46:
      sub_84E620(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x48:
      sub_850C70(this, (int)a2, a3, (int)a5, (_DWORD *)v12, 1);
      goto LABEL_251;
    case 0x49:
      sub_846250(this, (int)a2, a3, (int)a5, (_DWORD *)v12, 1);
      goto LABEL_251;
    case 0x4A:
      sub_8419C0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x4B:
      sub_841B40((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x4F:
      sub_841D30((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x51:
      sub_841EB0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x55:
      sub_8420A0((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x56:
      sub_8422C0((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x5A:
      sub_842550((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x5C:
      sub_842770((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x60:
      sub_842A00((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x61:
      sub_842B80((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x65:
      sub_842D70((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x67:
      sub_842EF0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x6B:
      sub_8430E0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x6C:
      sub_843300((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x70:
      sub_843590((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x72:
      sub_8437B0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x76:
      sub_83AD30((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x77:
      sub_83AEB0((unsigned int *)this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x78:
      sub_83B0F0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x7C:
      sub_83B2E0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x7D:
      sub_83B4F0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x7E:
      sub_83B670((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x83:
      sub_83B860((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x84:
      sub_83BBF0((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x85:
      sub_83BE10((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x86:
      sub_83BFE0((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x8A:
      sub_83C270((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x8B:
      sub_83C520((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x8C:
      sub_83C740((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x91:
      sub_83C9D0((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x92:
      sub_83CC80((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x93:
      sub_83CE00((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x97:
      sub_83CFF0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x98:
      sub_83D200((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x99:
      sub_83D380((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x9E:
      sub_83D570((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x9F:
      sub_83D780((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xA0:
      sub_83D9A0((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xA4:
      sub_83DC30((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xA5:
      sub_83DEE0((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xA6:
      sub_83E100((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xAB:
      sub_83E390((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xAC:
      sub_83E640((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xAD:
      sub_83E7C0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xAE:
      sub_83E9B0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xB2:
      sub_83EBC0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xB3:
      sub_83ED40((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xB4:
      sub_83EF30((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xB9:
      sub_83F140((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xBA:
      sub_83F360((NiTArray_NiD3DPass *)this, (int)a2, a3, a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xBB:
      sub_83F5F0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xBF:
      sub_83F8A0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xC0:
      sub_83FAC0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xC1:
      sub_83FD50((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xC6:
      sub_840000((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xC7:
      sub_840180((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xC8:
      sub_840370((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xCC:
      sub_840580((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xCD:
      sub_840700((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xCE:
      sub_8408F0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xD3:
      sub_840B00((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xD4:
      sub_840D20((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xD5:
      sub_840FB0((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xD9:
      sub_841260((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xDA:
      sub_841480((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xDB:
      sub_841710((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xE2:
      sub_84EB60(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xE3:
      sub_84EC90(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xE4:
      sub_84EDC0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xE5:
      sub_84EEF0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xE8:
      sub_843A40(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xEB:
      sub_843B30(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xF6:
      sub_843C10(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0xF9:
      sub_843CF0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x104:
      sub_84F020(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x105:
      sub_84F120(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x106:
      sub_84F340(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x107:
      sub_84F4F0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x108:
      sub_84F5F0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x109:
      sub_84F6F0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x10A:
      sub_84F7F0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x10F:
      sub_84FA10(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x110:
      sub_84FB40(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x111:
      sub_84FC70(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x112:
      sub_84FDA0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x115:
      sub_843DD0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x116:
      sub_843ED0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x118:
      sub_843FD0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x119:
      sub_8440D0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x11C:
      sub_8441D0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x11D:
      sub_844370(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x11F:
      sub_844510(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x120:
      sub_8446B0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x123:
      sub_844850(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x124:
      sub_844950(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x126:
      sub_844A50(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x127:
      sub_844B50(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x160:
      sub_8483E0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x161:
      sub_8484C0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x162:
      sub_8485A0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x163:
      sub_848680(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x164:
      sub_848710(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x165:
      sub_8487A0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x166:
      sub_848830(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x167:
      sub_8488C0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x168:
      sub_8517F0(this, (int)a2, a3, (int)a5, (_DWORD *)v12, 1);
      goto LABEL_251;
    case 0x169:
      ((void (__thiscall *)(Ni2DBuffer **, _DWORD *, int, NiRenderedTexture *, int, int))loc_846C50)(
        this,
        a2,
        a3,
        a5,
        v12,
        1);
      goto LABEL_251;
    case 0x16A:
      sub_846DC0(this, (int)a2, a3, (int)a5, (_DWORD *)v12, 1);
      goto LABEL_251;
    case 0x16B:
      sub_8479E0((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, (_DWORD *)v12, (NiD3DPass *)1);
      goto LABEL_251;
    case 0x16C:
      sub_846F90(this, (int)a2, a3, (int)a5, (_DWORD *)v12, 1);
      goto LABEL_251;
    case 0x16D:
      sub_851250(this, (int)a2, a3, (int)a5, v12, 1);
      goto LABEL_251;
    case 0x16E:
      sub_850F60(this, (int)a2, a3, (int)a5, (_DWORD *)v12, 1);
      goto LABEL_251;
    case 0x16F:
      sub_846570(this, (int)a2, a3, (int)a5, (_DWORD *)v12, 1);
      goto LABEL_251;
    case 0x170:
      sub_851520(this, (int)a2, a3, (int)a5, v12, 1);
      goto LABEL_251;
    case 0x171:
      sub_8519B0(this, (int)a2, a3, (int)a5, (_DWORD *)v12, 1);
      goto LABEL_251;
    case 0x172:
      sub_847160(this, (int)a2, a3, (int)a5, (_DWORD *)v12, 1);
      goto LABEL_251;
    case 0x173:
      sub_847400(this, (int)a2, a3, (int)a5, (_DWORD *)v12, 1);
      goto LABEL_251;
    case 0x174:
      sub_8476F0(this, (int)a2, a3, (int)a5, (_DWORD *)v12, 1);
      goto LABEL_251;
    case 0x175:
      sub_847D50(this, (int)a2, a3, (int)a5, (_DWORD *)v12, 1);
      goto LABEL_251;
    case 0x176:
      sub_846890((NiTArray_NiD3DPass *)this, (int)a2, a3, (int)a5, (_DWORD *)v12, (NiD3DPass *)1);
      goto LABEL_251;
    case 0x177:
      sub_845CF0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x178:
      sub_845EC0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x179:
      sub_846090(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x17B:
      sub_83BA70((unsigned int *)this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x180:
      sub_84FED0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x181:
      sub_8500A0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x182:
      sub_850270(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x183:
      sub_850440(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x184:
      sub_844C50(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x185:
      sub_844E30(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x186:
      sub_845010(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x187:
      sub_8451B0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x18A:
      sub_8453F0(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x18B:
      sub_845870(this, (int)a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x18C:
      sub_851CA0(this, a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x18D:
      sub_851E70(this, a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x18E:
      sub_848950(this, a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x18F:
      sub_848AD0(this, a2, a3, (int)a5, (_DWORD *)v12);
      goto LABEL_251;
    case 0x190:
      sub_850610(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x191:
      sub_8506B0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x192:
      sub_8507A0(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x193:
      sub_850840(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x19E:
      sub_850930(this, (int)a2, a3, (int)a5, v12);
      goto LABEL_251;
    case 0x19F:
      sub_850A40(this, (int)a2, a3, (int)a5, v12);
LABEL_251:
      if ( (unsigned int)(v27 - 0x34) <= 0x160 && (v27 < 0x160 || v27 > 0x167) && (v27 < 0x18A || v27 > 0x18F) )
      {
        if ( sub_7C8510() )
        {
          if ( v26 || 1.0 != *(float *)(v12 + 0x20) )
          {
            sub_76C730(*(_DWORD **)(4 * v27 + 0xB455A0), 0x1B, 1, 0);
            (*((void (__thiscall **)(_DWORD, const char *))(*(this + 6))->__vftable + 2))(
              *(this + 6),
              a5->member.super.super.m_pcName);
            if ( v25 )
            {
              sub_76C730(*(_DWORD **)(4 * v27 + 0xB455A0), 0xF, 1, 0);
              sub_76C730(
                *(_DWORD **)(4 * v27 + 0xB455A0),
                0x18,
                *((unsigned __int8 *)a5->member.super.super.m_pcName + 0x1A),
                0);
              switch ( (*((unsigned __int16 *)a5->member.super.super.m_pcName + 0xC) >> 0xA) & 7 )
              {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
LABEL_270:
                  JUMPOUT(0x7CB41F);
                default:
LABEL_264:
                  JUMPOUT(0x7CB41A);
              }
            }
          }
          else
          {
            sub_76C730(*(_DWORD **)(4 * v27 + 0xB455A0), 0x1B, 0, 0);
            if ( v25 )
            {
              sub_76C730(*(_DWORD **)(4 * v27 + 0xB455A0), 0xF, 1, 0);
              sub_76C730(
                *(_DWORD **)(4 * v27 + 0xB455A0),
                0x18,
                *((unsigned __int8 *)a5->member.super.super.m_pcName + 0x1A),
                0);
              switch ( (*((unsigned __int16 *)a5->member.super.super.m_pcName + 0xC) >> 0xA) & 7 )
              {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                  goto LABEL_270;
                default:
                  goto LABEL_264;
              }
            }
          }
          JUMPOUT(0x7CB42B);
        }
        JUMPOUT(0x7CB44D);
      }
      JUMPOUT(0x7CB4A5);
    default:
      return 0;
  }
  return 0;
}
