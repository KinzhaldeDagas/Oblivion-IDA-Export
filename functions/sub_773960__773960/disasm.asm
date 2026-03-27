0x773960: mov     eax, [esp+arg_0]
0x773964: mov     edx, [eax]
0x773966: cmp     edx, 6
0x773969: push    esi
0x77396A: mov     esi, [eax+4]
0x77396D: jnz     short loc_773974
0x77396F: mov     edx, 2
0x773974: cmp     esi, 3
0x773977: jnz     short loc_77397B
0x773979: xor     esi, esi
0x77397B: test    edx, edx
0x77397D: mov     ecx, [esp+4+arg_4]
0x773981: jz      short loc_773988
0x773983: cmp     edx, 5
0x773986: jnz     short loc_773995
0x773988: test    esi, esi
0x77398A: jnz     short loc_773995
0x77398C: mov     eax, [ecx+18h]
0x77398F: test    eax, eax
0x773991: jz      short loc_7739B3
0x773993: pop     esi
0x773994: retn
0x773995: test    edx, edx
0x773997: jz      short loc_77399E
0x773999: cmp     edx, 5
0x77399C: jnz     short loc_7739B3
0x77399E: cmp     esi, 1
0x7739A1: jz      short loc_7739A8
0x7739A3: cmp     esi, 2
0x7739A6: jnz     short loc_7739B3
0x7739A8: mov     eax, [ecx+1Ch]
0x7739AB: test    eax, eax
0x7739AD: jnz     loc_773B63
0x7739B3: cmp     edx, 0Dh; switch 14 cases
0x7739B6: ja      def_7739BC; jumptable 007739BC default case, case 6
0x7739BC: jmp     ds:jpt_7739BC[edx*4]; switch jump
0x7739C3: test    esi, esi; jumptable 007739BC cases 0,3,5
0x7739C5: jl      short loc_7739E5; jumptable 007739BC case 1
0x7739C7: cmp     esi, 1
0x7739CA: jle     short loc_7739DA
0x7739CC: cmp     esi, 2
0x7739CF: jnz     short loc_7739E5; jumptable 007739BC case 1
0x7739D1: mov     eax, [ecx+24h]
0x7739D4: test    eax, eax
0x7739D6: jz      short loc_7739E5; jumptable 007739BC case 1
0x7739D8: pop     esi
0x7739D9: retn
0x7739DA: mov     eax, [ecx+20h]
0x7739DD: test    eax, eax
0x7739DF: jnz     loc_773B63
0x7739E5: mov     eax, esi; jumptable 007739BC case 1
0x7739E7: sub     eax, 0
0x7739EA: jz      loc_773A8E
0x7739F0: sub     eax, 1
0x7739F3: jz      loc_773AD4
0x7739F9: sub     eax, 1
0x7739FC: jnz     def_7739BC; jumptable 007739BC default case, case 6
0x773A02: jmp     loc_773ADF
0x773A07: mov     eax, [ecx+34h]; jumptable 007739BC case 4
0x773A0A: test    eax, eax
0x773A0C: jnz     loc_773B63
0x773A12: test    esi, esi
0x773A14: jnz     short loc_773A2A
0x773A16: mov     eax, [ecx+2Ch]
0x773A19: test    eax, eax
0x773A1B: jnz     loc_773B63
0x773A21: mov     eax, [ecx+30h]
0x773A24: test    eax, eax
0x773A26: jz      short loc_773A40; jumptable 007739BC case 2
0x773A28: pop     esi
0x773A29: retn
0x773A2A: mov     eax, [ecx+30h]
0x773A2D: test    eax, eax
0x773A2F: jnz     loc_773B63
0x773A35: mov     eax, [ecx+2Ch]
0x773A38: test    eax, eax
0x773A3A: jnz     loc_773B63
0x773A40: mov     eax, esi; jumptable 007739BC case 2
0x773A42: sub     eax, 0
0x773A45: jz      short loc_773A5A
0x773A47: sub     eax, 1
0x773A4A: jz      short loc_773AAE
0x773A4C: sub     eax, 1
0x773A4F: jnz     def_7739BC; jumptable 007739BC default case, case 6
0x773A55: mov     eax, [ecx+14h]
0x773A58: jmp     short loc_773ABC
0x773A5A: mov     eax, [ecx+8]
0x773A5D: test    eax, eax
0x773A5F: jnz     loc_773B63
0x773A65: mov     eax, [ecx+14h]
0x773A68: test    eax, eax
0x773A6A: jnz     loc_773B63
0x773A70: mov     eax, [ecx+4]
0x773A73: test    eax, eax
0x773A75: jnz     loc_773B63
0x773A7B: mov     eax, [ecx]
0x773A7D: jmp     short loc_773AB1
0x773A7F: test    esi, esi; jumptable 007739BC case 7
0x773A81: jnz     short loc_773AC9
0x773A83: mov     eax, [ecx+38h]
0x773A86: test    eax, eax
0x773A88: jnz     loc_773B63
0x773A8E: mov     eax, [ecx+4]
0x773A91: test    eax, eax
0x773A93: jnz     loc_773B63
0x773A99: mov     eax, [ecx]
0x773A9B: test    eax, eax
0x773A9D: jnz     loc_773B63
0x773AA3: mov     eax, [ecx+8]
0x773AA6: test    eax, eax
0x773AA8: jnz     loc_773B63
0x773AAE: mov     eax, [ecx+14h]
0x773AB1: test    eax, eax
0x773AB3: jnz     loc_773B63
0x773AB9: mov     eax, [ecx+0Ch]
0x773ABC: test    eax, eax
0x773ABE: jnz     loc_773B63
0x773AC4: mov     eax, [ecx+10h]
0x773AC7: jmp     short loc_773AE9
0x773AC9: mov     eax, [ecx+3Ch]
0x773ACC: test    eax, eax
0x773ACE: jnz     loc_773B63
0x773AD4: mov     eax, [ecx+0Ch]
0x773AD7: test    eax, eax
0x773AD9: jnz     loc_773B63
0x773ADF: mov     eax, [ecx+10h]
0x773AE2: test    eax, eax
0x773AE4: jnz     short loc_773B63
0x773AE6: mov     eax, [ecx+14h]
0x773AE9: test    eax, eax
0x773AEB: jz      short def_7739BC; jumptable 007739BC default case, case 6
0x773AED: pop     esi
0x773AEE: retn
0x773AEF: mov     eax, [ecx+40h]; jumptable 007739BC case 8
0x773AF2: test    eax, eax
0x773AF4: jnz     short loc_773B63
0x773AF6: mov     eax, [ecx+4Ch]
0x773AF9: test    eax, eax
0x773AFB: jnz     short loc_773B63
0x773AFD: mov     eax, [ecx+44h]; jumptable 007739BC case 10
0x773B00: test    eax, eax
0x773B02: jnz     short loc_773B63
0x773B04: mov     eax, [ecx+50h]
0x773B07: test    eax, eax
0x773B09: jnz     short loc_773B63
0x773B0B: mov     eax, [ecx+48h]; jumptable 007739BC case 12
0x773B0E: test    eax, eax
0x773B10: jnz     short loc_773B63
0x773B12: mov     eax, [ecx+54h]
0x773B15: test    eax, eax
0x773B17: jz      short def_7739BC; jumptable 007739BC default case, case 6
0x773B19: pop     esi
0x773B1A: retn
0x773B1B: mov     eax, [ecx+4Ch]; jumptable 007739BC case 9
0x773B1E: test    eax, eax
0x773B20: jnz     short loc_773B63
0x773B22: mov     eax, [ecx+50h]
0x773B25: test    eax, eax
0x773B27: jnz     short loc_773B63
0x773B29: mov     eax, [ecx+54h]
0x773B2C: test    eax, eax
0x773B2E: jnz     short loc_773B63
0x773B30: mov     eax, [ecx+40h]
0x773B33: test    eax, eax
0x773B35: jnz     short loc_773B63
0x773B37: mov     eax, [ecx+44h]
0x773B3A: test    eax, eax
0x773B3C: jnz     short loc_773B63
0x773B3E: mov     eax, [ecx+48h]
0x773B41: test    eax, eax
0x773B43: jz      short def_7739BC; jumptable 007739BC default case, case 6
0x773B45: pop     esi
0x773B46: retn
0x773B47: mov     eax, [ecx+50h]; jumptable 007739BC case 11
0x773B4A: test    eax, eax
0x773B4C: jnz     short loc_773B63
0x773B4E: mov     eax, [ecx+54h]
0x773B51: jmp     short loc_773B33
0x773B53: mov     eax, [ecx+54h]; jumptable 007739BC case 13
0x773B56: test    eax, eax
0x773B58: jnz     short loc_773B63
0x773B5A: mov     eax, [ecx+48h]
0x773B5D: test    eax, eax
0x773B5F: jnz     short loc_773B63
0x773B61: xor     eax, eax; jumptable 007739BC default case, case 6
0x773B63: pop     esi
0x773B64: retn
