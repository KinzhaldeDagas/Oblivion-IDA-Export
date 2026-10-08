_BYTE *__thiscall sub_70E340(_BYTE *this)
{
  NiObject_constr((NiObject *)this); /*0x70e369*/
  *(_DWORD *)this = &NiPixelData::`vftable'; /*0x70e377*/
  InitSurfacEData((NiSurfaceData *)(this + 8)); /*0x70e37d*/
  *((_DWORD *)this + 0x13) = 0; /*0x70e382*/
  *((_DWORD *)this + 0x14) = 0; /*0x70e385*/
  *((_DWORD *)this + 0x15) = 0; /*0x70e388*/
  *((_DWORD *)this + 0x16) = 0; /*0x70e38b*/
  *((_DWORD *)this + 0x17) = 0; /*0x70e38e*/
  *((_DWORD *)this + 0x18) = 0; /*0x70e391*/
  *((_DWORD *)this + 0x1B) = 0; /*0x70e394*/
  *((_DWORD *)this + 0x19) = 0; /*0x70e397*/
  *((_DWORD *)this + 0x1A) = 1; /*0x70e39a*/
  return this; /*0x70e3a3*/
}
