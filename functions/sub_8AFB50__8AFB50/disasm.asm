0x8AFB50: push    ebp
0x8AFB51: push    esi
0x8AFB52: mov     esi, [esp+8+arg_0]
0x8AFB56: push    edi
0x8AFB57: xor     edi, edi
0x8AFB59: test    esi, esi
0x8AFB5B: jz      short loc_8AFBCC
0x8AFB5D: push    esi
0x8AFB5E: call    sub_47FAC0
0x8AFB63: mov     ebp, [esp+10h+arg_4]
0x8AFB67: add     esp, 4
0x8AFB6A: test    eax, eax
0x8AFB6C: jz      short loc_8AFB92
0x8AFB6E: mov     eax, [eax+10h]
0x8AFB71: test    eax, eax
0x8AFB73: jz      short loc_8AFB92
0x8AFB75: mov     ecx, [eax+8]
0x8AFB78: test    ecx, ecx
0x8AFB7A: jz      short loc_8AFB86
0x8AFB7C: add     ecx, 14h
0x8AFB7F: jz      short loc_8AFB86
0x8AFB81: mov     ecx, [ecx+1Ch]
0x8AFB84: jmp     short loc_8AFB88
0x8AFB86: xor     ecx, ecx
0x8AFB88: shr     ecx, 8
0x8AFB8B: and     ecx, 1Fh
0x8AFB8E: cmp     ecx, ebp
0x8AFB90: jz      short loc_8AFBCE
0x8AFB92: mov     eax, [esi]
0x8AFB94: mov     edx, [eax+8]
0x8AFB97: push    ebx
0x8AFB98: mov     ecx, esi
0x8AFB9A: call    edx
0x8AFB9C: mov     ebx, eax
0x8AFB9E: test    ebx, ebx
0x8AFBA0: jz      short loc_8AFBCB
0x8AFBA2: xor     esi, esi
0x8AFBA4: movzx   eax, word ptr [ebx+0B6h]
0x8AFBAB: cmp     eax, esi
0x8AFBAD: jbe     short loc_8AFBCB
0x8AFBAF: mov     eax, [ebx+0B0h]
0x8AFBB5: mov     eax, [eax+esi*4]
0x8AFBB8: push    ebp
0x8AFBB9: push    eax
0x8AFBBA: call    sub_8AFB50
0x8AFBBF: mov     edi, eax
0x8AFBC1: add     esp, 8
0x8AFBC4: add     esi, 1
0x8AFBC7: test    edi, edi
0x8AFBC9: jz      short loc_8AFBA4
0x8AFBCB: pop     ebx
0x8AFBCC: mov     eax, edi
0x8AFBCE: pop     edi
0x8AFBCF: pop     esi
0x8AFBD0: pop     ebp
0x8AFBD1: retn
