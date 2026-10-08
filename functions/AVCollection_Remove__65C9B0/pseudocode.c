// Verified: IDs9/10 zero permanent value without freeing; indexed IDs dispatch RemoveArrayNode; default removes pointer from list then frees entry. Dedicated allocation ownership ends at destructor, not Remove.
void __thiscall AVCollection_Remove(AVCollection *self, AVCollectionEntry *entry)
{
  if ( entry ) /*0x65c9b7*/
  {
    switch ( entry->actorValue ) /*0x65c9ca*/
    {
      case 0u: /*0x65c9ca*/
      case 4u: /*0x65c9ca*/
      case 5u: /*0x65c9ca*/
      case 6u: /*0x65c9ca*/
      case 7u: /*0x65c9ca*/
      case 8u: /*0x65c9ca*/
      case 0xBu: /*0x65c9ca*/
      case 0xDu: /*0x65c9ca*/
      case 0x1Au: /*0x65c9ca*/
      case 0x21u: /*0x65c9ca*/
      case 0x24u: /*0x65c9ca*/
      case 0x28u: /*0x65c9ca*/
      case 0x29u: /*0x65c9ca*/
      case 0x2Eu: /*0x65c9ca*/
      case 0x2Fu: /*0x65c9ca*/
      case 0x30u: /*0x65c9ca*/
      case 0x31u: /*0x65c9ca*/
      case 0x38u: /*0x65c9ca*/
        AVCollection_RemoveArrayNode(self, entry->actorValue); /*0x65c9ee*/
        break; /*0x65c9ee*/
      case 9u: /*0x65c9ca*/
        self->magicka->value = 0.0; /*0x65c9d6*/
        break; /*0x65c9da*/
      case 0xAu: /*0x65c9ca*/
        self->fatigue->value = 0.0; /*0x65c9e2*/
        break; /*0x65c9e6*/
      default:
        BSSimpleList_Remove((int *)self, (int)entry); /*0x65c9f4*/
        FormHeapFree((unsigned int)entry); /*0x65c9fa*/
        break; /*0x65c9fa*/
    }
  }
}
