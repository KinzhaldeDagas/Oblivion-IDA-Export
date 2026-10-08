// Destroys [first,last) guide-LOD levels. Every 16-byte element owns a vector of 0x30 SFrondGuide copies, so each inner guide range is deep-destroyed before its allocation is freed.
void __cdecl OB_stVector_stVector_SFrondGuide_DestroyRange_010201A0(
        OB_stVector_SFrondGuide_010201A0 *first,
        OB_stVector_SFrondGuide_010201A0 *last)
{
  OB_stVector_SFrondGuide_010201A0 *i; // edi
  unsigned int *p_allocatorState; // esi
  OB_SFrondGuide_010201A0 *j; // ebp

  for ( i = first; i != last; ++i ) /*0x7a0cd9*/
  {
    p_allocatorState = &i->begin->vertexVector.allocatorState; /*0x7a0ce0*/
    if ( p_allocatorState ) /*0x7a0ce5*/
    {
      for ( j = i->end; p_allocatorState != (unsigned int *)j; p_allocatorState += 0xC ) /*0x7a0cec*/
      {
        if ( p_allocatorState[1] ) /*0x7a0cf0*/
          FormHeapFree(p_allocatorState[1]); /*0x7a0cf8*/
        p_allocatorState[1] = 0; /*0x7a0d00*/
        p_allocatorState[2] = 0; /*0x7a0d03*/
        p_allocatorState[3] = 0; /*0x7a0d06*/
      }
      FormHeapFree((unsigned int)i->begin); /*0x7a0d14*/
    }
    i->begin = 0; /*0x7a0d1c*/
    i->end = 0; /*0x7a0d1f*/
    i->capacityEnd = 0; /*0x7a0d22*/
  }
}
