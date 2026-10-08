bhkRefObject *sub_8C17B0()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8c17d4*/
  v1 = v0; /*0x8c17d9*/
  if ( !v0 ) /*0x8c17ec*/
    return 0; /*0x8c182c*/
  bhkRefObject::bhkRefObject(v0); /*0x8c17f0*/
  v1->__vftable = (NiObjectVtbl *)&bhkConstraint::`vftable'; /*0x8c17fa*/
  v1[1].__vftable = 0; /*0x8c1800*/
  ++unk_BA7D4C; /*0x8c1807*/
  v1->__vftable = (NiObjectVtbl *)&bhkPrismaticConstraint::`vftable'; /*0x8c180d*/
  ++unk_BA80C4; /*0x8c1813*/
  return v1; /*0x8c181b*/
}
