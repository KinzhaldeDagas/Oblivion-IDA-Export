// Overlap-safe backward copy/assignment of initialized 0x38-byte SFrondVertex records from [first,last) into the range ending at destinationLast.
OB_SFrondVertex_010201A0 *__cdecl OB_SFrondVertex_CopyBackward_010201A0(
        OB_SFrondVertex_010201A0 *first,
        OB_SFrondVertex_010201A0 *last,
        OB_SFrondVertex_010201A0 *destinationLast)
{
  OB_SFrondVertex_010201A0 *result; // eax
  OB_SFrondVertex_010201A0 *i; // edx

  result = &destinationLast[-(last - first)]; /*0x79a8c7*/
  for ( i = last; /*0x79a8cb*/
        i != first;
        qmemcpy((char *)i + (char *)destinationLast - (char *)last, i, sizeof(OB_SFrondVertex_010201A0)) )
  {
    i += 0xFFFFFFFF; /*0x79a8d2*/
  }
  return result; /*0x79a8e6*/
}
