char *__thiscall sub_735990(char *this)
{
  *(_DWORD *)this = &NiImageReader::`vftable';
  *((_DWORD *)this + 0x3E) = 0;
  *((_DWORD *)this + 0x3F) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 4);
  *(_DWORD *)this = &NiSGIReader::`vftable';
  InitSurfacEData((NiSurfaceData *)(this + 0x108));
  *((_WORD *)this + 0x80) = 0;
  *((_WORD *)this + 0x81) = 0;
  *((_WORD *)this + 0x82) = 0;
  *(this + 0x106) = 0;
  *(this + 0x107) = 0;
  qmemcpy(this + 0x108, &unk_B25E48, 0x44u);
  return this;
}
