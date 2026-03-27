0x7E6A90: mov     eax, [esp+arg_4]
0x7E6A94: push    ebx
0x7E6A95: push    esi
0x7E6A96: mov     esi, [eax+9Ch]
0x7E6A9C: mov     edx, [esi+10h]
0x7E6A9F: push    edi
0x7E6AA0: movzx   edi, word ptr [esi+0Ch]
0x7E6AA4: mov     ebx, ecx
0x7E6AA6: mov     eax, [ebx+158h]
0x7E6AAC: mov     ecx, edi
0x7E6AAE: shl     ecx, 4
0x7E6AB1: push    ecx; Size
0x7E6AB2: push    edx; Src
0x7E6AB3: push    eax; Dst
0x7E6AB4: call    _memcpy
0x7E6AB9: movzx   eax, word ptr [esi+0Eh]
0x7E6ABD: mov     ecx, [esi]
0x7E6ABF: mov     ecx, [ecx+0B4h]
0x7E6AC5: movzx   edx, ax
0x7E6AC8: add     esp, 0Ch
0x7E6ACB: cmp     edx, edi
0x7E6ACD: jnz     short loc_7E6AD5
0x7E6ACF: movzx   eax, word ptr [ecx+40h]
0x7E6AD3: jmp     short loc_7E6AE3
0x7E6AD5: mov     edx, [esi+4]
0x7E6AD8: mov     dx, [edx+34h]
0x7E6ADC: imul    dx, ax
0x7E6AE0: movzx   eax, dx
0x7E6AE3: mov     edx, [ecx]
0x7E6AE5: push    eax
0x7E6AE6: mov     eax, [edx+58h]
0x7E6AE9: call    eax
0x7E6AEB: mov     ebx, [ebx+15Ch]
0x7E6AF1: test    ebx, ebx
0x7E6AF3: jz      short loc_7E6AFC
0x7E6AF5: movzx   ecx, word ptr [esi+0Eh]
0x7E6AF9: mov     [ebx+20h], ecx
0x7E6AFC: pop     edi
0x7E6AFD: pop     esi
0x7E6AFE: pop     ebx
0x7E6AFF: retn    8
