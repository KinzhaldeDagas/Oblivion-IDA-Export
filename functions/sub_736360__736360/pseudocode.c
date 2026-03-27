char *__thiscall sub_736360(char *this)
{
  *(_DWORD *)this = &NiImageReader::`vftable';
  *((_DWORD *)this + 0x3E) = 0;
  *((_DWORD *)this + 0x3F) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 4);
  *(_DWORD *)this = &NiDDSReader::`vftable';
  InitSurfacEData((NiSurfaceData *)this + 4);
  *((_DWORD *)this + 0x40) = 0;
  *((_DWORD *)this + 0x41) = 0;
  qmemcpy(this + 0x110, &unk_B25FB0, 0x44u);
  return this;
}
