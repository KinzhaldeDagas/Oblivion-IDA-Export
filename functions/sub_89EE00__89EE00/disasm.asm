0x89EE00: push    ebp
0x89EE01: mov     ebp, esp
0x89EE03: and     esp, 0FFFFFFF0h
0x89EE06: sub     esp, 18h
0x89EE09: push    esi
0x89EE0A: mov     esi, [ecx+10h]
0x89EE0D: test    esi, esi
0x89EE0F: push    edi
0x89EE10: jz      loc_89EEE4
0x89EE16: mov     edi, [esi+8]
0x89EE19: test    edi, edi
0x89EE1B: jz      short loc_89EE27
0x89EE1D: mov     eax, [edi+50h]
0x89EE20: add     eax, 0D0h ; 'Ð'
0x89EE25: jmp     short loc_89EE2C
0x89EE27: mov     eax, offset stru_BA7A40
0x89EE2C: movaps  xmm1, xmmword ptr [eax]
0x89EE2F: movss   xmm0, dword ptr ds:0A37080h
0x89EE37: subps   xmm1, xmmword ptr ds:0BA7A40h
0x89EE3E: andps   xmm1, xmmword ptr ds:0A372D0h
0x89EE45: shufps  xmm0, xmm0, 0
0x89EE49: movaps  xmm2, xmm0
0x89EE4C: cmpltps xmm2, xmm1
0x89EE50: movmskps eax, xmm2
0x89EE53: test    al, 7
0x89EE55: movaps  [esp+20h+var_10], xmm0
0x89EE5A: jz      short loc_89EE89
0x89EE5C: test    edi, edi
0x89EE5E: jz      short loc_89EE89
0x89EE60: mov     ecx, esi
0x89EE62: call    sub_89F570
0x89EE67: mov     ecx, edi
0x89EE69: call    sub_8A6410
0x89EE6E: mov     ecx, [edi+50h]
0x89EE71: mov     edx, [ecx]
0x89EE73: mov     eax, [edx+54h]
0x89EE76: push    offset stru_BA7A40
0x89EE7B: call    eax
0x89EE7D: mov     ecx, esi
0x89EE7F: call    sub_89F570
0x89EE84: movaps  xmm0, [esp+20h+var_10]
0x89EE89: mov     edi, [esi+8]
0x89EE8C: test    edi, edi
0x89EE8E: jz      short loc_89EE9A
0x89EE90: mov     eax, [edi+50h]
0x89EE93: add     eax, 0E0h ; 'à'
0x89EE98: jmp     short loc_89EE9F
0x89EE9A: mov     eax, offset stru_BA7A40
0x89EE9F: movaps  xmm1, xmmword ptr [eax]
0x89EEA2: subps   xmm1, xmmword ptr ds:0BA7A40h
0x89EEA9: andps   xmm1, xmmword ptr ds:0A372D0h
0x89EEB0: cmpltps xmm0, xmm1
0x89EEB4: movmskps ecx, xmm0
0x89EEB7: test    cl, 7
0x89EEBA: jz      short loc_89EEE4
0x89EEBC: test    edi, edi
0x89EEBE: jz      short loc_89EEE4
0x89EEC0: mov     ecx, esi
0x89EEC2: call    sub_89F570
0x89EEC7: mov     ecx, edi
0x89EEC9: call    sub_8A6410
0x89EECE: mov     ecx, [edi+50h]
0x89EED1: mov     edx, [ecx]
0x89EED3: mov     eax, [edx+58h]
0x89EED6: push    offset stru_BA7A40
0x89EEDB: call    eax
0x89EEDD: mov     ecx, esi
0x89EEDF: call    sub_89F570
0x89EEE4: pop     edi
0x89EEE5: pop     esi
0x89EEE6: mov     esp, ebp
0x89EEE8: pop     ebp
0x89EEE9: retn
