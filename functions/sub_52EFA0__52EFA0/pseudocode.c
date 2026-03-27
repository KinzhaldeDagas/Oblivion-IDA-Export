_DWORD *__thiscall sub_52EFA0(char *this, int a2)
{
  char *v2; // eax
  _DWORD *v3; // ecx

  v2 = this + 0x28;
  if ( this != (char *)0xFFFFFFD8 )
  {
    do
    {
      v3 = *(_DWORD **)v2;
      if ( !*(_DWORD *)v2 )
        break;
      v2 = *((char **)v2 + 1);
      if ( *v3 == a2 && (a2 || !v3[7]) )
        return v3 + 1;
    }
    while ( v2 );
  }
  return 0;
}
