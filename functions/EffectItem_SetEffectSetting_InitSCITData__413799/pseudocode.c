// positive sp value has been detected, the output may be wrong!
int __userpurge EffectItem_SetEffectSetting_::InitSCITData@<eax>(int a1@<ebx>, int a2@<ebp>, int a3@<esi>, int a4)
{
  *(_DWORD *)(*(_DWORD *)(a3 + 0x18) + 4) = a1;
  **(_DWORD **)(a3 + 0x18) = a1;
  *(_DWORD *)(*(_DWORD *)(a3 + 0x18) + 0x10) = a1;
  return EffectItem_SetEffectSetting_::CleanupExtraSCIT(a1, a2, a3, a4);
}
