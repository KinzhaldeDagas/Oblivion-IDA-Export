NiPathInterpolator *__thiscall NiPathInterpolator::NiPathInterpolator(NiPathInterpolator *this, int a2, int a3)
{
  void (__stdcall *v4)(volatile LONG *); // edi
  int v5; // eax
  double v6; // st7

  sub_6EC220((float *)this);
  v4 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
  *(_DWORD *)this = &NiPathInterpolator::`vftable';
  *((_DWORD *)this + 6) = a2;
  if ( a2 )
    v4((volatile LONG *)(a2 + 4));
  *((_DWORD *)this + 7) = a3;
  if ( a3 )
    v4((volatile LONG *)(a3 + 4));
  *((_DWORD *)this + 0xF) = dword_B3EBA0;
  *((_DWORD *)this + 0x10) = dword_B3EBA4;
  *((_DWORD *)this + 0x11) = dword_B3EBA8;
  *((_DWORD *)this + 0x12) = dword_B3EBAC;
  *((_DWORD *)this + 0x13) = dword_B24FC8;
  *((_DWORD *)this + 0x14) = dword_B24FCC;
  v5 = dword_B24FD0;
  *((float *)this + 0xA) = 0.0;
  *((float *)this + 0xB) = 0.0;
  *((_DWORD *)this + 0x15) = v5;
  *((float *)this + 0xD) = 0.0;
  *((_DWORD *)this + 4) = 0;
  v6 = flt_A30634;
  *((_DWORD *)this + 5) = 0;
  *((float *)this + 9) = v6;
  *((_DWORD *)this + 0xE) = 1;
  *((_WORD *)this + 0x18) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_WORD *)this + 6) = 3;
  *((float *)this + 0x16) = -flt_A7DEB4;
  return this;
}
