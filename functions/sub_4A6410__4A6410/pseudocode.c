// Verified: compares region-list membership; used to decide whether cached region-data selection remains valid.
bool __thiscall TESRegionList_AreEqual(TESRegionList *self, TESRegionList *other)
{
  OblivionRegionListNode *p_regions; // ecx
  OblivionRegionListNode *v3; // eax

  if ( self ) /*0x4a6412*/
    p_regions = &self->regions; /*0x4a6414*/
  else
    p_regions = 0; /*0x4a6419*/
  if ( other ) /*0x4a6421*/
    v3 = &other->regions; /*0x4a6423*/
  else
    v3 = 0; /*0x4a6428*/
  if ( p_regions && v3 ) /*0x4a6430*/
  {
    while ( p_regions->regionForm == v3->regionForm ) /*0x4a6436*/
    {
      p_regions = p_regions->next; /*0x4a6438*/
      v3 = v3->next; /*0x4a643d*/
      if ( !p_regions ) /*0x4a6440*/
        return !v3; /*0x4a644d*/
      if ( !v3 ) /*0x4a6444*/
        return 0; /*0x4a6444*/
    }
  }
  return 0; /*0x4a6448*/
}
