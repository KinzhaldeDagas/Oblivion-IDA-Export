void __userpurge EffectSetting_SetCounterEffects_::NewCounterArray(
        int a1@<esi>,
        char a2@<bpl>,
        int a3@<edi>,
        int a4,
        int a5,
        unsigned __int16 a6,
        int a7)
{
  FreeEntry *v7; // eax
  size_t v8; // [esp-Ch] [ebp-Ch]

  if ( a6 ) /*0x415d6b*/
  {
    HIDWORD(v8) = 1; /*0x415d71*/
    LODWORD(v8) = 4 * a6; /*0x415d7a*/
    v7 = j_MemoryHeap_Alloc(&FormHeap, a2, v8, a3); /*0x415d80*/
    *(_DWORD *)(a1 + 0x9C) = v7; /*0x415d87*/
    if ( v7 ) /*0x415d8d*/
    {
      *(_WORD *)(a1 + 0x6C) = a6; /*0x415d93*/
      EffectSetting_SetCounterEffects_::CopyCounterEffects(0, a7 - 4, a6, a1, a4, a5); /*0x415d9e*/
    }
    else
    {
      EffectSetting_SetCounterEffects_::Done_(a4, a5); /*0x415d8d*/
    }
  }
  else
  {
    EffectSetting_SetCounterEffects_::Done(a4, a5); /*0x415d6b*/
  }
}
