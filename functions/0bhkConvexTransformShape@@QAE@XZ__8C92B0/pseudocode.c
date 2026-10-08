bhkConvexTransformShape *__thiscall bhkConvexTransformShape::bhkConvexTransformShape(bhkConvexTransformShape *this)
{
  bhkRefObject::bhkRefObject((bhkRefObject *)this); /*0x8c92b3*/
  *((_DWORD *)this + 3) = 0; /*0x8c92ba*/
  *((_DWORD *)this + 4) = 0; /*0x8c92bd*/
  *(_DWORD *)this = &bhkShape::`vftable'; /*0x8c92c0*/
  ++unk_BA7D70; /*0x8c92cb*/
  *(_DWORD *)this = &bhkSphereRepShape::`vftable'; /*0x8c92d1*/
  ++unk_BA7F44; /*0x8c92d7*/
  *(_DWORD *)this = &bhkConvexShape::`vftable'; /*0x8c92dd*/
  ++unk_BA7F50; /*0x8c92e3*/
  *(_DWORD *)this = &bhkConvexTransformShape::`vftable'; /*0x8c92e9*/
  ++unk_BA8158; /*0x8c92ef*/
  return this; /*0x8c92f7*/
}
