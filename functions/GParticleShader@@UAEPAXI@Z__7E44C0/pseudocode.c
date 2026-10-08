ParticleShader *__thiscall ParticleShader::`scalar deleting destructor'(ParticleShader *this, char a2)
{
  ParticleShader::~ParticleShader(this); /*0x7e44c3*/
  if ( (a2 & 1) != 0 ) /*0x7e44cd*/
    FormHeapFree((unsigned int)this); /*0x7e44d0*/
  return this; /*0x7e44da*/
}
