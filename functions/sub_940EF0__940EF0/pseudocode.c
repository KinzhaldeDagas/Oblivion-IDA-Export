char *__thiscall sub_940EF0(int *this, char *a2)
{
  const char *v2; // edi
  char **v4; // ebx
  char *v5; // edi
  int v6; // ecx
  int v7; // eax
  int *v8; // esi

  v2 = a2; /*0x940ef3*/
  v4 = (char **)(this + 0xB); /*0x940efe*/
  if ( sub_942B00(this + 0xB, a2, &a2) ) /*0x940f04*/
  {
    v5 = sub_8B18F0(v2); /*0x940f13*/
    a2 = (char *)*(this + 9); /*0x940f1f*/
    sub_9429D0(v4, v5, (int)a2); /*0x940f23*/
    v6 = *(this + 0xA); /*0x940f28*/
    v7 = *(this + 9); /*0x940f2b*/
    v8 = this + 8; /*0x940f2e*/
    if ( v7 == (v6 & 0x3FFFFFFF) ) /*0x940f39*/
      sub_8A6EE0((const void **)v8, 4); /*0x940f3e*/
    *(_DWORD *)(*v8 + 4 * v8[1]++) = v5; /*0x940f4b*/
  }
  return a2; /*0x940f55*/
}
