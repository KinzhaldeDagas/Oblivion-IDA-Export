InteriorCellNewReferencesMap *__thiscall InteriorCellNewReferencesMap::InteriorCellNewReferencesMap(
        InteriorCellNewReferencesMap *this)
{
  int v2; // eax
  int v4; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = 0x25;
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<unsigned int> *>::`vftable';
  *((_DWORD *)this + 3) = 0;
  v2 = FormHeapAlloc(0x94u);
  v4 = 4 * *((_DWORD *)this + 1);
  *((_DWORD *)this + 2) = v2;
  _memset(v2, 0, v4);
  *(_DWORD *)this = &InteriorCellNewReferencesMap::`vftable';
  return this;
}
