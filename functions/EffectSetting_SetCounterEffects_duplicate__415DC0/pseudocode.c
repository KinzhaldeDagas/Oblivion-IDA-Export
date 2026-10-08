void __userpurge EffectSetting_SetCounterEffects_duplicate(
        int this@<ecx>,
        char a2@<bpl>,
        int a3@<edi>,
        unsigned __int16 a4,
        int a5)
{
  FreeEntry *v6; // eax
  int v7; // eax
  size_t v8; // [esp-Ch] [ebp-14h]

  if ( *(__int16 *)(this + 0x6C) > 0 ) /*0x415dc9*/
  {
    MemoryHeap_Free_checked(*(void **)(this + 0x9C)); /*0x415dd7*/
    *(_DWORD *)(this + 0x9C) = 0; /*0x415ddc*/
    *(_WORD *)(this + 0x6C) = 0; /*0x415de6*/
  }
  if ( a4 ) /*0x415df4*/
  {
    HIDWORD(v8) = 1; /*0x415dfa*/
    LODWORD(v8) = 4 * a4; /*0x415e03*/
    v6 = j_MemoryHeap_Alloc(&FormHeap, a2, v8, a3); /*0x415e09*/
    *(_DWORD *)(this + 0x9C) = v6; /*0x415e10*/
    if ( v6 ) /*0x415e16*/
    {
      v7 = 0; /*0x415e18*/
      *(_WORD *)(this + 0x6C) = a4; /*0x415e1c*/
      do /*0x415e41*/
      {
        *(_DWORD *)(*(_DWORD *)(this + 0x9C) + 4 * v7) = *(_DWORD *)(a5 + 4 * v7); /*0x415e39*/
        ++v7; /*0x415e3c*/
      }
      while ( v7 < a4 ); /*0x415e41*/
    }
  }
}
