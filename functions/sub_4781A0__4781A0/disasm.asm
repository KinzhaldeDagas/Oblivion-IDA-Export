0x4781A0: push    esi
0x4781A1: mov     esi, ecx
0x4781A3: mov     ecx, [esi]
0x4781A5: test    ecx, ecx
0x4781A7: jz      short loc_4781B1
0x4781A9: mov     eax, [ecx]
0x4781AB: mov     edx, [eax]
0x4781AD: push    1
0x4781AF: call    edx
0x4781B1: mov     ecx, [esi+4]
0x4781B4: test    ecx, ecx
0x4781B6: pop     esi
0x4781B7: jz      short locret_4781C1
0x4781B9: mov     eax, [ecx]
0x4781BB: mov     edx, [eax]
0x4781BD: push    1
0x4781BF: call    edx
0x4781C1: retn
