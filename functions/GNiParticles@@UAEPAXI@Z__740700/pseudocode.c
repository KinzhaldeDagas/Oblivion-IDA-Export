NiAVObject *__thiscall NiParticles::`scalar deleting destructor'(NiAVObject *this, char a2)
{
  NiParticles::~NiParticles(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
