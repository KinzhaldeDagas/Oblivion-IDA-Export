bhkCylinderShape *__thiscall bhkCylinderShape::bhkCylinderShape(bhkCylinderShape *this)
{
  bhkRefObject::bhkRefObject((bhkRefObject *)this);
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &bhkShape::`vftable';
  ++dword_BA7D70;
  *(_DWORD *)this = &bhkSphereRepShape::`vftable';
  ++dword_BA7F44;
  *(_DWORD *)this = &bhkConvexShape::`vftable';
  ++dword_BA7F50;
  *(_DWORD *)this = &bhkCylinderShape::`vftable';
  ++dword_BA8140;
  return this;
}
