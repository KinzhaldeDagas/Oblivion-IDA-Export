int __thiscall sub_4474D0(int *this, char *Str2)
{
  int *v2; // esi
  int v3; // edi
  char *v4; // eax

  v2 = this + 0x1D;
  if ( !*(this + 0x1E) && !*v2 || this == (int *)0xFFFFFF8C )
    return 0;
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      v4 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0xD4))(v3);
      if ( !_strcmp(v4, Str2) )
        break;
    }
    v2 = (int *)v2[1];
    if ( !v2 )
      return 0;
  }
  return v3;
}
