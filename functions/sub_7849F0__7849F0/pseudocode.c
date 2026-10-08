// Oblivion 1.2.0.416: destroys [first,last) in 0x18-byte steps through the folded trivial record destructor.
void __stdcall OB_stVector24_DestroyRange_010201A0(unsigned __int8 *first, unsigned __int8 *last)
{
  unsigned __int8 *i; // esi

  for ( i = first; i != last; i += 0x18 ) /*0x7849fc*/
    Shared_NoOpVirtual_60D0A0(i); /*0x784a02*/
}
