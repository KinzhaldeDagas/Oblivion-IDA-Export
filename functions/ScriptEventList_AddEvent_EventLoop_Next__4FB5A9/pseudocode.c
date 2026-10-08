void __userpurge ScriptEventList_AddEvent_::EventLoop_Next(
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
  int v11; // edx

  v10 = *(int **)(a3 + 4); /*0x4fb5a9*/
  if ( v10 ) /*0x4fb5ae*/
  {
    ScriptEventList_AddEvent_::EventLoop(a1, a4, v10, a2, a5, a6, a7, a8, a9, a10); /*0x4fb5ae*/
  }
  else
  {
    if ( a2 ) /*0x4fb5b8*/
      *(_DWORD *)(a2 + 4) |= a10; /*0x4fb5ba*/
    v11 = *(_DWORD *)(a1 + 8); /*0x4fb5bf*/
    if ( v11 ) /*0x4fb5c4*/
      ScriptEventList_AddEvent_::EventLoop2(v11, a10, a5, a6); /*0x4fb5c5*/
    else
      ScriptEventList_AddEvent_::Done(a5, a6); /*0x4fb5c4*/
  }
}
