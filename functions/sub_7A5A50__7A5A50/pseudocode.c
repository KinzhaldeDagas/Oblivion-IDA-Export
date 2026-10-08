// Overlap-safe backward deep-copy assignment of compact SIdvLeafTexture records.
OB_SIdvLeafTexture_010201A0 *__cdecl OB_SIdvLeafTexture_CopyAssignRangeBackward_010201A0(
        OB_SIdvLeafTexture_010201A0 *first,
        OB_SIdvLeafTexture_010201A0 *last,
        OB_SIdvLeafTexture_010201A0 *destinationEnd)
{
  OB_SIdvLeafTexture_010201A0 *i; // esi

  for ( i = last; /*0x7a5a53*/
        i != first;
        OB_SIdvLeafTexture_CopyAssign_010201A0(
          (OB_SIdvLeafTexture_010201A0 *)((char *)i + (char *)destinationEnd - (char *)last),
          i) )
  {
    i += 0xFFFFFFFF; /*0x7a5a82*/
  }
  return &destinationEnd[-(last - first)]; /*0x7a5a92*/
}
