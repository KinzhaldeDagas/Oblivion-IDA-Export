char *__thiscall sub_735990(char *this)
{
  *(_DWORD *)this = &NiImageReader::`vftable'; /*0x7359c1*/
  *((_DWORD *)this + 0x3E) = 0; /*0x7359cb*/
  *((_DWORD *)this + 0x3F) = 0; /*0x7359ce*/
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 4); /*0x7359d1*/
  *(_DWORD *)this = &NiSGIReader::`vftable'; /*0x7359e3*/
  InitSurfacEData((NiSurfaceData *)(this + 0x108)); /*0x7359ea*/
  *((_WORD *)this + 0x80) = 0; /*0x7359f9*/
  *((_WORD *)this + 0x81) = 0; /*0x735a00*/
  *((_WORD *)this + 0x82) = 0; /*0x735a07*/
  *(this + 0x106) = 0; /*0x735a0e*/
  *(this + 0x107) = 0; /*0x735a14*/
  qmemcpy(this + 0x108, &unk_B25E48, 0x44u); /*0x735a1a*/
  return this; /*0x735a1e*/
}
