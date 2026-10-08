bhkExtraData *__thiscall bhkExtraData::bhkExtraData(bhkExtraData *this)
{
  sub_721350((NiObject *)this); /*0x8bce08*/
  *(_DWORD *)this = &bhkExtraData::`vftable'; /*0x8bce0f*/
  *((_DWORD *)this + 3) = &NiTLargeArray<NiPointer<NiTimeController>>::`vftable'; /*0x8bce19*/
  *((_DWORD *)this + 5) = 0; /*0x8bce20*/
  *((_DWORD *)this + 8) = 1; /*0x8bce23*/
  *((_DWORD *)this + 6) = 0; /*0x8bce2a*/
  *((_DWORD *)this + 7) = 0; /*0x8bce2d*/
  *((_DWORD *)this + 4) = 0; /*0x8bce30*/
  sub_721440((unsigned int *)this, off_A98390); /*0x8bce3f*/
  return this; /*0x8bce46*/
}
