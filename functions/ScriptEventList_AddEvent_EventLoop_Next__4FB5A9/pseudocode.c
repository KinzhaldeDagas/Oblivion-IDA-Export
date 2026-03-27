int __userpurge ScriptEventList_AddEvent_::EventLoop_Next@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<ebp>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int *v10; // edi

  v10 = *(int **)(a3 + 4);
  if ( v10 )
    return ScriptEventList_AddEvent_::EventLoop(a1, a4, v10, a2, a5, a6, a7, a8, a9, a10);
  if ( a2 )
    *(_DWORD *)(a2 + 4) |= a10;
  if ( *(_DWORD *)(a1 + 8) )
    return ScriptEventList_AddEvent_::EventLoop2(a5, a6);
  else
    return ScriptEventList_AddEvent_::Done(a5, a6);
}
