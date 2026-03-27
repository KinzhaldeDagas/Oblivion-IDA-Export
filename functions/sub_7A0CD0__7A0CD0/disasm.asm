0x7A0CD0: push    edi
0x7A0CD1: mov     edi, [esp+4+arg_0]
0x7A0CD5: cmp     edi, [esp+4+arg_4]
0x7A0CD9: jz      short loc_7A0D31
0x7A0CDB: push    ebx
0x7A0CDC: push    ebp
0x7A0CDD: push    esi
0x7A0CDE: xor     ebx, ebx
0x7A0CE0: mov     esi, [edi+4]
0x7A0CE3: cmp     esi, ebx
0x7A0CE5: jz      short loc_7A0D1C
0x7A0CE7: mov     ebp, [edi+8]
0x7A0CEA: cmp     esi, ebp
0x7A0CEC: jz      short loc_7A0D10
0x7A0CEE: mov     edi, edi
0x7A0CF0: mov     eax, [esi+4]
0x7A0CF3: cmp     eax, ebx
0x7A0CF5: jz      short loc_7A0D00
0x7A0CF7: push    eax
0x7A0CF8: call    FormHeapFree
0x7A0CFD: add     esp, 4
0x7A0D00: mov     [esi+4], ebx
0x7A0D03: mov     [esi+8], ebx
0x7A0D06: mov     [esi+0Ch], ebx
0x7A0D09: add     esi, 30h ; '0'
0x7A0D0C: cmp     esi, ebp
0x7A0D0E: jnz     short loc_7A0CF0
0x7A0D10: mov     eax, [edi+4]
0x7A0D13: push    eax
0x7A0D14: call    FormHeapFree
0x7A0D19: add     esp, 4
0x7A0D1C: mov     [edi+4], ebx
0x7A0D1F: mov     [edi+8], ebx
0x7A0D22: mov     [edi+0Ch], ebx
0x7A0D25: add     edi, 10h
0x7A0D28: cmp     edi, [esp+10h+arg_4]
0x7A0D2C: jnz     short loc_7A0CE0
0x7A0D2E: pop     esi
0x7A0D2F: pop     ebp
0x7A0D30: pop     ebx
0x7A0D31: pop     edi
0x7A0D32: retn
