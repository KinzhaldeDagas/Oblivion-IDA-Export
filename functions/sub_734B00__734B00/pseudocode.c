char *__thiscall sub_734B00(char *this)
{
  *(_DWORD *)this = &NiImageReader::`vftable'; /*0x734b31*/
  *((_DWORD *)this + 0x3E) = 0; /*0x734b3b*/
  *((_DWORD *)this + 0x3F) = 0; /*0x734b3e*/
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 4); /*0x734b41*/
  *(_DWORD *)this = &NiTGAReader::`vftable'; /*0x734b53*/
  InitSurfacEData((NiSurfaceData *)(this + 0x11C)); /*0x734b5a*/
  *(this + 0x100) = 0; /*0x734b69*/
  *(this + 0x101) = 0; /*0x734b6f*/
  *(this + 0x102) = 0; /*0x734b75*/
  *((_WORD *)this + 0x82) = 0; /*0x734b7b*/
  *((_WORD *)this + 0x83) = 0; /*0x734b82*/
  *(this + 0x108) = 0; /*0x734b89*/
  *((_WORD *)this + 0x85) = 0; /*0x734b8f*/
  *((_WORD *)this + 0x86) = 0; /*0x734b96*/
  *((_WORD *)this + 0x87) = 0; /*0x734b9d*/
  *((_WORD *)this + 0x88) = 0; /*0x734ba4*/
  *(this + 0x112) = 0; /*0x734bab*/
  *(this + 0x113) = 0; /*0x734bb1*/
  *(this + 0x114) = 0; /*0x734bb7*/
  *(this + 0x115) = 0; /*0x734bbd*/
  *(this + 0x116) = 0; /*0x734bc3*/
  *(this + 0x117) = 0; /*0x734bc9*/
  *(this + 0x118) = 0; /*0x734bcf*/
  qmemcpy(this + 0x11C, &unk_B25E48, 0x44u); /*0x734bd5*/
  *((_DWORD *)this + 0x58) = 0; /*0x734bd7*/
  *((_DWORD *)this + 0x59) = 0; /*0x734bdd*/
  *((_DWORD *)this + 0x5A) = 0; /*0x734be3*/
  *((_DWORD *)this + 0x5B) = 0; /*0x734be9*/
  *((_DWORD *)this + 0x5C) = 0; /*0x734bef*/
  *((_DWORD *)this + 0x5D) = 0; /*0x734bf5*/
  *(this + 0x178) = 0; /*0x734bfb*/
  *(this + 0x179) = 0; /*0x734c01*/
  *(this + 0x17A) = 0; /*0x734c07*/
  *(this + 0x17B) = 0; /*0x734c0d*/
  *(this + 0x17C) = 0; /*0x734c13*/
  return this; /*0x734c1b*/
}
