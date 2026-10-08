void __thiscall MemoryHeap_Free(_DWORD *this, unsigned int a2)
{
  int v3; // ecx
  unsigned int v4; // eax
  bool v5; // bl
  unsigned int *v6; // ebx
  int v7; // ebx

  if ( a2 ) /*0x401d4a*/
  {
    v3 = *(this + 3); /*0x401d50*/
    if ( v3 ) /*0x401d55*/
    {
      v4 = *(this + 6); /*0x401d66*/
      v5 = a2 >= v4 && a2 < v3 + v4; /*0x401d78*/
      if ( !*((_BYTE *)this + 0x16D) ) /*0x401d7a*/
        NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&HeapCriticalSection, (int)"MemoryHeap::Free"); /*0x401d8d*/
      if ( v5 ) /*0x401d94*/
      {
        MemoryHeap_InsertFreeEntry(this, (_DWORD *)(a2 - 8)); /*0x401ded*/
        MemoryHeap_CoalesceFreeEntry(this, (_DWORD *)(a2 - 8)); /*0x401df5*/
      }
      else if ( !*((_BYTE *)this + 0x16C) /*0x401db1*/
             && (v6 = (unsigned int *)MEMORY[0xB32C80][HIBYTE(a2)]) != 0
             && MemoryPool_ContainsAddress(v6, a2) )
      {
        MemoryPool_Free(v6, (_DWORD *)a2); /*0x401dbd*/
      }
      else
      {
        v7 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*this + 0x1C))(this, a2); /*0x401dd0*/
        (*(void (__thiscall **)(_DWORD *, unsigned int))(*this + 0x14))(this, a2); /*0x401dd8*/
        (*(void (__thiscall **)(_DWORD *, int))*this)(this, -v7); /*0x401de3*/
      }
      if ( !*((_BYTE *)this + 0x16D) ) /*0x401dfa*/
        NiLeaveCriticalSection_0(&HeapCriticalSection); /*0x401e08*/
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, unsigned int))(*this + 0x14))(this, a2); /*0x401d5f*/
    }
  }
}
