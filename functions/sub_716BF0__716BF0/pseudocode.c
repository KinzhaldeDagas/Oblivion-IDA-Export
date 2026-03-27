bool __thiscall sub_716BF0(const char **this, int a2)
{
  const char *v3; // eax

  if ( !a2 )
    return 0;
  v3 = *(this + 3);
  if ( v3 )
    return *(_DWORD *)(a2 + 0xC) && !strcmp(v3, *(const char **)(a2 + 0xC));
  return !*(_DWORD *)(a2 + 0xC);
}
