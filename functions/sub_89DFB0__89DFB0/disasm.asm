0x89DFB0: push    esi
0x89DFB1: mov     esi, ecx
0x89DFB3: push    edi
0x89DFB4: mov     edi, [esp+8+arg_0]
0x89DFB8: lea     eax, [esi+10h]
0x89DFBB: push    eax
0x89DFBC: lea     ecx, [edi+10h]
0x89DFBF: call    sub_89DF00
0x89DFC4: movaps  xmm0, xmmword ptr [esi+0D0h]
0x89DFCB: movaps  xmmword ptr [edi+0D0h], xmm0
0x89DFD2: movaps  xmm0, xmmword ptr [esi+0E0h]
0x89DFD9: movaps  xmmword ptr [edi+0E0h], xmm0
0x89DFE0: pop     edi
0x89DFE1: pop     esi
0x89DFE2: retn    4
