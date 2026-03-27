void __thiscall sub_634D80(int *this)
{
  int *i; // esi
  int v2; // edi

  for ( i = this + 0xF; i[1] || *i; BSSimpleList_Remove(i, v2) )
  {
    v2 = *i;
    if ( *i )
      FormHeapFree(*i);
  }
}
