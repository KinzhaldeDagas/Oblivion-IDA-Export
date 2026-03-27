unsigned int sub_A12A30()
{
  int v1; // [esp+Ch] [ebp-B4h]

  LOWORD(v1) = (unsigned __int16)&off_A99BF0;
  HIBYTE(v1) = (unsigned int)&off_A99BF0 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A99BF0 >> 0x10;
  dword_B2FA88 = v1;
  return (unsigned int)&off_A99BF0 >> 0x10;
}
