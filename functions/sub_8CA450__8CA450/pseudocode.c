int __thiscall sub_8CA450(const void **this, int a2, int a3, int a4)
{
  const void **v5; // edi
  int v6; // eax
  _DWORD *v7; // ecx
  int result; // eax
  int i; // edi
  int v10; // [esp-8h] [ebp-18h]

  v5 = this + 9; /*0x8ca45c*/
  if ( *(this + 0xA) == (const void *)((unsigned int)*(this + 0xB) & 0x3FFFFFFF) ) /*0x8ca466*/
    sub_8A6EE0(this + 9, 8); /*0x8ca46b*/
  v6 = (int)*(this + 0xA); /*0x8ca473*/
  v7 = (char *)*v5 + 8 * v6; /*0x8ca480*/
  *(this + 0xA) = (const void *)(v6 + 1); /*0x8ca484*/
  *v7 = a2; /*0x8ca487*/
  v7[1] = a3; /*0x8ca489*/
  result = (int)*(this + 0xD); /*0x8ca48c*/
  for ( i = 0; i < result; ++i ) /*0x8ca493*/
  {
    v10 = 4 * i; /*0x8ca4ae*/
    LOBYTE(v10) = 1; /*0x8ca4b1*/
    (*((void (__cdecl **)(int, int, int, _DWORD))*(this + 0xC) + i))(a2, a3, v10, *((_DWORD *)*(this + 0xF) + i)); /*0x8ca4bb*/
    result = (int)*(this + 0xD); /*0x8ca4bd*/
  }
  return result; /*0x8ca4c8*/
}
