int __thiscall sub_8C38B0(void *this, int a2)
{
  int v3; // edi
  int v4; // eax
  const char *v5; // ebx
  const char *v6; // esi
  int **v7; // eax
  int **v8; // eax
  int **v9; // eax
  int **v10; // eax
  const char *v12; // [esp-4h] [ebp-238h] BYREF
  char v13; // [esp+13h] [ebp-221h] BYREF
  const char **v14; // [esp+14h] [ebp-220h]
  int *v15[3]; // [esp+18h] [ebp-21Ch] BYREF
  char v16[512]; // [esp+24h] [ebp-210h] BYREF
  unsigned int v17; // [esp+230h] [ebp-4h]

  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x68))(this);
  v4 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x74))(this, &v13);
  if ( *(_DWORD *)(a2 + 4) >= 6u )
  {
    sub_89D670(this, a2);
  }
  else
  {
    v3 -= 4;
    (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))(
      *(_DWORD *)(a2 + 0x21C),
      v4,
      v3,
      0,
      0);
    v5 = (const char *)(a2 + 0xE0);
    v6 = (const char *)(a2 + 8);
    if ( !*(_BYTE *)(a2 + 8) )
      v6 = "Please";
    v14 = &v12;
    sub_8BBFB0((int)v15, (int)v5, v16, 0x200u, 1);
    v12 = " re-export\n";
    v17 = 0;
    v7 = sub_8BBDB0(v15, "File ");
    v8 = sub_8BBDB0(v7, v5);
    v9 = sub_8BBDB0(v8, " contains an old bhkMoppBvTreeShape! ");
    v10 = sub_8BBDB0(v9, v6);
    sub_8BBDB0(v10, v12);
    (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
      dword_BA7FB0,
      1,
      0x234F2250,
      v16,
      ".\\bhkMoppBvTreeShape.cpp",
      0xD7);
    v17 = 0xFFFFFFFF;
    sub_8BC000(v15);
  }
  return v3;
}
