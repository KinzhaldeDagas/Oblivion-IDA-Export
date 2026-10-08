FreeEntry *__userpurge sub_401830@<eax>(_DWORD *this@<ecx>, char a2@<bpl>, size_t Size, char a4, char a5)
{
  int v6; // ebx
  LONG RecursionCount; // ebx
  FreeEntry *v8; // esi
  int v10; // [esp+0h] [ebp-Ch]
  char v11; // [esp+18h] [ebp+Ch]

  v6 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 8))(this, Size); /*0x401841*/
  if ( v6 ) /*0x401845*/
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))*this)(this, Size); /*0x4018d9*/
    return (FreeEntry *)v6; /*0x4018dd*/
  }
  else if ( *(this + 0x59) && a4 ) /*0x401857*/
  {
    RecursionCount = HeapCriticalSection.RecursionCount; /*0x401859*/
    HeapCriticalSection.RecursionCount = 1; /*0x401864*/
    NiLeaveCriticalSection_0(&HeapCriticalSection); /*0x40186e*/
    dword_B0201C = dword_B32B04; /*0x401879*/
    v11 = sub_4014A0(Size); /*0x40188b*/
    dword_B0201C = 0xFFFFFFFF; /*0x40188f*/
    v8 = MemoryHeap_Allocate(this, a2, (unsigned int)Size | 0x100000000LL, v10); /*0x4018a3*/
    sub_4011E0(v11); /*0x4018a5*/
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&HeapCriticalSection, (int)&unk_A2F830); /*0x4018b7*/
    HeapCriticalSection.RecursionCount = RecursionCount; /*0x4018c0*/
    return v8; /*0x4018bd*/
  }
  else
  {
    return 0; /*0x4018cc*/
  }
}
