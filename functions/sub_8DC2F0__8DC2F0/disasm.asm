0x8DC2F0: push    ebx
0x8DC2F1: push    esi
0x8DC2F2: mov     esi, [esp+8+arg_0]
0x8DC2F6: push    edi
0x8DC2F7: mov     edi, [esi+0C8h]
0x8DC2FD: dec     edi
0x8DC2FE: js      short loc_8DC31A
0x8DC300: mov     ebx, [esp+0Ch+arg_4]
0x8DC304: mov     eax, [esi+0C4h]
0x8DC30A: mov     ecx, [eax+edi*4]
0x8DC30D: test    ecx, ecx
0x8DC30F: jz      short loc_8DC317
0x8DC311: mov     edx, [ecx]
0x8DC313: push    ebx
0x8DC314: call    dword ptr [edx+8]
0x8DC317: dec     edi
0x8DC318: jns     short loc_8DC304
0x8DC31A: mov     edx, [esi+0C8h]
0x8DC320: dec     edx
0x8DC321: js      short loc_8DC36D
0x8DC323: mov     eax, [esi+0C4h]
0x8DC329: cmp     dword ptr [eax+edx*4], 0
0x8DC32D: jnz     short loc_8DC36A
0x8DC32F: mov     ebx, [esi+0C8h]
0x8DC335: dec     ebx
0x8DC336: mov     ecx, ebx
0x8DC338: cmp     edx, ecx
0x8DC33A: mov     [esi+0C8h], ebx
0x8DC340: mov     eax, edx
0x8DC342: jge     short loc_8DC36A
0x8DC344: jmp     short loc_8DC350
0x8DC346: align 10h
0x8DC350: mov     ecx, [esi+0C4h]
0x8DC356: mov     edi, [ecx+eax*4+4]
0x8DC35A: lea     ecx, [ecx+eax*4]
0x8DC35D: mov     [ecx], edi
0x8DC35F: mov     ecx, [esi+0C8h]
0x8DC365: inc     eax
0x8DC366: cmp     eax, ecx
0x8DC368: jl      short loc_8DC350
0x8DC36A: dec     edx
0x8DC36B: jns     short loc_8DC323
0x8DC36D: pop     edi
0x8DC36E: pop     esi
0x8DC36F: pop     ebx
0x8DC370: retn
