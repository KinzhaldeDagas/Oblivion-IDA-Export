int __thiscall sub_8E88A0(const void **this, int a2, int a3, int a4)
{
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // eax
  int result; // eax
  int v8; // edx
  int v9; // ecx

  v4 = this + 4;
  v5 = (unsigned int)*(this + 6) & 0x3FFFFFFF;
  if ( v5 < a3 )
  {
    v6 = 2 * v5;
    if ( a3 >= v6 )
      v6 = a3;
    sub_8A6E40(this + 4, v6, 8);
  }
  result = 0;
  v4[1] = a3;
  if ( a3 > 0 )
  {
    v8 = a2;
    do
    {
      if ( *(_DWORD *)v8 )
      {
        *(_DWORD *)(*v4 + 8 * result) = *(_DWORD *)v8;
        if ( a4 )
          v9 = *(_DWORD *)(a4 - a2 + v8);
        else
          v9 = 0;
        *(_DWORD *)(*v4 + 8 * result + 4) = v9;
        if ( *(_WORD *)(*(_DWORD *)v8 + 4) )
          ++*(_WORD *)(*(_DWORD *)v8 + 6);
      }
      ++result;
      v8 += 4;
    }
    while ( result < a3 );
  }
  return result;
}
