bhkRefObject *__userpurge sub_8B9820@<eax>(int *this@<ecx>, char a2@<bpl>, int a3)
{
  DWORD CurrentThreadId; // eax
  FreeEntry *v5; // ebx
  unsigned __int8 v6; // al
  bhkRefObject *v7; // ebx
  int v10; // [esp+0h] [ebp-1Ch]

  EnterCriticalSection(&stru_BA7C80);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_BA7CFC;
  dword_BA7CF8 = CurrentThreadId;
  v5 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000050uLL, v10);
  v6 = 0x10 - ((unsigned __int8)v5 & 0xF);
  v7 = (bhkRefObject *)((char *)v5 + v6);
  HIBYTE(v7[0xFFFFFFFF].hkObject) = v6;
  sub_8A4150(v7);
  v7->__vftable = (NiObjectVtbl *)&bhkRigidBodyT::`vftable';
  v7[2].__vftable = 0;
  ++dword_BA8014;
  sub_8B8E70(this, (int *)v7, a3);
  if ( dword_BA7CFC-- == 1 )
    dword_BA7CF8 = 0;
  LeaveCriticalSection(&stru_BA7C80);
  return v7;
}
