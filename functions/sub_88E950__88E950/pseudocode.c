Ni2DBuffer *__thiscall sub_88E950(volatile LONG **this, _DWORD **a2)
{
  NiObject *v3; // eax
  Ni2DBuffer *v4; // ebx

  v3 = (NiObject *)FormHeapAlloc(0x4Cu); /*0x88e979*/
  v4 = (Ni2DBuffer *)v3; /*0x88e97e*/
  if ( v3 ) /*0x88e991*/
  {
    sub_88EB60(v3); /*0x88e995*/
    v4->__vftable = (#9279 *)&bhkBlendCollisionObjectAddRotation::`vftable'; /*0x88e9a7*/
    qmemcpy(&v4[2], &stru_B26AF0[0xA].unk2C, 0x24u); /*0x88e9ad*/
  }
  else
  {
    v4 = 0; /*0x88e9b1*/
  }
  sub_88EA90(this, v4, a2); /*0x88e9c3*/
  qmemcpy(&v4[2], this + 0xA, 0x24u); /*0x88e9d3*/
  return v4; /*0x88e9d7*/
}
