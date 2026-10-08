NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *> *__thiscall NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>(
        NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *> *this,
        unsigned int a2)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = a2; /*0x55e669*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,TESObjectTREE *,NiPointer<BSTreeModel> *>::`vftable'; /*0x55e676*/
  *((_DWORD *)this + 3) = 0; /*0x55e67c*/
  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  v5 = 4 * *((_DWORD *)this + 1); /*0x55e694*/
  *((_DWORD *)this + 2) = v3; /*0x55e698*/
  _memset(v3, 0, v5); /*0x55e69b*/
  *(_DWORD *)this = &NiTPointerMap<TESObjectTREE *,NiPointer<BSTreeModel> *>::`vftable'; /*0x55e6a3*/
  return this; /*0x55e6ab*/
}
