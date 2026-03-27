TESRegionDataMap *__thiscall TESRegionDataMap::`scalar deleting destructor'(TESRegionDataMap *this, char a2)
{
  TESRegionDataMap::~TESRegionDataMap(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
