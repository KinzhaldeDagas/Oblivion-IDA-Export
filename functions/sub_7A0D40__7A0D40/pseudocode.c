// Exception-safe uninitialized ownership move for guide-LOD level vectors. Constructs an empty destination element, swaps its begin/end/capacity with the source, and advances at 0x10-byte stride; unwind destroys constructed destinations.
OB_stVector_SFrondGuide_010201A0 *__cdecl OB_stVector_stVector_SFrondGuide_UninitializedMove_010201A0(
        OB_stVector_SFrondGuide_010201A0 *first,
        OB_stVector_SFrondGuide_010201A0 *last,
        OB_stVector_SFrondGuide_010201A0 *destinationFirst)
{
  OB_stVector_SFrondGuide_010201A0 *currentDestination; // esi
  OB_SFrondGuide_010201A0 *begin; // eax
  OB_SFrondGuide_010201A0 *end; // eax
  OB_SFrondGuide_010201A0 *capacityEnd; // eax
  OB_stVector_SFrondGuide_010201A0 *cleanupCurrent; // esi
  OB_SFrondGuide_010201A0 *v9; // edi
  unsigned int *p_begin; // edi
  int v12; // [esp+0h] [ebp-38h] BYREF
  OB_stVector_SFrondGuide_010201A0 emptyVector; // [esp+10h] [ebp-28h] BYREF
  void *v14; // [esp+20h] [ebp-18h]
  OB_stVector_SFrondGuide_010201A0 *constructedBegin; // [esp+24h] [ebp-14h]
  int *v16; // [esp+28h] [ebp-10h]
  int v17; // [esp+34h] [ebp-4h]

  v16 = &v12; /*0x7a0d68*/
  currentDestination = destinationFirst; /*0x7a0d6b*/
  constructedBegin = destinationFirst; /*0x7a0d70*/
  memset(&emptyVector.begin, 0, 0xC); /*0x7a0d73*/
  v17 = 0; /*0x7a0d7f*/
  while ( 1 ) /*0x7a0d87*/
  {
    LOBYTE(v17) = 1; /*0x7a0d87*/
    if ( first == last ) /*0x7a0d8a*/
      break; /*0x7a0d8a*/
    v14 = currentDestination; /*0x7a0d8f*/
    LOBYTE(v17) = 2; /*0x7a0d94*/
    if ( currentDestination ) /*0x7a0d98*/
      OB_stVector_SFrondGuide_CopyCtor_010201A0(currentDestination, &emptyVector); /*0x7a0da0*/
    begin = currentDestination->begin; /*0x7a0daa*/
    currentDestination->begin = first->begin; /*0x7a0dad*/
    first->begin = begin; /*0x7a0db0*/
    end = currentDestination->end; /*0x7a0db6*/
    currentDestination->end = first->end; /*0x7a0db9*/
    first->end = end; /*0x7a0dbc*/
    capacityEnd = currentDestination->capacityEnd; /*0x7a0dc2*/
    currentDestination->capacityEnd = first->capacityEnd; /*0x7a0dc5*/
    ++currentDestination; /*0x7a0dc8*/
    first->capacityEnd = capacityEnd; /*0x7a0dcb*/
    destinationFirst = currentDestination; /*0x7a0dce*/
    ++first; /*0x7a0dd1*/
  }
  v9 = emptyVector.begin; /*0x7a0dfb*/
  if ( emptyVector.begin ) /*0x7a0e00*/
  {
    if ( emptyVector.begin != emptyVector.end ) /*0x7a0e05*/
    {
      p_begin = (unsigned int *)&emptyVector.begin->vertexVector.begin; /*0x7a0e07*/
      do /*0x7a0e32*/
      {
        if ( *p_begin ) /*0x7a0e10*/
          FormHeapFree(*p_begin); /*0x7a0e17*/
        *p_begin = 0; /*0x7a0e21*/
        p_begin[1] = 0; /*0x7a0e23*/
        p_begin[2] = 0; /*0x7a0e26*/
        p_begin += 0xC; /*0x7a0e29*/
      }
      while ( p_begin + 0xFFFFFFFF != (unsigned int *)emptyVector.end ); /*0x7a0e32*/
      v9 = emptyVector.begin; /*0x7a0e34*/
    }
    FormHeapFree((unsigned int)v9); /*0x7a0e38*/
  }
  for ( cleanupCurrent = constructedBegin; cleanupCurrent != destinationFirst; ++cleanupCurrent ) /*0x7a0dde*/
    OB_stVector_SFrondGuide_DestroyThunk_010201A0(cleanupCurrent); /*0x7a0de6*/
  ThrowException__(0, 0); /*0x7a0df6*/
}
