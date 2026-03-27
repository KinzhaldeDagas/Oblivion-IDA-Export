int __usercall EffectItem_GetQualifiedName_SkillAttr_::SwitchEffectCode@<eax>(int a1@<eax>, _DWORD *a2@<ecx>, int a3)
{
  if ( a1 > 0x54414552 )
    return EffectItem_GetQualifiedName_SkillAttr_::SwitchEffectCode_3(a1, a3);
  if ( a1 == 0x54414552 )
    return EffectItem_GetQualifiedName_SkillAttr_::Restore(a3);
  if ( a1 > 0x4B535244 )
    return EffectItem_GetQualifiedName_SkillAttr_::SwitchEffectCode_2(a1, a3);
  switch ( a1 )
  {
    case 0x4B535244:
      return EffectItem_GetQualifiedName_SkillAttr_::Drain(a3);
    case 0x4B534241:
      return EffectItem_GetQualifiedName_SkillAttr_::Absorb(a3);
    case 0x4B534F46:
      return EffectItem_GetQualifiedName_SkillAttr_::Fortify(a2, a3);
  }
  return EffectItem_GetQualifiedName_SkillAttr_::GetEffectName(a3);
}
