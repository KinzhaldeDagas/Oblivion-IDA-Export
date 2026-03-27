char *__thiscall sub_734B00(char *this)
{
  *(_DWORD *)this = &NiImageReader::`vftable';
  *((_DWORD *)this + 0x3E) = 0;
  *((_DWORD *)this + 0x3F) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 4);
  *(_DWORD *)this = &NiTGAReader::`vftable';
  InitSurfacEData((NiSurfaceData *)(this + 0x11C));
  *(this + 0x100) = 0;
  *(this + 0x101) = 0;
  *(this + 0x102) = 0;
  *((_WORD *)this + 0x82) = 0;
  *((_WORD *)this + 0x83) = 0;
  *(this + 0x108) = 0;
  *((_WORD *)this + 0x85) = 0;
  *((_WORD *)this + 0x86) = 0;
  *((_WORD *)this + 0x87) = 0;
  *((_WORD *)this + 0x88) = 0;
  *(this + 0x112) = 0;
  *(this + 0x113) = 0;
  *(this + 0x114) = 0;
  *(this + 0x115) = 0;
  *(this + 0x116) = 0;
  *(this + 0x117) = 0;
  *(this + 0x118) = 0;
  qmemcpy(this + 0x11C, &unk_B25E48, 0x44u);
  *((_DWORD *)this + 0x58) = 0;
  *((_DWORD *)this + 0x59) = 0;
  *((_DWORD *)this + 0x5A) = 0;
  *((_DWORD *)this + 0x5B) = 0;
  *((_DWORD *)this + 0x5C) = 0;
  *((_DWORD *)this + 0x5D) = 0;
  *(this + 0x178) = 0;
  *(this + 0x179) = 0;
  *(this + 0x17A) = 0;
  *(this + 0x17B) = 0;
  *(this + 0x17C) = 0;
  return this;
}
