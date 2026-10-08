// positive sp value has been detected, the output may be wrong!
void __userpurge Actor_MagicTarget_CalcResFactor_::GetCasterLuck(
        int a1@<ebp>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        float a5,
        int a6)
{
  int v6; // esi
  int v7; // eax

  if ( a3 ) /*0x5e53a3*/
    v6 = (*(int (__thiscall **)(int, int))(*(_DWORD *)a3 + 0x284))(a3, 7); /*0x5e53b3*/
  else
    v6 = 0x64; /*0x5e53b7*/
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x284))(a2); /*0x5e53da*/
  Calc_MagicTargetResistanceFactor(a1, v6, v7, COERCE_FLOAT(2), a5); /*0x5e53df*/
}
/* Orphan comments:
Calls Calc_MagicTargetResistanceFactor(caster skill, caster luck, target Willpower AV, magic-item resistance, effect-specific resistance).
*/
