void __thiscall sub_440F20(_DWORD *this)
{
  _DWORD *v1; // edi
  unsigned int *v2; // esi
  int v3; // esi

  v1 = this + 0x23; /*0x440f22*/
  v2 = this + 0x23; /*0x440f28*/
  if ( this != (_DWORD *)0xFFFFFF74 ) /*0x440f2c*/
  {
    do /*0x440f44*/
    {
      if ( !*v2 ) /*0x440f30*/
        break; /*0x440f34*/
      FormHeapFree(*v2); /*0x440f37*/
      v2 = (unsigned int *)v2[1]; /*0x440f3c*/
    }
    while ( v2 ); /*0x440f44*/
  }
  if ( v1[1] ) /*0x440f46*/
  {
    do /*0x440f64*/
    {
      v3 = *(_DWORD *)(v1[1] + 4); /*0x440f53*/
      FormHeapFree(v1[1]); /*0x440f57*/
      v1[1] = v3; /*0x440f61*/
    }
    while ( v3 ); /*0x440f64*/
  }
  *v1 = 0; /*0x440f66*/
}
