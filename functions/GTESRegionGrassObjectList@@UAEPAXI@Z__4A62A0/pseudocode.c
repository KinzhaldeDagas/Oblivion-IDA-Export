TESRegionGrassObjectList *__thiscall TESRegionGrassObjectList::`scalar deleting destructor'(
        TESRegionGrassObjectList *this,
        char a2)
{
  *(_DWORD *)this = &TESRegionGrassObjectList::`vftable';
  sub_4A6010(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
