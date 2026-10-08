TESRegionDataLandscape *__thiscall TESRegionDataLandscape_Destructor(TESRegionDataLandscape *this, char a2)
{
  TESRegionDataLandscape::~TESRegionDataLandscape(this); /*0x4a3d63*/
  if ( (a2 & 1) != 0 ) /*0x4a3d6d*/
    FormHeapFree((unsigned int)this); /*0x4a3d70*/
  return this; /*0x4a3d7a*/
}
