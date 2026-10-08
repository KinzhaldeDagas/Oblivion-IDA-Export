// Destroys every compact SFrondGuide in [first,last), freeing each embedded SFrondVertex vector.
void __cdecl OB_SFrondGuide_DestroyRange_010201A0(OB_SFrondGuide_010201A0 *first, OB_SFrondGuide_010201A0 *last)
{
  OB_SFrondGuide_010201A0 *i; // esi

  for ( i = first; i != last; ++i ) /*0x79e15c*/
  {
    if ( i->vertexVector.begin ) /*0x79e161*/
      FormHeapFree((unsigned int)i->vertexVector.begin); /*0x79e169*/
    i->vertexVector.begin = 0; /*0x79e171*/
    i->vertexVector.end = 0; /*0x79e174*/
    i->vertexVector.capacityEnd = 0; /*0x79e177*/
  }
}
