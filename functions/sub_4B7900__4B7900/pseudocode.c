void __thiscall sub_4B7900(unsigned int *this)
{
  unsigned int v2; // edi

  if ( *(this + 0x1B) )
  {
    do
    {
      v2 = *(_DWORD *)(*(this + 0x1B) + 4);
      FormHeapFree(*(this + 0x1B));
      *(this + 0x1B) = v2;
    }
    while ( v2 );
  }
  *(this + 0x1A) = 0;
}
