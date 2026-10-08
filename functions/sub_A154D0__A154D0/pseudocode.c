unsigned int sub_A154D0()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_AA1948; /*0xa154ef*/
  HIBYTE(v1) = (unsigned int)&off_AA1948 >> 0x18; /*0xa154fd*/
  BYTE2(v1) = (unsigned int)&off_AA1948 >> 0x10; /*0xa15505*/
  dword_B30510 = v1; /*0xa1550d*/
  return (unsigned int)&off_AA1948 >> 0x10; /*0xa15501*/
}
