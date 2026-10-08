bhkRefObject *sub_89E430()
{
  bhkRefObject *v0; // eax
  bhkRefObject *v1; // esi

  v0 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x89e454*/
  v1 = v0; /*0x89e459*/
  if ( !v0 ) /*0x89e46c*/
    return 0; /*0x89e4b8*/
  bhkRefObject::bhkRefObject(v0); /*0x89e470*/
  v1->__vftable = (NiObjectVtbl *)&bhkAction::`vftable'; /*0x89e475*/
  v1[1].__vftable = 0; /*0x89e480*/
  ++unk_BA7D00; /*0x89e487*/
  v1->__vftable = (NiObjectVtbl *)&bhkUnaryAction::`vftable'; /*0x89e48d*/
  ++unk_BA7D0C; /*0x89e493*/
  v1->__vftable = (NiObjectVtbl *)&bhkMouseSpringAction::`vftable'; /*0x89e499*/
  ++unk_BA7D18; /*0x89e49f*/
  return v1; /*0x89e4a7*/
}
