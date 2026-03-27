_DWORD *__thiscall sub_77DC20(_DWORD *this, char a2)
{
  *this = &NiStaticGeometryGroup::`vftable';
  sub_77D980((NiGeometryGroup *)this);
  *(this + 3) = &NiTPointerMap<unsigned int,NiVBSet *>::`vftable';
  NiTMap_Clear(this + 3);
  *(this + 3) = &NiTMapBase<NiTPointerAllocator<unsigned int>,unsigned int,NiVBSet *>::`vftable';
  NiTMap_Clear(this + 3);
  FormHeapFree(*(this + 5));
  sub_7828F0((NiGeometryGroup *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
