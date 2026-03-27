int __cdecl sub_8CD380(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  _DWORD *v5; // edx
  int result; // eax
  int v7; // ebp
  _WORD *v8; // esi
  _DWORD *v9; // ecx
  int i; // esi
  int v11; // eax
  int v12; // ecx
  char *v13; // [esp+Ch] [ebp-4Ch] BYREF
  int v14; // [esp+10h] [ebp-48h]
  unsigned int v15; // [esp+14h] [ebp-44h]
  char v16; // [esp+18h] [ebp-40h] BYREF
  _DWORD *v17; // [esp+60h] [ebp+8h]

  v3 = a3[1];
  v5 = *(_DWORD **)(a2 + 0x54);
  v13 = &v16;
  result = 0x80000010;
  v7 = 0;
  v17 = v5;
  v14 = 0;
  v15 = 0x80000010;
  if ( v3 > 0 )
  {
    while ( 1 )
    {
      v8 = *(_WORD **)(*a3 + 4 * v7);
      v9 = *(_DWORD **)(a1 + 0x30);
      if ( v5 == v9 )
      {
        sub_8DE080(v9, (int)v8);
        if ( v8[2] )
        {
          if ( !--v8[3] )
            (**(void (__thiscall ***)(_WORD *, int))v8)(v8, 1);
        }
      }
      else
      {
        sub_8DE080(v5, (int)v8);
        if ( v8[2] )
        {
          if ( !--v8[3] )
            (**(void (__thiscall ***)(_WORD *, int))v8)(v8, 1);
        }
        v14 = 0;
        (*(void (__thiscall **)(_WORD *, char **))(*(_DWORD *)v8 + 0xC))(v8, &v13);
        for ( i = 0; i < v14; ++i )
        {
          v11 = *(_DWORD *)&v13[4 * i];
          if ( !*(_BYTE *)(v11 + 0x91)
            && v11 != a2
            && !*(_BYTE *)(a2 + 0x91)
            && *(_DWORD *)(v11 + 0x54) != *(_DWORD *)(a2 + 0x54) )
          {
            sub_8CD320(*(int **)(v11 + 8), v11, a2);
          }
        }
      }
      if ( ++v7 >= a3[1] )
        break;
      v5 = v17;
    }
    result = v15;
  }
  if ( result >= 0 )
  {
    v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v12 )
      v12 = dword_BA7D9C;
    return sub_8A75D0(v12, v13, 4 * result, 0x14);
  }
  return result;
}
