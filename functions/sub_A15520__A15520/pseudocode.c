unsigned int sub_A15520()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_AA1958; /*0xa1553f*/
  HIBYTE(v1) = (unsigned int)&off_AA1958 >> 0x18; /*0xa1554d*/
  BYTE2(v1) = (unsigned int)&off_AA1958 >> 0x10; /*0xa15555*/
  dword_B3051C = v1; /*0xa1555d*/
  return (unsigned int)&off_AA1958 >> 0x10; /*0xa15551*/
}
