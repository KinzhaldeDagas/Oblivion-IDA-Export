NiObject *__cdecl NiRTTI_Cast(BSStringT *a1, NiObject *a2)
{
  NiRTTI *v3; // eax

  if ( !a2 ) /*0x560927*/
    return 0; /*0x560929*/
  v3 = a2->__vftable->GetType(a2); /*0x560934*/
  if ( !v3 ) /*0x560938*/
    return 0; /*0x56094b*/
  while ( v3 != (NiRTTI *)a1 ) /*0x560942*/
  {
    v3 = v3->parent; /*0x560944*/
    if ( !v3 ) /*0x560949*/
      return 0; /*0x560949*/
  }
  return a2; /*0x56092b*/
}
