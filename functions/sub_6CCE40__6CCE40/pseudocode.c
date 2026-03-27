float *__thiscall sub_6CCE40(float *this, char a2, float a3, unsigned __int8 a4)
{
  _DWORD *v5; // ebx
  double v6; // st7
  unsigned int v7; // ecx
  _DWORD *v8; // eax

  sub_6EBA00(this);
  *(this + 7) = a3;
  v5 = 0;
  *(this + 8) = flt_A79F00;
  *((_BYTE *)this + 0xC) = 0;
  *((_BYTE *)this + 0x10) = 0x80;
  *((_BYTE *)this + 0x11) = 0x80;
  *(_DWORD *)this = &NiBlendInterpolator::`vftable';
  *((_BYTE *)this + 0xD) = a4;
  *((_BYTE *)this + 0xE) = 0;
  *((_BYTE *)this + 0xF) = 0xFF;
  *(this + 5) = 0.0;
  *(this + 6) = 0.0;
  *(this + 9) = -flt_A7DEB4;
  *(this + 0xA) = -flt_A7DEB4;
  v6 = flt_A7DEB4;
  *((_BYTE *)this + 0xC) = a2 != 0;
  *(this + 0xB) = -v6;
  if ( a4 )
  {
    v7 = (0x18 * (unsigned __int64)a4) >> 0x20 != 0 ? 0xFFFFFFFF : 0x18 * a4;
    v8 = (_DWORD *)FormHeapAlloc(__CFADD__(v7, 4) ? 0xFFFFFFFF : v7 + 4);
    if ( v8 )
    {
      v5 = v8 + 1;
      *v8 = a4;
      ArrayConstructor(v8 + 1, 0x18u, a4, (int)sub_6CCDE0, (void (__thiscall *)(void *))sub_7016A0);
    }
    *((_DWORD *)this + 5) = v5;
  }
  return this;
}
