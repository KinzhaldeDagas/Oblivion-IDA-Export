0x747BE0: push    esi; Pass223: Shutdown callback dispatcher; invokes registered property shutdown callback before later heap cleanup.
0x747BE1: xor     esi, esi
0x747BE3: cmp     ds:0B403B8h, esi
0x747BE9: jbe     short loc_747C04
0x747BEB: jmp     short loc_747BF0
0x747BF0: mov     eax, ds:0B40338h[esi*4]
0x747BF7: call    eax
0x747BF9: add     esi, 1
0x747BFC: cmp     esi, ds:0B403B8h
0x747C02: jb      short loc_747BF0
0x747C04: mov     eax, ds:0B403C0h
0x747C09: test    eax, eax
0x747C0B: pop     esi
0x747C0C: jz      short loc_747C10
0x747C0E: call    eax
0x747C10: jmp     loc_748A10
0x7487C0: mov     eax, ds:0B407B8h
0x7487C5: push    eax
0x7487C6: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x7487CB: pop     ecx
0x7487CC: retn
0x748A10: cmp     byte ptr ds:0B407BDh, 0
0x748A17: jz      short locret_748A2A
0x748A19: mov     byte ptr ds:0B407BDh, 0
0x748A20: call    sub_7485C0
0x748A25: jmp     loc_7487C0
0x748A2A: retn
