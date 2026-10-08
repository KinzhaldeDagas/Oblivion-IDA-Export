// Oblivion CSpeedTreeRT branch cleanup wrapper: when branchGeometry exists, clears its packed-color vector at CIndexedGeometry+0x58 after Bethesda copies the geometry.
void __thiscall CSpeedTreeRT__ClearBranchPackedColors(OB_CSpeedTreeRT_010201A0 *this)
{
  int v1; // ebx
  OB_CIndexedGeometry_010201A0 *branchGeometry; // eax
  OB_stVector4_010201A0 *p_packedColors; // esi
  unsigned int end; // edi
  unsigned int begin; // ebx
  OB_stVector4Iterator_010201A0 result; // [esp+0h] [ebp-8h] BYREF

  branchGeometry = this->branchGeometry; /*0x788fd0*/
  if ( branchGeometry ) /*0x788fd8*/
  {
    p_packedColors = (OB_stVector4_010201A0 *)&branchGeometry->packedColors; /*0x788fdc*/
    end = (unsigned int)branchGeometry->packedColors.end; /*0x788fe0*/
    if ( branchGeometry->packedColors.begin > (unsigned int *)end ) /*0x788fe6*/
      _invalid_parameter_noinfo(v1, end, (int)p_packedColors); /*0x788fe8*/
    begin = (unsigned int)p_packedColors->begin; /*0x788fed*/
    if ( (unsigned int *)begin > p_packedColors->end ) /*0x788ff3*/
      _invalid_parameter_noinfo(begin, end, (int)p_packedColors); /*0x788ff5*/
    OB_stVector4_EraseRange_010201A0( /*0x789005*/
      p_packedColors,
      &result,
      (OB_stVector4Iterator_010201A0)__PAIR64__(begin, (unsigned int)p_packedColors),
      (OB_stVector4Iterator_010201A0)__PAIR64__(end, (unsigned int)p_packedColors));
  }
}
