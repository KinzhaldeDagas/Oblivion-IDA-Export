TESRegionGrassObject *__thiscall TESRegionGrassObject::`scalar deleting destructor'(
        TESRegionGrassObject *this,
        char a2)
{
  this->vtable = &TESRegionGrassObject::`vftable'; /*0x4a59c8*/
  if ( (a2 & 1) != 0 ) /*0x4a59ce*/
    FormHeapFree((unsigned int)this); /*0x4a59d1*/
  return this; /*0x4a59db*/
}
