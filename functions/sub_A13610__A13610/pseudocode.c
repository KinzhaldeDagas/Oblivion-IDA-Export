unsigned int sub_A13610()
{
  int v1; // [esp+Ch] [ebp-54h]

  LOWORD(v1) = (unsigned __int16)&hkMotorAction::`vftable'; /*0xa1362f*/
  HIBYTE(v1) = (unsigned int)&hkMotorAction::`vftable' >> 0x18; /*0xa1363d*/
  BYTE2(v1) = (unsigned int)&hkMotorAction::`vftable' >> 0x10; /*0xa13645*/
  dword_B2FF54 = v1; /*0xa1364d*/
  return (unsigned int)&hkMotorAction::`vftable' >> 0x10; /*0xa13641*/
}
