int __thiscall sub_8A0940(NiRenderer *this, signed int a2)
{
  const char *v3; // edi
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  const char *v9; // [esp-4h] [ebp-238h] BYREF
  _DWORD v10[4]; // [esp+14h] [ebp-220h] BYREF
  char v11[512]; // [esp+24h] [ebp-210h] BYREF
  unsigned int v12; // [esp+230h] [ebp-4h]

  if ( *(_DWORD *)(a2 + 4) < 6u )
  {
    v3 = (const char *)(a2 + 8);
    if ( !*(_BYTE *)(a2 + 8) )
      v3 = "Please";
    v10[3] = &v9;
    sub_8BBFB0((int)v10, a2 + 0xE0, v11, 0x200u, 1);
    v9 = " re-export\n";
    v12 = 0;
    v4 = sub_8BBDB0(v10, "File ");
    v5 = sub_8BBDB0(v4, (const char *)(a2 + 0xE0));
    v6 = sub_8BBDB0(v5, " contains an old bhkConstraint! ");
    v7 = sub_8BBDB0(v6, v3);
    sub_8BBDB0(v7, v9);
    (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
      dword_BA7FB0,
      1,
      0x234F2250,
      v11,
      ".\\bhkConstraint.cpp",
      0x133);
    v12 = 0xFFFFFFFF;
    sub_8BC000(v10);
    sub_712AE0((unsigned int *)a2);
  }
  return sub_89D650(this, a2);
}
