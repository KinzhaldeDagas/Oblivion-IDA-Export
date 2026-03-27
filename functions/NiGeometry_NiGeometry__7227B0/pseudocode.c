NiGeometry *__thiscall NiGeometry::NiGeometry(NiGeometry *this, NiGeometryData *a2)
{
  NiAVObject::NiAVObject((NiAVObject *)this);
  this->__vftable = (NiGeometryVtbl *)&NiGeometry::`vftable';
  this->member.unk0AC = 0;
  this->member.unk0B0 = 0;
  this->member.geomData = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)&a2->member);
  this->member.skinData = 0;
  this->member.shader = 0;
  return this;
}
