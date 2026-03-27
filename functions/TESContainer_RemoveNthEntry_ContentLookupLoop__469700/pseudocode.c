unsigned int *__userpurge TESContainer_RemoveNthEntry_::ContentLookupLoop@<eax>(
        unsigned int *result@<eax>,
        unsigned int a2@<edx>,
        unsigned int a3@<ecx>,
        int a4)
{
  unsigned int *v4; // ecx
  unsigned int v5; // esi

  while ( a3 < a2 )
  {
    result = (unsigned int *)result[1];
    ++a3;
    if ( !result )
      return result;
  }
  if ( !result )
    return (unsigned int *)TESContainer_RemoveNthEntry_::Done(a4);
  v4 = (unsigned int *)result[1];
  v5 = *result;
  if ( v4 )
  {
    result[1] = v4[1];
    *result = *v4;
    FormHeapFree((unsigned int)v4);
  }
  else
  {
    *result = 0;
  }
  if ( !v5 )
    return (unsigned int *)TESContainer_RemoveNthEntry_::Done_(a4);
  FormHeapFree(v5);
  return (unsigned int *)TESContainer_RemoveNthEntry_::Done_(a4);
}
