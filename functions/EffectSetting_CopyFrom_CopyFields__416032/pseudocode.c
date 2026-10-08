int __userpurge EffectSetting_CopyFrom_::CopyFields@<eax>(int a1@<edi>, TESForm *a2@<esi>, char a3@<bpl>, int a4)
{
  a2[6].member.flags = *(_DWORD *)(a1 + 0x98); /*0x416038*/
  a2[3].member.modlist = *(TESForm::ModReferenceList *)(a1 + 0x58); /*0x416041*/
  *(_DWORD *)&a2[4].member.type = *(_DWORD *)(a1 + 0x64); /*0x41604d*/
  a2[4].member.flags = *(_DWORD *)(a1 + 0x68); /*0x416053*/
  a2[6].vtbl = *(TESFormVtbl **)(a1 + 0x90); /*0x41605c*/
  *(float *)&a2[6].member.type = *(float *)(a1 + 0x94); /*0x416068*/
  a2[4].member.modlist.next = *(TESForm::ModReferenceList **)(a1 + 0x74); /*0x416071*/
  a2[4].vtbl = *(TESFormVtbl **)(a1 + 0x60); /*0x416077*/
  a2[4].member.modlist.data = *(Data **)(a1 + 0x70); /*0x41607d*/
  a2[5] = *(TESForm *)(a1 + 0x78); /*0x416083*/
  return EffectSetting_CopyFrom_::CopyCounterEffects(a1, a2, a3, a4);
}
