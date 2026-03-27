void __thiscall sub_88EA60(bhkNiCollisionObject *this)
{
  *(_DWORD *)this = &bhkBlendCollisionObject::`vftable';
  --dword_BA7A1C;
  bhkNiCollisionObject::~bhkNiCollisionObject(this);
}
