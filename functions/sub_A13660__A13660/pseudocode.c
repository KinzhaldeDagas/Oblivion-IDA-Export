unsigned int sub_A13660()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&hkMalleableConstraintData::`vftable'; /*0xa1367f*/
  HIBYTE(v1) = (unsigned int)&hkMalleableConstraintData::`vftable' >> 0x18; /*0xa1368d*/
  BYTE2(v1) = (unsigned int)&hkMalleableConstraintData::`vftable' >> 0x10; /*0xa13695*/
  dword_B2FF60 = v1; /*0xa1369d*/
  return (unsigned int)&hkMalleableConstraintData::`vftable' >> 0x10; /*0xa13691*/
}
