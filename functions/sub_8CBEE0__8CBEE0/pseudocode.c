int __cdecl sub_8CBEE0(int a1, int a2, const void **a3)
{
  int result; // eax
  int v4; // ecx
  int v5; // ebx
  int v6; // edx
  int v7; // edi
  _WORD *v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  char *v12; // [esp+8h] [ebp-4Ch] BYREF
  int v13; // [esp+Ch] [ebp-48h]
  unsigned int v14; // [esp+10h] [ebp-44h]
  char v15; // [esp+14h] [ebp-40h] BYREF

  result = a2;
  v12 = &v15;
  v4 = *(_DWORD *)(a2 + 0xBC);
  v5 = 0;
  v6 = 0x80000010;
  v7 = *(_DWORD *)(a2 + 0x54);
  v13 = 0;
  v14 = 0x80000010;
  if ( v4 > 0 )
  {
    do
    {
      v8 = *(_WORD **)(*(_DWORD *)(result + 0xB8) + 4 * v5);
      if ( v8 )
      {
        (*(void (__thiscall **)(_WORD *, char **))(*(_DWORD *)v8 + 0xC))(v8, &v12);
        v9 = 0;
        if ( v13 <= 0 )
        {
LABEL_7:
          if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) )
            sub_8A6EE0(a3, 4);
          *((_DWORD *)*a3 + (_DWORD)a3[1]) = v8;
          a3[1] = (char *)a3[1] + 1;
          if ( v8[2] )
            ++v8[3];
          sub_8DDC90(v7, (int)v8);
          *(_BYTE *)(v7 + 0x27) = 1;
          if ( *(_WORD *)(v7 + 0x22) == 0xFFFF )
          {
            *(_WORD *)(v7 + 0x22) = *(_WORD *)(a1 + 0x54);
            if ( *(_DWORD *)(a1 + 0x54) == (*(_DWORD *)(a1 + 0x58) & 0x3FFFFFFF) )
              sub_8A6EE0((const void **)(a1 + 0x50), 4);
            *(_DWORD *)(*(_DWORD *)(a1 + 0x50) + 4 * (*(_DWORD *)(a1 + 0x54))++) = v7;
          }
        }
        else
        {
          while ( 1 )
          {
            v10 = *(_DWORD *)&v12[4 * v9];
            if ( !*(_BYTE *)(v10 + 0x91) && v10 != a2 )
              break;
            if ( ++v9 >= v13 )
              goto LABEL_7;
          }
        }
      }
      result = a2;
      ++v5;
    }
    while ( v5 < *(_DWORD *)(a2 + 0xBC) );
    v6 = v14;
  }
  if ( v6 >= 0 )
  {
    v11 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v11 )
      v11 = dword_BA7D9C;
    return sub_8A75D0(v11, v12, 4 * v6, 0x14);
  }
  return result;
}
