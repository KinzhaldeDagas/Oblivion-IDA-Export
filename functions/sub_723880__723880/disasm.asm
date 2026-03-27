0x723880: push    esi
0x723881: mov     esi, ecx
0x723883: call    sub_70C120
0x723888: mov     ecx, [esi+0FCh]
0x72388E: test    ecx, ecx
0x723890: jz      short loc_72389A
0x723892: mov     eax, [ecx]
0x723894: mov     edx, [eax+50h]
0x723897: push    esi
0x723898: call    edx
0x72389A: pop     esi
0x72389B: retn
