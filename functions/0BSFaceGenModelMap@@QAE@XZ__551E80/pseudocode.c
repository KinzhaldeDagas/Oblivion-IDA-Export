BSFaceGenModelMap *__thiscall BSFaceGenModelMap::BSFaceGenModelMap(BSFaceGenModelMap *this)
{
  int v2; // eax
  unsigned int v4; // [esp-8h] [ebp-Ch]

  *(_DWORD *)this = &BSFaceGenModelMap::`vftable'; /*0x551e83*/
  *((_DWORD *)this + 2) = 0x25; /*0x551e90*/
  *((_DWORD *)this + 1) = &NiTMapBase<DFALL<NiPointer<BSFaceGenModelMap::Entry>>,char const *,NiPointer<BSFaceGenModelMap::Entry>>::`vftable'; /*0x551e9d*/
  *((_DWORD *)this + 4) = 0; /*0x551ea4*/
  v2 = FormHeapAlloc(0x94u); /*0x551eb0*/
  v4 = 4 * *((_DWORD *)this + 2); /*0x551ebc*/
  *((_DWORD *)this + 3) = v2; /*0x551ec0*/
  _memset(v2, 0, v4); /*0x551ec3*/
  *((_BYTE *)this + 0x14) = 1; /*0x551ecd*/
  *((_DWORD *)this + 1) = &BSTCaseInsensitiveStringMap<NiPointer<BSFaceGenModelMap::Entry>>::`vftable'; /*0x551ed1*/
  *((_DWORD *)this + 6) = 0x10000000; /*0x551ed8*/
  *((_DWORD *)this + 7) = 0x10000000; /*0x551edb*/
  return this; /*0x551ee3*/
}
