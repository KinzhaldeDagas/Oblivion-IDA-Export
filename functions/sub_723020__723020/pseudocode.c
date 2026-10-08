// Copies NiGeometry-specific members into a clone, including geometry data, then delegates the NiAVObject/base-member copy.
void __thiscall NiGeometry_CopyMembersForClone(NiGeometry *this, NiGeometry *dest, void *cloningProcess)
{
  dest->__vftable->SetGeomData(dest, (NiObject *)this->member.geomData); /*0x723039*/
  sub_707E90((char **)this, dest, (_DWORD **)cloningProcess); /*0x723043*/
}
