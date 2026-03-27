int __userpurge ScriptEventList_AddEvent_::EventLoop@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        int *a3@<edi>,
        int a4@<ebx>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  _DWORD *v10; // edx

  v10 = (_DWORD *)*a3;
  if ( !*a3 )
    JUMPOUT(0x4FB5B0);
  if ( *v10 == a2 )
    JUMPOUT(0x4FB5B2);
  if ( *v10 )
    return ScriptEventList_AddEvent_::EventLoop_Next(a1, a4, (int)a3, a5, a6, a7, a8, a9, a10);
  else
    return ScriptEventList_AddEvent_::EventLoop_Next(a1, *a3, (int)a3, a5, a6, a7, a8, a9, a10);
}
