0x889BB0: push    ebx
0x889BB1: mov     ebx, [esp+4+arg_0]
0x889BB5: push    esi
0x889BB6: mov     esi, ecx
0x889BB8: test    esi, esi
0x889BBA: jz      short loc_889BD5
0x889BBC: mov     eax, [esi]
0x889BBE: mov     edx, [eax+58h]
0x889BC1: call    edx
0x889BC3: test    eax, eax
0x889BC5: jz      short loc_889BD5
0x889BC7: mov     cl, bl
0x889BC9: neg     cl
0x889BCB: sbb     ecx, ecx
0x889BCD: and     ecx, esi
0x889BCF: mov     [eax+2B0h], ecx
0x889BD5: push    ebx
0x889BD6: mov     ecx, esi
0x889BD8: call    sub_89D430
0x889BDD: pop     esi
0x889BDE: pop     ebx
0x889BDF: retn    4
