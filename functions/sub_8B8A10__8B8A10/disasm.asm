0x8B8A10: push    ebp
0x8B8A11: mov     ebp, esp
0x8B8A13: and     esp, 0FFFFFFF0h
0x8B8A16: sub     esp, 8
0x8B8A19: movaps  xmm0, xmmword ptr ds:0A372D0h
0x8B8A20: push    esi
0x8B8A21: push    edi
0x8B8A22: mov     edi, [ebp+arg_0]
0x8B8A25: movaps  xmm2, xmmword ptr [edi]
0x8B8A28: mov     esi, ecx
0x8B8A2A: movaps  xmm1, xmmword ptr [esi+30h]
0x8B8A2E: subps   xmm2, xmm1
0x8B8A31: andps   xmm2, xmm0
0x8B8A34: mov     [esp+10h+var_4], 3A83126Fh
0x8B8A3C: movss   xmm0, [esp+10h+var_4]
0x8B8A42: shufps  xmm0, xmm0, 0
0x8B8A46: cmpltps xmm0, xmm2
0x8B8A4A: movmskps eax, xmm0
0x8B8A4D: test    al, 7
0x8B8A4F: jz      short loc_8B8A64
0x8B8A51: mov     ecx, [esi+18h]
0x8B8A54: test    ecx, ecx
0x8B8A56: jz      short loc_8B8A64
0x8B8A58: mov     eax, [ecx+8]
0x8B8A5B: test    eax, eax
0x8B8A5D: jz      short loc_8B8A64
0x8B8A5F: call    sub_8A6410
0x8B8A64: movaps  xmm0, xmmword ptr [edi]
0x8B8A67: pop     edi
0x8B8A68: movaps  xmmword ptr [esi+30h], xmm0
0x8B8A6C: pop     esi
0x8B8A6D: mov     esp, ebp
0x8B8A6F: pop     ebp
0x8B8A70: retn    4
