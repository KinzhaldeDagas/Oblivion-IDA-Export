NiTPointerMap<unsigned short,AnimSequenceBase *> *__thiscall NiTPointerMap<unsigned short,AnimSequenceBase *>::NiTPointerMap<unsigned short,AnimSequenceBase *>(
        NiTPointerMap<unsigned short,AnimSequenceBase *> *this,
        unsigned int a2)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = a2; /*0x473cb9*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned short,AnimSequenceBase *>::`vftable'; /*0x473cc6*/
  *((_DWORD *)this + 3) = 0; /*0x473ccc*/
  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  v5 = 4 * *((_DWORD *)this + 1); /*0x473ce4*/
  *((_DWORD *)this + 2) = v3; /*0x473ce8*/
  _memset(v3, 0, v5); /*0x473ceb*/
  *(_DWORD *)this = &NiTPointerMap<unsigned short,AnimSequenceBase *>::`vftable'; /*0x473cf3*/
  return this; /*0x473cfb*/
}
