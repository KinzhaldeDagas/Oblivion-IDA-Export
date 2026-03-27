NiTexturingProperty *sub_704A60()
{
  NiTexturingProperty *v0; // eax

  v0 = (NiTexturingProperty *)FormHeapAlloc(0x30u);
  if ( v0 )
    return NiTexturingProperty::NiTexturingProperty(v0);
  else
    return 0;
}
