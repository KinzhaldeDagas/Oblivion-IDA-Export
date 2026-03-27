int __cdecl sub_8CB8A0(_DWORD *a1, const void **a2)
{
  _DWORD *v2; // ecx
  int result; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // ebx
  int v7; // eax
  bool v8; // zf
  int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // [esp+10h] [ebp-4h]

  v2 = a1;
  result = a1[0x1B] - 1;
  v4 = a1[2];
  if ( result >= 0 )
  {
    v5 = 0x1C * result;
    v12 = a1[0x1B];
    do
    {
      v6 = *(_DWORD *)(v2[0x1A] + v5);
      if ( *(_WORD *)(v6 + 4) )
        ++*(_WORD *)(v6 + 6);
      if ( *(_DWORD *)(v4 + 0x88) )
      {
        sub_91ED30(v6);
      }
      else
      {
        *(_DWORD *)(v4 + 0x88) = 1;
        sub_91ED30(v6);
        v7 = *(_DWORD *)(v4 + 0x88) - 1;
        *(_DWORD *)(v4 + 0x88) = v7;
        if ( !v7 )
        {
          if ( *(_DWORD *)(v4 + 0x84) )
          {
            if ( !*(_BYTE *)(v4 + 0x90) )
              sub_899210(v4);
          }
        }
      }
      if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
        sub_8A6EE0(a2, 4);
      v2 = a1;
      *((_DWORD *)*a2 + (_DWORD)a2[1]) = v6;
      v5 -= 0x1C;
      result = v12 - 1;
      v8 = v12 == 1;
      a2[1] = (char *)a2[1] + 1;
      --v12;
    }
    while ( !v8 );
  }
  v9 = v2[0x1E] - 1;
  if ( v9 >= 0 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v2[0x1D] + 4 * v9);
      if ( *(_WORD *)(v10 + 4) )
        ++*(_WORD *)(v10 + 6);
      if ( *(_DWORD *)(v4 + 0x88) )
      {
        sub_91ED30(v10);
      }
      else
      {
        *(_DWORD *)(v4 + 0x88) = 1;
        sub_91ED30(v10);
        v11 = *(_DWORD *)(v4 + 0x88) - 1;
        *(_DWORD *)(v4 + 0x88) = v11;
        if ( !v11 )
        {
          if ( *(_DWORD *)(v4 + 0x84) )
          {
            if ( !*(_BYTE *)(v4 + 0x90) )
              sub_899210(v4);
          }
        }
      }
      if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) )
        sub_8A6EE0(a2, 4);
      result = (int)a2[1];
      *((_DWORD *)*a2 + result) = v10;
      --v9;
      a2[1] = (char *)a2[1] + 1;
      if ( v9 < 0 )
        break;
      v2 = a1;
    }
  }
  return result;
}
