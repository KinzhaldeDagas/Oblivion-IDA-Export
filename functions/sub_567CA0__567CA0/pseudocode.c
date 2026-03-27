char __thiscall sub_567CA0(TargetData **this)
{
  TargetData *v1; // esi
  char v2; // bl
  int TargetType; // eax
  int v5; // eax
  TESForm::FormType type; // al
  ObjectType v7; // eax

  v1 = *(this + 0xA);
  v2 = 0;
  if ( !v1 )
    return 0;
  TargetType = TargetData::GetTargetType(*(this + 0xA));
  if ( !TargetType )
  {
    if ( !sub_569E60(v1).form )
      return v2;
    v7.form = sub_569E60(v1).form;
    if ( !v7.form->vtbl->IsActor((TESObjectREFR *)v7.objectCode) )
      return v2;
    return 1;
  }
  v5 = TargetType - 1;
  if ( v5 )
  {
    if ( v5 == 1 && (unsigned int)&sub_569E80(v1).form[0xFFFFFFFF].member.baseExtraList.members.m_data + 1 <= 1 )
      return 1;
    return v2;
  }
  type = sub_569E70(v1).form->member.super.type;
  if ( type == kFormType_NPC )
    return 1;
  if ( type == kFormType_Creature )
    return 1;
  return v2;
}
