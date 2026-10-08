bhkRefObject *__userpurge sub_8B9820@<eax>(int *this@<ecx>, char a2@<bpl>, int a3)
{
  DWORD CurrentThreadId; // eax
  FreeEntry *v5; // ebx
  unsigned __int8 v6; // al
  bhkRefObject *v7; // ebx
  int v10; // [esp+0h] [ebp-1Ch]

  EnterCriticalSection(&unk_BA7C80); /*0x8b984a*/
  CurrentThreadId = GetCurrentThreadId(); /*0x8b9850*/
  ++unk_BA7CFC; /*0x8b9856*/
  unk_BA7CF8 = CurrentThreadId; /*0x8b9866*/
  v5 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x100000050uLL, v10); /*0x8b9870*/
  v6 = 0x10 - ((unsigned __int8)v5 & 0xF); /*0x8b9879*/
  v7 = (bhkRefObject *)((char *)v5 + v6); /*0x8b987e*/
  HIBYTE(v7[0xFFFFFFFF].hkObject) = v6; /*0x8b9880*/
  sub_8A4150(v7); /*0x8b9891*/
  v7->__vftable = (NiObjectVtbl *)&bhkRigidBodyT::`vftable'; /*0x8b989b*/
  v7[2].__vftable = 0; /*0x8b98a1*/
  ++unk_BA8014; /*0x8b98a8*/
  sub_8B8E70(this, (int *)v7, a3); /*0x8b98ba*/
  if ( unk_BA7CFC-- == 1 ) /*0x8b98bf*/
    unk_BA7CF8 = 0; /*0x8b98c8*/
  LeaveCriticalSection(&unk_BA7C80); /*0x8b98d7*/
  return v7; /*0x8b98df*/
}
