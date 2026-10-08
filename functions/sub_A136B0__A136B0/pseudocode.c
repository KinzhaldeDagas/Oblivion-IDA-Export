unsigned int sub_A136B0()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&hkBreakableConstraintData::`vftable'; /*0xa136cf*/
  HIBYTE(v1) = (unsigned int)&hkBreakableConstraintData::`vftable' >> 0x18; /*0xa136dd*/
  BYTE2(v1) = (unsigned int)&hkBreakableConstraintData::`vftable' >> 0x10; /*0xa136e5*/
  dword_B2FF6C = v1; /*0xa136ed*/
  return (unsigned int)&hkBreakableConstraintData::`vftable' >> 0x10; /*0xa136e1*/
}
