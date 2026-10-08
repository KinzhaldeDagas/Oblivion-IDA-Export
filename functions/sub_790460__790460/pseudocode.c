// Copies one 0x0C-byte OB_CBranchChildRef value into every record in [first,last) and returns last. Used by both in-place child-vector insert/fill bodies.
OB_CBranchChildRef_010201A0 *__cdecl OB_stVectorBranchChildRef_FillRange_010201A0(
        OB_CBranchChildRef_010201A0 *first,
        OB_CBranchChildRef_010201A0 *last,
        const OB_CBranchChildRef_010201A0 *value)
{
  OB_CBranchChildRef_010201A0 *result; // eax

  for ( result = first; result != last; ++result ) /*0x79046a*/
    *result = *value; /*0x790473*/
  return result; /*0x790489*/
}
