Ni2DBuffer *__thiscall sub_89E9F0(volatile LONG **this, Ni2DBuffer *a2)
{
  NiObject *v3; // eax
  Ni2DBuffer *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x14u); /*0x89ea17*/
  v4 = (Ni2DBuffer *)v3; /*0x89ea1c*/
  if ( v3 ) /*0x89ea2f*/
  {
    sub_897600(v3); /*0x89ea33*/
    v4->__vftable = (#9279 *)&bhkCollisionObject::`vftable'; /*0x89ea38*/
  }
  else
  {
    v4 = 0; /*0x89ea40*/
  }
  sub_8976D0(this, v4, a2); /*0x89ea52*/
  return v4; /*0x89ea59*/
}
