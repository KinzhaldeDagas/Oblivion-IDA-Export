0x939B60: push    ebp
0x939B61: push    edi
0x939B62: mov     edi, [esp+8+arg_0]
0x939B66: mov     al, [edi+2]
0x939B69: xor     ebp, ebp
0x939B6B: test    al, al
0x939B6D: jbe     short loc_939BA1
0x939B6F: push    ebx
0x939B70: mov     ebx, [esp+0Ch+arg_4]
0x939B74: push    esi
0x939B75: lea     esi, [edi+6]
0x939B78: jmp     short loc_939B80
0x939B7A: align 10h
0x939B80: xor     eax, eax
0x939B82: mov     ax, [esi]
0x939B85: cmp     ax, 0FFFFh
0x939B89: jz      short loc_939B93
0x939B8B: mov     edx, [ebx]
0x939B8D: push    eax
0x939B8E: mov     ecx, ebx
0x939B90: call    dword ptr [edx+10h]
0x939B93: movzx   eax, byte ptr [edi+2]
0x939B97: inc     ebp
0x939B98: add     esi, 8
0x939B9B: cmp     ebp, eax
0x939B9D: jl      short loc_939B80
0x939B9F: pop     esi
0x939BA0: pop     ebx
0x939BA1: mov     byte ptr [edi+2], 0
0x939BA5: mov     byte ptr [edi], 0
0x939BA8: mov     byte ptr [edi+1], 0
0x939BAC: pop     edi
0x939BAD: pop     ebp
0x939BAE: retn
