unsigned int *__thiscall sub_6FB300(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  *this = (unsigned int)&BSFurnitureMarker::`vftable'; /*0x6fb303*/
  v4 = *(this + 4); /*0x6fb30c*/
  *(this + 3) = (unsigned int)&NiTArray<FurnitureMark>::`vftable'; /*0x6fb30d*/
  FormHeapFree(v4); /*0x6fb314*/
  NiExtraData_dtor(this); /*0x6fb31e*/
  if ( (a2 & 1) != 0 ) /*0x6fb328*/
    FormHeapFree((unsigned int)this); /*0x6fb32b*/
  return this; /*0x6fb335*/
}
