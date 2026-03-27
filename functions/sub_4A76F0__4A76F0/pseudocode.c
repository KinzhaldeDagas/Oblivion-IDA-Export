void __thiscall sub_4A76F0(unsigned int *this)
{
  unsigned int v2; // esi

  sub_4A70B0(this);
  v2 = *(this + 2);
  if ( v2 )
    FormHeapFree(v2);
}
