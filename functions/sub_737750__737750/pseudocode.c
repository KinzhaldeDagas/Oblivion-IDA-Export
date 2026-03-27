char *__thiscall sub_737750(char *this)
{
  *(_DWORD *)this = &NiImageReader::`vftable';
  *((_DWORD *)this + 0x3E) = 0;
  *((_DWORD *)this + 0x3F) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 4);
  *(_DWORD *)this = &NiBMPReader::`vftable';
  InitSurfacEData((NiSurfaceData *)(this + 0x108));
  *((_DWORD *)this + 0x40) = 0;
  *((_DWORD *)this + 0x41) = 0;
  qmemcpy(this + 0x108, &unk_B25E48, 0x44u);
  *((_WORD *)this + 0xA6) = 0;
  *((_DWORD *)this + 0x54) = 0;
  *((_DWORD *)this + 0x55) = 0;
  *(this + 0x158) = 0;
  *(this + 0x159) = 0;
  return this;
}
