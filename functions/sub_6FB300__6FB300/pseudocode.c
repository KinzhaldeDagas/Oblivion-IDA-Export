unsigned int *__thiscall sub_6FB300(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  *this = (unsigned int)&BSFurnitureMarker::`vftable';
  v4 = *(this + 4);
  *(this + 3) = (unsigned int)&NiTArray<FurnitureMark>::`vftable';
  FormHeapFree(v4);
  NiExtraData_dtor(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
