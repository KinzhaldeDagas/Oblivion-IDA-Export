TESRegionDataGrass *__thiscall TESRegionDataGrass_Destructor(TESRegionDataGrass *this, char a2)
{
  TESRegionDataGrass::~TESRegionDataGrass(this); /*0x4a37b3*/
  if ( (a2 & 1) != 0 ) /*0x4a37bd*/
    FormHeapFree((unsigned int)this); /*0x4a37c0*/
  return this; /*0x4a37ca*/
}
