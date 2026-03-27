int __usercall EffectSetting_LinkForm_::SetFormsResolvedFlag@<eax>(TESForm *a1@<esi>)
{
  TESForm_SetIsLinked(a1, 1);
  return EffectSetting_LinkForm_::Done();
}
