// positive sp value has been detected, the output may be wrong!
UInt32 __usercall EffectSetting_SaveFormChunks_::Done@<eax>(TESForm *a1@<esi>)
{
  return TESForm_FinalizeFormRecord(a1);
}
