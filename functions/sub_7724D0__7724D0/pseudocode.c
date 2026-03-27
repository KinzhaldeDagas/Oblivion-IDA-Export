void __thiscall sub_7724D0(unsigned int **this)
{
  unsigned int *v2; // ecx
  _DWORD *v3; // esi

  v2 = *this;
  if ( v2 )
    sub_7722B0(v2, 3);
  v3 = *(this + 2);
  if ( v3 )
  {
    sub_7724D0(v3);
    FormHeapFree((unsigned int)v3);
  }
}
