void __thiscall sub_576570(_DWORD *this)
{
  int i; // esi
  unsigned int v3; // edi

  for ( i = 0; i < 5; ++i ) /*0x576575*/
  {
    v3 = *(this + i); /*0x576577*/
    if ( v3 ) /*0x57657c*/
    {
      sub_573E70((unsigned int *)*(this + i)); /*0x576580*/
      FormHeapFree(v3); /*0x576586*/
    }
    *(this + i) = 0; /*0x57658e*/
  }
}
