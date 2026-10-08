Ni2DBuffer *__thiscall sub_89F020(volatile LONG **this, Ni2DBuffer *a2)
{
  NiObject *v3; // eax
  Ni2DBuffer *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x14u); /*0x89f047*/
  v4 = (Ni2DBuffer *)v3; /*0x89f04c*/
  if ( v3 ) /*0x89f05f*/
  {
    sub_897600(v3); /*0x89f063*/
    v4->__vftable = (#9279 *)&bhkPCollisionObject::`vftable'; /*0x89f068*/
  }
  else
  {
    v4 = 0; /*0x89f070*/
  }
  sub_8976D0(this, v4, a2); /*0x89f082*/
  return v4; /*0x89f089*/
}
