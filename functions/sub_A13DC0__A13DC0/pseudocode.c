unsigned int sub_A13DC0()
{
  int v1; // [esp+Ch] [ebp-E4h]
  float v2[56]; // [esp+10h] [ebp-E0h] BYREF

  sub_9113D0(v2, 0); /*0xa13dd3*/
  LOWORD(v1) = (unsigned __int16)&off_A9DFE8; /*0xa13de5*/
  BYTE2(v1) = (unsigned int)&off_A9DFE8 >> 0x10; /*0xa13df3*/
  HIBYTE(v1) = (unsigned int)&off_A9DFE8 >> 0x18; /*0xa13df7*/
  unk_BA84FC = (int)"hkPoweredRagdollConstraintData"; /*0xa13dff*/
  unk_BA8500 = (int)sub_924F20; /*0xa13e09*/
  unk_BA8504 = v1; /*0xa13e13*/
  return (unsigned int)&off_A9DFE8 >> 0x10; /*0xa13e19*/
}
