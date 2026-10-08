void __usercall EffectSetting_LinkForm_::SetFormsResolvedFlag(TESForm *a1@<esi>)
{
  TESForm_SetIsLinked(a1, 1); /*0x415bb2*/
  EffectSetting_LinkForm_::Done(); /*0x415bb3*/
}
