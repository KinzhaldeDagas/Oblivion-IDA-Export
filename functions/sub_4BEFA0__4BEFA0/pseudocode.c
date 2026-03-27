void __thiscall sub_4BEFA0(unsigned int *this)
{
  unsigned int v2; // edi

  if ( *(this + 9) )
  {
    do
    {
      v2 = *(_DWORD *)(*(this + 9) + 4);
      FormHeapFree(*(this + 9));
      *(this + 9) = v2;
    }
    while ( v2 );
  }
  *(this + 8) = 0;
  TESTexture::ClearComponentReferences(this);
}
