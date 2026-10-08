// 2026-05-18 73000 consumer decode: constructs bhkCapsuleShape from radius and two endpoints in cinfo. Stock 0x565510 makes endpoints vertical/+Z; sidecar rotation for capsules would need rotated endpoints or a transform-wrapper replacement.
bhkRefObject *__thiscall OB_bhkCapsuleShape_CtorFromCinfo_010201A0(
        bhkRefObject *self,
        const OB_CollisionCapsuleCinfo_010201A0 *info)
{
  bhkRefObject::bhkRefObject(self); /*0x563bd9*/
  self->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x563bde*/
  *((_DWORD *)self + 3) = 0; /*0x563beb*/
  *((_DWORD *)self + 4) = 0; /*0x563bee*/
  ++unk_BA7D70; /*0x563bf1*/
  self->__vftable = (NiObjectVtbl *)&bhkSphereRepShape::`vftable'; /*0x563bf7*/
  ++unk_BA7F44; /*0x563bfd*/
  self->__vftable = (NiObjectVtbl *)&bhkConvexShape::`vftable'; /*0x563c03*/
  ++unk_BA7F50; /*0x563c09*/
  self->__vftable = (NiObjectVtbl *)&bhkCapsuleShape::`vftable'; /*0x563c1a*/
  sub_8B6B90(self, (float *)&info->material); /*0x563c20*/
  ++unk_BA7FD4; /*0x563c25*/
  return self; /*0x563c2d*/
}
