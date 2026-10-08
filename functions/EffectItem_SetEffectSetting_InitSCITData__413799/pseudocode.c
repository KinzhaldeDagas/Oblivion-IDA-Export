// positive sp value has been detected, the output may be wrong!
int __userpurge EffectItem_SetEffectSetting_::InitSCITData@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<esi>, int a4)
{
  *(_DWORD *)(*(_DWORD *)(a3 + 0x18) + 4) = a1; /*0x41379c*/
  **(_DWORD **)(a3 + 0x18) = a1; /*0x4137a2*/
  *(_DWORD *)(*(_DWORD *)(a3 + 0x18) + 0x10) = a1; /*0x4137aa*/
  return EffectItem_SetEffectSetting_::CleanupExtraSCIT(a1, a2, a3, a4);
}
