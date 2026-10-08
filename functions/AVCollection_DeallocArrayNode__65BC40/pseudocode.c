// Verified: stack-only slot pointer, RET4; ignores incoming ECX. If slot and *slot are nonnull, frees *slot and stores NULL. Prototype corrected to __stdcall; this is not an ECX slot receiver.
void __stdcall AVCollection_DeallocArrayNode(AVCollectionEntry **slot)
{
  if ( slot ) /*0x65bc47*/
  {
    if ( *slot ) /*0x65bc49*/
    {
      FormHeapFree((unsigned int)*slot); /*0x65bc50*/
      *slot = 0; /*0x65bc58*/
    }
  }
}
