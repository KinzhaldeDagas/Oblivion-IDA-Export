// 2026-05-18 73000 consumer decode: constructs bhkTransformShape from the transform cinfo. Used by stock single sphere and box paths. This is the narrowest helper for sidecar rotation of those shapes.
bhkRefObject *__thiscall OB_bhkTransformShape_CtorFromCinfo_010201A0(
        bhkRefObject *self,
        const OB_CollisionTransformCinfo_010201A0 *info)
{
  bhkRefObject::bhkRefObject(self); /*0x563b18*/
  *((_DWORD *)self + 3) = 0; /*0x563b1f*/
  self->__vftable = (NiObjectVtbl *)&bhkShape::`vftable'; /*0x563b22*/
  *((_DWORD *)self + 4) = 0; /*0x563b28*/
  ++unk_BA7D70; /*0x563b2b*/
  self->__vftable = (NiObjectVtbl *)&bhkTransformShape::`vftable'; /*0x563b3d*/
  sub_8A2160(self, (int)info); /*0x563b43*/
  ++unk_BA7D64; /*0x563b48*/
  return self; /*0x563b51*/
}
