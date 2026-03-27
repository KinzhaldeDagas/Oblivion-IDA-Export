void __thiscall bhkNiCollisionObject::~bhkNiCollisionObject(Ni2DBuffer **this)
{
  int v2; // edi

  *this = (Ni2DBuffer *)&bhkNiCollisionObject::`vftable';
  --dword_BA7A80;
  sub_897670(this, 0);
  v2 = (int)*(this + 4);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  sub_711C80(this);
}
