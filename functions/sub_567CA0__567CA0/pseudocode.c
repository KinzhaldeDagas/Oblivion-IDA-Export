char __thiscall sub_567CA0(TargetData **this)
{
  TargetData *v1; // esi
  char v2; // bl
  int TargetType; // eax
  int v5; // eax
  TESForm::FormType type; // al
  ObjectType v7; // eax

  v1 = *(this + 0xA); /*0x567ca2*/
  v2 = 0; /*0x567ca5*/
  if ( !v1 ) /*0x567ca9*/
    return 0; /*0x567caf*/
  TargetType = TargetData::GetTargetType(*(this + 0xA)); /*0x567cb2*/
  if ( !TargetType ) /*0x567cba*/
  {
    if ( !sub_569E60(v1).form ) /*0x567cf7*/
      return v2; /*0x567cf7*/
    v7.form = sub_569E60(v1).form; /*0x567d02*/
    if ( !v7.form->vtbl->IsActor((TESObjectREFR *)v7.objectCode) ) /*0x567d11*/
      return v2; /*0x567d15*/
    return 1; /*0x567d15*/
  }
  v5 = TargetType - 1; /*0x567cbc*/
  if ( v5 ) /*0x567cbf*/
  {
    if ( v5 == 1 && (unsigned int)&sub_569E80(v1).form[0xFFFFFFFF].member.baseExtraList.members.m_data + 1 <= 1 ) /*0x567cd3*/
      return 1; /*0x567cdb*/
    return v2; /*0x567cd3*/
  }
  type = sub_569E70(v1).form->member.super.type; /*0x567ce3*/
  if ( type == kFormType_NPC ) /*0x567ce8*/
    return 1; /*0x567d17*/
  if ( type == kFormType_Creature ) /*0x567cec*/
    return 1; /*0x567cf4*/
  return v2; /*0x567cab*/
}
