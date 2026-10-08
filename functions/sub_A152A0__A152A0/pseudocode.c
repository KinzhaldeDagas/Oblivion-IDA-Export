unsigned int sub_A152A0()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_AA1838; /*0xa152bf*/
  HIBYTE(v1) = (unsigned int)&off_AA1838 >> 0x18; /*0xa152cd*/
  BYTE2(v1) = (unsigned int)&off_AA1838 >> 0x10; /*0xa152d5*/
  dword_B304C8 = v1; /*0xa152dd*/
  return (unsigned int)&off_AA1838 >> 0x10; /*0xa152d1*/
}
