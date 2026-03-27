void __stdcall AVCollection_DeallocArrayNode(unsigned int *a1)
{
  if ( a1 )
  {
    if ( *a1 )
    {
      FormHeapFree(*a1);
      *a1 = 0;
    }
  }
}
