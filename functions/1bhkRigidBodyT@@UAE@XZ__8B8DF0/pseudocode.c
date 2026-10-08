void __thiscall bhkRigidBodyT::~bhkRigidBodyT(bhkRigidBodyT *this)
{
  *(_DWORD *)this = &bhkRigidBodyT::`vftable'; /*0x8b8e18*/
  sub_8A53C0((int *)this); /*0x8b8e26*/
  --unk_BA8014; /*0x8b8e2b*/
  bhkRigidBody::~bhkRigidBody(this); /*0x8b8e3c*/
}
