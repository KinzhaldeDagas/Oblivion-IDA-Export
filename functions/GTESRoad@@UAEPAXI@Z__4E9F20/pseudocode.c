TESRoad *__thiscall TESRoad::`scalar deleting destructor'(TESRoad *this, char a2)
{
  TESRoad_dtor(this); /*0x4e9f23*/
  if ( (a2 & 1) != 0 ) /*0x4e9f2d*/
    FormHeapFree((unsigned int)this); /*0x4e9f30*/
  return this; /*0x4e9f3a*/
}
