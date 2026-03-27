ChangesMap *__thiscall ChangesMap::ChangesMap(ChangesMap *this)
{
  int v2; // eax
  int v4; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = 0x13AF;
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,ChangeData *>::`vftable';
  *((_DWORD *)this + 3) = 0;
  v2 = FormHeapAlloc(0x4EBCu);
  v4 = 4 * *((_DWORD *)this + 1);
  *((_DWORD *)this + 2) = v2;
  _memset(v2, 0, v4);
  *(_DWORD *)this = &ChangesMap::`vftable';
  return this;
}
