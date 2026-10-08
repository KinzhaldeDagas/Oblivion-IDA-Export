int __thiscall EffectItem_GetQualifiedName_SkillAttr_::Fortify(int *this, char *a2)
{
  return EffectItem_GetQualifiedName_SkillAttr_::PrintString(*(this + 5), MEMORY[0xB334C0].value, a2);
}
