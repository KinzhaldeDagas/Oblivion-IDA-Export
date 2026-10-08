NiTriBasedGeom *__thiscall NiTriBasedGeom::`scalar deleting destructor'(NiTriBasedGeom *this, char a2)
{
  this->vtbl.super.super.super.Destructor = (void (__thiscall *)(NiRefObject *, bool))&NiTriBasedGeom::`vftable'; /*0x722723*/
  NiParticles::~NiParticles((NiAVObject *)this); /*0x722729*/
  if ( (a2 & 1) != 0 ) /*0x722733*/
    FormHeapFree((unsigned int)this); /*0x722736*/
  return this; /*0x722740*/
}
