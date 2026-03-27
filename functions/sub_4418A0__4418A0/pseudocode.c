void __thiscall sub_4418A0(unsigned int *this)
{
  unsigned int v2; // edi

  if ( *(this + 0x21) )
  {
    do
    {
      v2 = *(_DWORD *)(*(this + 0x21) + 4);
      FormHeapFree(*(this + 0x21));
      *(this + 0x21) = v2;
    }
    while ( v2 );
  }
  *(this + 0x20) = 0;
}
