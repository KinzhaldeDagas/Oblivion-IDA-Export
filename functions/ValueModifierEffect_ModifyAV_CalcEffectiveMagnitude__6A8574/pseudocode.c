// OBMEFix 2026-06-01 verification: vanilla ValueModifierEffect negative damage clamp. If amount < 0 and actorValue is not Fatigue, engine reads current AV and clamps the amount so current+amount does not go below zero before the virtual DamageAV_F call at +0x2A4.
void __usercall ValueModifierEffect_ModifyAV_::CalcEffectiveMagnitude(
        int a1@<edi>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        float a7)
{
  if ( a7 < 0.0 && *(_DWORD *)(a2 + 0x38) != 0xA ) /*0x6a858b*/
    ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)a1 + 0x288))(a1, *(_DWORD *)(a2 + 0x38)); /*0x6a859a*/
  JUMPOUT(0x6A85C9); /*0x6a85c9*/
}
