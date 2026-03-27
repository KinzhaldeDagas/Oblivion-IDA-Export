char __thiscall sub_71B4A0(char *this, int a2)
{
  int v2; // eax
  char *i; // edx

  v2 = 0;
  for ( i = this + 0x14; *(_DWORD *)i != a2; i += 0xC )
  {
    if ( (unsigned int)++v2 >= 4 )
      return 0;
  }
  return *(this + 0xC * v2 + 0x1C);
}
