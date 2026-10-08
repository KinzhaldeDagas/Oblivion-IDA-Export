BOOL __cdecl sub_451100(CHAR **a1)
{
  BOOL result; // eax
  unsigned int v2; // edi
  CHAR *v3; // eax

  for ( result = BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)a1); /*0x45110e*/
        !result;
        result = BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)a1) )
  {
    v2 = (unsigned int)*a1; /*0x451111*/
    if ( *a1 ) /*0x451111*/
    {
      TESFile_destr(*a1); /*0x451119*/
      FormHeapFree(v2); /*0x45111f*/
    }
    v3 = a1[1]; /*0x451127*/
    if ( v3 ) /*0x45112c*/
    {
      a1[1] = *((CHAR **)v3 + 1); /*0x451131*/
      *a1 = *(CHAR **)v3; /*0x451137*/
      FormHeapFree((unsigned int)v3); /*0x451139*/
    }
    else
    {
      *a1 = 0; /*0x451143*/
    }
  }
  return result; /*0x451155*/
}
