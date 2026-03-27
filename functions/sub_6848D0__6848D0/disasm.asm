0x6848D0: push    ebp
0x6848D1: mov     ebp, esp
0x6848D3: and     esp, 0FFFFFFF0h
0x6848D6: sub     esp, 8
0x6848D9: push    esi
0x6848DA: push    edi
0x6848DB: mov     edi, ecx
0x6848DD: test    edi, edi
0x6848DF: jz      short loc_68491F
0x6848E1: mov     esi, [edi+8]
0x6848E4: test    esi, esi
0x6848E6: jz      short loc_68491F
0x6848E8: call    sub_89F570
0x6848ED: movaps  xmm0, xmmword ptr [esi+70h]
0x6848F1: mov     eax, [ebp+arg_0]
0x6848F4: movaps  xmmword ptr [eax], xmm0
0x6848F7: movaps  xmm0, xmmword ptr [esi+80h]
0x6848FE: movaps  xmmword ptr [eax+10h], xmm0
0x684902: movaps  xmm0, xmmword ptr [esi+90h]
0x684909: movaps  xmmword ptr [eax+20h], xmm0
0x68490D: movaps  xmm0, xmmword ptr [esi+0A0h]
0x684914: mov     ecx, edi
0x684916: movaps  xmmword ptr [eax+30h], xmm0
0x68491A: call    sub_89F570
0x68491F: pop     edi
0x684920: pop     esi
0x684921: mov     esp, ebp
0x684923: pop     ebp
0x684924: retn    4
