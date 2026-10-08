// Verified: component vslot +0x44 tail-forwards path to bloodSpray TESModel.SetModelPath(+0x18), adjusting ECX by +0xF8 (complete creature +0x11C). Path argument remains on the stack; previous no-argument prototype was incomplete.
void __thiscall TESCreature_SetBloodParticlePath(TESActorBaseData *__shifted(TESCreature,0x24) self, const char *path)
{
  ADJ(self)->bloodSpray.vtbl->SetModelPath(&ADJ(self)->bloodSpray, path); /*0x51c69f*/
}
