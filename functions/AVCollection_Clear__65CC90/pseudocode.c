// Verified: clears list/indexed storage, then sets any existing ID9/ID10 node values to zero while retaining their allocations.
void __thiscall AVCollection_Clear(AVCollection *self)
{
  AVCollectionEntry *actorValue09; // eax
  AVCollectionEntry *actorValue0A; // esi

  AVCollection_ClearArrayAndList(self); /*0x65cc93*/
  actorValue09 = self->magicka; /*0x65cc9a*/
  if ( actorValue09 ) /*0x65cc9f*/
    actorValue09->value = 0.0; /*0x65cca1*/
  actorValue0A = self->fatigue; /*0x65cca4*/
  if ( actorValue0A ) /*0x65cca9*/
    actorValue0A->value = 0.0; /*0x65ccab*/
}
