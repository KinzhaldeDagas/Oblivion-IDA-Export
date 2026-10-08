int sub_8B8910()
{
  int v1; // [esp+Ch] [ebp-64h]
  _DWORD v2[24]; // [esp+10h] [ebp-60h] BYREF

  v2[0x17] = __security_cookie; /*0x8b8920*/
  sub_8F5750(v2, 0, 0); /*0x8b892a*/
  LOWORD(v1) = (unsigned __int16)&off_A98060; /*0x8b893c*/
  HIBYTE(v1) = (unsigned int)&off_A98060 >> 0x18; /*0x8b894a*/
  BYTE2(v1) = (unsigned int)&off_A98060 >> 0x10; /*0x8b8952*/
  return v1; /*0x8b894e*/
}
