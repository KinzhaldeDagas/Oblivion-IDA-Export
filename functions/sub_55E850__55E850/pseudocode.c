float *__thiscall sub_55E850(float *this)
{
  NiObjectNET *v2; // eax
  NiObjectNET *v3; // edi
  NiObjectNET *v4; // ebp
  NiObjectNET *v5; // edi
  NiMaterialProperty *v6; // eax
  NiMaterialProperty *v7; // ebp
  volatile LONG *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  NiObjectNET *v12; // eax
  NiObjectNET *v13; // edi
  NiObjectNET *v14; // ebp
  NiObjectNET *v15; // eax
  NiObjectNET *v16; // edi
  NiObjectNET *v17; // ebp
  unsigned int *v18; // eax
  unsigned int *v19; // ebp
  int v20; // edi
  double v21; // st7
  _DWORD *v22; // eax
  _DWORD *v23; // eax

  *(this + 1) = 0.0;
  *(this + 2) = 0.0;
  *(this + 3) = 0.0;
  *(this + 4) = 0.0;
  *(this + 5) = 0.0;
  *(this + 6) = 0.0;
  *(this + 7) = 0.0;
  *this = 0.0;
  *((_BYTE *)this + 0x21) = 1;
  *((_BYTE *)this + 0x20) = 1;
  *((_BYTE *)this + 0x22) = 0;
  *((_BYTE *)this + 0x23) = byte_B125F0;
  v2 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v3 = v2;
  if ( v2 )
  {
    NiObjectNET::NiObjectNET(v2);
    v3->vtbl = (NiObjectVtbl **)&NiZBufferProperty::`vftable';
    LOWORD(v3[1].vtbl) = 0xF;
    v4 = v3;
  }
  else
  {
    v4 = 0;
  }
  v5 = *((NiObjectNET **)this + 2);
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v5->members) )
        (*(void (__thiscall **)(NiObjectNET *, int))v5->vtbl)(v5, 1);
    }
    *((_DWORD *)this + 2) = v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)&v4->members);
  }
  *(_WORD *)(*((_DWORD *)this + 2) + 0x18) |= 1u;
  *(_WORD *)(*((_DWORD *)this + 2) + 0x18) |= 2u;
  *(_WORD *)(*((_DWORD *)this + 2) + 0x18) = *(_WORD *)(*((_DWORD *)this + 2) + 0x18) & 0xFFC3 | 0xC;
  v6 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
  if ( v6 )
    v7 = NiMaterialProperty::NiMaterialProperty(v6);
  else
    v7 = 0;
  v8 = *((volatile LONG **)this + 3);
  if ( v8 != (volatile LONG *)v7 )
  {
    if ( v8 )
    {
      if ( !InterlockedDecrement(v8 + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))v8)(v8, 1);
    }
    *((_DWORD *)this + 3) = v7;
    if ( v7 )
      InterlockedIncrement((volatile LONG *)v7 + 1);
  }
  v9 = *((_DWORD *)this + 3);
  *(float *)(v9 + 0x28) = 1.0;
  *(float *)(v9 + 0x2C) = 1.0;
  *(float *)(v9 + 0x30) = 1.0;
  ++*(_DWORD *)(v9 + 0x54);
  v10 = *((_DWORD *)this + 3);
  ++*(_DWORD *)(v10 + 0x54);
  *(float *)(v10 + 0x1C) = 1.0;
  *(float *)(v10 + 0x20) = 1.0;
  *(float *)(v10 + 0x24) = 1.0;
  v11 = *((_DWORD *)this + 3);
  ++*(_DWORD *)(v11 + 0x54);
  *(float *)(v11 + 0x40) = 1.0;
  *(float *)(v11 + 0x44) = 1.0;
  *(float *)(v11 + 0x48) = 1.0;
  v12 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v13 = v12;
  if ( v12 )
  {
    NiObjectNET::NiObjectNET(v12);
    v13->vtbl = (NiObjectVtbl **)&NiVertexColorProperty::`vftable';
    LOWORD(v13[1].vtbl) = 8;
  }
  else
  {
    v13 = 0;
  }
  v14 = *((NiObjectNET **)this + 4);
  if ( v14 != v13 )
  {
    if ( v14 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v14->members) )
        (*(void (__thiscall **)(NiObjectNET *, int))v14->vtbl)(v14, 1);
    }
    *((_DWORD *)this + 4) = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)&v13->members);
  }
  *(_WORD *)(*((_DWORD *)this + 4) + 0x18) &= 0xFFCFu;
  *(_WORD *)(*((_DWORD *)this + 4) + 0x18) |= 8u;
  v15 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v16 = v15;
  if ( v15 )
  {
    NiObjectNET::NiObjectNET(v15);
    v16->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable';
    LOWORD(v16[1].vtbl) = 0xEC;
    BYTE2(v16[1].vtbl) = 0;
  }
  else
  {
    v16 = 0;
  }
  v17 = *((NiObjectNET **)this + 5);
  if ( v17 != v16 )
  {
    if ( v17 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v17->members) )
        (*(void (__thiscall **)(NiObjectNET *, int))v17->vtbl)(v17, 1);
    }
    *((_DWORD *)this + 5) = v16;
    if ( v16 )
      InterlockedIncrement((volatile LONG *)&v16->members);
  }
  *(_WORD *)(*((_DWORD *)this + 5) + 0x18) |= 0x200u;
  *(_WORD *)(*((_DWORD *)this + 5) + 0x18) = *(_WORD *)(*((_DWORD *)this + 5) + 0x18) & 0xE3FF | 0x1000;
  *(_BYTE *)(*((_DWORD *)this + 5) + 0x1A) = 0x54;
  *(_WORD *)(*((_DWORD *)this + 5) + 0x18) &= ~1u;
  v18 = (unsigned int *)FormHeapAlloc(0x10u);
  if ( v18 )
    v19 = sub_6FA890(v18, 3u);
  else
    v19 = 0;
  v20 = *((_DWORD *)this + 6);
  if ( (unsigned int *)v20 != v19 )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
        (**(void (__thiscall ***)(int, int))v20)(v20, 1);
    }
    *((_DWORD *)this + 6) = v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)v19 + 1);
  }
  sub_78BD80(4u);
  sub_7871C0(1);
  sub_787690(1);
  v21 = (double)dword_B12630;
  if ( dword_B12630 < 0 )
    v21 = v21 + flt_A2FC78;
  flt_B44F04 = v21;
  v22 = (_DWORD *)FormHeapAlloc(0x1Cu);
  if ( v22 )
    v23 = sub_55E720(v22, 2u, 0x25, 0xC);
  else
    v23 = 0;
  *((_DWORD *)this + 9) = v23;
  return this;
}
