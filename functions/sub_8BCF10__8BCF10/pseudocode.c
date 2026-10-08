int __thiscall sub_8BCF10(const char **this, char *a2)
{
  char *v2; // ebx
  int (__cdecl *v4)(int, char **, int, int *, int); // eax
  int result; // eax
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // [esp-14h] [ebp-24h]
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x8bcf12*/
  sub_6FE000(this, a2); /*0x8bcf1b*/
  a2 = (char *)*(this + 7); /*0x8bcf2a*/
  v8 = *((_DWORD *)v2 + 0x88); /*0x8bcf3b*/
  v4 = *(int (__cdecl **)(int, char **, int, int *, int))(v8 + 8); /*0x8bcf3c*/
  v9 = 4; /*0x8bcf3f*/
  result = v4(v8, &a2, 4, &v9, 1); /*0x8bcf47*/
  v6 = 0; /*0x8bcf49*/
  if ( a2 ) /*0x8bcf52*/
  {
    do /*0x8bcf6f*/
    {
      v7 = (int)*(this + 4); /*0x8bcf54*/
      result = *(_DWORD *)(v7 + 4 * v6); /*0x8bcf57*/
      if ( result ) /*0x8bcf5c*/
        result = (*(int (__thiscall **)(char *, _DWORD))(*(_DWORD *)v2 + 0x2C))(v2, *(_DWORD *)(v7 + 4 * v6)); /*0x8bcf66*/
      ++v6; /*0x8bcf68*/
    }
    while ( v6 < (unsigned int)a2 ); /*0x8bcf6f*/
  }
  return result; /*0x8bcf71*/
}
