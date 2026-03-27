void __thiscall TallGrassTriShape::~TallGrassTriShape(NiParticles *this)
{
  *(_DWORD *)this = &NiTriBasedGeom::`vftable';
  NiParticles::~NiParticles(this);
}
