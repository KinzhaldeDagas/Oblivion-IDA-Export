unsigned int sub_A136B0()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&hkBreakableConstraintData::`vftable';
  HIBYTE(v1) = (unsigned int)&hkBreakableConstraintData::`vftable' >> 0x18;
  BYTE2(v1) = (unsigned int)&hkBreakableConstraintData::`vftable' >> 0x10;
  dword_B2FF6C = v1;
  return (unsigned int)&hkBreakableConstraintData::`vftable' >> 0x10;
}
