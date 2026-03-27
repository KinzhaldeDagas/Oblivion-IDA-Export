void __thiscall MemoryHeap_Free(_DWORD *this, unsigned int a2)
{
  int v3; // ecx
  unsigned int v4; // eax
  bool v5; // bl
  unsigned int *v6; // ebx
  int v7; // ebx

  if ( a2 )
  {
    v3 = *(this + 3);
    if ( v3 )
    {
      v4 = *(this + 6);
      v5 = a2 >= v4 && a2 < v3 + v4;
      if ( !*((_BYTE *)this + 0x16D) )
        NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&HeapCriticalSection, (int)"MemoryHeap::Free");
      if ( v5 )
      {
        sub_4015F0(this, (_DWORD *)(a2 - 8));
        sub_401A30(this, (_DWORD *)(a2 - 8));
      }
      else if ( !*((_BYTE *)this + 0x16C)
             && (v6 = (unsigned int *)g_HeapPoolByAddress[HIBYTE(a2)]) != 0
             && sub_4011B0(v6, a2) )
      {
        MemoryPool_Free(v6, (_DWORD *)a2);
      }
      else
      {
        v7 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*this + 0x1C))(this, a2);
        (*(void (__thiscall **)(_DWORD *, unsigned int))(*this + 0x14))(this, a2);
        (*(void (__thiscall **)(_DWORD *, int))*this)(this, -v7);
      }
      if ( !*((_BYTE *)this + 0x16D) )
        NiLeaveCriticalSection_0(&HeapCriticalSection);
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, unsigned int))(*this + 0x14))(this, a2);
    }
  }
}
