NiPathInterpolator *__thiscall NiPathInterpolator::NiPathInterpolator(NiPathInterpolator *this, int a2, int a3)
{
  void (__stdcall *v4)(volatile LONG *); // edi
  int v5; // eax
  double v6; // st7

  sub_6EC220((NiObject *)this); /*0x6dc1f6*/
  v4 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x6dc1ff*/
  *(_DWORD *)this = &NiPathInterpolator::`vftable'; /*0x6dc209*/
  *((_DWORD *)this + 6) = a2; /*0x6dc20f*/
  if ( a2 ) /*0x6dc212*/
    v4((volatile LONG *)(a2 + 4)); /*0x6dc218*/
  *((_DWORD *)this + 7) = a3; /*0x6dc220*/
  if ( a3 ) /*0x6dc223*/
    v4((volatile LONG *)(a3 + 4)); /*0x6dc229*/
  *((float *)this + 0xF) = flt_B3EBA0[0]; /*0x6dc232*/
  *((float *)this + 0x10) = flt_B3EBA0[1]; /*0x6dc23b*/
  *((float *)this + 0x11) = flt_B3EBA0[2]; /*0x6dc244*/
  *((float *)this + 0x12) = flt_B3EBA0[3]; /*0x6dc24c*/
  *((_DWORD *)this + 0x13) = dword_B24FC8; /*0x6dc255*/
  *((_DWORD *)this + 0x14) = dword_B24FCC; /*0x6dc25e*/
  v5 = dword_B24FD0; /*0x6dc261*/
  *((float *)this + 0xA) = 0.0; /*0x6dc266*/
  *((float *)this + 0xB) = 0.0; /*0x6dc269*/
  *((_DWORD *)this + 0x15) = v5; /*0x6dc26c*/
  *((float *)this + 0xD) = 0.0; /*0x6dc26f*/
  *((_DWORD *)this + 4) = 0; /*0x6dc272*/
  v6 = kTerrainLODQuadRayDirectionZ; /*0x6dc275*/
  *((_DWORD *)this + 5) = 0; /*0x6dc27b*/
  *((float *)this + 9) = v6; /*0x6dc27e*/
  *((_DWORD *)this + 0xE) = 1; /*0x6dc281*/
  *((_WORD *)this + 0x18) = 0; /*0x6dc288*/
  *((_DWORD *)this + 8) = 0; /*0x6dc28c*/
  *((_WORD *)this + 6) = 3; /*0x6dc28f*/
  *((float *)this + 0x16) = -flt_A7DEB4; /*0x6dc29f*/
  return this; /*0x6dc2a2*/
}
