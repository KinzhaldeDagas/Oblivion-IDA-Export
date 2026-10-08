// Verified base TESActorBaseData implementation for blood-particle virtual +0x40: returns current sBloodParticleDefault string-setting pointer.
const char *__thiscall TESActorBaseData_GetBloodParticlePath(TESActorBaseData *self)
{
  return (const char *)LODWORD(g_GameSettingStringPointers_B36CD8[0x136]); /*0x4677e5*/
}
