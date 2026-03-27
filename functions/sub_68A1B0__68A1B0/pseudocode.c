int __thiscall sub_68A1B0(char *this)
{
  char *v1; // esi
  _BYTE *v2; // edi

  v1 = this + 4;
  if ( this != (char *)0xFFFFFFFC )
  {
    while ( *((_DWORD *)v1 + 1) || *(_DWORD *)v1 )
    {
      v2 = *(_BYTE **)v1;
      if ( sub_68B0E0(*(_BYTE **)v1) )
        return sub_68B0F0(v2);
      v1 = *((char **)v1 + 1);
      if ( !v1 )
        return 0;
    }
  }
  return 0;
}
