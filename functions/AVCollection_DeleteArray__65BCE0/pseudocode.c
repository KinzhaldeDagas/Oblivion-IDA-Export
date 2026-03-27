void __thiscall AVCollection_DeleteArray(unsigned int *this)
{
  unsigned int v2; // esi

  if ( *this )
    FormHeapFree(*this);
  if ( *(this + 1) )
    FormHeapFree(*(this + 1));
  if ( *(this + 2) )
    FormHeapFree(*(this + 2));
  if ( *(this + 3) )
    FormHeapFree(*(this + 3));
  if ( *(this + 4) )
    FormHeapFree(*(this + 4));
  if ( *(this + 5) )
    FormHeapFree(*(this + 5));
  if ( *(this + 6) )
    FormHeapFree(*(this + 6));
  if ( *(this + 7) )
    FormHeapFree(*(this + 7));
  if ( *(this + 8) )
    FormHeapFree(*(this + 8));
  if ( *(this + 9) )
    FormHeapFree(*(this + 9));
  if ( *(this + 0xA) )
    FormHeapFree(*(this + 0xA));
  if ( *(this + 0xB) )
    FormHeapFree(*(this + 0xB));
  if ( *(this + 0xC) )
    FormHeapFree(*(this + 0xC));
  if ( *(this + 0xD) )
    FormHeapFree(*(this + 0xD));
  if ( *(this + 0xE) )
    FormHeapFree(*(this + 0xE));
  if ( *(this + 0xF) )
    FormHeapFree(*(this + 0xF));
  if ( *(this + 0x10) )
    FormHeapFree(*(this + 0x10));
  v2 = *(this + 0x11);
  if ( v2 )
    FormHeapFree(v2);
}
