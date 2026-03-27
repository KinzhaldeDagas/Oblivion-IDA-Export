// positive sp value has been detected, the output may be wrong!
void __usercall AVCollection_ClearArrayAndList_::ClearListLoop(unsigned int a1@<eax>, unsigned int *a2@<esi>)
{
  unsigned int *v2; // eax
  unsigned int v3; // edi

  do
  {
    FormHeapFree(a1);
    v2 = (unsigned int *)a2[1];
    if ( v2 )
    {
      a2[1] = v2[1];
      *a2 = *v2;
      FormHeapFree((unsigned int)v2);
    }
    else
    {
      *a2 = 0;
    }
    a1 = *a2;
  }
  while ( *a2 );
  v3 = a2[4];
  if ( v3 )
  {
    AVCollection_DeleteArray((unsigned int *)a2[4]);
    FormHeapFree(v3);
    a2[4] = 0;
  }
}
