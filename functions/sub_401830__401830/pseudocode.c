_DWORD *__userpurge sub_401830@<eax>(_DWORD *this@<ecx>, char a2@<bpl>, size_t Size, char a4, char a5)
{
  int v6; // ebx
  LONG RecursionCount; // ebx
  _DWORD *v8; // esi
  int v10; // [esp+0h] [ebp-Ch]
  char v11; // [esp+18h] [ebp+Ch]

  v6 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 8))(this, Size);
  if ( v6 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD))*this)(this, Size);
    return (_DWORD *)v6;
  }
  else if ( *(this + 0x59) && a4 )
  {
    RecursionCount = HeapCriticalSection.RecursionCount;
    HeapCriticalSection.RecursionCount = 1;
    NiLeaveCriticalSection_0(&HeapCriticalSection);
    dword_B0201C = dword_B32B04;
    v11 = sub_4014A0(Size);
    dword_B0201C = 0xFFFFFFFF;
    v8 = MemoryHeap_Allocate(this, a2, (unsigned int)Size | 0x100000000LL, v10);
    sub_4011E0(v11);
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&HeapCriticalSection, (int)&unk_A2F830);
    HeapCriticalSection.RecursionCount = RecursionCount;
    return v8;
  }
  else
  {
    return 0;
  }
}
