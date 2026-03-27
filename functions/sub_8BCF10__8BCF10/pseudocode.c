int __thiscall sub_8BCF10(const char **this, char *a2)
{
  char *v2; // ebx
  int (__cdecl *v4)(int, char **, int, int *, int); // eax
  int result; // eax
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // [esp-14h] [ebp-24h]
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2;
  sub_6FE000(this, a2);
  a2 = (char *)*(this + 7);
  v8 = *((_DWORD *)v2 + 0x88);
  v4 = *(int (__cdecl **)(int, char **, int, int *, int))(v8 + 8);
  v9 = 4;
  result = v4(v8, &a2, 4, &v9, 1);
  v6 = 0;
  if ( a2 )
  {
    do
    {
      v7 = (int)*(this + 4);
      result = *(_DWORD *)(v7 + 4 * v6);
      if ( result )
        result = (*(int (__thiscall **)(char *, _DWORD))(*(_DWORD *)v2 + 0x2C))(v2, *(_DWORD *)(v7 + 4 * v6));
      ++v6;
    }
    while ( v6 < (unsigned int)a2 );
  }
  return result;
}
