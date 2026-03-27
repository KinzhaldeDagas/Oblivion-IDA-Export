void __thiscall sub_52B660(unsigned int *this)
{
  unsigned int v2; // edi

  if ( *(this + 0x2B) )
  {
    do
    {
      v2 = *(_DWORD *)(*(this + 0x2B) + 4);
      FormHeapFree(*(this + 0x2B));
      *(this + 0x2B) = v2;
    }
    while ( v2 );
  }
  *(this + 0x2A) = 0;
}
