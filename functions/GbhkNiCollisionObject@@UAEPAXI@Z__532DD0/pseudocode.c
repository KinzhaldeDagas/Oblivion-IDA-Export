Ni2DBuffer **__thiscall bhkNiCollisionObject::`scalar deleting destructor'(Ni2DBuffer **this, char a2)
{
  bhkNiCollisionObject::~bhkNiCollisionObject(this); /*0x532dd3*/
  if ( (a2 & 1) != 0 ) /*0x532ddd*/
    FormHeapFree((unsigned int)this); /*0x532de0*/
  return this; /*0x532dea*/
}
