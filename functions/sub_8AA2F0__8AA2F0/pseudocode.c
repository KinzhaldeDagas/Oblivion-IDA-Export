int sub_8AA2F0()
{
  int v1; // [esp+Ch] [ebp-E4h]
  _DWORD v2[55]; // [esp+10h] [ebp-E0h] BYREF

  sub_8A6740(v2, 0); /*0x8aa30f*/
  LOWORD(v1) = (unsigned __int16)&off_A97A98; /*0x8aa321*/
  HIBYTE(v1) = (unsigned int)&off_A97A98 >> 0x18; /*0x8aa32f*/
  BYTE2(v1) = (unsigned int)&off_A97A98 >> 0x10; /*0x8aa33a*/
  return v1; /*0x8aa333*/
}
