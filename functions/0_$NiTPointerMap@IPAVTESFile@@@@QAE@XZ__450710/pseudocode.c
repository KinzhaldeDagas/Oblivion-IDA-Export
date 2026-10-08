NiTPointerMap<unsigned int,TESFile *> *__thiscall NiTPointerMap<unsigned int,TESFile *>::NiTPointerMap<unsigned int,TESFile *>(
        NiTPointerMap<unsigned int,TESFile *> *this,
        unsigned int a2)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = a2; /*0x450719*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,TESFile *>::`vftable'; /*0x450726*/
  *((_DWORD *)this + 3) = 0; /*0x45072c*/
  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  v5 = 4 * *((_DWORD *)this + 1); /*0x450744*/
  *((_DWORD *)this + 2) = v3; /*0x450748*/
  _memset(v3, 0, v5); /*0x45074b*/
  *(_DWORD *)this = &NiTPointerMap<unsigned int,TESFile *>::`vftable'; /*0x450753*/
  return this; /*0x45075b*/
}
