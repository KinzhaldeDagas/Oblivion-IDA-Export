int __userpurge EffectSetting_SetCounterEffects_::NewCounterArray@<eax>(
        int a1@<esi>,
        char a2@<bpl>,
        int a3@<edi>,
        int a4,
        int a5,
        unsigned __int16 a6,
        int a7)
{
  FreeEntry *v7; // eax
  size_t v9; // [esp-Ch] [ebp-Ch]

  if ( !a6 )
    return EffectSetting_SetCounterEffects_::Done(a4, a5);
  HIDWORD(v9) = 1;
  LODWORD(v9) = 4 * a6;
  v7 = j_MemoryHeap_Alloc(&FormHeap, a2, v9, a3);
  *(_DWORD *)(a1 + 0x9C) = v7;
  if ( !v7 )
    return EffectSetting_SetCounterEffects_::Done_(a4, a5);
  *(_WORD *)(a1 + 0x6C) = a6;
  return EffectSetting_SetCounterEffects_::CopyCounterEffects(0, a7 - 4, a6, a1, a4, a5);
}
