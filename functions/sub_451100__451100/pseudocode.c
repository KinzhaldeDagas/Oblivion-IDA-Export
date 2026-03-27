BOOL __cdecl sub_451100(CHAR **a1)
{
  BOOL result; // eax
  unsigned int v2; // edi
  CHAR *v3; // eax

  for ( result = BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)a1);
        !result;
        result = BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)a1) )
  {
    v2 = (unsigned int)*a1;
    if ( *a1 )
    {
      TESFile_destr(*a1);
      FormHeapFree(v2);
    }
    v3 = a1[1];
    if ( v3 )
    {
      a1[1] = *((CHAR **)v3 + 1);
      *a1 = *(CHAR **)v3;
      FormHeapFree((unsigned int)v3);
    }
    else
    {
      *a1 = 0;
    }
  }
  return result;
}
