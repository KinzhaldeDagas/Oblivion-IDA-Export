_WORD *__thiscall sub_899330(_WORD *this)
{
  *(this + 3) = 1; /*0x899332*/
  *((_DWORD *)this + 2) = &hkCollidableCollidableFilter::`vftable'; /*0x899338*/
  *((_DWORD *)this + 3) = &hkShapeCollectionFilter::`vftable'; /*0x89933f*/
  *((_DWORD *)this + 4) = &hkRayShapeCollectionFilter::`vftable'; /*0x899346*/
  *((_DWORD *)this + 5) = &hkRayCollidableFilter::`vftable'; /*0x89934d*/
  *(_DWORD *)this = &off_A96B78; /*0x899354*/
  *((_DWORD *)this + 2) = &off_A96B64; /*0x89935a*/
  *((_DWORD *)this + 3) = &off_A96B70; /*0x899361*/
  *((_DWORD *)this + 4) = &off_A96B68; /*0x899368*/
  *((_DWORD *)this + 5) = &off_A96B64; /*0x89936f*/
  return this; /*0x899376*/
}
