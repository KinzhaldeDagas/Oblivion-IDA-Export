// Verified 2026-10-04: zeroes list head/next, allocates 8-byte permanent entries for ID10 at +0xC then ID9 at +8 (values 0), sets indexedEntries +0x10 to NULL; returns self. Allocation failure leaves corresponding dedicated pointer NULL. Probable structural relative of Fallout ModifierList ctor 0x826B6AF0, but Fallout has no these two constructor allocations.
AVCollection *__thiscall AVCollection_Constr(AVCollection *self)
{
  AVCollectionEntry *v2; // eax
  AVCollectionEntry *v3; // eax

  self->list.entry = 0; /*0x65be15*/
  self->list.next = 0; /*0x65be1b*/
  v2 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65be22*/
  if ( v2 ) /*0x65be2c*/
  {
    v2->actorValue = 0xA; /*0x65be30*/
    v2->value = 0.0; /*0x65be33*/
  }
  else
  {
    v2 = 0; /*0x65be38*/
  }
  self->fatigue = v2; /*0x65be3c*/
  v3 = (AVCollectionEntry *)FormHeapAlloc(8u); /*0x65be3f*/
  if ( v3 ) /*0x65be49*/
  {
    v3->actorValue = 9; /*0x65be4d*/
    v3->value = 0.0; /*0x65be50*/
    self->magicka = v3; /*0x65be53*/
  }
  else
  {
    self->magicka = 0; /*0x65be63*/
  }
  self->indexedEntries = 0; /*0x65be56*/
  return self; /*0x65be5f*/
}
