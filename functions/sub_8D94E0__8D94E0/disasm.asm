0x8D94E0: push    esi
0x8D94E1: mov     esi, [esp+4+arg_0]
0x8D94E5: mov     ecx, [esi]
0x8D94E7: cmp     byte ptr [ecx+4], 2
0x8D94EB: jnz     short loc_8D9509
0x8D94ED: movsx   eax, byte ptr [ecx+5]
0x8D94F1: mov     edx, [esi+4]
0x8D94F4: push    edi
0x8D94F5: movsx   edi, byte ptr [edx+5]
0x8D94F9: add     eax, ecx
0x8D94FB: mov     ecx, [eax+10h]
0x8D94FE: add     ecx, eax
0x8D9500: mov     eax, [ecx]
0x8D9502: add     edi, edx
0x8D9504: push    edi
0x8D9505: call    dword ptr [eax+18h]
0x8D9508: pop     edi
0x8D9509: mov     ecx, [esi+4]
0x8D950C: cmp     byte ptr [ecx+4], 2
0x8D9510: jnz     short loc_8D9530
0x8D9512: movsx   eax, byte ptr [ecx+5]
0x8D9516: mov     esi, [esi]
0x8D9518: add     eax, ecx
0x8D951A: mov     ecx, [eax+10h]
0x8D951D: mov     edx, [ecx+eax]
0x8D9520: add     ecx, eax
0x8D9522: movsx   eax, byte ptr [esi+5]
0x8D9526: add     eax, esi
0x8D9528: pop     esi
0x8D9529: mov     [esp+arg_0], eax
0x8D952D: jmp     dword ptr [edx+18h]
0x8D9530: pop     esi
0x8D9531: retn    4
