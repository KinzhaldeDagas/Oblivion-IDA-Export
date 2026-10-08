// Verified: linear search over region list comparing TESRegion formID at object offset +0x0C.
TESRegion *__thiscall TESRegionList_FindRegionByFormID(TESRegionList *self, unsigned int formID)
{
  TESRegion **p_regions; // eax

  if ( !self ) /*0x4a63e2*/
    return 0; /*0x4a63e2*/
  p_regions = (TESRegion **)&self->regions; /*0x4a63e4*/
  if ( self == (TESRegionList *)0xFFFFFFFC ) /*0x4a63e9*/
    return 0; /*0x4a6402*/
  while ( !*p_regions || *((_DWORD *)*p_regions + 3) != formID ) /*0x4a63f9*/
  {
    p_regions = (TESRegion **)p_regions[1]; /*0x4a63fb*/
    if ( !p_regions ) /*0x4a6400*/
      return 0; /*0x4a6400*/
  }
  return *p_regions; /*0x4a6404*/
}
