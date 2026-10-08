Ni2DBuffer **__thiscall sub_88EBA0(Ni2DBuffer **this, char a2)
{
  *this = (Ni2DBuffer *)&bhkBlendCollisionObject::`vftable'; /*0x88eba3*/
  --unk_BA7A1C; /*0x88eba9*/
  bhkNiCollisionObject::~bhkNiCollisionObject(this); /*0x88ebb0*/
  if ( (a2 & 1) != 0 ) /*0x88ebba*/
    FormHeapFree((unsigned int)this); /*0x88ebbd*/
  return this; /*0x88ebc7*/
}
