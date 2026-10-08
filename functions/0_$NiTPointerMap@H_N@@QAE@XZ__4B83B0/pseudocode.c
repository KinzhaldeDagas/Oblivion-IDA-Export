NiTPointerMap<int,bool> *__thiscall NiTPointerMap<int,bool>::NiTPointerMap<int,bool>(
        NiTPointerMap<int,bool> *this,
        unsigned int a2)
{
  int v3; // eax
  unsigned int v5; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = a2; /*0x4b83b9*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,int,bool>::`vftable'; /*0x4b83c6*/
  *((_DWORD *)this + 3) = 0; /*0x4b83cc*/
  v3 = FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
  v5 = 4 * *((_DWORD *)this + 1); /*0x4b83e4*/
  *((_DWORD *)this + 2) = v3; /*0x4b83e8*/
  _memset(v3, 0, v5); /*0x4b83eb*/
  *(_DWORD *)this = &NiTPointerMap<int,bool>::`vftable'; /*0x4b83f3*/
  return this; /*0x4b83fb*/
}
