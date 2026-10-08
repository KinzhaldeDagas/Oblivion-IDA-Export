TESPathGrid *__thiscall TESPathGrid::`scalar deleting destructor'(TESPathGrid *this, char a2)
{
  TESPathGrid_dtor(this); /*0x4e7dc3*/
  if ( (a2 & 1) != 0 ) /*0x4e7dcd*/
    FormHeapFree((unsigned int)this); /*0x4e7dd0*/
  return this; /*0x4e7dda*/
}
