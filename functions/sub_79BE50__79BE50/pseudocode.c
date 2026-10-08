// OBLIVION AUTHORITY (2026-08-30): Assigns the same vector<float> value into every initialized element in [first,last), advancing by one 0x10-byte vector owner per iteration.
OB_stVectorFloat_010201A0 *__cdecl OB_stVectorFloat_CopyAssignFillRange_010201A0(
        OB_stVectorFloat_010201A0 *first,
        OB_stVectorFloat_010201A0 *last,
        const OB_stVectorFloat_010201A0 *value)
{
  OB_stVector4_010201A0 *v3; // esi
  OB_stVectorFloat_010201A0 *result; // eax

  v3 = (OB_stVector4_010201A0 *)first; /*0x79be51*/
  if ( first != last ) /*0x79be5c*/
  {
    do /*0x79be70*/
      result = (OB_stVectorFloat_010201A0 *)OB_stVector4_CopyAssign_010201A0(v3++, (const OB_stVector4_010201A0 *)value); /*0x79be66*/
    while ( v3 != (OB_stVector4_010201A0 *)last ); /*0x79be70*/
  }
  return result; /*0x79be73*/
}
