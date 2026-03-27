bhkRefObject *sub_8B2BE0()
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
  v1->__vftable = (NiObjectVtbl *)&bhkLimitedHingeConstraint::`vftable';
  ++dword_BA7FC8;
  return v1;
}
