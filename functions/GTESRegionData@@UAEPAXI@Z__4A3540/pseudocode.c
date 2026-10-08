TESRegionData *__thiscall TESRegionData::`scalar deleting destructor'(TESRegionData *this, char a2)
{
  *(_DWORD *)this = &TESRegionData::`vftable'; /*0x4a3548*/
  if ( (a2 & 1) != 0 ) /*0x4a354e*/
    FormHeapFree((unsigned int)this); /*0x4a3551*/
  return this; /*0x4a355b*/
}
