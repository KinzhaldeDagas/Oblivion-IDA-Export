int __cdecl sub_8E7850(_DWORD *a1, _DWORD *a2, int *a3)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // ebp
  int v5; // esi
  char v6; // al
  int v7; // esi
  char *v8; // edi
  _DWORD *v9; // eax
  int v10; // edx
  int *v11; // esi
  int v12; // ecx
  int v13; // eax
  int v15; // [esp+10h] [ebp-4h] BYREF
  int v16; // [esp+18h] [ebp+4h]

  v3 = a1;
  v4 = a2;
  v5 = a1[4];
  v6 = *((_BYTE *)a1 + v5 + 0x91);
  v7 = (int)a1 + v5;
  v8 = (char *)a2 + a2[4];
  if ( !v6 && !v8[0x91] && *(_DWORD *)(v7 + 0x54) != *((_DWORD *)v8 + 0x15) )
    sub_8CD320(*(int **)(v7 + 8), v7, (int)a2 + a2[4]);
  if ( *(_WORD *)(*(_DWORD *)(v7 + 0x54) + 0x20) != 0xFFFF
    || (v16 = *((_DWORD *)v8 + 0x15), *(_WORD *)(v16 + 0x20) == 0xFFFF) )
  {
    v16 = *(_DWORD *)(v7 + 0x54);
  }
  sub_8E6490(v3, v4, a3, &v15, (BOOL *)&a2);
  if ( a2 )
  {
    v9 = v3;
    v3 = v4;
    v4 = v9;
  }
  v10 = *(char *)(v7 + 0x58);
  v11 = a3;
  v12 = *(_DWORD *)(*a3 + 4 * (v8[0x58] + 8 * v10) + 0xC);
  v13 = (*(int (__thiscall **)(int, _DWORD *, _DWORD *, int *))(*(_DWORD *)v12 + 8))(v12, v3, v4, a3);
  return sub_8E6950(v16 + 0x44, (int)v3, (int)v4, v15, v11, v13);
}
