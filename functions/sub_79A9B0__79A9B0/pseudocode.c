// Copies 0x38-byte SFrondVertex records from [first,last) into uninitialized destination storage and returns the constructed end.
OB_SFrondVertex_010201A0 *__cdecl OB_SFrondVertex_UninitializedCopy_010201A0(
        const OB_SFrondVertex_010201A0 *first,
        const OB_SFrondVertex_010201A0 *last,
        OB_SFrondVertex_010201A0 *destinationFirst)
{
  const OB_SFrondVertex_010201A0 *v3; // edx
  OB_SFrondVertex_010201A0 *result; // eax

  v3 = first; /*0x79a9b0*/
  for ( result = destinationFirst; v3 != last; ++result ) /*0x79a9bf*/
  {
    if ( result ) /*0x79a9c5*/
      qmemcpy(result, v3, sizeof(OB_SFrondVertex_010201A0)); /*0x79a9d0*/
    ++v3; /*0x79a9d2*/
  }
  return result; /*0x79a9de*/
}
