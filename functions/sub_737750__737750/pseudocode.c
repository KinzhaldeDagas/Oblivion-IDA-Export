char *__thiscall sub_737750(char *this)
{
  *(_DWORD *)this = &NiImageReader::`vftable'; /*0x737781*/
  *((_DWORD *)this + 0x3E) = 0; /*0x73778b*/
  *((_DWORD *)this + 0x3F) = 0; /*0x73778e*/
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 4); /*0x737791*/
  *(_DWORD *)this = &NiBMPReader::`vftable'; /*0x7377a3*/
  InitSurfacEData((NiSurfaceData *)(this + 0x108)); /*0x7377aa*/
  *((_DWORD *)this + 0x40) = 0; /*0x7377b9*/
  *((_DWORD *)this + 0x41) = 0; /*0x7377bf*/
  qmemcpy(this + 0x108, &unk_B25E48, 0x44u); /*0x7377c5*/
  *((_WORD *)this + 0xA6) = 0; /*0x7377c7*/
  *((_DWORD *)this + 0x54) = 0; /*0x7377ce*/
  *((_DWORD *)this + 0x55) = 0; /*0x7377d4*/
  *(this + 0x158) = 0; /*0x7377da*/
  *(this + 0x159) = 0; /*0x7377e0*/
  return this; /*0x7377e8*/
}
