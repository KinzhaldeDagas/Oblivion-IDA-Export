void __thiscall sub_4FCC90(unsigned int *this)
{
  unsigned int *v1; // esi
  unsigned int *v2; // eax

  v1 = this + 0x14;
  if ( this != (unsigned int *)0xFFFFFFB0 )
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)v1) )
    {
      FormHeapFree(*v1);
      v2 = (unsigned int *)v1[1];
      if ( v2 )
      {
        v1[1] = v2[1];
        *v1 = *v2;
        FormHeapFree((unsigned int)v2);
      }
      else
      {
        *v1 = 0;
      }
    }
  }
}
