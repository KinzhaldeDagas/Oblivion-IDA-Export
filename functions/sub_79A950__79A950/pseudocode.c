// Forward copy/assignment of initialized 0x38-byte SFrondVertex records from [first,last) into destinationFirst; returns destination end.
OB_SFrondVertex_010201A0 *__cdecl OB_SFrondVertex_CopyForward_010201A0(
        OB_SFrondVertex_010201A0 *first,
        OB_SFrondVertex_010201A0 *last,
        OB_SFrondVertex_010201A0 *destinationFirst)
{
  OB_SFrondVertex_010201A0 *result; // eax
  OB_SFrondVertex_010201A0 *i; // edx
  char *v5; // edi
  OB_SFrondVertex_010201A0 *v6; // esi

  result = &destinationFirst[last - first]; /*0x79a981*/
  for ( i = first; i != last; ++i ) /*0x79a985*/
  {
    v5 = (char *)i + (char *)destinationFirst - (char *)first; /*0x79a990*/
    v6 = i; /*0x79a993*/
    qmemcpy(v5, v6, 0x38u); /*0x79a99f*/
  }
  return result; /*0x79a9a4*/
}
