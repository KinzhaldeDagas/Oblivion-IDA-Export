// OBLIVION AUTHORITY (2026-08-30): Copy-assigns a range of vector<unsigned short*> owners using the structurally shared 4-byte-element vector assignment.
OB_stVectorUShortPtr_010201A0 *__cdecl OB_stVector_stVectorUShortPtr_CopyAssignRange_010201A0(
        const OB_stVectorUShortPtr_010201A0 *first,
        const OB_stVectorUShortPtr_010201A0 *last,
        OB_stVectorUShortPtr_010201A0 *destination)
{
  const OB_stVector4_010201A0 *v3; // esi

  v3 = (const OB_stVector4_010201A0 *)first; /*0x795ceb*/
  if ( first != last ) /*0x795cfe*/
  {
    do /*0x795d10*/
    {
      OB_stVector4_CopyAssign_010201A0((OB_stVector4_010201A0 *)((char *)v3 + (char *)destination - (char *)first), v3); /*0x795d06*/
      ++v3; /*0x795d0b*/
    }
    while ( v3 != (const OB_stVector4_010201A0 *)last ); /*0x795d10*/
  }
  return &destination[last - first]; /*0x795d14*/
}
