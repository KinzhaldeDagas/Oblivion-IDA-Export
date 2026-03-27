0x8A0C80: push    ecx
0x8A0C81: push    esi
0x8A0C82: push    edi
0x8A0C83: mov     edi, [esp+0Ch+arg_0]
0x8A0C87: mov     eax, [edi+220h]
0x8A0C8D: push    1
0x8A0C8F: mov     esi, ecx
0x8A0C91: lea     ecx, [esp+10h+arg_0]
0x8A0C95: push    ecx
0x8A0C96: push    4
0x8A0C98: lea     edx, [esp+18h+var_4]
0x8A0C9C: push    edx
0x8A0C9D: mov     [esp+1Ch+var_4], 2
0x8A0CA5: push    eax
0x8A0CA6: mov     eax, [eax+8]
0x8A0CA9: mov     [esp+20h+arg_0], 4
0x8A0CB1: call    eax
0x8A0CB3: mov     eax, [esi+0Ch]
0x8A0CB6: add     esp, 14h
0x8A0CB9: test    eax, eax
0x8A0CBB: jz      short loc_8A0CC2
0x8A0CBD: mov     eax, [eax+0Ch]
0x8A0CC0: jmp     short loc_8A0CC4
0x8A0CC2: xor     eax, eax
0x8A0CC4: mov     edx, [edi]
0x8A0CC6: push    eax
0x8A0CC7: mov     eax, [edx+2Ch]
0x8A0CCA: mov     ecx, edi
0x8A0CCC: call    eax
0x8A0CCE: mov     eax, [esi+10h]
0x8A0CD1: test    eax, eax
0x8A0CD3: jz      short loc_8A0CDA
0x8A0CD5: mov     eax, [eax+0Ch]
0x8A0CD8: jmp     short loc_8A0CDC
0x8A0CDA: xor     eax, eax
0x8A0CDC: mov     edx, [edi]
0x8A0CDE: push    eax
0x8A0CDF: mov     eax, [edx+2Ch]
0x8A0CE2: mov     ecx, edi
0x8A0CE4: call    eax
0x8A0CE6: mov     edx, [esi]
0x8A0CE8: mov     eax, [edx+10h]
0x8A0CEB: mov     ecx, esi
0x8A0CED: call    eax
0x8A0CEF: mov     edi, [edi+220h]
0x8A0CF5: mov     edx, [edi+8]
0x8A0CF8: push    1
0x8A0CFA: lea     ecx, [esp+10h+arg_0]
0x8A0CFE: push    ecx
0x8A0CFF: push    4
0x8A0D01: add     esi, 8
0x8A0D04: push    esi
0x8A0D05: push    edi
0x8A0D06: mov     [esp+20h+arg_0], 4
0x8A0D0E: call    edx
0x8A0D10: add     esp, 14h
0x8A0D13: pop     edi
0x8A0D14: pop     esi
0x8A0D15: pop     ecx
0x8A0D16: retn    4
