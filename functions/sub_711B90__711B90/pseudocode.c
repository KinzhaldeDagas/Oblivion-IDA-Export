int __thiscall sub_711B90(char *this, int a2)
{
  int v4; // edi
  int (__cdecl *v5)(int, char *, int, int *, int); // edx
  int result; // eax
  int v7; // [esp-14h] [ebp-28h]
  int v8; // [esp+10h] [ebp-4h] BYREF
  int v9; // [esp+18h] [ebp+4h]

  v9 = 3;
  do
  {
    v4 = 3;
    do
    {
      v5 = *(int (__cdecl **)(int, char *, int, int *, int))(*(_DWORD *)(a2 + 0x21C) + 4);
      v7 = *(_DWORD *)(a2 + 0x21C);
      v8 = 4;
      result = v5(v7, this, 4, &v8, 1);
      this += 4;
      --v4;
    }
    while ( v4 );
    --v9;
  }
  while ( v9 );
  return result;
}
