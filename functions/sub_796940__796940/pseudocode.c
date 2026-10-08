// OBLIVION AUTHORITY (2026-08-30): Backward move-assignment of vector<unsigned short> owners, implemented by swapping pointer triplets from the range end toward destinationEnd.
OB_stVectorUShort_010201A0 *__cdecl OB_stVector_stVectorUShort_MoveAssignRangeBackward_010201A0(
        OB_stVectorUShort_010201A0 *first,
        OB_stVectorUShort_010201A0 *last,
        OB_stVectorUShort_010201A0 *destinationEnd)
{
  OB_stVectorUShort_010201A0 *i; // esi

  for ( i = last; /*0x796947*/
        i != first;
        OB_stVectorUShort_Swap_010201A0(
          (OB_stVectorUShort_010201A0 *)((char *)i + (char *)destinationEnd - (char *)last),
          i) )
  {
    i += 0xFFFFFFFF; /*0x796964*/
  }
  return &destinationEnd[-(last - first)]; /*0x796974*/
}
