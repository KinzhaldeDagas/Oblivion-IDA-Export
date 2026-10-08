char __cdecl NiRTTI::IsObjectOfRTTIType(NiRTTI *a1, NiObject *a2)
{
  NiRTTI *v2; // eax

  if ( !a2 ) /*0x405656*/
    return 0; /*0x405656*/
  v2 = a2->__vftable->GetType(a2); /*0x40565d*/
  if ( !v2 ) /*0x405661*/
    return 0; /*0x405672*/
  while ( v2 != a1 ) /*0x405669*/
  {
    v2 = v2->parent; /*0x40566b*/
    if ( !v2 ) /*0x405670*/
      return 0; /*0x405670*/
  }
  return 1; /*0x405674*/
}
