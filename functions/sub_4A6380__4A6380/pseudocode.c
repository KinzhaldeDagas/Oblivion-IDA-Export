// Verified: frees all BSSimpleList nodes and, only when ownsRegionMemory is set, destroys each TESRegion object.
void __thiscall TESRegionList_Clear(TESRegionList *self)
{
  TESForm *i; // edi
  OblivionRegionListNode *next; // eax

  for ( i = self->regions.regionForm; i; i = self->regions.regionForm ) /*0x4a6389*/
  {
    next = self->regions.next; /*0x4a6390*/
    if ( next ) /*0x4a6395*/
    {
      self->regions.next = next->next; /*0x4a639a*/
      self->regions.regionForm = next->regionForm; /*0x4a63a0*/
      FormHeapFree((unsigned int)next); /*0x4a63a3*/
    }
    else
    {
      self->regions.regionForm = 0; /*0x4a63ad*/
    }
    if ( self->ownsRegionMemory ) /*0x4a63b4*/
      i->vtbl->Destroy(i, 1); /*0x4a63c7*/
  }
}
