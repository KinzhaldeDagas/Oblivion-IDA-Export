int __thiscall sub_574FB0(_DWORD *this, int a2)
{
  _DWORD *v2; // edi
  int result; // eax
  int v4; // ecx
  _DWORD *v5; // ecx
  _DWORD *v6; // edx
  _BYTE *v7; // esi

  v2 = (_DWORD *)*(this + 1);
  result = 0;
  while ( v2 )
  {
    v4 = v2[2];
    v2 = (_DWORD *)*v2;
    if ( v4 )
    {
      v5 = *(_DWORD **)(v4 + 4);
      while ( v5 )
      {
        v6 = (_DWORD *)v5[2];
        v5 = (_DWORD *)*v5;
        if ( v6 )
        {
          v7 = (_BYTE *)v6[7];
          if ( (!v7 || !*v7) && *v6 == a2 )
            ++result;
        }
      }
    }
  }
  return result;
}
