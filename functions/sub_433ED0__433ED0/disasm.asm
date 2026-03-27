0x433ED0: push    ebx
0x433ED1: push    esi
0x433ED2: push    edi
0x433ED3: mov     edi, ecx
0x433ED5: mov     ebx, [edi+14h]
0x433ED8: mov     eax, [ebx+4]
0x433EDB: push    eax; dwTlsIndex
0x433EDC: call    ds:TlsGetValue
0x433EE2: test    eax, eax
0x433EE4: jnz     short loc_433EEE
0x433EE6: push    edi; a2
0x433EE7: mov     ecx, ebx; this
0x433EE9: call    ThreadSpecificInterfaceManager_AddInterface
0x433EEE: mov     edx, [esp+0Ch+arg_8]
0x433EF2: push    edx; int
0x433EF3: mov     edx, [esp+10h+arg_0]
0x433EF7: mov     esi, eax
0x433EF9: mov     eax, [esp+10h+arg_4]
0x433EFD: mov     ecx, [esi]
0x433EFF: mov     edi, [ecx]
0x433F01: push    eax; int
0x433F02: push    edx; int
0x433F03: push    eax
0x433F04: mov     eax, [edi+1Ch]
0x433F07: push    edx
0x433F08: call    eax
0x433F0A: push    eax; Comperand
0x433F0B: mov     ecx, esi
0x433F0D: call    sub_433180
0x433F12: pop     edi
0x433F13: pop     esi
0x433F14: pop     ebx
0x433F15: retn    0Ch
