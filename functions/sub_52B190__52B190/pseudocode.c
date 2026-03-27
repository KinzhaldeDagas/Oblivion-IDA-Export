void __thiscall sub_52B190(char *this)
{
  char *v1; // esi
  char *v2; // edi
  _DWORD *v3; // eax

  v1 = this + 4;
  if ( this != (char *)0xFFFFFFFC )
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v1) )
    {
      v2 = *(char **)v1;
      if ( *(_DWORD *)v1 )
      {
        sub_52AD40(*(char **)v1);
        FormHeapFree((unsigned int)v2);
      }
      v3 = *((_DWORD **)v1 + 1);
      if ( v3 )
      {
        *((_DWORD *)v1 + 1) = v3[1];
        *(_DWORD *)v1 = *v3;
        FormHeapFree((unsigned int)v3);
      }
      else
      {
        *(_DWORD *)v1 = 0;
      }
    }
  }
}
