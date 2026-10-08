// positive sp value has been detected, the output may be wrong!
UInt32 __usercall EffectSetting_SaveFormChunks_::RestoreObjPointers@<eax>(
        int a1@<ebx>,
        TESFormVtbl *a2@<ebp>,
        Data *a3@<edi>,
        TESForm *a4@<esi>,
        TESForm::FormFlags a5,
        UInt32 a6,
        Data *a7,
        TESForm::ModReferenceList *a8)
{
  __int16 refID; // ax
  void *v9; // ecx

  a4[5].member.modlist.data = a7; /*0x415900*/
  refID = a4[4].member.refID; /*0x415906*/
  a4[4].member.modlist.data = a3; /*0x41590d*/
  a4[5].member.flags = a5; /*0x415911*/
  a4[5].vtbl = a2; /*0x41591b*/
  *(_DWORD *)&a4[5].member.type = a1; /*0x41591f*/
  a4[5].member.refID = a6; /*0x415922*/
  a4[5].member.modlist.next = a8; /*0x415928*/
  if ( refID && (v9 = (void *)a4[6].member.refID) != 0 ) /*0x415939*/
    return EffectSetting_SaveFormChunks_::SaveCounterEffects(v9, refID); /*0x41593a*/
  else
    return EffectSetting_SaveFormChunks_::Done(a4); /*0x41592f*/
}
