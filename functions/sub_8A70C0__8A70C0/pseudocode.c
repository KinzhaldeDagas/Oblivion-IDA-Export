unsigned int __stdcall sub_8A70C0(signed int a1)
{
  if ( a1 <= 0x10 ) /*0x8a70c7*/
    return a1 + 8; /*0x8a70d5*/
  else
    return ((a1 + 0xF) & 0xFFFFFFF0) + 0x10; /*0x8a70cf*/
}
