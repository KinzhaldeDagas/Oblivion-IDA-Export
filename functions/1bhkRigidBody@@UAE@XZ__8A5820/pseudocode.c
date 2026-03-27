void __thiscall bhkRigidBody::~bhkRigidBody(bhkRigidBody *this)
{
  int *v2; // edi
  int v3; // edi

  *(_DWORD *)this = &bhkRigidBody::`vftable';
  v2 = (int *)((char *)this + 0x10);
  sub_8A4DB0((int *)this + 4);
  sub_89D700(this);
  --dword_BA7D80;
  v3 = *v2;
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  bhkEntity::~bhkEntity(this);
}
