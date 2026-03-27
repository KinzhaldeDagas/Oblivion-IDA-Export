NiTriBasedGeom *__thiscall NiTriBasedGeom::`scalar deleting destructor'(NiTriBasedGeom *this, char a2)
{
  this->vtbl.super.super.super.Destructor = (void (__thiscall *)(NiRefObject *, bool))&NiTriBasedGeom::`vftable';
  NiParticles::~NiParticles((NiParticles *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
