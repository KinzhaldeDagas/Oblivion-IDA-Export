0x734A10: push    esi
0x734A11: push    edi
0x734A12: mov     edi, ecx
0x734A14: xor     esi, esi
0x734A16: cmp     [edi+10Eh], si
0x734A1D: jbe     short loc_734A5B
0x734A1F: mov     eax, [esp+8+arg_4]
0x734A23: mov     edx, [esp+8+arg_0]
0x734A27: jmp     short loc_734A30
0x734A29: align 10h
0x734A30: movzx   ecx, byte ptr [edx+2]
0x734A34: mov     [eax], cl
0x734A36: movzx   ecx, byte ptr [edx+1]
0x734A3A: add     eax, 1
0x734A3D: mov     [eax], cl
0x734A3F: movzx   ecx, byte ptr [edx]
0x734A42: add     eax, 1
0x734A45: mov     [eax], cl
0x734A47: movzx   ecx, word ptr [edi+10Eh]
0x734A4E: add     esi, 1
0x734A51: add     eax, 1
0x734A54: add     edx, 3
0x734A57: cmp     esi, ecx
0x734A59: jb      short loc_734A30
0x734A5B: pop     edi
0x734A5C: pop     esi
0x734A5D: retn    8
