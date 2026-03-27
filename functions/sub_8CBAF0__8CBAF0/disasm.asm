0x8CBAF0: push    ebx
0x8CBAF1: push    ebp
0x8CBAF2: mov     ebp, [esp+8+arg_0]
0x8CBAF6: mov     eax, [ebp+4Ch]
0x8CBAF9: mov     ecx, [ebp+48h]
0x8CBAFC: push    esi
0x8CBAFD: push    edi
0x8CBAFE: lea     edi, [ebp+44h]
0x8CBB01: and     eax, 3FFFFFFFh
0x8CBB06: cmp     ecx, eax
0x8CBB08: jnz     short loc_8CBB15
0x8CBB0A: push    4
0x8CBB0C: push    edi
0x8CBB0D: call    sub_8A6EE0
0x8CBB12: add     esp, 8
0x8CBB15: mov     ecx, [edi+4]
0x8CBB18: mov     edx, [edi]
0x8CBB1A: mov     esi, [esp+10h+arg_4]
0x8CBB1E: mov     [edx+ecx*4], esi
0x8CBB21: inc     dword ptr [edi+4]
0x8CBB24: mov     eax, [ebp+38h]
0x8CBB27: mov     ecx, [ebp+3Ch]
0x8CBB2A: mov     ecx, [eax+ecx*4-4]
0x8CBB2E: movzx   edx, word ptr [esi+20h]
0x8CBB32: mov     [eax+edx*4], ecx
0x8CBB35: mov     ax, [esi+20h]
0x8CBB39: mov     ecx, [ebp+38h]
0x8CBB3C: movzx   edx, ax
0x8CBB3F: mov     edx, [ecx+edx*4]
0x8CBB42: mov     [edx+20h], ax
0x8CBB46: dec     dword ptr [ebp+3Ch]
0x8CBB49: mov     ax, [ebp+48h]
0x8CBB4D: dec     ax
0x8CBB4F: mov     [esi+20h], ax
0x8CBB53: xor     ebx, ebx
0x8CBB55: mov     [esi+29h], bl
0x8CBB58: cmp     [esi+38h], ebx
0x8CBB5B: mov     ecx, [ebp+160h]
0x8CBB61: mov     [esi+68h], ecx
0x8CBB64: jle     short loc_8CBBA1
0x8CBB66: mov     edx, [esi+34h]
0x8CBB69: mov     edi, [edx+ebx*4]
0x8CBB6C: mov     eax, [edi+50h]
0x8CBB6F: mov     ecx, [esi+68h]
0x8CBB72: add     eax, 10h
0x8CBB75: push    eax; int
0x8CBB76: push    ecx; float
0x8CBB77: call    sub_8DD750
0x8CBB7C: mov     ecx, [edi+50h]
0x8CBB7F: mov     edx, [ecx]
0x8CBB81: add     esp, 8
0x8CBB84: push    offset stru_BA7A40
0x8CBB89: call    dword ptr [edx+54h]
0x8CBB8C: mov     ecx, [edi+50h]
0x8CBB8F: mov     eax, [ecx]
0x8CBB91: push    offset stru_BA7A40
0x8CBB96: call    dword ptr [eax+58h]
0x8CBB99: mov     eax, [esi+38h]
0x8CBB9C: inc     ebx
0x8CBB9D: cmp     ebx, eax
0x8CBB9F: jl      short loc_8CBB66
0x8CBBA1: push    esi
0x8CBBA2: push    ebp
0x8CBBA3: call    sub_8DCC10
0x8CBBA8: add     esp, 8
0x8CBBAB: pop     edi
0x8CBBAC: pop     esi
0x8CBBAD: pop     ebp
0x8CBBAE: pop     ebx
0x8CBBAF: retn
