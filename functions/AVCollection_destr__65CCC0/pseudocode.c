void __thiscall AVCollection_destr(unsigned int *this)
{
  unsigned int *v2; // esi
  unsigned int *v3; // esi

  AVCollection_ClearArrayAndList(this);
  v2 = this + 2;
  if ( this != (unsigned int *)0xFFFFFFF8 )
  {
    if ( *v2 )
    {
      FormHeapFree(*v2);
      *v2 = 0;
    }
  }
  v3 = this + 3;
  if ( this != (unsigned int *)0xFFFFFFF4 )
  {
    if ( *v3 )
    {
      FormHeapFree(*v3);
      *v3 = 0;
    }
  }
}
