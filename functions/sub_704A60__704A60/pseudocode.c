NiTexturingProperty *sub_704A60()
{
  NiTexturingProperty *v0; // eax

  v0 = (NiTexturingProperty *)FormHeapAlloc(0x30u); /*0x704a83*/
  if ( v0 ) /*0x704a99*/
    return NiTexturingProperty::NiTexturingProperty(v0); /*0x704a9d*/
  else
    return 0; /*0x704ab2*/
}
