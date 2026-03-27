int __thiscall sub_7FF080(_DWORD *this, float a2, signed int a3, int a4)
{
  float v5; // ebp
  NiD3DPass *v6; // edi
  Ni2DBuffer *v7; // eax
  int v8; // ecx
  int i; // eax
  int v10; // edx
  int v11; // ecx
  double v12; // st6
  double v13; // st5
  float v14; // eax
  double v15; // st7
  float v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v27; // [esp+14h] [ebp-2Ch]
  int v28; // [esp+1Ch] [ebp-24h]
  int v29; // [esp+24h] [ebp-1Ch]

  v5 = a2;
  *(float *)&v6 = COERCE_FLOAT(sub_862B40(a3, (_DWORD *)LODWORD(a2), 0));
  if ( (*(_BYTE *)(LODWORD(v5) + 0x1C) & 2) != 0 )
    v7 = (Ni2DBuffer *)*(this + 0x24);
  else
    v7 = (Ni2DBuffer *)*(this + 0x23);
  NiSmartPointer_Set__((Ni2DBuffer **)this + 9, v7);
  flt_B46FD8 = 0.0;
  flt_B46FDC = 0.0;
  *(_DWORD *)(*(this + 0x27) + 0x20) = 0xB;
  *(_BYTE *)(dword_B46C18 + 8) = 0;
  *(_BYTE *)(dword_B46C14 + 8) = 0;
  v8 = dword_B2DCFC;
  for ( i = 0; i < v8; ++i )
  {
    *(_BYTE *)(2 * i + 0xB4693A) = 0;
    *(_BYTE *)(2 * i + 0xB46939) = 0;
  }
  v10 = a4;
  BYTE1(dword_B46939) = 1;
  v11 = *(_DWORD *)(v10 + 0xC);
  if ( v11 )
  {
    a3 = *(signed int *)(v11 + 0x2C);
    a2 = *(float *)(v11 + 0x30);
    v12 = a2;
    v13 = *(float *)&a3;
    if ( a2 != 0.0 || 0.0 != v13 )
    {
      v27 = *(_DWORD *)(v11 + 0x20);
      v17 = *(_DWORD *)(v11 + 0x24);
      v18 = *(_DWORD *)(v11 + 0x28);
      a2 = v12 - v13;
      *(float *)&v29 = v12;
      v28 = v18;
      v19 = LODWORD(a2);
      dword_B46DB8 = v29;
      dword_B46DBC = v19;
      v15 = 1.0;
      *(float *)&dword_B46DC0 = 1.0;
      *(float *)&dword_B46DC4 = 0.0;
      dword_B46DC8 = v27;
      dword_B46DCC = v17;
      v20 = v28;
      *(float *)&v21 = 1.0;
      goto LABEL_13;
    }
    *(float *)&dword_B46DB8 = flt_A93350;
    *(float *)&dword_B46DBC = 0.0;
    v14 = 1.0;
    v15 = 1.0;
    v16 = 0.0;
  }
  else
  {
    *(float *)&dword_B46DB8 = flt_A93350;
    *(float *)&dword_B46DBC = 0.0;
    v14 = 1.0;
    v15 = 1.0;
    v16 = 0.0;
  }
  *(float *)&dword_B46DC4 = v16;
  v22 = dword_B25AD4;
  *(float *)&dword_B46DC0 = v14;
  v23 = dword_B25AD0;
  dword_B46DCC = v22;
  v21 = dword_B25ADC;
  dword_B46DC8 = v23;
  v20 = dword_B25AD8;
LABEL_13:
  dword_B46DD0 = v20;
  dword_B46DD4 = v21;
  v24 = *(_DWORD *)(v10 + 0x10);
  if ( v24 )
  {
    a2 = *(float *)(v24 + 0x50);
    if ( v15 > a2 )
      v15 = *(float *)(v24 + 0x50);
  }
  flt_B46FA8 = v15;
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xC) + 0x48))(*(this + 0xC));
  (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xB) + 0x48))(*(this + 0xB));
  if ( !v6->RenderStateGroup )
    v6->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
  sub_772CD0((_DWORD *)v6->RenderStateGroup, 0x1B, 0, 0);
  ++v6->RefCount;
  a2 = *(float *)&v6;
  sub_76CE40((NiTArray_NiD3DPass *)this + 4, (NiD3DPass *)*(this + 0xE), (NiD3DPass **)&a2);
  if ( v6->RefCount-- == 1 )
    sub_7604D0(v6);
  ++*(this + 0xE);
  return 0;
}
