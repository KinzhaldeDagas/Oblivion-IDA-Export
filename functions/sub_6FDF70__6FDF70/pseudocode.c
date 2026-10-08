NiObject *sub_6FDF70()
{
  NiObject *v0; // eax
  NiObject *v1; // esi

  v0 = (NiObject *)FormHeapAlloc(0xCu); /*0x6fdf94*/
  v1 = v0; /*0x6fdf99*/
  if ( !v0 ) /*0x6fdfac*/
    return 0; /*0x6fdfd5*/
  NiObject_constr(v0); /*0x6fdfb0*/
  v1->__vftable = (NiObjectVtbl *)&BSReference::`vftable'; /*0x6fdfb5*/
  v1[1].__vftable = 0; /*0x6fdfbb*/
  return v1; /*0x6fdfc4*/
}
