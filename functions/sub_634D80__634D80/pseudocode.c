void __thiscall sub_634D80(int *this)
{
  int *i; // esi
  int v2; // edi

  for ( i = this + 0xF; i[1] || *i; BSSimpleList_Remove(i, v2) ) /*0x634d82*/
  {
    v2 = *i; /*0x634d90*/
    if ( *i ) /*0x634d90*/
      FormHeapFree(*i); /*0x634d97*/
  }
}
