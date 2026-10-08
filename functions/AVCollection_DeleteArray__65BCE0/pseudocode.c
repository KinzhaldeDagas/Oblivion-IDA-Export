// Verified: frees nonnull entries in all 18 slots. Does not free array storage and does not clear its slots; caller ClearArrayAndList destroys then frees the array.
void __thiscall AVCollection_DeleteArray(AVCollectionIndex *self)
{
  AVCollectionEntry *v2; // esi

  if ( self->health[0] ) /*0x65bce3*/
    FormHeapFree((unsigned int)self->health[0]); /*0x65bcea*/
  if ( self->health[1] ) /*0x65bcf2*/
    FormHeapFree((unsigned int)self->health[1]); /*0x65bcfa*/
  if ( self->health[2] ) /*0x65bd02*/
    FormHeapFree((unsigned int)self->health[2]); /*0x65bd0a*/
  if ( self->health[3] ) /*0x65bd12*/
    FormHeapFree((unsigned int)self->health[3]); /*0x65bd1a*/
  if ( self->health[4] ) /*0x65bd22*/
    FormHeapFree((unsigned int)self->health[4]); /*0x65bd2a*/
  if ( self->health[5] ) /*0x65bd32*/
    FormHeapFree((unsigned int)self->health[5]); /*0x65bd3a*/
  if ( self->health[6] ) /*0x65bd42*/
    FormHeapFree((unsigned int)self->health[6]); /*0x65bd4a*/
  if ( self->health[7] ) /*0x65bd52*/
    FormHeapFree((unsigned int)self->health[7]); /*0x65bd5a*/
  if ( self->health[8] ) /*0x65bd62*/
    FormHeapFree((unsigned int)self->health[8]); /*0x65bd6a*/
  if ( self->health[9] ) /*0x65bd72*/
    FormHeapFree((unsigned int)self->health[9]); /*0x65bd7a*/
  if ( self->health[0xA] ) /*0x65bd82*/
    FormHeapFree((unsigned int)self->health[0xA]); /*0x65bd8a*/
  if ( self->health[0xB] ) /*0x65bd92*/
    FormHeapFree((unsigned int)self->health[0xB]); /*0x65bd9a*/
  if ( self->health[0xC] ) /*0x65bda2*/
    FormHeapFree((unsigned int)self->health[0xC]); /*0x65bdaa*/
  if ( self->health[0xD] ) /*0x65bdb2*/
    FormHeapFree((unsigned int)self->health[0xD]); /*0x65bdba*/
  if ( self->health[0xE] ) /*0x65bdc2*/
    FormHeapFree((unsigned int)self->health[0xE]); /*0x65bdca*/
  if ( self->health[0xF] ) /*0x65bdd2*/
    FormHeapFree((unsigned int)self->health[0xF]); /*0x65bdda*/
  if ( self->health[0x10] ) /*0x65bde2*/
    FormHeapFree((unsigned int)self->health[0x10]); /*0x65bdea*/
  v2 = self->health[0x11]; /*0x65bdf2*/
  if ( v2 ) /*0x65bdf7*/
    FormHeapFree((unsigned int)v2); /*0x65bdfa*/
}
