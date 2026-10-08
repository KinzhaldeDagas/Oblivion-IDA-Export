void __thiscall sub_772ED0(unsigned int *this)
{
  int v2; // eax
  int v3; // esi
  unsigned int v4; // ebx
  int v5; // ecx
  int v6; // esi
  _DWORD *i; // edi
  unsigned int v8; // esi

  v2 = *this; /*0x772ed3*/
  if ( *this ) /*0x772ed3*/
  {
    v3 = *(_DWORD *)(v2 - 4); /*0x772edb*/
    v4 = v2 - 4; /*0x772edf*/
    v5 = 5 * v3; /*0x772ee2*/
    v6 = v3 - 1; /*0x772ee5*/
    for ( i = (_DWORD *)(v2 + 4 * v5); v6 >= 0; --v6 ) /*0x772eec*/
    {
      i += 0xFFFFFFFB; /*0x772ef0*/
      sub_772BB0(i); /*0x772ef5*/
    }
    FormHeapFree(v4); /*0x772f00*/
  }
  v8 = *(this + 2); /*0x772f0a*/
  if ( v8 ) /*0x772f0f*/
  {
    sub_772ED0((unsigned int *)*(this + 2)); /*0x772f13*/
    FormHeapFree(v8); /*0x772f19*/
  }
}
