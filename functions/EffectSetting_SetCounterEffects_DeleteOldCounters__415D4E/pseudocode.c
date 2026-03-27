int __usercall EffectSetting_SetCounterEffects_::DeleteOldCounters@<eax>(
        int a1@<esi>,
        void *eax0@<eax>,
        int a3,
        int a4,
        unsigned __int16 a5,
        int a6)
{
  MemoryHeap_Free_checked(eax0);
  *(_DWORD *)(a1 + 0x9C) = 0;
  return EffectSetting_SetCounterEffects_::NewCounterArray(a1, a3, a4, a5, a6);
}
