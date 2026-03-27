unsigned int sub_A12A90()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_A99D60;
  HIBYTE(v1) = (unsigned int)&off_A99D60 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A99D60 >> 0x10;
  dword_B2FA94 = v1;
  return (unsigned int)&off_A99D60 >> 0x10;
}
