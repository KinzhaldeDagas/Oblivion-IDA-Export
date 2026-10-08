void __thiscall sub_5E7B90(_DWORD *this)
{
  _DWORD *v1; // esi
  unsigned int *v2; // edi
  int v3; // edi

  v1 = this + 0x27; /*0x5e7b91*/
  v2 = this + 0x27; /*0x5e7b98*/
  if ( this != (_DWORD *)0xFFFFFF64 ) /*0x5e7b9c*/
  {
    do /*0x5e7bb4*/
    {
      if ( *v2 ) /*0x5e7ba0*/
        FormHeapFree(*v2); /*0x5e7ba7*/
      v2 = (unsigned int *)v2[1]; /*0x5e7baf*/
    }
    while ( v2 ); /*0x5e7bb4*/
  }
  if ( v1[1] ) /*0x5e7bb6*/
  {
    do /*0x5e7bd4*/
    {
      v3 = *(_DWORD *)(v1[1] + 4); /*0x5e7bc3*/
      FormHeapFree(v1[1]); /*0x5e7bc7*/
      v1[1] = v3; /*0x5e7bd1*/
    }
    while ( v3 ); /*0x5e7bd4*/
  }
  *v1 = 0; /*0x5e7bd7*/
}
