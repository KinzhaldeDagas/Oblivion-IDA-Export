char __cdecl NiRTTI::IsObjectOfRTTIType(NiRTTI *a1, NiObject *a2)
{
  NiRTTI *v2; // eax

  if ( !a2 )
    return 0;
  v2 = a2->__vftable->GetType(a2);
  if ( !v2 )
    return 0;
  while ( v2 != a1 )
  {
    v2 = v2->parent;
    if ( !v2 )
      return 0;
  }
  return 1;
}
