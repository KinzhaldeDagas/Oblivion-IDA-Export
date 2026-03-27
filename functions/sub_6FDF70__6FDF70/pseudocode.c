NiObject *sub_6FDF70()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0xCu);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiObject_constr(v0);
  v1->__vftable = (NiObjectVtbl *)&BSReference::`vftable';
  v1[1].__vftable = 0;
  return v1;
}
