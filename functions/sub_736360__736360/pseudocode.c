char *__thiscall sub_736360(char *this)
{
  *(_DWORD *)this = &NiImageReader::`vftable'; /*0x736390*/
  *((_DWORD *)this + 0x3E) = 0; /*0x736399*/
  *((_DWORD *)this + 0x3F) = 0; /*0x73639c*/
  InitializeCriticalSection((LPCRITICAL_SECTION)this + 4); /*0x73639f*/
  *(_DWORD *)this = &NiDDSReader::`vftable'; /*0x7363b1*/
  InitSurfacEData((NiSurfaceData *)this + 4); /*0x7363b7*/
  *((_DWORD *)this + 0x40) = 0; /*0x7363bc*/
  *((_DWORD *)this + 0x41) = 0; /*0x7363c2*/
  qmemcpy(this + 0x110, &unk_B25FB0, 0x44u); /*0x7363d2*/
  return this; /*0x7363d6*/
}
