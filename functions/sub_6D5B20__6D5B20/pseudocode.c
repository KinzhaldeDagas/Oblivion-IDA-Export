float *__thiscall sub_6D5B20(float *this, int a2)
{
  sub_6EC220(this);
  *(_DWORD *)this = &NiTransformInterpolator::`vftable';
  *((_DWORD *)this + 3) = dword_B24260;
  *((_DWORD *)this + 4) = dword_B24264;
  *((_DWORD *)this + 5) = dword_B24268;
  *((_DWORD *)this + 6) = dword_B3CBA4;
  *((_DWORD *)this + 7) = dword_B3CBA8;
  *((_DWORD *)this + 8) = dword_B3CBAC;
  *((_DWORD *)this + 9) = dword_B3CBB0;
  *(this + 0xA) = flt_A79E10;
  *((_DWORD *)this + 0xB) = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  *((_WORD *)this + 0x18) = 0;
  *((_WORD *)this + 0x19) = 0;
  *((_WORD *)this + 0x1A) = 0;
  return this;
}
