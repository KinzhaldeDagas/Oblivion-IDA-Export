// Verified: particle temp effect is saveable only when its model path and cloned particle root are both non-null.
bool __thiscall BSTempEffectParticle_IsSaveable(BSTempEffectParticle *self)
{
  return self->modelPath && self->particleNode; /*0x5708be*/
}
