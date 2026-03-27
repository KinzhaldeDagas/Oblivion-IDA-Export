unsigned int sub_A13DC0()
{
  int v1; // [esp+Ch] [ebp-E4h]
  float v2[56]; // [esp+10h] [ebp-E0h] BYREF

  sub_9113D0(v2, 0);
  LOWORD(v1) = (unsigned __int16)&off_A9DFE8;
  BYTE2(v1) = (unsigned int)&off_A9DFE8 >> 0x10;
  HIBYTE(v1) = (unsigned int)&off_A9DFE8 >> 0x18;
  dword_BA84FC = (int)"hkPoweredRagdollConstraintData";
  dword_BA8500 = (int)sub_924F20;
  dword_BA8504 = v1;
  return (unsigned int)&off_A9DFE8 >> 0x10;
}
