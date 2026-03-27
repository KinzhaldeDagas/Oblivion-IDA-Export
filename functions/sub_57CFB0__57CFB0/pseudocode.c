char __thiscall sub_57CFB0(_DWORD *this, int a2)
{
  int v2; // eax
  _DWORD *i; // ecx

  v2 = 0;
  for ( i = this + 0x38; *i != a2; ++i )
  {
    if ( (unsigned int)++v2 >= 0xA )
      return 0;
  }
  return 1;
}
