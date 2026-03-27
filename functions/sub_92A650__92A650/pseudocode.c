int sub_92A650()
{
  int v1; // [esp+Ch] [ebp-54h]
  _DWORD v2[19]; // [esp+10h] [ebp-50h] BYREF

  sub_929DD0(v2, 0);
  LOWORD(v1) = (unsigned __int16)&off_AA1AF4;
  HIBYTE(v1) = (unsigned int)&off_AA1AF4 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_AA1AF4 >> 0x10;
  return v1;
}
