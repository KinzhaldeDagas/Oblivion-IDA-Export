int __stdcall sub_506F00(_DWORD *a1, int (__cdecl *a2)(int, _DWORD), int a3)
{
  int v3; // ecx
  int v4; // edi
  int result; // eax
  int v6; // ebp
  _DWORD *v7; // eax
  _DWORD *v8; // ebx
  int v9; // esi
  _DWORD *v10; // [esp+4h] [ebp-8h]
  int v11; // [esp+8h] [ebp-4h]
  int v12; // [esp+18h] [ebp+Ch]

  v3 = a3 - 1;
  v4 = 1;
  result = (a3 - 1) / 9;
  v11 = a3 - 1;
  if ( result < 1 )
    goto LABEL_14;
  do
    v4 = 3 * v4 + 1;
  while ( v4 <= result );
  if ( v4 > 0 )
  {
LABEL_14:
    do
    {
      v6 = v4;
      if ( v4 <= v3 )
      {
        v7 = a1;
        v8 = a1;
        v10 = a1;
        do
        {
          v9 = v6;
          v12 = v7[v6];
          if ( v6 >= v4 )
          {
            do
            {
              if ( a2(v12, *v8) >= 0 )
                break;
              a1[v9] = *v8;
              v9 -= v4;
              v8 -= v4;
            }
            while ( v9 >= v4 );
            v7 = a1;
            v3 = v11;
          }
          ++v6;
          v8 = v10 + 1;
          v7[v9] = v12;
          ++v10;
        }
        while ( v6 <= v3 );
      }
      result = v4 / 3;
      v4 /= 3;
    }
    while ( v4 > 0 );
  }
  return result;
}
