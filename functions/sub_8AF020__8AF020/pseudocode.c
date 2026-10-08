bhkRefObject *__thiscall sub_8AF020(bhkRefObject *this)
{
  bhkRefObject::bhkRefObject(this); /*0x8af023*/
  this->__vftable = (NiObjectVtbl *)&bhkWorldObject::`vftable'; /*0x8af028*/
  *((_DWORD *)this + 3) = 0; /*0x8af030*/
  ++unk_BA7D34; /*0x8af038*/
  this->__vftable = (NiObjectVtbl *)&bhkPhantom::`vftable'; /*0x8af03e*/
  ++unk_BA7F5C; /*0x8af044*/
  *((_BYTE *)this + 0x10) = 0; /*0x8af04a*/
  this->__vftable = (NiObjectVtbl *)&bhkShapePhantom::`vftable'; /*0x8af04d*/
  ++unk_BA7F68; /*0x8af053*/
  *((_BYTE *)this + 0x10) = 0; /*0x8af059*/
  this->__vftable = (NiObjectVtbl *)&bhkSimpleShapePhantom::`vftable'; /*0x8af05c*/
  ++unk_BA7F74; /*0x8af062*/
  *((_BYTE *)this + 0x10) = 0; /*0x8af068*/
  return this; /*0x8af06d*/
}
