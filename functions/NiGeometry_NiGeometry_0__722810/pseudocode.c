NiGeometry *__thiscall NiGeometry::NiGeometry_0(NiGeometry *this)
{
  NiAVObject::NiAVObject((NiAVObject *)this);
  this->__vftable = (NiGeometryVtbl *)&NiGeometry::`vftable';
  this->member.unk0AC = 0;
  this->member.unk0B0 = 0;
  this->member.geomData = 0;
  this->member.skinData = 0;
  this->member.shader = 0;
  return this;
}
