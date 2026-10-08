// Map TESObjectWEAP.type byte +0x90 through the six-entry native skill-AV table at 0xB086A0. Receiver is TESObjectWEAP *; no per-instance weapon-class sidecar is consulted.
int __thiscall TESObjectWEAP_GetWeaponSkillAV(TESObjectWEAP *this)
{
  return *(_DWORD *)(4 * *((char *)this + 0x90) + 0xB086A0); /*0x4bb06e*/
}
