0x9A27A0: push    esi
0x9A27A1: mov     esi, [esp+4+arg_4]
0x9A27A5: push    esi
0x9A27A6: call    sub_9A92E0
0x9A27AB: test    eax, eax
0x9A27AD: jnz     short loc_9A27B8
0x9A27AF: mov     eax, 1
0x9A27B4: pop     esi
0x9A27B5: retn    0Ch
0x9A27B8: mov     ecx, [esp+4+arg_0]
0x9A27BC: mov     edx, [ecx]
0x9A27BE: push    0
0x9A27C0: push    eax
0x9A27C1: mov     eax, [edx+30h]
0x9A27C4: push    esi
0x9A27C5: call    eax
0x9A27C7: neg     al
0x9A27C9: pop     esi
0x9A27CA: sbb     eax, eax
0x9A27CC: and     eax, 7FFFFFB0h
0x9A27D1: add     eax, 80000050h
0x9A27D6: retn    0Ch
