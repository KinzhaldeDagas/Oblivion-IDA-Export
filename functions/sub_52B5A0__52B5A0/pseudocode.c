void __thiscall sub_52B5A0(unsigned int *this)
{
  unsigned int v2; // edi

  if ( *(this + 0x24) )
  {
    do
    {
      v2 = *(_DWORD *)(*(this + 0x24) + 4);
      FormHeapFree(*(this + 0x24));
      *(this + 0x24) = v2;
    }
    while ( v2 );
  }
  *(this + 0x23) = 0;
}
