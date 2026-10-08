// Verified: inserts region only when not already present, preserving unique TESRegion membership.
bool __thiscall TESRegionList_AddUniqueRegion(TESRegionList *self, TESForm *region)
{
  bool v3; // zf
  OblivionRegionListNode *p_regions; // ecx
  OblivionRegionListNode *v5; // eax

  if ( !region ) /*0x4a6356*/
    return 0; /*0x4a6358*/
  v3 = &self->regions == 0; /*0x4a635d*/
  p_regions = &self->regions; /*0x4a635d*/
  v5 = p_regions; /*0x4a6360*/
  if ( v3 ) /*0x4a6362*/
  {
LABEL_6:
    BSSimpleList_PushFront(p_regions, (int)region); /*0x4a636f*/
  }
  else
  {
    while ( v5->regionForm != region ) /*0x4a6366*/
    {
      v5 = v5->next; /*0x4a6368*/
      if ( !v5 ) /*0x4a636d*/
        goto LABEL_6; /*0x4a636d*/
    }
  }
  return 1; /*0x4a635a*/
}
