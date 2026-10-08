void __thiscall bhkRigidBody::~bhkRigidBody(bhkRigidBody *this)
{
  int *v2; // edi
  int v3; // edi

  *(_DWORD *)this = &bhkRigidBody::`vftable'; /*0x8a5849*/
  v2 = (int *)((char *)this + 0x10); /*0x8a584f*/
  sub_8A4DB0((int *)this + 4); /*0x8a585c*/
  sub_89D700(this); /*0x8a5863*/
  --unk_BA7D80; /*0x8a5868*/
  v3 = *v2; /*0x8a586f*/
  if ( v3 ) /*0x8a5878*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x8a587e*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8a5894*/
  }
  bhkEntity::~bhkEntity((bhkSerializable *)this); /*0x8a58a0*/
}
