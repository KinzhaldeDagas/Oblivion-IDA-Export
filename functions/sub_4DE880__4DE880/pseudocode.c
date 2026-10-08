bool __thiscall sub_4DE880(TESObjectREFR *this, TESForm *a2)
{
  TESForm *Owner; // eax
  TESForm::FormType type; // cl
  bool result; // al
  char v5; // al
  bool v6; // zf

  Owner = a2; /*0x4de880*/
  if ( !a2 ) /*0x4de889*/
  {
    Owner = TESObjectREFR_GetOwner(this); /*0x4de88b*/
    if ( !Owner ) /*0x4de892*/
      return 0; /*0x4de892*/
  }
  type = Owner->member.type; /*0x4de894*/
  if ( type == kFormType_Faction ) /*0x4de89a*/
    return (Owner[2].member.type & 2) != 0; /*0x4de8a4*/
  if ( type != kFormType_NPC ) /*0x4de8af*/
    return 0; /*0x4de8af*/
  TESActorBaseData_AllFactionsAreEvil(&Owner[1].member.refID); /*0x4de8b4*/
  v6 = v5 == 0; /*0x4de8b9*/
  result = 1; /*0x4de8bb*/
  if ( v6 ) /*0x4de8bd*/
    return 0; /*0x4de8bf*/
  return result; /*0x4de8a8*/
}
