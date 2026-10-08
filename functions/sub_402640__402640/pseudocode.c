// Scans one MemoryPool for empty 4 KiB pages, unlinks each page's entries from its free list, VirtualFree's the page, and clears page metadata.
int __usercall MemoryPool_FreeUnusedPages@<eax>(_DWORD *this@<ecx>, DWORD a2@<edi>)
{
  unsigned int v3; // ebp
  unsigned int v4; // edi
  char *v5; // ecx
  char *v6; // edx
  _DWORD *v7; // edx
  DWORD v9; // [esp-8h] [ebp-18h]
  char v10; // [esp+Bh] [ebp-5h]
  int v11; // [esp+Ch] [ebp-4h]

  NiEnterCriticalSection( /*0x402651*/
    (struct _RTL_CRITICAL_SECTION *)&HeapCriticalSection,
    (int)"MemoryPool::FreeUnusedPagesForAllPools()");
  v3 = 0; /*0x402656*/
  v10 = 0; /*0x40265e*/
  if ( *(this + 0x43) ) /*0x402658*/
  {
    v11 = 0; /*0x40266a*/
    v9 = a2; /*0x40266e*/
    do /*0x40271c*/
    {
      if ( !*(_WORD *)(*(this + 0x42) + 2 * v3) ) /*0x402676*/
      {
        if ( !v10 ) /*0x402686*/
        {
          if ( *(this + 0x45) >= 2u ) /*0x40268f*/
            *(this + 0x11) = sub_402190((_DWORD *)*(this + 0x11)); /*0x40269c*/
          v10 = 1; /*0x40269f*/
        }
        v4 = *(this + 0x40); /*0x4026a4*/
        v5 = (char *)(v11 + *(this + 0x10)); /*0x4026b6*/
        v6 = &v5[v4 * (0x1000 / v4 - 1)]; /*0x4026c2*/
        if ( *(_DWORD *)v5 ) /*0x4026c0*/
          *(_DWORD *)(*(_DWORD *)v5 + 4) = *((_DWORD *)v6 + 1); /*0x4026cb*/
        else
          *(this + 0x11) = *((_DWORD *)v6 + 1); /*0x4026d3*/
        v7 = *((_DWORD **)v6 + 1); /*0x4026d6*/
        if ( v7 ) /*0x4026db*/
          *v7 = *(_DWORD *)v5; /*0x4026df*/
        *(this + 0x45) -= 0x1000 / v4; /*0x4026e1*/
        VirtualFree(v5, 0x400000001000uLL, v9); /*0x4026f2*/
        *(_WORD *)(*(this + 0x42) + 2 * v3) = 0xFFFF; /*0x4026fe*/
        --*(this + 0x46); /*0x402704*/
      }
      v11 += 0x1000; /*0x40270b*/
      ++v3; /*0x402713*/
    }
    while ( v3 < *(this + 0x43) ); /*0x40271c*/
  }
  return NiLeaveCriticalSection_0(&HeapCriticalSection); /*0x402724*/
}
