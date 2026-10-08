void __thiscall sub_530500(unsigned int *this)
{
  unsigned int v2; // edi
  unsigned int v3; // edi

  if ( *(this + 3) ) /*0x530503*/
  {
    do /*0x530524*/
    {
      v2 = *(_DWORD *)(*(this + 3) + 4); /*0x530513*/
      FormHeapFree(*(this + 3)); /*0x530517*/
      *(this + 3) = v2; /*0x530521*/
    }
    while ( v2 ); /*0x530524*/
  }
  *(this + 2) = 0; /*0x530526*/
  if ( *(this + 1) ) /*0x53052d*/
  {
    do /*0x530547*/
    {
      v3 = *(_DWORD *)(*(this + 1) + 4); /*0x530536*/
      FormHeapFree(*(this + 1)); /*0x53053a*/
      *(this + 1) = v3; /*0x530544*/
    }
    while ( v3 ); /*0x530547*/
  }
  *this = 0; /*0x53054a*/
}
