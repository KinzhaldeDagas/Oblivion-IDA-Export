NumericIDBufferMap *__thiscall NumericIDBufferMap::NumericIDBufferMap(NumericIDBufferMap *this)
{
  int v2; // eax
  unsigned int v4; // [esp-8h] [ebp-Ch]

  *((_DWORD *)this + 1) = 0x25; /*0x45abea*/
  *(_DWORD *)this = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,void *>::`vftable'; /*0x45abf7*/
  *((_DWORD *)this + 3) = 0; /*0x45abfd*/
  v2 = FormHeapAlloc(0x94u); /*0x45ac09*/
  v4 = 4 * *((_DWORD *)this + 1); /*0x45ac15*/
  *((_DWORD *)this + 2) = v2; /*0x45ac19*/
  _memset(v2, 0, v4); /*0x45ac1c*/
  *(_DWORD *)this = &NumericIDBufferMap::`vftable'; /*0x45ac24*/
  return this; /*0x45ac2c*/
}
