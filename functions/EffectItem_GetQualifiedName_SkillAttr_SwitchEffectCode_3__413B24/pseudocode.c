int __userpurge EffectItem_GetQualifiedName_SkillAttr_::SwitchEffectCode_3@<eax>(
        int a1@<eax>,
        _DWORD *a2@<ecx>,
        int a3)
{
  switch ( a1 )
  {
    case 0x54414744:
      return EffectItem_GetQualifiedName_SkillAttr_::Damage(a3);
    case 0x54414F46:
      return EffectItem_GetQualifiedName_SkillAttr_::Fortify(a2, a3);
    case 0x54415244:
      return EffectItem_GetQualifiedName_SkillAttr_::Drain(a3);
  }
  return EffectItem_GetQualifiedName_SkillAttr_::GetEffectName(a3);
}
