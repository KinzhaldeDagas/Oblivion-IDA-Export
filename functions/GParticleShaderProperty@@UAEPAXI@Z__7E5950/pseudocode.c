ParticleShaderProperty *__thiscall ParticleShaderProperty::`scalar deleting destructor'(
        ParticleShaderProperty *this,
        char a2)
{
  ParticleShaderProperty::~ParticleShaderProperty(this); /*0x7e5953*/
  if ( (a2 & 1) != 0 ) /*0x7e595d*/
    FormHeapFree((unsigned int)this); /*0x7e5960*/
  return this; /*0x7e596a*/
}
