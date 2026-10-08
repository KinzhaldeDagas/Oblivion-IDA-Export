_DWORD *__thiscall sub_77DC20(_DWORD *this, char a2)
{
  *this = &NiStaticGeometryGroup::`vftable'; /*0x77dc24*/
  sub_77D980((NiGeometryGroup *)this); /*0x77dc2a*/
  *(this + 3) = &NiTPointerMap<unsigned int,NiVBSet *>::`vftable'; /*0x77dc34*/
  NiTMap_Clear(this + 3); /*0x77dc3a*/
  *(this + 3) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBSet *>::`vftable'; /*0x77dc41*/
  NiTMap_Clear(this + 3); /*0x77dc47*/
  FormHeapFree(*(this + 5)); /*0x77dc50*/
  sub_7828F0((NiGeometryGroup *)this); /*0x77dc5a*/
  if ( (a2 & 1) != 0 ) /*0x77dc64*/
    FormHeapFree((unsigned int)this); /*0x77dc67*/
  return this; /*0x77dc6f*/
}
