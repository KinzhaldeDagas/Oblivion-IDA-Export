bhkCylinderShape *__thiscall bhkCylinderShape::bhkCylinderShape(bhkCylinderShape *this)
{
  bhkRefObject::bhkRefObject((bhkRefObject *)this); /*0x8c7fb3*/
  *((_DWORD *)this + 3) = 0; /*0x8c7fba*/
  *((_DWORD *)this + 4) = 0; /*0x8c7fbd*/
  *(_DWORD *)this = &bhkShape::`vftable'; /*0x8c7fc0*/
  ++unk_BA7D70; /*0x8c7fcb*/
  *(_DWORD *)this = &bhkSphereRepShape::`vftable'; /*0x8c7fd1*/
  ++unk_BA7F44; /*0x8c7fd7*/
  *(_DWORD *)this = &bhkConvexShape::`vftable'; /*0x8c7fdd*/
  ++unk_BA7F50; /*0x8c7fe3*/
  *(_DWORD *)this = &bhkCylinderShape::`vftable'; /*0x8c7fe9*/
  ++unk_BA8140; /*0x8c7fef*/
  return this; /*0x8c7ff7*/
}
