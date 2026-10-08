_WORD *__thiscall sub_88A570(_WORD *this)
{
  *(this + 3) = 1; /*0x88a572*/
  *((_DWORD *)this + 2) = &hkCollidableCollidableFilter::`vftable'; /*0x88a578*/
  *((_DWORD *)this + 3) = &hkShapeCollectionFilter::`vftable'; /*0x88a57f*/
  *((_DWORD *)this + 4) = &hkRayShapeCollectionFilter::`vftable'; /*0x88a586*/
  *((_DWORD *)this + 5) = &hkRayCollidableFilter::`vftable'; /*0x88a58d*/
  *(_DWORD *)this = &bhkCollisionFilter::`vftable'{for `bhkCollisionFilter'}; /*0x88a594*/
  *((_DWORD *)this + 2) = &bhkCollisionFilter::`vftable'{for `hkCollidableCollidableFilter'}; /*0x88a59a*/
  *((_DWORD *)this + 3) = &bhkCollisionFilter::`vftable'{for `hkShapeCollectionFilter'}; /*0x88a5a1*/
  *((_DWORD *)this + 4) = &bhkCollisionFilter::`vftable'{for `hkRayShapeCollectionFilter'}; /*0x88a5a8*/
  *((_DWORD *)this + 5) = &bhkCollisionFilter::`vftable'{for `hkRayCollidableFilter'}; /*0x88a5af*/
  return this; /*0x88a5b6*/
}
