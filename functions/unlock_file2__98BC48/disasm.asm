0x98BC48: mov     eax, [esp+arg_0]
0x98BC4C: cmp     eax, 14h
0x98BC4F: jge     short loc_98BC5C
0x98BC51: add     eax, 10h
0x98BC54: push    eax
0x98BC55: call    __unlock
0x98BC5A: pop     ecx
0x98BC5B: retn
0x98BC5C: mov     eax, [esp+arg_4]
0x98BC60: add     eax, 20h ; ' '
0x98BC63: push    eax; lpCriticalSection
0x98BC64: call    ds:LeaveCriticalSection
0x98BC6A: retn
