ParticleShaderProperty *__thiscall ParticleShaderProperty::`scalar deleting destructor'(
        ParticleShaderProperty *this,
        char a2)
{
  ParticleShaderProperty::~ParticleShaderProperty(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
