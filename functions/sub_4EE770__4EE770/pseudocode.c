void __thiscall sub_4EE770(unsigned int *this)
{
  unsigned int *i; // edi
  unsigned int v3; // edi

  for ( i = this; i; i = (unsigned int *)i[1] ) /*0x4ee778*/
  {
    if ( !*i ) /*0x4ee780*/
      break; /*0x4ee784*/
    FormHeapFree(*i); /*0x4ee787*/
  }
  if ( *(this + 1) ) /*0x4ee796*/
  {
    do /*0x4ee7b4*/
    {
      v3 = *(_DWORD *)(*(this + 1) + 4); /*0x4ee7a3*/
      FormHeapFree(*(this + 1)); /*0x4ee7a7*/
      *(this + 1) = v3; /*0x4ee7b1*/
    }
    while ( v3 ); /*0x4ee7b4*/
  }
  *this = 0; /*0x4ee7b7*/
}
