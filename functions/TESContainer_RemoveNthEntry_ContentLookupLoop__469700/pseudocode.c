void __userpurge TESContainer_RemoveNthEntry_::ContentLookupLoop(
        unsigned int *result@<eax>,
        unsigned int a2@<edx>,
        unsigned int a3@<ecx>,
        int a4)
{
  unsigned int *v4; // ecx
  unsigned int v5; // esi

  while ( a3 < a2 ) /*0x469702*/
  {
    result = (unsigned int *)result[1]; /*0x469704*/
    ++a3; /*0x469707*/
    if ( !result ) /*0x46970c*/
      return; /*0x46970c*/
  }
  if ( result ) /*0x469713*/
  {
    v4 = (unsigned int *)result[1]; /*0x469715*/
    v5 = *result; /*0x46971b*/
    if ( v4 ) /*0x46971d*/
    {
      result[1] = v4[1]; /*0x469722*/
      *result = *v4; /*0x469728*/
      FormHeapFree((unsigned int)v4); /*0x46972a*/
    }
    else
    {
      *result = 0; /*0x469734*/
    }
    if ( v5 ) /*0x46973c*/
    {
      FormHeapFree(v5); /*0x46973f*/
      TESContainer_RemoveNthEntry_::Done_(a4); /*0x469745*/
    }
    else
    {
      TESContainer_RemoveNthEntry_::Done_(a4); /*0x46973c*/
    }
  }
  else
  {
    TESContainer_RemoveNthEntry_::Done(a4); /*0x469713*/
  }
}
