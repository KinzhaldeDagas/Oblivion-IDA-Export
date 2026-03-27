0xA187D0: push    esi
0xA187D1: mov     esi, dword_B34424
0xA187D7: test    esi, esi
0xA187D9: jz      short loc_A187F7
0xA187DB: lea     eax, [esi+4]
0xA187DE: push    eax; lpAddend
0xA187DF: call    ds:InterlockedDecrement
0xA187E5: test    eax, eax
0xA187E7: jnz     short loc_A187F7
0xA187E9: test    esi, esi
0xA187EB: jz      short loc_A187F7
0xA187ED: mov     edx, [esi]
0xA187EF: mov     eax, [edx]
0xA187F1: push    1
0xA187F3: mov     ecx, esi
0xA187F5: call    eax
0xA187F7: pop     esi
0xA187F8: retn
