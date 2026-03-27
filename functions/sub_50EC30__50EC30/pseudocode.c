char __thiscall sub_50EC30(_DWORD *this, char *Str2, _DWORD *a3)
{
  _DWORD *v4; // esi
  int v5; // edi

  if ( !Str2 )
    return 0;
  v4 = this + 0x43;
  if ( this != (_DWORD *)0xFFFFFEF4 )
  {
    while ( v4[1] || *v4 )
    {
      v5 = *v4;
      if ( !_strcmp(*(char **)(*v4 + 4), Str2) )
      {
        *a3 = v5;
        return 1;
      }
      v4 = (_DWORD *)v4[1];
      if ( !v4 )
        return 0;
    }
  }
  return 0;
}
