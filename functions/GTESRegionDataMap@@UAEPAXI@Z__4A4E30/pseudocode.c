TESRegionDataMap *__thiscall TESRegionDataMap_Destructor(TESRegionDataMap *this, char a2)
{
  TESRegionDataMap::~TESRegionDataMap(this); /*0x4a4e33*/
  if ( (a2 & 1) != 0 ) /*0x4a4e3d*/
    FormHeapFree((unsigned int)this); /*0x4a4e40*/
  return this; /*0x4a4e4a*/
}
