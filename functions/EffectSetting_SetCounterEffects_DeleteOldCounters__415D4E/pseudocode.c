int __userpurge EffectSetting_SetCounterEffects_::DeleteOldCounters@<eax>(
        int a1@<esi>,
        void *eax0@<eax>,
        char a3@<bpl>,
        int a4@<edi>,
        int a5,
        int a6,
        unsigned __int16 a7,
        int a8)
{
  MemoryHeap_Free_checked(eax0); /*0x415d54*/
  *(_DWORD *)(a1 + 0x9C) = 0; /*0x415d59*/
  return EffectSetting_SetCounterEffects_::NewCounterArray(a1, a3, a4, a5, a6, a7, a8);
}
