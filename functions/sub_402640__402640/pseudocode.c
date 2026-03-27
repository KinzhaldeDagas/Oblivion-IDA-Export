int __usercall sub_402640@<eax>(_DWORD *this@<ecx>, DWORD a2@<edi>)
{
  unsigned int v3; // ebp
  unsigned int v4; // edi
  char *v5; // ecx
  char *v6; // edx
  _DWORD *v7; // edx
  DWORD v9; // [esp-8h] [ebp-18h]
  char v10; // [esp+Bh] [ebp-5h]
  int v11; // [esp+Ch] [ebp-4h]

  NiEnterCriticalSection(
    (struct _RTL_CRITICAL_SECTION *)&HeapCriticalSection,
    (int)"MemoryPool::FreeUnusedPagesForAllPools()");
  v3 = 0;
  v10 = 0;
  if ( *(this + 0x43) )
  {
    v11 = 0;
    v9 = a2;
    do
    {
      if ( !*(_WORD *)(*(this + 0x42) + 2 * v3) )
      {
        if ( !v10 )
        {
          if ( *(this + 0x45) >= 2u )
            *(this + 0x11) = sub_402190((_DWORD *)*(this + 0x11));
          v10 = 1;
        }
        v4 = *(this + 0x40);
        v5 = (char *)(v11 + *(this + 0x10));
        v6 = &v5[v4 * (0x1000 / v4 - 1)];
        if ( *(_DWORD *)v5 )
          *(_DWORD *)(*(_DWORD *)v5 + 4) = *((_DWORD *)v6 + 1);
        else
          *(this + 0x11) = *((_DWORD *)v6 + 1);
        v7 = *((_DWORD **)v6 + 1);
        if ( v7 )
          *v7 = *(_DWORD *)v5;
        *(this + 0x45) -= 0x1000 / v4;
        VirtualFree(v5, 0x400000001000uLL, v9);
        *(_WORD *)(*(this + 0x42) + 2 * v3) = 0xFFFF;
        --*(this + 0x46);
      }
      v11 += 0x1000;
      ++v3;
    }
    while ( v3 < *(this + 0x43) );
  }
  return NiLeaveCriticalSection_0(&HeapCriticalSection);
}
