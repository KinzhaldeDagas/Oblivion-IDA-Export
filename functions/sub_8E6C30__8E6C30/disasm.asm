0x8E6C30: push    ebx
0x8E6C31: mov     ebx, [esp+4+arg_0]
0x8E6C35: movzx   eax, word ptr [ebx+16h]
0x8E6C39: cmp     [ebx+10h], eax
0x8E6C3C: push    esi
0x8E6C3D: mov     esi, [esp+8+arg_4]
0x8E6C41: jz      loc_8E6CE4
0x8E6C47: push    edi
0x8E6C48: jmp     short loc_8E6C50
0x8E6C4A: align 10h
0x8E6C50: mov     eax, [esi+4]
0x8E6C53: test    eax, eax
0x8E6C55: jz      loc_8E6CE3
0x8E6C5B: mov     ecx, [esi]
0x8E6C5D: movzx   edx, word ptr [esi+14h]
0x8E6C61: mov     eax, [ecx+eax*4-4]
0x8E6C65: mov     ecx, [esi+10h]
0x8E6C68: sub     eax, edx
0x8E6C6A: add     eax, ecx
0x8E6C6C: push    eax
0x8E6C6D: push    ebx
0x8E6C6E: call    sub_8E68A0
0x8E6C73: movzx   ecx, word ptr [esi+14h]
0x8E6C77: mov     eax, [esi+10h]
0x8E6C7A: add     esp, 8
0x8E6C7D: sub     eax, ecx
0x8E6C7F: mov     [esi+10h], eax
0x8E6C82: jnz     short loc_8E6CD6
0x8E6C84: mov     eax, [esi+4]
0x8E6C87: mov     edx, [esi]
0x8E6C89: mov     edi, [edx+eax*4-4]
0x8E6C8D: lea     ecx, [eax-1]
0x8E6C90: mov     eax, [esi+8]
0x8E6C93: test    eax, eax
0x8E6C95: mov     [esi+4], ecx
0x8E6C98: js      short loc_8E6CBC
0x8E6C9A: inc     ecx
0x8E6C9B: cmp     ecx, 1
0x8E6C9E: jl      short loc_8E6CAB
0x8E6CA0: and     eax, 3FFFFFFFh
0x8E6CA5: add     ecx, ecx
0x8E6CA7: cmp     ecx, eax
0x8E6CA9: jge     short loc_8E6CBC
0x8E6CAB: push    1
0x8E6CAD: lea     edx, [esi+0Ch]
0x8E6CB0: push    edx
0x8E6CB1: push    4
0x8E6CB3: push    esi
0x8E6CB4: call    sub_8A6F90
0x8E6CB9: add     esp, 10h
0x8E6CBC: movzx   edx, word ptr [esi+16h]
0x8E6CC0: mov     ecx, ds:0BA7D98h
0x8E6CC6: mov     eax, [ecx]
0x8E6CC8: push    24h ; '$'
0x8E6CCA: push    edx
0x8E6CCB: push    edi
0x8E6CCC: call    dword ptr [eax+14h]
0x8E6CCF: movzx   eax, word ptr [esi+16h]
0x8E6CD3: mov     [esi+10h], eax
0x8E6CD6: movzx   ecx, word ptr [ebx+16h]
0x8E6CDA: cmp     [ebx+10h], ecx
0x8E6CDD: jnz     loc_8E6C50
0x8E6CE3: pop     edi
0x8E6CE4: mov     eax, [esi+4]
0x8E6CE7: test    eax, eax
0x8E6CE9: jz      short loc_8E6D0B
0x8E6CEB: mov     edx, [ebx+4]
0x8E6CEE: push    esi
0x8E6CEF: push    edx
0x8E6CF0: mov     ecx, ebx
0x8E6CF2: call    sub_8E6720
0x8E6CF7: mov     eax, [esi+10h]
0x8E6CFA: mov     [ebx+10h], eax
0x8E6CFD: mov     dword ptr [esi+4], 0
0x8E6D04: movzx   ecx, word ptr [ebx+16h]
0x8E6D08: mov     [esi+10h], ecx
0x8E6D0B: pop     esi
0x8E6D0C: pop     ebx
0x8E6D0D: retn
