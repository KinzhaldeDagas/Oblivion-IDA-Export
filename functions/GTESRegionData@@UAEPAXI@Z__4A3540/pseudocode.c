TESRegionData *__thiscall TESRegionData::`scalar deleting destructor'(TESRegionData *this, char a2)
{
  *(_DWORD *)this = &TESRegionData::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
