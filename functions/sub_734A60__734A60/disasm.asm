0x734A60: push    esi
0x734A61: push    edi
0x734A62: mov     edi, ecx
0x734A64: xor     esi, esi
0x734A66: cmp     [edi+10Eh], si
0x734A6D: jbe     short loc_734AB5
0x734A6F: mov     eax, [esp+8+arg_4]
0x734A73: mov     edx, [esp+8+arg_0]
0x734A77: jmp     short loc_734A80
0x734A79: align 10h
0x734A80: movzx   ecx, byte ptr [edx+2]
0x734A84: mov     [eax], cl
0x734A86: movzx   ecx, byte ptr [edx+1]
0x734A8A: mov     [eax+1], cl
0x734A8D: movzx   ecx, byte ptr [edx]
0x734A90: add     eax, 1
0x734A93: add     eax, 1
0x734A96: mov     [eax], cl
0x734A98: movzx   ecx, byte ptr [edx+3]
0x734A9C: add     eax, 1
0x734A9F: mov     [eax], cl
0x734AA1: movzx   ecx, word ptr [edi+10Eh]
0x734AA8: add     esi, 1
0x734AAB: add     eax, 1
0x734AAE: add     edx, 4
0x734AB1: cmp     esi, ecx
0x734AB3: jb      short loc_734A80
0x734AB5: pop     edi
0x734AB6: pop     esi
0x734AB7: retn    8
