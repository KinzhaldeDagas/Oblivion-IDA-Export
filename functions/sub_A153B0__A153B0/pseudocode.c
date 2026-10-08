unsigned int sub_A153B0()
{
  int v1; // [esp+Ch] [ebp-B4h]

  LOWORD(v1) = (unsigned __int16)&off_AA18D0; /*0xa153d5*/
  HIBYTE(v1) = (unsigned int)&off_AA18D0 >> 0x18; /*0xa153e3*/
  BYTE2(v1) = (unsigned int)&off_AA18D0 >> 0x10; /*0xa153ee*/
  dword_B304EC = v1; /*0xa153f6*/
  return (unsigned int)&off_AA18D0 >> 0x10; /*0xa153e7*/
}
