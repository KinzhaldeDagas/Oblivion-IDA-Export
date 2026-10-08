char __thiscall sub_71B4A0(char *this, int a2)
{
  int v2; // eax
  char *i; // edx

  v2 = 0; /*0x71b4a5*/
  for ( i = this + 0x14; *(_DWORD *)i != a2; i += 0xC ) /*0x71b4a7*/
  {
    if ( (unsigned int)++v2 >= 4 ) /*0x71b4bd*/
      return 0; /*0x71b4c2*/
  }
  return *(this + 0xC * v2 + 0x1C); /*0x71b4c1*/
}
