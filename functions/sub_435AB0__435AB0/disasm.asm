0x435AB0: push    esi
0x435AB1: mov     esi, ecx
0x435AB3: mov     eax, [esi]
0x435AB5: push    edi
0x435AB6: mov     edi, [esp+8+arg_0]
0x435ABA: cmp     eax, edi
0x435ABC: jz      short loc_435ADC
0x435ABE: test    eax, eax
0x435AC0: jz      short loc_435ACC
0x435AC2: add     eax, 4
0x435AC5: push    eax; lpAddend
0x435AC6: call    ds:InterlockedDecrement
0x435ACC: test    edi, edi
0x435ACE: mov     [esi], edi
0x435AD0: jz      short loc_435ADC
0x435AD2: add     edi, 4
0x435AD5: push    edi; lpAddend
0x435AD6: call    ds:InterlockedIncrement
0x435ADC: pop     edi
0x435ADD: mov     eax, esi
0x435ADF: pop     esi
0x435AE0: retn    4
