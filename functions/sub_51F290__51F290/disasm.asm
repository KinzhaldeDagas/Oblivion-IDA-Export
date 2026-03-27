0x51F290: push    esi
0x51F291: mov     esi, ecx
0x51F293: mov     eax, [esi+8]
0x51F296: shr     eax, 3
0x51F299: test    al, 1
0x51F29B: jnz     short loc_51F2AF
0x51F29D: push    esi; ArgList
0x51F29E: lea     ecx, [esi+24h]
0x51F2A1: call    sub_46E6B0
0x51F2A6: push    1; a2
0x51F2A8: mov     ecx, esi; this
0x51F2AA: call    TESForm_SetIsLinked
0x51F2AF: pop     esi
0x51F2B0: retn
