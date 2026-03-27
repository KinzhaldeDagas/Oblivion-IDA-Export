unsigned int sub_A13610()
{
  int v1; // [esp+Ch] [ebp-54h]

  LOWORD(v1) = (unsigned __int16)&hkMotorAction::`vftable';
  HIBYTE(v1) = (unsigned int)&hkMotorAction::`vftable' >> 0x18;
  BYTE2(v1) = (unsigned int)&hkMotorAction::`vftable' >> 0x10;
  dword_B2FF54 = v1;
  return (unsigned int)&hkMotorAction::`vftable' >> 0x10;
}
