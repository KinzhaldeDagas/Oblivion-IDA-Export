0x98C8FB: push    ebp
0x98C8FC: mov     ebp, esp
0x98C8FE: mov     eax, [ebp+arg_0]
0x98C901: push    lpCriticalSection[eax*8]; lpCriticalSection
0x98C908: call    ds:LeaveCriticalSection
0x98C90E: pop     ebp
0x98C90F: retn
