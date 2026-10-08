// Constructs bhkSimpleShapePhantom wrapper and calls 0x8AF1A0 to create/attach the low-level Havok phantom object from cinfo.
bhkRefObject *__thiscall OB_bhkSimpleShapePhantom_CtorFromCinfo_010201A0(
        bhkRefObject *self,
        const OB_CollisionPhantomCinfo_010201A0 *info)
{
  bhkRefObject::bhkRefObject(self); /*0x531fea*/
  self->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable'; /*0x531ff1*/
  *((_DWORD *)self + 3) = 0; /*0x531ffc*/
  ++unk_BA7D34; /*0x531fff*/
  self->__vftable = (NiObjectVtbl *)&bhkPhantom::`vftable'; /*0x532005*/
  ++unk_BA7F5C; /*0x53200b*/
  *((_BYTE *)self + 0x10) = 0; /*0x532011*/
  self->__vftable = (NiObjectVtbl *)&bhkShapePhantom::`vftable'; /*0x532014*/
  ++unk_BA7F68; /*0x53201a*/
  *((_BYTE *)self + 0x10) = 0; /*0x532020*/
  self->__vftable = (NiObjectVtbl *)&bhkSimpleShapePhantom::`vftable'; /*0x53202e*/
  bhkSimpleShapePhantom_CreateHavokObjectFromCinfo(self, (int)info);// TES4 authoritative: bhkSimpleShapePhantom constructor creates and attaches the low-level Havok phantom object from the cinfo block. /*0x532034*/
  ++unk_BA7F74; /*0x532039*/
  *((_BYTE *)self + 0x10) = 0; /*0x53203f*/
  return self; /*0x532044*/
}
