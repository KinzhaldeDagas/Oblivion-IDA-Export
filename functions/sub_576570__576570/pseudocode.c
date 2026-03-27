void __thiscall sub_576570(_DWORD *this)
{
  int i; // esi
  unsigned int v3; // edi

  for ( i = 0; i < 5; ++i )
  {
    v3 = *(this + i);
    if ( v3 )
    {
      sub_573E70((unsigned int *)*(this + i));
      FormHeapFree(v3);
    }
    *(this + i) = 0;
  }
}
