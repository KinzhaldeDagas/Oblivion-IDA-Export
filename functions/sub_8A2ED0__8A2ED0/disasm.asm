0x8A2ED0: push    ebp
0x8A2ED1: mov     ebp, esp
0x8A2ED3: and     esp, 0FFFFFFF0h
0x8A2ED6: test    ecx, ecx
0x8A2ED8: jz      short loc_8A2EF7
0x8A2EDA: mov     eax, [ecx+8]
0x8A2EDD: test    eax, eax
0x8A2EDF: jz      short loc_8A2EF7
0x8A2EE1: mov     eax, [eax+50h]
0x8A2EE4: movaps  xmm0, xmmword ptr [eax+40h]
0x8A2EE8: add     eax, 40h ; '@'
0x8A2EEB: mov     eax, [ebp+arg_0]
0x8A2EEE: movaps  xmmword ptr [eax], xmm0
0x8A2EF1: mov     esp, ebp
0x8A2EF3: pop     ebp
0x8A2EF4: retn    4
0x8A2EF7: mov     eax, offset stru_BA7A40
0x8A2EFC: movaps  xmm0, xmmword ptr [eax]
0x8A2EFF: mov     eax, [ebp+arg_0]
0x8A2F02: movaps  xmmword ptr [eax], xmm0
0x8A2F05: mov     esp, ebp
0x8A2F07: pop     ebp
0x8A2F08: retn    4
