char __thiscall sub_613670(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  char result; // al
  int v4; // edx

  v2 = (_DWORD *)*(this + 0x10);
  result = 0;
  if ( v2 )
  {
    do
    {
      v4 = v2[1];
      if ( !v4 && !*v2 )
        break;
      if ( *(_DWORD *)*v2 == a2 )
        return 1;
      v2 = (_DWORD *)v2[1];
    }
    while ( v4 );
  }
  return result;
}
