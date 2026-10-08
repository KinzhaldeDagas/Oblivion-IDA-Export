bhkRefObject *sub_8BDCE0()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8bdd04*/
  v1 = v0; /*0x8bdd09*/
  if ( !v0 ) /*0x8bdd1c*/
    return 0; /*0x8bdd68*/
  bhkRefObject::bhkRefObject(v0); /*0x8bdd20*/
  v1->__vftable = (NiObjectVtbl *)&bhkAction::`vftable'; /*0x8bdd25*/
  v1[1].__vftable = 0; /*0x8bdd30*/
  ++unk_BA7D00; /*0x8bdd37*/
  v1->__vftable = (NiObjectVtbl *)&bhkBinaryAction::`vftable'; /*0x8bdd3d*/
  ++unk_BA7D40; /*0x8bdd43*/
  v1->__vftable = (NiObjectVtbl *)&bhkAngularDashpotAction::`vftable'; /*0x8bdd49*/
  ++unk_BA8064; /*0x8bdd4f*/
  return v1; /*0x8bdd57*/
}
