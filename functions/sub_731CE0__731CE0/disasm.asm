0x731CE0: push    esi
0x731CE1: mov     esi, [esp+4+arg_0]
0x731CE5: test    esi, esi
0x731CE7: push    edi
0x731CE8: mov     edi, ecx
0x731CEA: jz      short loc_731D60
0x731CEC: mov     eax, [esi]
0x731CEE: mov     edx, [eax+84h]
0x731CF4: mov     ecx, esi
0x731CF6: call    edx
0x731CF8: cmp     eax, 3
0x731CFB: jg      short loc_731D0F
0x731CFD: push    esi
0x731CFE: add     edi, 0Ch
0x731D01: push    edi
0x731D02: call    sub_731BF0
0x731D07: add     esp, 8
0x731D0A: pop     edi
0x731D0B: pop     esi
0x731D0C: retn    4
0x731D0F: mov     eax, [esi+148h]
0x731D15: cmp     eax, 3; switch 4 cases
0x731D18: ja      short def_731D1A
0x731D1A: jmp     ds:jpt_731D1A[eax*4]; switch jump
0x731D21: lea     eax, [edi+10h]; jumptable 00731D1A case 0
0x731D24: push    esi
0x731D25: push    eax
0x731D26: call    sub_731BF0
0x731D2B: add     esp, 8
0x731D2E: mov     byte ptr [edi+8], 1
0x731D32: pop     edi
0x731D33: pop     esi
0x731D34: retn    4
0x731D37: lea     ecx, [edi+14h]; jumptable 00731D1A case 1
0x731D3A: push    esi
0x731D3B: push    ecx
0x731D3C: call    sub_731BF0
0x731D41: add     esp, 8
0x731D44: mov     byte ptr [edi+8], 1
0x731D48: pop     edi
0x731D49: pop     esi
0x731D4A: retn    4
0x731D4D: mov     [edi+18h], esi; jumptable 00731D1A case 2
0x731D50: mov     byte ptr [edi+8], 1
0x731D54: pop     edi
0x731D55: pop     esi
0x731D56: retn    4
0x731D59: mov     [edi+1Ch], esi; jumptable 00731D1A case 3
