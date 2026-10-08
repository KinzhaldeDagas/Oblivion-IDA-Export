// [Verified] ActorProcessManager_RegisterTempEffect increments the effect reference and routes GetTypeID 4-6 into extendedTempEffects (+0x48), all other IDs into activeTempEffects (+0x40). Vtable evidence confirms decals 0/1 and particles 2 use the active list. Fallout divergence: its BGSDecalManager updates distinct simple-decal and emitter collections instead of using this per-actor temp-effect routing; one-to-one equivalence is Unknown.
void __thiscall ActorProcessManager_RegisterTempEffect(ActorProcessManager *self, BSTempEffect *effect)
{
  bool v3; // cc

  if ( effect ) /*0x678d3a*/
  {
    v3 = (unsigned int)(effect->vtable->GetTypeID(effect) - 4) <= 2;// BloodOnDeath decode 2026-05-30: RegisterTempEffect routes type IDs 4..6 to manager list +0x48; ordinary decals are type 0/1 and particles are type 2, so blood decals update through the primary list +0x40. /*0x678d49*/
    InterlockedIncrement(&effect->refCount); /*0x678d5a*/
    if ( v3 ) /*0x678d54*/
      sub_677CF0((int *)&self->extendedTempEffects, (int)effect); /*0x678d63*/
    else
      sub_677CF0((int *)&self->activeTempEffects, (int)effect); /*0x678d7a*/
  }
}
