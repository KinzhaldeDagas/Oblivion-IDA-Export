unsigned int _setargv()
{
  bool v0; // zf
  int v1; // edi
  unsigned int v2; // eax
  char **v3; // esi
  unsigned int v5; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v6; // [esp+10h] [ebp-8h] BYREF
  char *v7; // [esp+14h] [ebp-4h]

  if ( !unk_BABC14 ) /*0x997a06*/
    __initmbctable(); /*0x997a08*/
  LOBYTE(dword_BA9E10[0x251]) = 0; /*0x997a19*/
  GetModuleFileNameA(0, (LPSTR)&dword_BA9E10[0x210], 0x104u); /*0x997a1f*/
  unk_BA9DC4 = &dword_BA9E10[0x210]; /*0x997a2c*/
  if ( !unk_BABC04 || (v0 = *(_BYTE *)unk_BABC04 == 0, v7 = (char *)unk_BABC04, v0) ) /*0x997a39*/
    v7 = (char *)&dword_BA9E10[0x210]; /*0x997a3b*/
  parse_cmdline(v7, &v5, 0, 0, &v6); /*0x997a4a*/
  if ( v6 >= 0x3FFFFFFF ) /*0x997a5a*/
    return 0xFFFFFFFF; /*0x997a5a*/
  if ( v5 == 0xFFFFFFFF ) /*0x997a62*/
    return 0xFFFFFFFF; /*0x997a62*/
  v1 = v6; /*0x997a66*/
  v2 = 4 * v6 + v5; /*0x997a69*/
  if ( v2 < v5 ) /*0x997a6e*/
    return 0xFFFFFFFF; /*0x997a6e*/
  v3 = (char **)unknown_libname_72(v2); /*0x997a76*/
  if ( !v3 ) /*0x997a7b*/
    return 0xFFFFFFFF; /*0x997aa6*/
  parse_cmdline(v7, &v5, v3, (char *)&v3[v1], &v6); /*0x997a8b*/
  unk_BA9DA8 = v6 - 1; /*0x997a97*/
  unk_BA9DAC = v3; /*0x997a9c*/
  return 0; /*0x997aa9*/
}
