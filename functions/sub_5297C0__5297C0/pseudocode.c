void __thiscall sub_5297C0(char *this)
{
  char *v1; // esi
  char *v2; // edi
  _DWORD *v3; // eax

  v1 = this + 0x48; /*0x5297c1*/
  if ( this != (char *)0xFFFFFFB8 ) /*0x5297c6*/
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v1) ) /*0x5297d9*/
    {
      v2 = *(char **)v1; /*0x5297db*/
      if ( *(_DWORD *)v1 ) /*0x5297db*/
      {
        sub_52B330(*(char **)v1); /*0x5297e3*/
        FormHeapFree((unsigned int)v2); /*0x5297e9*/
      }
      v3 = *((_DWORD **)v1 + 1); /*0x5297f1*/
      if ( v3 ) /*0x5297f6*/
      {
        *((_DWORD *)v1 + 1) = v3[1]; /*0x5297fb*/
        *(_DWORD *)v1 = *v3; /*0x529801*/
        FormHeapFree((unsigned int)v3); /*0x529803*/
      }
      else
      {
        *(_DWORD *)v1 = 0; /*0x52980d*/
      }
    }
  }
}
