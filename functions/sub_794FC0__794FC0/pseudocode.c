// OBLIVION AUTHORITY (2026-08-30): Destroys each 0x10-byte vector owner in [first,last), freeing its owned buffer and clearing the pointer triplet.
void __cdecl OB_stVector4_DestroyRange_010201A0(OB_stVector4_010201A0 *first, OB_stVector4_010201A0 *last)
{
  OB_stVector4_010201A0 *i; // esi

  for ( i = first; i != last; ++i ) /*0x794fcc*/
  {
    if ( i->begin ) /*0x794fd1*/
      FormHeapFree((unsigned int)i->begin); /*0x794fd9*/
    i->begin = 0; /*0x794fe1*/
    i->end = 0; /*0x794fe4*/
    i->capacity = 0; /*0x794fe7*/
  }
}
