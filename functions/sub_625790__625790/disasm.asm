0x625790: mov     eax, [esp+arg_0]
0x625794: lea     edx, [eax-0Ch]
0x625797: cmp     edx, 6
0x62579A: jbe     short loc_6257CD
0x62579C: cmp     eax, 1Ch
0x62579F: jz      short loc_6257CD
0x6257A1: lea     edx, [eax-13h]
0x6257A4: cmp     edx, 6
0x6257A7: ja      short loc_6257B7
0x6257A9: mov     eax, 13h
0x6257AE: mov     [esp+arg_0], eax
0x6257B2: jmp     Actor_ModBaseAVi
0x6257B7: lea     edx, [eax-1Ah]
0x6257BA: cmp     edx, 6
0x6257BD: ja      short loc_6257D2
0x6257BF: mov     eax, 1Ah
0x6257C4: mov     [esp+arg_0], eax
0x6257C8: jmp     Actor_ModBaseAVi
0x6257CD: mov     eax, 0Ch
0x6257D2: mov     [esp+arg_0], eax
0x6257D6: jmp     Actor_ModBaseAVi
