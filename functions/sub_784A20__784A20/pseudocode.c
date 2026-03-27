void __thiscall sub_784A20(unsigned int *this)
{
  char *v2; // esi
  char *i; // edi

  v2 = (char *)*(this + 1);
  if ( v2 )
  {
    for ( i = (char *)*(this + 2); v2 != i; v2 += 0x18 )
      TESTexture::ClearComponentReferences(v2);
    FormHeapFree(*(this + 1));
  }
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
}
