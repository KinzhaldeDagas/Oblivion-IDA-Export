bool __thiscall sub_716BF0(const char **this, int a2)
{
  const char *v3; // eax

  if ( !a2 ) /*0x716bf6*/
    return 0; /*0x716bf6*/
  v3 = *(this + 3); /*0x716bfd*/
  if ( v3 ) /*0x716c02*/
    return *(_DWORD *)(a2 + 0xC) && !strcmp(v3, *(const char **)(a2 + 0xC)); /*0x716bfa*/
  return !*(_DWORD *)(a2 + 0xC); /*0x716c0e*/
}
