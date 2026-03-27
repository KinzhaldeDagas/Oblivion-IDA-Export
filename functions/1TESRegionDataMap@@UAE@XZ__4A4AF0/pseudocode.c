void __thiscall TESRegionDataMap::~TESRegionDataMap(TESRegionDataMap *this)
{
  *(_DWORD *)this = &TESRegionDataMap::`vftable';
  FormHeapFree(*((_DWORD *)this + 2));
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 7) = 0;
  *((_WORD *)this + 6) = 0;
  sub_4A3510(this);
}
