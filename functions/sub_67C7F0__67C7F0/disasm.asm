0x67C7F0: cmp     [esp+arg_4], 0
0x67C7F5: jnz     short loc_67C80B
0x67C7F7: mov     eax, [esp+arg_0]
0x67C7FB: mov     ecx, [eax+58h]
0x67C7FE: mov     edx, [ecx]
0x67C800: mov     eax, [edx+49Ch]
0x67C806: call    eax
0x67C808: retn    8
0x67C80B: mov     ecx, [ecx+3Ch]
0x67C80E: mov     eax, [ecx+4]
0x67C811: test    eax, eax
0x67C813: jz      short locret_67C827
0x67C815: mov     edx, [esp+arg_0]
0x67C819: mov     ecx, [edx+58h]
0x67C81C: mov     edx, [ecx]
0x67C81E: push    eax
0x67C81F: mov     eax, [edx+484h]
0x67C825: call    eax
0x67C827: retn    8
