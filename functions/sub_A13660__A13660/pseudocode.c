unsigned int sub_A13660()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&hkMalleableConstraintData::`vftable';
  HIBYTE(v1) = (unsigned int)&hkMalleableConstraintData::`vftable' >> 0x18;
  BYTE2(v1) = (unsigned int)&hkMalleableConstraintData::`vftable' >> 0x10;
  dword_B2FF60 = v1;
  return (unsigned int)&hkMalleableConstraintData::`vftable' >> 0x10;
}
