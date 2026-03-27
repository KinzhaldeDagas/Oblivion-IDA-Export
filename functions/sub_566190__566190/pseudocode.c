void __thiscall sub_566190(void **this)
{
  unsigned int v2; // edi
  unsigned int v3; // edi

  v2 = (unsigned int)*(this + 9);
  if ( v2 )
  {
    TESPackage_LocationData_destr(*(this + 9));
    FormHeapFree(v2);
  }
  v3 = (unsigned int)*(this + 0xA);
  if ( v3 )
  {
    TESTexture::ClearComponentReferences(*(this + 0xA));
    FormHeapFree(v3);
  }
  sub_56A750(this + 0xD);
  j_TESForm_ClearComponentReferences((TESForm *)this);
}
