int __usercall EffectItem_GetQualifiedName_SkillAttr_::SwitchEffectCode@<eax>(int a1@<eax>, _DWORD *a2@<ecx>, char *a3)
{
  if ( a1 > 0x54414552 ) /*0x413a9b*/
    return EffectItem_GetQualifiedName_SkillAttr_::SwitchEffectCode_3(a1, a2, (int)a3); /*0x413a9b*/
  if ( a1 == 0x54414552 ) /*0x413aa1*/
    return EffectItem_GetQualifiedName_SkillAttr_::Restore((int)a3); /*0x413aa1*/
  if ( a1 > 0x4B535244 ) /*0x413aa8*/
    return EffectItem_GetQualifiedName_SkillAttr_::SwitchEffectCode_2(a1, (int)a3); /*0x413aa8*/
  switch ( a1 ) /*0x413aaa*/
  {
    case 0x4B535244: /*0x413aaa*/
      return EffectItem_GetQualifiedName_SkillAttr_::Drain(a2, a3); /*0x413aaa*/
    case 0x4B534241: /*0x413aaa*/
      return EffectItem_GetQualifiedName_SkillAttr_::Absorb((int)a3); /*0x413ab5*/
    case 0x4B534F46: /*0x413aaa*/
      return EffectItem_GetQualifiedName_SkillAttr_::Fortify(a2, (int)a3); /*0x413abd*/
  }
  return EffectItem_GetQualifiedName_SkillAttr_::GetEffectName((char)a3);
}
