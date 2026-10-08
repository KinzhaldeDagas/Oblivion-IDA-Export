int __userpurge EffectItem_GetQualifiedName_SkillAttr_::SwitchEffectCode_3@<eax>(int a1@<eax>, int *a2@<ecx>, char *a3)
{
  switch ( a1 ) /*0x413b29*/
  {
    case 0x54414744: /*0x413b29*/
      return EffectItem_GetQualifiedName_SkillAttr_::Damage((int)a3); /*0x413b29*/
    case 0x54414F46: /*0x413b29*/
      return EffectItem_GetQualifiedName_SkillAttr_::Fortify(a2, a3); /*0x413b30*/
    case 0x54415244: /*0x413b29*/
      return EffectItem_GetQualifiedName_SkillAttr_::Drain(a2, a3); /*0x413b37*/
  }
  return EffectItem_GetQualifiedName_SkillAttr_::GetEffectName((char)a3);
}
