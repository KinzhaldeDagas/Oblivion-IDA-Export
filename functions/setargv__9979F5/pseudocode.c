unsigned int _setargv()
{
  bool v0; // zf
  int v1; // edi
  char **v2; // esi
  unsigned int v4; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v5; // [esp+10h] [ebp-8h] BYREF
  char *v6; // [esp+14h] [ebp-4h]

  if ( !dword_BABC14 )
    __initmbctable();
  byte_BAA754 = 0;
  GetModuleFileNameA(0, byte_BAA650, 0x104u);
  dword_BA9DC4 = (int)byte_BAA650;
  if ( !dword_BABC04 || (v0 = *(_BYTE *)dword_BABC04 == 0, v6 = (char *)dword_BABC04, v0) )
    v6 = byte_BAA650;
  parse_cmdline(v6, &v4, 0, 0, &v5);
  if ( v5 >= 0x3FFFFFFF )
    return 0xFFFFFFFF;
  if ( v4 == 0xFFFFFFFF )
    return 0xFFFFFFFF;
  v1 = v5;
  if ( 4 * v5 + v4 < v4 )
    return 0xFFFFFFFF;
  v2 = (char **)unknown_libname_72();
  if ( !v2 )
    return 0xFFFFFFFF;
  parse_cmdline(v6, &v4, v2, (char *)&v2[v1], &v5);
  dword_BA9DA8 = v5 - 1;
  dword_BA9DAC = (int)v2;
  return 0;
}
