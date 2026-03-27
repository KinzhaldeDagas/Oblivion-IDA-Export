void __userpurge MemoryPool_Create(_DWORD *this@<ecx>, char a2@<bpl>, unsigned int a3, unsigned int a4, const char *a5)
{
  _RTL_CRITICAL_SECTION_DEBUG_0 *v5; // esi
  int v6; // ecx
  _RTL_CRITICAL_SECTION_0 *v7; // eax
  _RTL_CRITICAL_SECTION_0 *v8; // esi
  int v9; // [esp+0h] [ebp-14h]

  v5 = (_RTL_CRITICAL_SECTION_DEBUG_0 *)a3;
  if ( a3 >= 8 )
  {
    v6 = *(this + 1);
    if ( ((v6 - 1) & a3) != 0 )
      v5 = (_RTL_CRITICAL_SECTION_DEBUG_0 *)(~(v6 - 1) & (v6 + a3));
    v7 = (_RTL_CRITICAL_SECTION_0 *)MemoryHeap_Allocate(&FormHeap, a2, 0x100000180uLL, v9);
    if ( v7 )
      v8 = MemoryPool_Init(v7, v5, a4, a5);
    else
      v8 = 0;
    if ( !v8[2].DebugInfo )
    {
      sub_402400(v8);
      MemoryHeap_Free(&FormHeap, (unsigned int)v8);
    }
  }
}
