TESRegionDataGrass *__thiscall TESRegionDataGrass::`scalar deleting destructor'(TESRegionDataGrass *this, char a2)
{
  TESRegionDataGrass::~TESRegionDataGrass(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
