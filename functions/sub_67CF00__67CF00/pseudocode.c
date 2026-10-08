void __thiscall sub_67CF00(int *this)
{
  int v1; // esi
  int *v2; // edi
  _DWORD *v3; // eax

  v1 = *this; /*0x67cf01*/
  if ( *this ) /*0x67cf01*/
  {
    while ( 1 ) /*0x67cf08*/
    {
      v2 = *(int **)v1; /*0x67cf08*/
      if ( !*(_DWORD *)v1 ) /*0x67cf08*/
        break; /*0x67cf08*/
      sub_67B5F0(*(int **)v1, (int)v2); /*0x67cf10*/
      FormHeapFree((unsigned int)v2); /*0x67cf16*/
      v3 = *(_DWORD **)(v1 + 4); /*0x67cf1b*/
      if ( v3 ) /*0x67cf23*/
      {
        *(_DWORD *)(v1 + 4) = v3[1]; /*0x67cf28*/
        *(_DWORD *)v1 = *v3; /*0x67cf2e*/
        FormHeapFree((unsigned int)v3); /*0x67cf30*/
      }
      else
      {
        *(_DWORD *)v1 = 0; /*0x67cf3a*/
      }
    }
  }
}
