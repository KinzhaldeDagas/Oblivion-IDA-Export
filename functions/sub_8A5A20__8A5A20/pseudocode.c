int __thiscall sub_8A5A20(void *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  void (__cdecl *v5)(int, float *, int, _DWORD, _DWORD); // edx
  int v6; // edx
  const char *v7; // edi
  int **v8; // eax
  int **v9; // eax
  int **v10; // eax
  int **v11; // eax
  int v12; // ecx
  const char *v14; // [esp-4h] [ebp-318h] BYREF
  char v15; // [esp+1Fh] [ebp-2F5h] BYREF
  int v16; // [esp+20h] [ebp-2F4h]
  const char **v17; // [esp+24h] [ebp-2F0h]
  int *v18[3]; // [esp+28h] [ebp-2ECh] BYREF
  float v19[5]; // [esp+34h] [ebp-2E0h] BYREF
  int v20; // [esp+48h] [ebp-2CCh]
  char v21[516]; // [esp+FCh] [ebp-218h] BYREF
  unsigned int v22; // [esp+310h] [ebp-4h]

  v16 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x68))(this); /*0x8a5a6c*/
  v3 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x74))(this, &v15); /*0x8a5a82*/
  if ( *(_DWORD *)(a2 + 4) >= 6u ) /*0x8a5a84*/
  {
    sub_89D670(this, a2); /*0x8a5bd2*/
  }
  else
  {
    sub_8A4FF0(v19); /*0x8a5a8e*/
    v4 = *(_DWORD *)(a2 + 0x21C); /*0x8a5a93*/
    v5 = *(void (__cdecl **)(int, float *, int, _DWORD, _DWORD))(v4 + 4); /*0x8a5a99*/
    v22 = 0; /*0x8a5aab*/
    v5(v4, v19, 0xC0, 0, 0); /*0x8a5ab6*/
    if ( v3 ) /*0x8a5abd*/
    {
      sub_8A3270((__int128 *)v3, v19); /*0x8a5ac6*/
      v6 = *(_DWORD *)(v3 + 0x24); /*0x8a5ace*/
      *(_DWORD *)v3 = *(_DWORD *)(v3 + 0x20); /*0x8a5ad1*/
      *(_DWORD *)(v3 + 4) = v6; /*0x8a5ad3*/
      *(_BYTE *)(v3 + 8) = 1; /*0x8a5ad6*/
    }
    v7 = (const char *)(a2 + 8); /*0x8a5ae0*/
    if ( !*(_BYTE *)(a2 + 8) ) /*0x8a5ae3*/
      v7 = "Please"; /*0x8a5ae8*/
    v17 = &v14; /*0x8a5af0*/
    sub_8BBFB0((int)v18, v3, v21, 0x200u, 1); /*0x8a5b08*/
    v14 = " re-export\n"; /*0x8a5b0d*/
    LOBYTE(v22) = 1; /*0x8a5b22*/
    v8 = sub_8BBDB0(v18, "File "); /*0x8a5b2a*/
    v9 = sub_8BBDB0(v8, (const char *)(a2 + 0xE0)); /*0x8a5b31*/
    v10 = sub_8BBDB0(v9, " contains an old bhkRigidBody! "); /*0x8a5b38*/
    v11 = sub_8BBDB0(v10, v7); /*0x8a5b3f*/
    sub_8BBDB0(v11, v14); /*0x8a5b46*/
    (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x8a5b6f*/
      unk_BA7FB0,
      1,
      0x234F2250,
      v21,
      ".\\bhkRigidBody.cpp",
      0x21A);
    LOBYTE(v22) = 0; /*0x8a5b75*/
    sub_8BC000(v18); /*0x8a5b7d*/
    v22 = 0xFFFFFFFF; /*0x8a5b88*/
    if ( v20 >= 0 ) /*0x8a5b93*/
    {
      v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8a5ba5*/
      if ( !v12 ) /*0x8a5bad*/
        v12 = unk_BA7D9C; /*0x8a5baf*/
      sub_8A75D0(v12, (_DWORD *)LODWORD(v19[3]), 8 * v20, 0x14); /*0x8a5bc8*/
    }
  }
  return v16; /*0x8a5bdb*/
}
