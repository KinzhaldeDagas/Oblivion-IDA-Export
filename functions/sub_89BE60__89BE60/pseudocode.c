int __stdcall sub_89BE60(int *a1, _DWORD *a2)
{
  int v2; // ecx
  int v3; // esi
  signed int v4; // eax
  int **v5; // edx
  int v6; // edx
  char *v7; // ebp
  int i; // ecx
  _DWORD *v9; // eax
  int v10; // ecx
  int result; // eax
  int v12; // ecx
  char *v13; // [esp+10h] [ebp-1Ch] BYREF
  int v14; // [esp+14h] [ebp-18h]
  int v15; // [esp+18h] [ebp-14h]
  char v16; // [esp+1Ch] [ebp-10h] BYREF

  v2 = a2[0x2F];
  v3 = 0;
  v4 = 0;
  if ( v2 <= 0 )
  {
LABEL_5:
    v4 = 0xFFFFFFFF;
  }
  else
  {
    v5 = (int **)a2[0x2E];
    while ( *v5 != a1 )
    {
      ++v4;
      ++v5;
      if ( v4 >= v2 )
        goto LABEL_5;
    }
  }
  *(_DWORD *)(a2[0x2E] + 4 * v4) = 0;
  *(_BYTE *)(a2[0x15] + 0x26) = 1;
  v6 = *a1;
  v13 = &v16;
  v14 = 0;
  v15 = 0x80000004;
  (*(void (__thiscall **)(int *, char **))(v6 + 0xC))(a1, &v13);
  v7 = v13;
  for ( i = 0; i < v14; ++i )
  {
    v9 = *(_DWORD **)&v13[4 * i];
    if ( v9 != a2 )
    {
      v3 = v9[0x15];
      if ( *(_WORD *)(v3 + 0x20) != 0xFFFF )
        break;
    }
  }
  v10 = a1[3];
  if ( v3 != v10 )
  {
    sub_8DDC90(v10, (int)a1);
    sub_8DE080((_DWORD *)v3, (int)a1);
    v7 = v13;
  }
  result = v15;
  if ( v15 >= 0 )
  {
    v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v12 )
      v12 = dword_BA7D9C;
    return sub_8A75D0(v12, v7, 4 * v15, 0x14);
  }
  return result;
}
