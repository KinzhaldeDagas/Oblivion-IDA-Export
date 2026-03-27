float *__thiscall sub_6C37D0(float *this, char a2, float a3, int a4)
{
  unsigned __int8 v5; // al
  int v6; // ebp
  void *v7; // eax
  void *v8; // edi

  sub_6CCE40(this, a2, a3, a4);
  *(_DWORD *)this = &NiBlendAccumTransformInterpolator::`vftable';
  *((_DWORD *)this + 0xC) = dword_B24260;
  *((_DWORD *)this + 0xD) = dword_B24264;
  *((_DWORD *)this + 0xE) = dword_B24268;
  *((_DWORD *)this + 0xF) = dword_B3CBA4;
  *((_DWORD *)this + 0x10) = dword_B3CBA8;
  *((_DWORD *)this + 0x11) = dword_B3CBAC;
  *((_DWORD *)this + 0x12) = dword_B3CBB0;
  *(this + 0x13) = flt_A79E10;
  v5 = *((_BYTE *)this + 0xD);
  *(this + 0x14) = 0.0;
  *((_BYTE *)this + 0x54) = 0;
  if ( v5 )
  {
    v6 = v5;
    v7 = (void *)FormHeapAlloc((0x68 * (unsigned __int64)v5) >> 0x20 != 0 ? 0xFFFFFFFF : 0x68 * v5);
    v8 = v7;
    if ( v7 )
      sub_401080(v7, 0x68, v6, (void *(__thiscall *)(void *))sub_6C3730);
    else
      v8 = 0;
    *((_DWORD *)this + 0x14) = v8;
  }
  return this;
}
