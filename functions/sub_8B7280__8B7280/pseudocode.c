Ni2DBuffer *__thiscall sub_8B7280(volatile LONG **this, _DWORD **a2)
{
  NiObject *v3; // eax
  Ni2DBuffer *v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x14u);
  v4 = (Ni2DBuffer *)v3;
  if ( v3 )
  {
    sub_897600(v3);
    v4->__vftable = (#9279 *)&bhkSPCollisionObject::`vftable';
  }
  else
  {
    v4 = 0;
  }
  sub_89E930(this, v4, a2);
  return v4;
}
