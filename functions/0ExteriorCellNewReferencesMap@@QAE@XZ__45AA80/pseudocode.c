ExteriorCellNewReferencesMap *__thiscall ExteriorCellNewReferencesMap::ExteriorCellNewReferencesMap(
        ExteriorCellNewReferencesMap *this)
{
  int v2; // eax
  int v4; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = 0x25;
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,BSSimpleList<ExteriorCellReferenceData *> *>::`vftable';
  *((_DWORD *)this + 3) = 0;
  v2 = FormHeapAlloc(0x94u);
  v4 = 4 * *((_DWORD *)this + 1);
  *((_DWORD *)this + 2) = v2;
  _memset(v2, 0, v4);
  *(_DWORD *)this = &ExteriorCellNewReferencesMap::`vftable';
  return this;
}
