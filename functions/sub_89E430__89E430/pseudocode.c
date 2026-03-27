bhkRefObject *sub_89E430()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u);
  v1 = v0;
  if ( !v0 )
    return 0;
  bhkRefObject::bhkRefObject(v0);
  v1->__vftable = (NiObjectVtbl *)&bhkAction::`vftable';
  v1[1].__vftable = 0;
  ++dword_BA7D00;
  v1->__vftable = (NiObjectVtbl *)&bhkUnaryAction::`vftable';
  ++dword_BA7D0C;
  v1->__vftable = (NiObjectVtbl *)&bhkMouseSpringAction::`vftable';
  ++dword_BA7D18;
  return v1;
}
