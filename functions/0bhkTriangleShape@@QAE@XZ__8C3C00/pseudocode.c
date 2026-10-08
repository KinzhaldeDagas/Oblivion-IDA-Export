bhkTriangleShape *__thiscall bhkTriangleShape::bhkTriangleShape(bhkTriangleShape *this)
{
  bhkRefObject::bhkRefObject((bhkRefObject *)this); /*0x8c3c03*/
  *((_DWORD *)this + 3) = 0; /*0x8c3c0a*/
  *((_DWORD *)this + 4) = 0; /*0x8c3c0d*/
  *(_DWORD *)this = &bhkShape::`vftable'; /*0x8c3c10*/
  ++unk_BA7D70; /*0x8c3c1b*/
  *(_DWORD *)this = &bhkSphereRepShape::`vftable'; /*0x8c3c21*/
  ++unk_BA7F44; /*0x8c3c27*/
  *(_DWORD *)this = &bhkConvexShape::`vftable'; /*0x8c3c2d*/
  ++unk_BA7F50; /*0x8c3c33*/
  *(_DWORD *)this = &bhkTriangleShape::`vftable'; /*0x8c3c39*/
  ++unk_BA8100; /*0x8c3c3f*/
  return this; /*0x8c3c47*/
}
