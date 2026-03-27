int __usercall EffectSetting_LinkForm_::ResolveParam@<eax>(TESForm *a1@<ecx>, TESForm *a2@<esi>, TESForm a3)
{
  Data *OverrideFile; // eax

  OverrideFile = TESForm_GetOverrideFile(a1, 0xFFFFFFFF);
  TESForm_ResolveFormID((UInt32 *)&a2[4], OverrideFile);
  return EffectSetting_LinkForm_::ResolveLight((int)a2, a3);
}
