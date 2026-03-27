_DWORD *__thiscall sub_613640(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  _DWORD *result; // eax
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
      result = (_DWORD *)*v2;
      if ( *(_DWORD *)*v2 == a2 )
        break;
      v2 = (_DWORD *)v2[1];
      result = 0;
    }
    while ( v4 );
  }
  return result;
}
