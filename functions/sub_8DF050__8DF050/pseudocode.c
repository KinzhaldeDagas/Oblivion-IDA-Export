int __thiscall sub_8DF050(char *this, int a2)
{
  int result; // eax
  int v3; // edx

  result = a2; /*0x8df050*/
  v3 = *(_DWORD *)(a2 + 4); /*0x8df054*/
  if ( *(_BYTE *)(v3 + 0x18) == 1 ) /*0x8df05b*/
  {
    result = v3 + *(_DWORD *)(v3 + 0x10); /*0x8df060*/
    if ( result ) /*0x8df062*/
      return (*(int (__thiscall **)(char *, int))(*((_DWORD *)this + 0xFFFFFFFD) + 8))(this + 0xFFFFFFF4, result); /*0x8df06e*/
  }
  return result; /*0x8df071*/
}
