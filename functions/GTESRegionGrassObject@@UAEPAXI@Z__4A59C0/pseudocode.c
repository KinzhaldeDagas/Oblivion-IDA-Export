TESRegionGrassObject *__thiscall TESRegionGrassObject::`scalar deleting destructor'(
        TESRegionGrassObject *this,
        char a2)
{
  *(_DWORD *)this = &TESRegionGrassObject::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
