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

  if ( *(__int16 *)(this + 0x6C) > 0 )
  {
    MemoryHeap_Free_checked(*(void **)(this + 0x9C));
    *(_DWORD *)(this + 0x9C) = 0;
    *(_WORD *)(this + 0x6C) = 0;
  }
  if ( a4 )
  {
    HIDWORD(v8) = 1;
    LODWORD(v8) = 4 * a4;
    v6 = j_MemoryHeap_Alloc(&FormHeap, a2, v8, a3);
    *(_DWORD *)(this + 0x9C) = v6;
    if ( v6 )
    {
      v7 = 0;
      *(_WORD *)(this + 0x6C) = a4;
      do
      {
        *(_DWORD *)(*(_DWORD *)(this + 0x9C) + 4 * v7) = *(_DWORD *)(a5 + 4 * v7);
        ++v7;
      }
      while ( v7 < a4 );
    }
  }
}
