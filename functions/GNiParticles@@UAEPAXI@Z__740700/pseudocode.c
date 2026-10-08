NiAVObject *__thiscall NiParticles::`scalar deleting destructor'(NiAVObject *this, char a2)
{
  NiParticles::~NiParticles(this); /*0x740703*/
  if ( (a2 & 1) != 0 ) /*0x74070d*/
    FormHeapFree((unsigned int)this); /*0x740710*/
  return this; /*0x74071a*/
}
