int __cdecl sub_78FC20(_DWORD *a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int result; // eax
  int v5; // edi
  int v6; // edx
  _DWORD *v7; // ebx
  _DWORD *v8; // edx
  _DWORD *v9; // edi
  int v10; // ecx
  int v11; // [esp+18h] [ebp+8h]

  v3 = (a2 - (int)a1) >> 2;
  result = a3 - a1;
  v5 = v3;
  if ( v3 )
  {
    do
    {
      v6 = result % v5;
      result = v5;
      v5 = v6;
    }
    while ( v6 );
  }
  if ( result < a3 - a1 && result > 0 )
  {
    v7 = &a1[result];
    do
    {
      v8 = &v7[v3];
      v9 = v7;
      v11 = *v7;
      if ( v8 == a3 )
        v8 = a1;
      while ( v8 != v7 )
      {
        *v9 = *v8;
        v10 = a3 - v8;
        v9 = v8;
        if ( v3 >= v10 )
          v8 = &a1[v3 - v10];
        else
          v8 += v3;
      }
      --result;
      v7 += 0xFFFFFFFF;
      *v9 = v11;
    }
    while ( result > 0 );
  }
  return result;
}
