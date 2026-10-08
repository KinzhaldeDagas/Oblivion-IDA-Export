TESRegion *__thiscall TESRegion::`scalar deleting destructor'(TESRegion *this, char a2)
{
  TESRegion::~TESRegion(this); /*0x4a31a3*/
  if ( (a2 & 1) != 0 ) /*0x4a31ad*/
    FormHeapFree((unsigned int)this); /*0x4a31b0*/
  return this; /*0x4a31ba*/
}
