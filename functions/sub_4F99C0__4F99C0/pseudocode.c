void __thiscall sub_4F99C0(_DWORD *this)
{
  _DWORD *v1; // edi
  unsigned int *v2; // esi
  int v3; // esi

  v1 = this + 0xB; /*0x4f99c2*/
  v2 = this + 0xB; /*0x4f99c5*/
  if ( this != (_DWORD *)0xFFFFFFD4 ) /*0x4f99c9*/
  {
    do /*0x4f99eb*/
    {
      if ( !v2[1] && !*v2 ) /*0x4f99d6*/
        break; /*0x4f99d9*/
      FormHeapFree(*v2); /*0x4f99de*/
      v2 = (unsigned int *)v2[1]; /*0x4f99e3*/
    }
    while ( v2 ); /*0x4f99eb*/
  }
  if ( v1[1] ) /*0x4f99ed*/
  {
    do /*0x4f9a07*/
    {
      v3 = *(_DWORD *)(v1[1] + 4); /*0x4f99f6*/
      FormHeapFree(v1[1]); /*0x4f99fa*/
      v1[1] = v3; /*0x4f9a04*/
    }
    while ( v3 ); /*0x4f9a07*/
  }
  *v1 = 0; /*0x4f9a09*/
}
