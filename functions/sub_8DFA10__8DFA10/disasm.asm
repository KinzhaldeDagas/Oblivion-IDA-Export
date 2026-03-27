0x8DFA10: mov     ecx, [ecx+8]
0x8DFA13: push    ebx
0x8DFA14: mov     ebx, [esp+4+arg_0]
0x8DFA18: mov     edx, [ebx]
0x8DFA1A: movsx   eax, byte ptr [edx+5]
0x8DFA1E: push    esi
0x8DFA1F: mov     esi, [ebx+4]
0x8DFA22: add     eax, edx
0x8DFA24: movsx   edx, byte ptr [esi+5]
0x8DFA28: add     edx, esi
0x8DFA2A: mov     esi, [eax+10h]
0x8DFA2D: push    edi
0x8DFA2E: mov     edi, [edx+10h]
0x8DFA31: add     esi, eax
0x8DFA33: add     edi, edx
0x8DFA35: cmp     byte ptr [ecx+44h], 0
0x8DFA39: jz      short loc_8DFA90
0x8DFA3B: cmp     byte ptr [esi+91h], 0
0x8DFA42: jnz     short loc_8DFA90
0x8DFA44: cmp     byte ptr [edi+91h], 0
0x8DFA4B: jnz     short loc_8DFA90
0x8DFA4D: mov     esi, [esi+54h]
0x8DFA50: cmp     esi, [edi+54h]
0x8DFA53: jz      short loc_8DFA90
0x8DFA55: mov     eax, [ecx+50h]
0x8DFA58: lea     esi, [ecx+48h]
0x8DFA5B: mov     ecx, [esi+4]
0x8DFA5E: and     eax, 3FFFFFFFh
0x8DFA63: cmp     ecx, eax
0x8DFA65: jnz     short loc_8DFA72
0x8DFA67: push    8
0x8DFA69: push    esi
0x8DFA6A: call    sub_8A6EE0
0x8DFA6F: add     esp, 8
0x8DFA72: mov     eax, [ebx]
0x8DFA74: mov     ecx, [esi+4]
0x8DFA77: mov     edx, [esi]
0x8DFA79: mov     [edx+ecx*8], eax
0x8DFA7C: mov     eax, [ebx+4]
0x8DFA7F: mov     [edx+ecx*8+4], eax
0x8DFA83: mov     eax, [esi+4]
0x8DFA86: inc     eax
0x8DFA87: pop     edi
0x8DFA88: mov     [esi+4], eax
0x8DFA8B: pop     esi
0x8DFA8C: pop     ebx
0x8DFA8D: retn    4
0x8DFA90: mov     ecx, [ecx+28h]
0x8DFA93: mov     esi, [ecx+74h]
0x8DFA96: movzx   ebx, word ptr [edx+1Ah]
0x8DFA9A: mov     edi, [esi]
0x8DFA9C: movzx   ecx, word ptr [eax+1Ah]
0x8DFAA0: add     ebx, edi
0x8DFAA2: mov     cl, [ebx+ecx*8+19D4h]
0x8DFAA9: test    cl, cl
0x8DFAAB: jz      short loc_8DFAC8
0x8DFAAD: movsx   ecx, cl
0x8DFAB0: imul    ecx, 3Ch ; '<'
0x8DFAB3: mov     cl, [ecx+edi+1A24h]
0x8DFABA: push    esi
0x8DFABB: push    edx
0x8DFABC: push    eax
0x8DFABD: mov     [esi+0Ch], cl
0x8DFAC0: call    sub_8E7850
0x8DFAC5: add     esp, 0Ch
0x8DFAC8: pop     edi
0x8DFAC9: pop     esi
0x8DFACA: pop     ebx
0x8DFACB: retn    4
