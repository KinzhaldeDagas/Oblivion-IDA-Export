NiMaterialProperty *sub_709710()
{
  NiMaterialProperty *v0; // eax

  v0 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x709733*/
  if ( v0 ) /*0x709749*/
    return NiMaterialProperty::NiMaterialProperty(v0); /*0x70974d*/
  else
    return 0; /*0x709762*/
}
