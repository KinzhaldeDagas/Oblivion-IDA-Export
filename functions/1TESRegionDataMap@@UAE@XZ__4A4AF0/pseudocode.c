void __thiscall TESRegionDataMap::~TESRegionDataMap(TESRegionDataMap *this)
{
  *(_DWORD *)this = &TESRegionDataMap::`vftable'; /*0x4a4b14*/
  FormHeapFree(*((_DWORD *)this + 2)); /*0x4a4b1e*/
  *((_DWORD *)this + 2) = 0; /*0x4a4b2a*/
  *((_WORD *)this + 7) = 0; /*0x4a4b2d*/
  *((_WORD *)this + 6) = 0; /*0x4a4b31*/
  sub_4A3510(this); /*0x4a4b3d*/
}
