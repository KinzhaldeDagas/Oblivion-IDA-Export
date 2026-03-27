NiObject *__cdecl NiRTTI_Cast(BSStringT *a1, NiObject *a2)
{
  NiRTTI *v3; // eax

  if ( !a2 )
    return 0;
  v3 = a2->__vftable->GetType(a2);
  if ( !v3 )
    return 0;
  while ( v3 != (NiRTTI *)a1 )
  {
    v3 = v3->parent;
    if ( !v3 )
      return 0;
  }
  return a2;
}
