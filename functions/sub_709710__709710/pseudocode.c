NiMaterialProperty *sub_709710()
{
  NiMaterialProperty *v0; // eax

  v0 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
  if ( v0 )
    return NiMaterialProperty::NiMaterialProperty(v0);
  else
    return 0;
}
