ParticleShader *__thiscall ParticleShader::`scalar deleting destructor'(ParticleShader *this, char a2)
{
  ParticleShader::~ParticleShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
