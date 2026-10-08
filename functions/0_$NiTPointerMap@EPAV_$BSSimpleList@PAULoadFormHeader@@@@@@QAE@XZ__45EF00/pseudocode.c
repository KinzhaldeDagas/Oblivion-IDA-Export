NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> *__thiscall NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>::NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>(
        NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *> *this,
        unsigned int a2)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = a2; /*0x45ef09*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned char,BSSimpleList<LoadFormHeader *> *>::`vftable'; /*0x45ef16*/
  *((_DWORD *)this + 3) = 0; /*0x45ef1c*/
  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  v5 = 4 * *((_DWORD *)this + 1); /*0x45ef34*/
  *((_DWORD *)this + 2) = v3; /*0x45ef38*/
  _memset(v3, 0, v5); /*0x45ef3b*/
  *(_DWORD *)this = &NiTPointerMap<unsigned char,BSSimpleList<LoadFormHeader *> *>::`vftable'; /*0x45ef43*/
  return this; /*0x45ef4b*/
}
