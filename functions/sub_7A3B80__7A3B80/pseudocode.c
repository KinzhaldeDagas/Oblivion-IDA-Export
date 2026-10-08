// Forward deep-copy assignment over existing 0x54-byte SIdvLeafTexture records; returns the destination end.
OB_SIdvLeafTexture_010201A0 *__cdecl OB_SIdvLeafTexture_CopyAssignRangeForward_010201A0(
        const OB_SIdvLeafTexture_010201A0 *first,
        const OB_SIdvLeafTexture_010201A0 *last,
        OB_SIdvLeafTexture_010201A0 *destinationFirst)
{
  const OB_SIdvLeafTexture_010201A0 *i; // esi

  for ( i = first; i != last; ++i ) /*0x7a3bae*/
    OB_SIdvLeafTexture_CopyAssign_010201A0( /*0x7a3bb6*/
      (OB_SIdvLeafTexture_010201A0 *)((char *)i + (char *)destinationFirst - (char *)first),
      i);
  return &destinationFirst[last - first]; /*0x7a3bc4*/
}
