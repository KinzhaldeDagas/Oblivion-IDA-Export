BSTempEffectParticle *__thiscall BSTempEffectParticle::`scalar deleting destructor'(
        BSTempEffectParticle *this,
        char a2)
{
  BSTempEffectParticle::~BSTempEffectParticle(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
