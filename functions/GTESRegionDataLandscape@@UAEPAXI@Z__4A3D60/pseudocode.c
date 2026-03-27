TESRegionDataLandscape *__thiscall TESRegionDataLandscape::`scalar deleting destructor'(
        TESRegionDataLandscape *this,
        char a2)
{
  TESRegionDataLandscape::~TESRegionDataLandscape(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
