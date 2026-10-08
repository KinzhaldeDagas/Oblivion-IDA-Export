unsigned int sub_A13890()
{
  int v1; // [esp+Ch] [ebp-64h]

  LOWORD(v1) = (unsigned __int16)&off_A9CD6C; /*0xa138af*/
  HIBYTE(v1) = (unsigned int)&off_A9CD6C >> 0x18; /*0xa138bd*/
  BYTE2(v1) = (unsigned int)&off_A9CD6C >> 0x10; /*0xa138c5*/
  dword_B2FFB4 = v1; /*0xa138cd*/
  return (unsigned int)&off_A9CD6C >> 0x10; /*0xa138c1*/
}
