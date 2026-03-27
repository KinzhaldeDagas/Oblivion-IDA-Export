int sub_8F0BC0()
{
  int v1; // [esp+Ch] [ebp-34h]
  _DWORD v2[11]; // [esp+10h] [ebp-30h] BYREF

  sub_9156C0(v2);
  LOWORD(v1) = (unsigned __int16)&off_A9B198;
  HIBYTE(v1) = (unsigned int)&off_A9B198 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9B198 >> 0x10;
  return v1;
}
