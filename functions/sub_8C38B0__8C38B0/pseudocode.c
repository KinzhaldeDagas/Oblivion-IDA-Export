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

  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x68))(this); /*0x8c38fa*/
  v4 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x74))(this, &v13); /*0x8c3908*/
  if ( *(_DWORD *)(a2 + 4) >= 6u ) /*0x8c390e*/
  {
    sub_89D670(this, a2); /*0x8c39d9*/
  }
  else
  {
    v3 -= 4; /*0x8c391e*/
    (*(void (__cdecl **)(_DWORD, int, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))( /*0x8c3927*/
      *(_DWORD *)(a2 + 0x21C),
      v4,
      v3,
      0,
      0);
    v5 = (const char *)(a2 + 0xE0); /*0x8c3929*/
    v6 = (const char *)(a2 + 8); /*0x8c392f*/
    if ( !*(_BYTE *)(a2 + 8) ) /*0x8c3935*/
      v6 = "Please"; /*0x8c393a*/
    v14 = &v12; /*0x8c3942*/
    sub_8BBFB0((int)v15, (int)v5, v16, 0x200u, 1); /*0x8c3957*/
    v12 = " re-export\n"; /*0x8c395c*/
    v17 = 0; /*0x8c3971*/
    v7 = sub_8BBDB0(v15, "File "); /*0x8c397c*/
    v8 = sub_8BBDB0(v7, v5); /*0x8c3983*/
    v9 = sub_8BBDB0(v8, " contains an old bhkMoppBvTreeShape! "); /*0x8c398a*/
    v10 = sub_8BBDB0(v9, v6); /*0x8c3991*/
    sub_8BBDB0(v10, v12); /*0x8c3998*/
    (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x8c39be*/
      unk_BA7FB0,
      1,
      0x234F2250,
      v16,
      ".\\bhkMoppBvTreeShape.cpp",
      0xD7);
    v17 = 0xFFFFFFFF; /*0x8c39c4*/
    sub_8BC000(v15); /*0x8c39cf*/
  }
  return v3; /*0x8c39e0*/
}
