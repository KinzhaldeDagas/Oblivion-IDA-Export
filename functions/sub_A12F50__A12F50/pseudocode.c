unsigned int sub_A12F50()
{
  int v1; // [esp+Ch] [ebp-114h]

  LOWORD(v1) = (unsigned __int16)&off_A9AEC0;
  HIBYTE(v1) = (unsigned int)&off_A9AEC0 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9AEC0 >> 0x10;
  dword_B2FD88 = v1;
  return (unsigned int)&off_A9AEC0 >> 0x10;
}
