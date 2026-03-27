_WORD *__thiscall sub_88A570(_WORD *this)
{
  *(this + 3) = 1;
  *((_DWORD *)this + 2) = &hkCollidableCollidableFilter::`vftable';
  *((_DWORD *)this + 3) = &hkShapeCollectionFilter::`vftable';
  *((_DWORD *)this + 4) = &hkRayShapeCollectionFilter::`vftable';
  *((_DWORD *)this + 5) = &hkRayCollidableFilter::`vftable';
  *(_DWORD *)this = &bhkCollisionFilter::`vftable'{for `bhkCollisionFilter'};
  *((_DWORD *)this + 2) = &bhkCollisionFilter::`vftable'{for `hkCollidableCollidableFilter'};
  *((_DWORD *)this + 3) = &bhkCollisionFilter::`vftable'{for `hkShapeCollectionFilter'};
  *((_DWORD *)this + 4) = &bhkCollisionFilter::`vftable'{for `hkRayShapeCollectionFilter'};
  *((_DWORD *)this + 5) = &bhkCollisionFilter::`vftable'{for `hkRayCollidableFilter'};
  return this;
}
