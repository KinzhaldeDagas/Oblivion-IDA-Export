double __thiscall Actor_GetDispostionBonus(char *this, int a2)
{
  char *v2; // eax
  int *v3; // ecx

  v2 = this + 0xA4;
  if ( this != (char *)0xFFFFFF5C )
  {
    do
    {
      v3 = *(int **)v2;
      if ( !*(_DWORD *)v2 )
        break;
      if ( v3[1] == a2 )
        return (double)*v3;
      v2 = *((char **)v2 + 1);
    }
    while ( v2 );
  }
  return 0.0;
}
