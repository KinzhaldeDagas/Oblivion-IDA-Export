int __thiscall sub_80F280(Ni2DBuffer **this, _DWORD *a2, int a3, int a4, NiRenderedTexture *a5, int a6, int a7, int a8)
{
  int pixelLayout; // edi
  BOOL v11; // eax
  _DWORD *v12; // ebp
  BOOL v13; // ebp
  const char *m_pcName; // eax
  int v16; // eax
  int v17; // ecx
  unsigned __int16 v18; // ax
  int *v19; // eax
  unsigned __int16 v20; // ax
  Ni2DBuffer *v21; // eax
  unsigned __int16 v22; // si
  int v23; // ebx
  int v24; // edi
  _DWORD **v25; // esi
  int v26; // edi
  int v27; // edi
  int v28; // edi
  int v29; // edi
  char v30; // [esp+1Bh] [ebp-3Dh]
  _DWORD *v31; // [esp+1Ch] [ebp-3Ch]
  int v32; // [esp+20h] [ebp-38h]
  int v33; // [esp+24h] [ebp-34h]
  bool v34; // [esp+68h] [ebp+10h]

  ((void (__thiscall *)(Ni2DBuffer **))(*this)[6].members.width)(this);
  v32 = dword_B42E90;
  pixelLayout = a5->member.super.formatPrefs.pixelLayout;
  v30 = 0;
  v11 = pixelLayout
     && (*(int (__thiscall **)(int))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) >= 1
     && (*(int (__thiscall **)(int))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) <= 0xA;
  v31 = v11 ? (_DWORD *)pixelLayout : 0;
  v12 = 0;
  if ( v31 )
  {
    v13 = pixelLayout
       && (*(int (__thiscall **)(int))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) >= 5
       && (*(int (__thiscall **)(int))(*(_DWORD *)pixelLayout + 0x54))(pixelLayout) <= 0xA;
    v12 = v13 ? (_DWORD *)pixelLayout : 0;
  }
  if ( !pixelLayout )
  {
    if ( dword_B42E8C )
      dword_B42E8C("Attempting to render geometry with a shader, but no shader property", 0);
    return 0;
  }
  m_pcName = a5->member.super.super.m_pcName;
  v34 = (*(_BYTE *)(pixelLayout + 0x1C) & 2) != 0;
  if ( m_pcName && (m_pcName[0x18] & 1) != 0 )
  {
    v33 = *(int *)(pixelLayout + 0x20);
    v16 = dword_B4649C;
    v17 = dword_B464A0;
    dword_B46498 = dword_B46498;
    dword_B4649C = v16;
    dword_B464A0 = v17;
    dword_B464A4 = v33;
    v30 = 1;
  }
  else
  {
    sub_7E2430(pixelLayout, 1.0);
  }
  if ( v31 )
  {
    if ( LOWORD(dword_B42EAC) == 1 )
    {
      v20 = sub_7ED5D0(v31);
      if ( v20 > 0xAu )
        v20 = 0xA;
      v19 = (int *)((char *)&unk_B2DD50 + 0x10 * v20);
      goto LABEL_30;
    }
    if ( LOWORD(dword_B42EAC) == 2 )
    {
      v18 = (*(int (__thiscall **)(_DWORD *, _DWORD *))(*v31 + 0x60))(v31, a2);
      if ( v18 > 0x10u )
        v18 = 0x10;
      v19 = (int *)((char *)&unk_B2DE00 + 0x10 * v18);
LABEL_30:
      sub_7ECAE0(0, *v19, v19[1], v19[2], v19[3]);
      sub_7ECAE0(0x19u, dword_B25AD0, dword_B25AD4, dword_B25AD8, dword_B25ADC);
    }
  }
  if ( v34 )
    v21 = *(this + 0x20);
  else
    v21 = *(this + 0x1F);
  NiSmartPointer_Set__(this + 9, v21);
  if ( v32 > 0x11B )
  {
    switch ( v32 )
    {
      case 0x122:
        sub_85E160(this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0x19;
        goto LABEL_67;
      case 0x129:
        sub_85E300(this, (int)a2, a3, (int)a5, v12, 0);
        goto LABEL_66;
      case 0x17A:
        sub_85E410(this, (int)a2, a3, (int)a5, (int)v12, 0);
LABEL_66:
        v22 = 0x1A;
        goto LABEL_67;
      case 0x194:
        sub_85C7D0(this, (int)a2, a3, (int)a5, (int)v12, 0);
        v22 = 9;
LABEL_67:
        v23 = v32;
        if ( (unsigned int)v32 <= 0x1A2 )
          goto LABEL_68;
        goto LABEL_80;
      default:
        return sub_7C9F30(this, a2, a3, a4, a5, a6, a7, a8);
    }
  }
  if ( v32 != 0x11B )
  {
    switch ( v32 )
    {
      case 0x18:
        sub_85BF40((unsigned int *)this, (int)a2, a3, (int)a5, (int)v12, 0);
        v22 = 0;
        goto LABEL_67;
      case 0x2F:
        sub_85BFD0(this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 1;
        goto LABEL_67;
      case 0x30:
        sub_85C110(this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 2;
        goto LABEL_67;
      case 0x33:
        sub_85C250(this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 3;
        goto LABEL_67;
      case 0x54:
        sub_85D380((unsigned int *)this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0xA;
        goto LABEL_67;
      case 0x5F:
        sub_85D500((unsigned int *)this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0xB;
        goto LABEL_67;
      case 0x6A:
        sub_85D720((unsigned int *)this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0xC;
        goto LABEL_67;
      case 0x75:
        sub_85D8A0((unsigned int *)this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0xD;
        goto LABEL_67;
      case 0x82:
        sub_85C870((unsigned int *)this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0xE;
        goto LABEL_67;
      case 0x90:
        sub_85CA00((unsigned int *)this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0xF;
        goto LABEL_67;
      case 0x9D:
        sub_85CC20((unsigned int *)this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0x10;
        goto LABEL_67;
      case 0xAA:
        sub_85CDB0((unsigned int *)this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0x11;
        goto LABEL_67;
      case 0xB8:
        sub_85CFD0((unsigned int *)this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0x12;
        goto LABEL_67;
      case 0xC5:
        sub_85D160((unsigned int *)this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0x13;
        goto LABEL_67;
      case 0xD2:
        sub_85DAC0((unsigned int *)this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0x14;
        goto LABEL_67;
      case 0xDF:
        sub_85DC50((unsigned int *)this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0x15;
        goto LABEL_67;
      case 0xE6:
        sub_85C370(this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 4;
        goto LABEL_67;
      case 0xE7:
        sub_85C450(this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 5;
        goto LABEL_67;
      case 0xEE:
        sub_85DE70(this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0x16;
        goto LABEL_67;
      case 0xFC:
        sub_85DF60(this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 0x17;
        goto LABEL_67;
      case 0x10B:
        sub_85C530(this, (int)a2, a3, (int)a5, (int)v12, 0);
        v22 = 6;
        goto LABEL_67;
      case 0x113:
        sub_85C610(this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 7;
        goto LABEL_67;
      case 0x114:
        sub_85C6F0(this, (int)a2, a3, (int)a5, v12, 0);
        v22 = 8;
        goto LABEL_67;
      default:
        return sub_7C9F30(this, a2, a3, a4, a5, a6, a7, a8);
    }
  }
  sub_85E050(this, (int)a2, a3, (int)a5, v12, 0);
  v23 = 0x11B;
  v22 = 0x18;
LABEL_68:
  sub_76C730(*(_DWORD **)(4 * v22 + 0xB47790), 0x1C, 0, 0);
  if ( (unsigned int)(v23 - 0x10F) > 0x1A )
  {
    if ( v23 == 0x19E || v23 == 0x19F || v23 == 0xA || v23 == 0xB )
    {
      sub_76C730(*(_DWORD **)(4 * v22 + 0xB47790), 0xA8, 8, 0);
    }
    else if ( v23 )
    {
      if ( v23 == 1 )
        sub_76C730((_DWORD *)dword_B477D8, 0xA8, 0, 0);
      else
        sub_76C730(*(_DWORD **)(4 * v22 + 0xB47790), 0xA8, 7, 0);
    }
    else
    {
      sub_76C730((_DWORD *)dword_B477D0, 0xA8, 0, 0);
    }
  }
  else
  {
    sub_76C730(*(_DWORD **)(4 * v22 + 0xB47790), 0xA8, 0xF, 0);
  }
LABEL_80:
  v24 = *(_DWORD *)(4 * v22 + 0xB47790);
  v25 = (_DWORD **)(4 * v22 + 0xB47790);
  if ( LOWORD(dword_B42EAC) == 4 )
  {
    if ( !*(_DWORD *)(v24 + 0x30) )
      *(_DWORD *)(v24 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v24 + 0x30), 0x34, 1, 0);
    v26 = (int)*v25;
    if ( !(*v25)[0xC] )
      *(_DWORD *)(v26 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v26 + 0x30), 0x38, 8, 0);
    v27 = (int)*v25;
    if ( !(*v25)[0xC] )
      *(_DWORD *)(v27 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v27 + 0x30), 0x37, 7, 0);
    v28 = (int)*v25;
    if ( !(*v25)[0xC] )
      *(_DWORD *)(v28 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v28 + 0x30), 0x35, 1, 0);
    v29 = (int)*v25;
    if ( !(*v25)[0xC] )
      *(_DWORD *)(v29 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v29 + 0x30), 0x36, 1, 0);
  }
  else
  {
    if ( !*(_DWORD *)(v24 + 0x30) )
      *(_DWORD *)(v24 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v24 + 0x30), 0x34, 0, 0);
  }
  if ( (unsigned int)(v23 - 0x33) > 0x161 )
  {
    if ( (unsigned int)(v23 - 2) <= 0xDC )
      sub_76C730(*v25, 0x1B, v30 != 0, 0);
  }
  else if ( dword_B42EB8 && *(_BYTE *)(dword_B42EB8 + 6) )
  {
    sub_76C730(*v25, 0x1B, v30 != 0, 0);
    sub_76C730(*v25, 0x17, 4, 0);
    sub_76C730(*v25, 0xE, 1, 0);
  }
  else
  {
    sub_76C730(*v25, 0x1B, 1, 0);
    sub_76C730(*v25, 0x17, 3, 0);
    sub_76C730(*v25, 0xE, 0, 0);
  }
  if ( dword_B42EB8 )
  {
    if ( !*(_BYTE *)(dword_B42EB8 + 7) )
      flt_B4668C = 0.0;
  }
  return 0;
}
