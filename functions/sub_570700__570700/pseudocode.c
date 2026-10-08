BSTempEffectParticle *__thiscall BSTempEffectParticle_DefaultInit(BSTempEffectParticle *self)
{
  BSTempEffect_Constructor(&self->base, 0, 0.0); /*0x570733*/
  self->base.vtable = &BSTempEffectParticle::`vftable'; /*0x570738*/
  self->particleNode = 0; /*0x570742*/
  self->modelPath = 0; /*0x570771*/
  return self; /*0x570774*/
}
