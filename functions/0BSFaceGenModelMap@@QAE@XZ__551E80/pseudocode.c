BSFaceGenModelMap *__thiscall BSFaceGenModelMap::BSFaceGenModelMap(BSFaceGenModelMap *this)
{
  int v2; // eax
  int v4; // [esp-8h] [ebp-Ch]

  *(_DWORD *)this = &BSFaceGenModelMap::`vftable';
  *((_DWORD *)this + 2) = 0x25;
  *((_DWORD *)this + 1) = &NiTMapBase<DFALL<NiPointer<BSFaceGenModelMap::Entry>>,char const *,NiPointer<BSFaceGenModelMap::Entry>>::`vftable';
  *((_DWORD *)this + 4) = 0;
  v2 = FormHeapAlloc(0x94u);
  v4 = 4 * *((_DWORD *)this + 2);
  *((_DWORD *)this + 3) = v2;
  _memset(v2, 0, v4);
  *((_BYTE *)this + 0x14) = 1;
  *((_DWORD *)this + 1) = &BSTCaseInsensitiveStringMap<NiPointer<BSFaceGenModelMap::Entry>>::`vftable';
  *((_DWORD *)this + 6) = 0x10000000;
  *((_DWORD *)this + 7) = 0x10000000;
  return this;
}
