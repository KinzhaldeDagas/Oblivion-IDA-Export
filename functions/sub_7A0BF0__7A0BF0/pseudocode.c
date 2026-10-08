// Assigns one st_vector<SFrondGuide> value over [first,last) through the decoded deep vector copy-assignment operator.
OB_stVector_SFrondGuide_010201A0 *__cdecl OB_stVector_SFrondGuide_CopyAssignFillRange_010201A0(
        OB_stVector_SFrondGuide_010201A0 *first,
        OB_stVector_SFrondGuide_010201A0 *last,
        const OB_stVector_SFrondGuide_010201A0 *value)
{
  OB_stVector_SFrondGuide_010201A0 *i; // esi
  OB_stVector_SFrondGuide_010201A0 *result; // eax

  for ( i = first; i != last; ++i ) /*0x7a0bfc*/
    result = OB_stVector_SFrondGuide_CopyAssign_010201A0(i, value); /*0x7a0c06*/
  return result; /*0x7a0c13*/
}
