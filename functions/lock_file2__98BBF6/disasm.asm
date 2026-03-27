0x98BBF6: mov     eax, [esp+arg_0]
0x98BBFA: cmp     eax, 14h
0x98BBFD: jge     short loc_98BC0A
0x98BBFF: add     eax, 10h
0x98BC02: push    eax
0x98BC03: call    __lock
0x98BC08: pop     ecx
0x98BC09: retn
0x98BC0A: mov     eax, [esp+arg_4]
0x98BC0E: add     eax, 20h ; ' '
0x98BC11: push    eax; lpCriticalSection
0x98BC12: call    ds:EnterCriticalSection
0x98BC18: retn
