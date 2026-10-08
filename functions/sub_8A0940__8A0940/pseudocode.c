int __thiscall sub_8A0940(NiRenderer *this, signed int a2)
{
  const char *v3; // edi
  int **v4; // eax
  int **v5; // eax
  int **v6; // eax
  int **v7; // eax
  const char *v9; // [esp-4h] [ebp-238h] BYREF
  int *v10[4]; // [esp+14h] [ebp-220h] BYREF
  char v11[512]; // [esp+24h] [ebp-210h] BYREF
  unsigned int v12; // [esp+230h] [ebp-4h]

  if ( *(_DWORD *)(a2 + 4) < 6u ) /*0x8a0988*/
  {
    v3 = (const char *)(a2 + 8); /*0x8a0992*/
    if ( !*(_BYTE *)(a2 + 8) ) /*0x8a098e*/
      v3 = "Please"; /*0x8a099d*/
    v10[3] = (int *)&v9; /*0x8a09a5*/
    sub_8BBFB0((int)v10, a2 + 0xE0, v11, 0x200u, 1); /*0x8a09ba*/
    v9 = " re-export\n"; /*0x8a09bf*/
    v12 = 0; /*0x8a09d4*/
    v4 = sub_8BBDB0(v10, "File "); /*0x8a09df*/
    v5 = sub_8BBDB0(v4, (const char *)(a2 + 0xE0)); /*0x8a09e6*/
    v6 = sub_8BBDB0(v5, " contains an old bhkConstraint! "); /*0x8a09ed*/
    v7 = sub_8BBDB0(v6, v3); /*0x8a09f4*/
    sub_8BBDB0(v7, v9); /*0x8a09fb*/
    (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x8a0a21*/
      unk_BA7FB0,
      1,
      0x234F2250,
      v11,
      ".\\bhkConstraint.cpp",
      0x133);
    v12 = 0xFFFFFFFF; /*0x8a0a27*/
    sub_8BC000(v10); /*0x8a0a32*/
    sub_712AE0((unsigned int *)a2); /*0x8a0a39*/
  }
  return sub_89D650(this, a2); /*0x8a0a46*/
}
