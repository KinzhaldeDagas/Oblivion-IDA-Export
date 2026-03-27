char __thiscall sub_683C70(_DWORD *this, int a2, int a3)
{
  char result; // al
  _DWORD *v4; // ecx
  _DWORD *v5; // edx
  _DWORD *v6; // ecx

  result = 0;
  v4 = this + 0xD;
  if ( v4 )
  {
    do
    {
      v5 = (_DWORD *)v4[1];
      if ( !v5 && !*v4 )
        break;
      v6 = (_DWORD *)*v4;
      if ( *v6 == a2 && v6[1] == a3 )
        return 1;
      v4 = v5;
    }
    while ( v5 );
  }
  return result;
}
