void __thiscall sub_65E800(_DWORD *this)
{
  _DWORD *v2; // esi
  unsigned int *v3; // edi
  int v4; // edi

  v2 = this + 0x1CF; /*0x65e804*/
  v3 = this + 0x1CF; /*0x65e80b*/
  if ( this != (_DWORD *)0xFFFFF8C4 ) /*0x65e80f*/
  {
    do /*0x65e821*/
    {
      FormHeapFree(*v3); /*0x65e814*/
      v3 = (unsigned int *)v3[1]; /*0x65e819*/
    }
    while ( v3 ); /*0x65e821*/
  }
  if ( v2[1] ) /*0x65e823*/
  {
    do /*0x65e844*/
    {
      v4 = *(_DWORD *)(v2[1] + 4); /*0x65e833*/
      FormHeapFree(v2[1]); /*0x65e837*/
      v2[1] = v4; /*0x65e841*/
    }
    while ( v4 ); /*0x65e844*/
  }
  *v2 = 0; /*0x65e847*/
  *(this + 0x1D1) = 0; /*0x65e84e*/
}
