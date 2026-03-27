void __thiscall sub_5297C0(char *this)
{
  char *v1; // esi
  char *v2; // edi
  _DWORD *v3; // eax

  v1 = this + 0x48;
  if ( this != (char *)0xFFFFFFB8 )
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v1) )
    {
      v2 = *(char **)v1;
      if ( *(_DWORD *)v1 )
      {
        sub_52B330(*(char **)v1);
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
