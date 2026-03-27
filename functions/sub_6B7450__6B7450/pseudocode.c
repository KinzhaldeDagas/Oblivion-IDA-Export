void __thiscall sub_6B7450(unsigned int **this)
{
  unsigned int *v2; // edi
  unsigned int v3; // eax

  if ( this )
  {
    while ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)this) )
    {
      v2 = *this;
      if ( *this )
      {
        sub_6B81D0(*this);
        FormHeapFree((unsigned int)v2);
      }
      v3 = (unsigned int)*(this + 1);
      if ( v3 )
      {
        *(this + 1) = *(unsigned int **)(v3 + 4);
        *this = *(unsigned int **)v3;
        FormHeapFree(v3);
      }
      else
      {
        *this = 0;
      }
    }
  }
  *(this + 2) = 0;
}
