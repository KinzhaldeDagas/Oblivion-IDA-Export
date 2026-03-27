int __thiscall sub_8A5A20(void *this, int a2)
{
  int v3; // ebx
  int v4; // eax
  void (__cdecl *v5)(int, float *, int, _DWORD, _DWORD); // edx
  int v6; // edx
  const char *v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // eax
  int v12; // ecx
  const char *v14; // [esp-4h] [ebp-318h] BYREF
  char v15; // [esp+1Fh] [ebp-2F5h] BYREF
  int v16; // [esp+20h] [ebp-2F4h]
  const char **v17; // [esp+24h] [ebp-2F0h]
  _DWORD v18[3]; // [esp+28h] [ebp-2ECh] BYREF
  float v19[5]; // [esp+34h] [ebp-2E0h] BYREF
  int v20; // [esp+48h] [ebp-2CCh]
  char v21[516]; // [esp+FCh] [ebp-218h] BYREF
  unsigned int v22; // [esp+310h] [ebp-4h]

  v16 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x68))(this);
  v3 = (*(int (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x74))(this, &v15);
  if ( *(_DWORD *)(a2 + 4) >= 6u )
  {
    sub_89D670(this, a2);
  }
  else
  {
    sub_8A4FF0(v19);
    v4 = *(_DWORD *)(a2 + 0x21C);
    v5 = *(void (__cdecl **)(int, float *, int, _DWORD, _DWORD))(v4 + 4);
    v22 = 0;
    v5(v4, v19, 0xC0, 0, 0);
    if ( v3 )
    {
      sub_8A3270((__int128 *)v3, v19);
      v6 = *(_DWORD *)(v3 + 0x24);
      *(_DWORD *)v3 = *(_DWORD *)(v3 + 0x20);
      *(_DWORD *)(v3 + 4) = v6;
      *(_BYTE *)(v3 + 8) = 1;
    }
    v7 = (const char *)(a2 + 8);
    if ( !*(_BYTE *)(a2 + 8) )
      v7 = "Please";
    v17 = &v14;
    sub_8BBFB0((int)v18, v3, v21, 0x200u, 1);
    v14 = " re-export\n";
    LOBYTE(v22) = 1;
    v8 = sub_8BBDB0(v18, "File ");
    v9 = sub_8BBDB0(v8, (const char *)(a2 + 0xE0));
    v10 = sub_8BBDB0(v9, " contains an old bhkRigidBody! ");
    v11 = sub_8BBDB0(v10, v7);
    sub_8BBDB0(v11, v14);
    (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
      dword_BA7FB0,
      1,
      0x234F2250,
      v21,
      ".\\bhkRigidBody.cpp",
      0x21A);
    LOBYTE(v22) = 0;
    sub_8BC000(v18);
    v22 = 0xFFFFFFFF;
    if ( v20 >= 0 )
    {
      v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v12 )
        v12 = dword_BA7D9C;
      sub_8A75D0(v12, (_DWORD *)LODWORD(v19[3]), 8 * v20, 0x14);
    }
  }
  return v16;
}
