int __userpurge EffectItem_GetQualifiedName_SkillAttr_::SwitchEffectCode_2@<eax>(int a1@<eax>, int a2)
{
  if ( a1 == 0x54414241 )
    return EffectItem_GetQualifiedName_SkillAttr_::Absorb(a2);
  else
    return EffectItem_GetQualifiedName_SkillAttr_::GetEffectName(a2);
}
