// Return a native skill's Luck-adjusted effective base value. Read base Luck and the requested base SkillActorValue, apply Calc_LuckModifiedSkill, and clamp to 0..100. TESClass major/minor status is not consulted.
double __thiscall Actor_GetLuckModifiedBaseAV(Actor *this, SkillActorValue actorValue)
{
  TESForm *v3; // ebp
  TESForm *v4; // edi
  TESForm *v5; // edi
  TESForm *v6; // ebx
  SInt32 v7; // eax
  SInt32 luckValue; // [esp+18h] [ebp+8h]

  v3 = 0; /*0x5e043e*/
  v4 = this->vtbl->super.super.GetBaseForm(this); /*0x5e0442*/
  if ( v4 ) /*0x5e0446*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e0452*/
      v3 = v4; /*0x5e0458*/
  }
  v5 = 0; /*0x5e0464*/
  v6 = this->vtbl->super.super.GetBaseForm(this); /*0x5e0468*/
  if ( v6 ) /*0x5e046c*/
  {
    if ( this->vtbl->super.super.IsActor((TESObjectREFR *)this) ) /*0x5e0478*/
      v5 = v6; /*0x5e047e*/
  }
  v3->vtbl[1].GetSaveSize(v3, 7);               // Read base Luck (AV 0x07) for the effective-skill adjustment. /*0x5e048d*/
  v7 = ((int (__thiscall *)(TESForm *))v5->vtbl[1].GetSaveSize)(v5); /*0x5e049f*/
  return Calc_LuckModifiedSkill(v7, luckValue); // Read the requested native base skill before applying Luck. This calculation is independent of major membership and advancement thresholds. /*0x5e04aa*/
}
