void __thiscall bhkNiCollisionObject::~bhkNiCollisionObject(Ni2DBuffer **this)
{
  int v2; // edi

  *this = (Ni2DBuffer *)&bhkNiCollisionObject::`vftable'; /*0x897b29*/
  --unk_BA7A80; /*0x897b2f*/
  sub_897670(this, 0); /*0x897b40*/
  v2 = (int)*(this + 4); /*0x897b45*/
  if ( v2 ) /*0x897b4f*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x897b55*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x897b6b*/
  }
  sub_711C80(this); /*0x897b77*/
}
