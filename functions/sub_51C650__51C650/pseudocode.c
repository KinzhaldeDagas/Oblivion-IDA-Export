// Verified: component vslot +0x40 returns NULL when GetNoBloodSpray is true. Otherwise calls bloodSpray TESModel.GetModelPath(+0x14); NULL/empty falls back to sBloodParticleDefault. TESModel is complete creature +0x11C, component +0xF8; confirmed by constructor 0x51EB80.
const char *__thiscall TESCreature_GetBloodParticlePath(TESActorBaseData *__shifted(TESCreature,0x24) self)
{
  const char *result; // eax

  if ( ADJ(self)->super.actorBaseData.vtbl->GetNoBloodSpray(self) ) /*0x51c65b*/
    return 0; /*0x51c684*/
  result = ADJ(self)->bloodSpray.vtbl->GetModelPath(&ADJ(self)->bloodSpray); /*0x51c670*/
  if ( !result || !*result ) /*0x51c676*/
    return TESActorBaseData_GetBloodParticlePath(self); /*0x51c67f*/
  return result; /*0x51c67b*/
}
