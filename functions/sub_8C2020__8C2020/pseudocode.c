bhkRefObject *sub_8C2020()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u);
  v1 = v0;
  if ( !v0 )
    return 0;
  bhkRefObject::bhkRefObject(v0);
  v1->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable';
  v1[1].__vftable = 0;
  ++dword_BA7D4C;
  v1->__vftable = (NiObjectVtbl *)&bhkGenericConstraint::`vftable';
  ++dword_BA8354;
  v1->__vftable = (NiObjectVtbl *)&bhkFixedConstraint::`vftable';
  ++dword_BA80D0;
  return v1;
}
