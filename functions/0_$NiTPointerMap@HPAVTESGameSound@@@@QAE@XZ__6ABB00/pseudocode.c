NiTPointerMap<int,TESGameSound *> *__thiscall NiTPointerMap<int,TESGameSound *>::NiTPointerMap<int,TESGameSound *>(
        NiTPointerMap<int,TESGameSound *> *this,
        unsigned int a2)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = a2; /*0x6abb09*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,int,TESGameSound *>::`vftable'; /*0x6abb16*/
  *((_DWORD *)this + 3) = 0; /*0x6abb1c*/
  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  v5 = 4 * *((_DWORD *)this + 1); /*0x6abb34*/
  *((_DWORD *)this + 2) = v3; /*0x6abb38*/
  _memset(v3, 0, v5); /*0x6abb3b*/
  *(_DWORD *)this = &NiTPointerMap<int,TESGameSound *>::`vftable'; /*0x6abb43*/
  return this; /*0x6abb4b*/
}
