// AVU decode: ingredient wortcraft Alchemy branch. Loads MagicCaster pointer from stack, subtracts 0x5C to recover owning Actor, pushes AV 0x13, then calls Actor_GetLuckModifiedBaseAV.
// positive sp value has been detected, the output may be wrong!
void __cdecl Actor_MagicCaster_IsMagicItemUseable_::CalcAlchemySkill(int a1, float *a2)
{
  int v3; // [esp+0h] [ebp-4h]
  float LuckModifiedBaseAV; // [esp+14h] [ebp+10h]

  LuckModifiedBaseAV = Actor_GetLuckModifiedBaseAV((Actor *)(v3 - 0x5C), kSkillAV_Alchemy); /*0x5f4824*/
  if ( a2 ) /*0x5f482e*/
    *a2 = Calc_WortcraftAlchemyFactor(LuckModifiedBaseAV); /*0x5f483d*/
}
/* Orphan comments:
AVU hook site: wortcraft effective Alchemy. ECX is already owning Actor after MagicCaster-0x5C adjustment; stack arg is AV 0x13 Alchemy. Return is ST0 and callee cleans 4 bytes.
*/
