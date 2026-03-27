char *___lc_handle_func()
{
  int v0; // ecx
  char *v1; // eax

  v0 = _getptd();
  v1 = *(char **)(v0 + 0x6C);
  if ( v1 != (char *)off_B31998 && (dword_B318B0 & *(_DWORD *)(v0 + 0x70)) == 0 )
    v1 = (char *)__updatetlocinfo();
  return v1 + 0xC;
}
