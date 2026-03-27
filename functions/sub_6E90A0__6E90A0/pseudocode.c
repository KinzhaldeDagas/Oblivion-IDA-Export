unsigned int __thiscall sub_6E90A0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // edi
  unsigned int i; // ebp
  _DWORD *v5; // esi
  unsigned int j; // edi
  int v7; // eax
  unsigned int result; // eax
  _DWORD *v9; // ebp
  int *v10; // edi
  int v11; // eax
  int v12; // esi
  int v13; // ebx
  unsigned int m; // esi
  unsigned int v15; // [esp+10h] [ebp-Ch]
  unsigned int k; // [esp+18h] [ebp-4h]

  v2 = a2;
  v3 = this;
  sub_715E70(this, a2);
  for ( i = 0; i < *((unsigned __int16 *)v3 + 0x27); ++i )
  {
    v5 = *(_DWORD **)(v3[0x12] + 4 * i);
    if ( v5 )
    {
      for ( j = 0; j < v5[2]; ++j )
      {
        v7 = sub_7124A0(a2);
        if ( j < v5[2] )
          *(_DWORD *)(*v5 + 4 * j) = v7;
      }
      v3 = this;
    }
  }
  result = 0;
  for ( k = 0; result < *((unsigned __int16 *)v3 + 0x2F); k = ++result )
  {
    v9 = *(_DWORD **)(v3[0x16] + 4 * result);
    if ( v9 )
    {
      v15 = 0;
      if ( v9[2] )
      {
        do
        {
          v10 = *(int **)(*v9 + 4 * v15);
          *v10 = sub_7124A0(v2);
          v11 = sub_7124A0(v2);
          v12 = v10[1];
          v13 = v11;
          if ( v12 != v11 )
          {
            if ( v12 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
                (**(void (__thiscall ***)(int, int))v12)(v12, 1);
            }
            v10[1] = v13;
            if ( v13 )
              InterlockedIncrement((volatile LONG *)(v13 + 4));
          }
          v2 = a2;
          ++v15;
        }
        while ( v15 < v9[2] );
        result = k;
        v3 = this;
      }
    }
  }
  for ( m = 0; m < v3[0x1B]; ++m )
  {
    result = sub_7124A0(v2);
    if ( m < v3[0x1B] )
      *(_DWORD *)(v3[0x19] + 4 * m) = result;
  }
  return result;
}
