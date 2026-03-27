void __thiscall sub_6B31D0(unsigned int *this)
{
  unsigned int v2; // esi

  if ( *(this + 1) )
  {
    FormHeapFree(*(this + 1));
    *(this + 1) = 0;
  }
  v2 = *(this + 2);
  if ( v2 )
    FormHeapFree(v2);
}
