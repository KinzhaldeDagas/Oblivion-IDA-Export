TESRegionGrassObjectList *__thiscall TESRegionGrassObjectList::`scalar deleting destructor'(
        TESRegionGrassObjectList *this,
        char a2)
{
  this->vtable = TESRegionGrassObjectList::`vftable'; /*0x4a62a3*/
  sub_4A6010(this); /*0x4a62a9*/
  if ( (a2 & 1) != 0 ) /*0x4a62b3*/
    FormHeapFree((unsigned int)this); /*0x4a62b6*/
  return this; /*0x4a62c0*/
}
