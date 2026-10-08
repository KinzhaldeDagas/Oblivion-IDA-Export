void __thiscall sub_52B190(char *this)
{
  char *v1; // esi
  char *v2; // edi
  _DWORD *v3; // eax

  v1 = this + 4; /*0x52b191*/
  if ( this != (char *)0xFFFFFFFC ) /*0x52b196*/
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v1) ) /*0x52b1a9*/
    {
      v2 = *(char **)v1; /*0x52b1ab*/
      if ( *(_DWORD *)v1 ) /*0x52b1ab*/
      {
        sub_52AD40(*(char **)v1); /*0x52b1b3*/
        FormHeapFree((unsigned int)v2); /*0x52b1b9*/
      }
      v3 = *((_DWORD **)v1 + 1); /*0x52b1c1*/
      if ( v3 ) /*0x52b1c6*/
      {
        *((_DWORD *)v1 + 1) = v3[1]; /*0x52b1cb*/
        *(_DWORD *)v1 = *v3; /*0x52b1d1*/
        FormHeapFree((unsigned int)v3); /*0x52b1d3*/
      }
      else
      {
        *(_DWORD *)v1 = 0; /*0x52b1dd*/
      }
    }
  }
}
