void __thiscall sub_605E80(unsigned int *this)
{
  unsigned int v2; // edi

  if ( TESDataHandler )
  {
    if ( !*(_BYTE *)(TESDataHandler + 0xCD4) )
      sub_675740((int)this, 1);
  }
  if ( *(this + 8) )
  {
    do
    {
      v2 = *(_DWORD *)(*(this + 8) + 4);
      FormHeapFree(*(this + 8));
      *(this + 8) = v2;
    }
    while ( v2 );
  }
  *(this + 7) = 0;
}
