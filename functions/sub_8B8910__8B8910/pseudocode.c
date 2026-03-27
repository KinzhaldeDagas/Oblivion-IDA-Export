int sub_8B8910()
{
  int v1; // [esp+Ch] [ebp-64h]
  _DWORD v2[24]; // [esp+10h] [ebp-60h] BYREF

  v2[0x17] = __security_cookie;
  sub_8F5750(v2, 0, 0);
  LOWORD(v1) = (unsigned __int16)&off_A98060;
  HIBYTE(v1) = (unsigned int)&off_A98060 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A98060 >> 0x10;
  return v1;
}
