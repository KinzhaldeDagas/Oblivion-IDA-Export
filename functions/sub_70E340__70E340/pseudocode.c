_BYTE *__thiscall sub_70E340(_BYTE *this)
{
  NiObject_constr((NiObject *)this);
  *(_DWORD *)this = &NiPixelData::`vftable';
  InitSurfacEData((NiSurfaceData *)(this + 8));
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x16) = 0;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0x19) = 0;
  *((_DWORD *)this + 0x1A) = 1;
  return this;
}
