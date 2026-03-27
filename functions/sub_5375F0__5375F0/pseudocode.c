char __thiscall sub_5375F0(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // edx
  char result; // al

  v3 = (_DWORD *)*(this + 6);
  result = 0;
  if ( v3 )
  {
    while ( v3[2] != a2 )
    {
      v3 = (_DWORD *)v3[1];
      if ( !v3 )
        return result;
    }
    sub_536EE0(this, v3, a3);
    return 1;
  }
  return result;
}
