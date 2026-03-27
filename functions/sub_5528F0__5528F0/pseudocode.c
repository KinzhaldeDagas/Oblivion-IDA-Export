void __cdecl sub_5528F0(int *a1, int a2)
{
  int *v2; // edi
  char *v3; // ebx
  _DWORD *v4; // esi
  int v5; // ebp
  int v6; // eax
  int v7; // ecx
  char *v8; // [esp+14h] [ebp-4h]
  int v9; // [esp+1Ch] [ebp+4h]

  v2 = a1;
  if ( a1 )
  {
    if ( a2 )
    {
      v3 = (char *)a1 - a2;
      v8 = (char *)a1 - a2;
      v4 = (_DWORD *)(a2 + 4);
      v9 = 2;
      do
      {
        v5 = 2;
        do
        {
          v6 = *v2;
          if ( *v2 && (v7 = *(_DWORD *)((char *)v4 + (_DWORD)v3)) != 0 )
          {
            v4[0xFFFFFFFF] = v6;
            *v4 = v7;
            sub_527160(v4 + 1, v7 * v6, COERCE_INT(0.0));
            sub_5520E0(v4 + 0xFFFFFFFF, (int)(v4 + 0xFFFFFFFF), v2);
            v3 = v8;
          }
          else
          {
            v4[0xFFFFFFFF] = 0;
            *v4 = 0;
            sub_527160(v4 + 1, 0, COERCE_INT(0.0));
          }
          v2 += 6;
          v4 += 6;
          --v5;
        }
        while ( v5 );
        --v9;
      }
      while ( v9 );
    }
  }
}
