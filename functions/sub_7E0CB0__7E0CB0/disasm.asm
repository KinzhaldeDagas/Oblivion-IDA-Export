0x7E0CB0: push    ebx
0x7E0CB1: push    ebp
0x7E0CB2: push    esi
0x7E0CB3: mov     esi, ecx
0x7E0CB5: mov     eax, [esi+0E0h]
0x7E0CBB: xor     ebx, ebx
0x7E0CBD: cmp     eax, ebx
0x7E0CBF: push    edi
0x7E0CC0: jz      short loc_7E0CCE
0x7E0CC2: mov     ecx, ds:0B42F50h; this
0x7E0CC8: push    eax; a2
0x7E0CC9: call    sub_7C1EE0
0x7E0CCE: mov     eax, [esi+0E4h]
0x7E0CD4: cmp     eax, ebx
0x7E0CD6: jz      short loc_7E0CE4
0x7E0CD8: mov     ecx, ds:0B42F50h; this
0x7E0CDE: push    eax; a2
0x7E0CDF: call    sub_7C1EE0
0x7E0CE4: mov     eax, [esi+0E8h]
0x7E0CEA: cmp     eax, ebx
0x7E0CEC: jz      short loc_7E0CFA
0x7E0CEE: mov     ecx, ds:0B42F50h; this
0x7E0CF4: push    eax; a2
0x7E0CF5: call    sub_7C1EE0
0x7E0CFA: mov     eax, [esi+0D8h]
0x7E0D00: cmp     eax, ebx
0x7E0D02: jz      short loc_7E0D10
0x7E0D04: mov     ecx, ds:0B42F50h; this
0x7E0D0A: push    eax; a2
0x7E0D0B: call    sub_7C1EE0
0x7E0D10: mov     eax, [esi+0DCh]
0x7E0D16: cmp     eax, ebx
0x7E0D18: jz      short loc_7E0D26
0x7E0D1A: mov     ecx, ds:0B42F50h; this
0x7E0D20: push    eax; a2
0x7E0D21: call    sub_7C1EE0
0x7E0D26: mov     eax, [esi+0F0h]
0x7E0D2C: cmp     eax, ebx
0x7E0D2E: jz      short loc_7E0D3C
0x7E0D30: mov     ecx, ds:0B42F50h; this
0x7E0D36: push    eax; a2
0x7E0D37: call    sub_7C1EE0
0x7E0D3C: mov     eax, [esi+0F4h]
0x7E0D42: cmp     eax, ebx
0x7E0D44: jz      short loc_7E0D52
0x7E0D46: mov     ecx, ds:0B42F50h; this
0x7E0D4C: push    eax; a2
0x7E0D4D: call    sub_7C1EE0
0x7E0D52: mov     edi, [esi+0E0h]
0x7E0D58: cmp     edi, ebx
0x7E0D5A: mov     ebp, ds:0A2807Ch
0x7E0D60: jz      short loc_7E0D80
0x7E0D62: lea     eax, [edi+4]
0x7E0D65: push    eax; lpAddend
0x7E0D66: call    ebp ; InterlockedDecrement
0x7E0D68: test    eax, eax
0x7E0D6A: jnz     short loc_7E0D7A
0x7E0D6C: cmp     edi, ebx
0x7E0D6E: jz      short loc_7E0D7A
0x7E0D70: mov     edx, [edi]
0x7E0D72: mov     eax, [edx]
0x7E0D74: push    1
0x7E0D76: mov     ecx, edi
0x7E0D78: call    eax
0x7E0D7A: mov     [esi+0E0h], ebx
0x7E0D80: mov     edi, [esi+0E4h]
0x7E0D86: cmp     edi, ebx
0x7E0D88: jz      short loc_7E0DA8
0x7E0D8A: lea     ecx, [edi+4]
0x7E0D8D: push    ecx; lpAddend
0x7E0D8E: call    ebp ; InterlockedDecrement
0x7E0D90: test    eax, eax
0x7E0D92: jnz     short loc_7E0DA2
0x7E0D94: cmp     edi, ebx
0x7E0D96: jz      short loc_7E0DA2
0x7E0D98: mov     edx, [edi]
0x7E0D9A: mov     eax, [edx]
0x7E0D9C: push    1
0x7E0D9E: mov     ecx, edi
0x7E0DA0: call    eax
0x7E0DA2: mov     [esi+0E4h], ebx
0x7E0DA8: mov     edi, [esi+0E8h]
0x7E0DAE: cmp     edi, ebx
0x7E0DB0: jz      short loc_7E0DD0
0x7E0DB2: lea     ecx, [edi+4]
0x7E0DB5: push    ecx; lpAddend
0x7E0DB6: call    ebp ; InterlockedDecrement
0x7E0DB8: test    eax, eax
0x7E0DBA: jnz     short loc_7E0DCA
0x7E0DBC: cmp     edi, ebx
0x7E0DBE: jz      short loc_7E0DCA
0x7E0DC0: mov     edx, [edi]
0x7E0DC2: mov     eax, [edx]
0x7E0DC4: push    1
0x7E0DC6: mov     ecx, edi
0x7E0DC8: call    eax
0x7E0DCA: mov     [esi+0E8h], ebx
0x7E0DD0: mov     edi, [esi+0D8h]
0x7E0DD6: cmp     edi, ebx
0x7E0DD8: jz      short loc_7E0DF8
0x7E0DDA: lea     ecx, [edi+4]
0x7E0DDD: push    ecx; lpAddend
0x7E0DDE: call    ebp ; InterlockedDecrement
0x7E0DE0: test    eax, eax
0x7E0DE2: jnz     short loc_7E0DF2
0x7E0DE4: cmp     edi, ebx
0x7E0DE6: jz      short loc_7E0DF2
0x7E0DE8: mov     edx, [edi]
0x7E0DEA: mov     eax, [edx]
0x7E0DEC: push    1
0x7E0DEE: mov     ecx, edi
0x7E0DF0: call    eax
0x7E0DF2: mov     [esi+0D8h], ebx
0x7E0DF8: mov     edi, [esi+0DCh]
0x7E0DFE: cmp     edi, ebx
0x7E0E00: jz      short loc_7E0E20
0x7E0E02: lea     ecx, [edi+4]
0x7E0E05: push    ecx; lpAddend
0x7E0E06: call    ebp ; InterlockedDecrement
0x7E0E08: test    eax, eax
0x7E0E0A: jnz     short loc_7E0E1A
0x7E0E0C: cmp     edi, ebx
0x7E0E0E: jz      short loc_7E0E1A
0x7E0E10: mov     edx, [edi]
0x7E0E12: mov     eax, [edx]
0x7E0E14: push    1
0x7E0E16: mov     ecx, edi
0x7E0E18: call    eax
0x7E0E1A: mov     [esi+0DCh], ebx
0x7E0E20: mov     edi, [esi+0F0h]
0x7E0E26: cmp     edi, ebx
0x7E0E28: jz      short loc_7E0E48
0x7E0E2A: lea     ecx, [edi+4]
0x7E0E2D: push    ecx; lpAddend
0x7E0E2E: call    ebp ; InterlockedDecrement
0x7E0E30: test    eax, eax
0x7E0E32: jnz     short loc_7E0E42
0x7E0E34: cmp     edi, ebx
0x7E0E36: jz      short loc_7E0E42
0x7E0E38: mov     edx, [edi]
0x7E0E3A: mov     eax, [edx]
0x7E0E3C: push    1
0x7E0E3E: mov     ecx, edi
0x7E0E40: call    eax
0x7E0E42: mov     [esi+0F0h], ebx
0x7E0E48: mov     edi, [esi+0F4h]
0x7E0E4E: cmp     edi, ebx
0x7E0E50: jz      short loc_7E0E70
0x7E0E52: lea     ecx, [edi+4]
0x7E0E55: push    ecx; lpAddend
0x7E0E56: call    ebp ; InterlockedDecrement
0x7E0E58: test    eax, eax
0x7E0E5A: jnz     short loc_7E0E6A
0x7E0E5C: cmp     edi, ebx
0x7E0E5E: jz      short loc_7E0E6A
0x7E0E60: mov     edx, [edi]
0x7E0E62: mov     eax, [edx]
0x7E0E64: push    1
0x7E0E66: mov     ecx, edi
0x7E0E68: call    eax
0x7E0E6A: mov     [esi+0F4h], ebx
0x7E0E70: mov     edi, [esi+0ECh]
0x7E0E76: cmp     edi, ebx
0x7E0E78: jz      short loc_7E0E98
0x7E0E7A: lea     ecx, [edi+4]
0x7E0E7D: push    ecx; lpAddend
0x7E0E7E: call    ebp ; InterlockedDecrement
0x7E0E80: test    eax, eax
0x7E0E82: jnz     short loc_7E0E92
0x7E0E84: cmp     edi, ebx
0x7E0E86: jz      short loc_7E0E92
0x7E0E88: mov     edx, [edi]
0x7E0E8A: mov     eax, [edx]
0x7E0E8C: push    1
0x7E0E8E: mov     ecx, edi
0x7E0E90: call    eax
0x7E0E92: mov     [esi+0ECh], ebx
0x7E0E98: pop     edi
0x7E0E99: mov     [esi+108h], bl
0x7E0E9F: pop     esi
0x7E0EA0: pop     ebp
0x7E0EA1: pop     ebx
0x7E0EA2: retn
