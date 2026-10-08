NiTPointerMap<int,TESObjectCELL *> *__thiscall NiTPointerMap<int,TESObjectCELL *>::NiTPointerMap<int,TESObjectCELL *>(
        NiTPointerMap<int,TESObjectCELL *> *this,
        unsigned int a2)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = a2; /*0x4f1d29*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,int,TESObjectCELL *>::`vftable'; /*0x4f1d36*/
  *((_DWORD *)this + 3) = 0; /*0x4f1d3c*/
  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  v5 = 4 * *((_DWORD *)this + 1); /*0x4f1d54*/
  *((_DWORD *)this + 2) = v3; /*0x4f1d58*/
  _memset(v3, 0, v5); /*0x4f1d5b*/
  *(_DWORD *)this = &NiTPointerMap<int,TESObjectCELL *>::`vftable'; /*0x4f1d63*/
  return this; /*0x4f1d6b*/
}
