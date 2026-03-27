0x731D80: push    esi
0x731D81: push    edi
0x731D82: mov     edi, [esp+8+arg_0]
0x731D86: test    edi, edi
0x731D88: mov     esi, ecx
0x731D8A: jz      loc_731E27
0x731D90: mov     eax, [edi]
0x731D92: mov     edx, [eax+84h]
0x731D98: mov     ecx, edi
0x731D9A: call    edx
0x731D9C: cmp     eax, 3
0x731D9F: jg      short loc_731DB3
0x731DA1: push    edi
0x731DA2: add     esi, 0Ch
0x731DA5: push    esi
0x731DA6: call    sub_731C70
0x731DAB: add     esp, 8
0x731DAE: pop     edi
0x731DAF: pop     esi
0x731DB0: retn    4
0x731DB3: mov     eax, [edi+148h]
0x731DB9: cmp     eax, 3; switch 4 cases
0x731DBC: ja      short def_731DBE
0x731DBE: jmp     ds:jpt_731DBE[eax*4]; switch jump
0x731DC5: lea     eax, [esi+10h]; jumptable 00731DBE case 0
0x731DC8: push    edi
0x731DC9: push    eax
0x731DCA: call    sub_731C70
0x731DCF: add     esp, 8
0x731DD2: jmp     short def_731DBE
0x731DD4: lea     ecx, [esi+14h]; jumptable 00731DBE case 1
0x731DD7: push    edi
0x731DD8: push    ecx
0x731DD9: call    sub_731C70
0x731DDE: add     esp, 8
0x731DE1: jmp     short def_731DBE
0x731DE3: cmp     edi, [esi+18h]; jumptable 00731DBE case 2
0x731DE6: jnz     short def_731DBE
0x731DE8: mov     dword ptr [esi+18h], 0
0x731DEF: jmp     short def_731DBE
0x731DF1: cmp     edi, [esi+1Ch]; jumptable 00731DBE case 3
0x731DF4: jnz     short def_731DBE
0x731DF6: mov     dword ptr [esi+1Ch], 0
