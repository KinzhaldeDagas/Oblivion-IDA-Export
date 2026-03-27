void __thiscall bhkRigidBodyT::~bhkRigidBodyT(bhkRigidBodyT *this)
{
  *(_DWORD *)this = &bhkRigidBodyT::`vftable';
  sub_8A53C0((int *)this);
  --dword_BA8014;
  bhkRigidBody::~bhkRigidBody(this);
}
