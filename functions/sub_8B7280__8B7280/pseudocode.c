Ni2DBuffer *__thiscall sub_8B7280(volatile LONG **this, Ni2DBuffer *a2)
{
  NiObject *v3; // eax
  Ni2DBuffer *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x14u); /*0x8b72a7*/
  v4 = (Ni2DBuffer *)v3; /*0x8b72ac*/
  if ( v3 ) /*0x8b72bf*/
  {
    sub_897600(v3); /*0x8b72c3*/
    v4->__vftable = (#9279 *)&bhkSPCollisionObject::`vftable'; /*0x8b72c8*/
  }
  else
  {
    v4 = 0; /*0x8b72d0*/
  }
  sub_89E930(this, v4, a2); /*0x8b72e2*/
  return v4; /*0x8b72e9*/
}
