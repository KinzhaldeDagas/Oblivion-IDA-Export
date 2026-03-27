0x77E0A0: push    esi
0x77E0A1: push    edi
0x77E0A2: push    18h; Size
0x77E0A4: call    FormHeapAlloc
0x77E0A9: mov     esi, eax
0x77E0AB: xor     edi, edi
0x77E0AD: add     esp, 4
0x77E0B0: cmp     esi, edi
0x77E0B2: jz      short loc_77E107
0x77E0B4: mov     eax, [esp+8+arg_0]
0x77E0B8: test    al, 0Fh
0x77E0BA: mov     [esi], edi
0x77E0BC: mov     [esi+4], edi
0x77E0BF: mov     [esi+8], edi
0x77E0C2: mov     [esi+0Ch], edi
0x77E0C5: mov     [esi+10h], edi
0x77E0C8: jz      short loc_77E0D0
0x77E0CA: and     eax, 0FFFFFFF0h
0x77E0CD: add     eax, 20h ; ' '
0x77E0D0: mov     [esi+8], eax
0x77E0D3: mov     eax, [esi+0Ch]
0x77E0D6: cmp     eax, edi
0x77E0D8: jz      short loc_77E0E2
0x77E0DA: mov     ecx, [eax]
0x77E0DC: mov     edx, [ecx+8]
0x77E0DF: push    eax
0x77E0E0: call    edx
0x77E0E2: mov     eax, [esp+8+arg_4]
0x77E0E6: cmp     eax, edi
0x77E0E8: jz      short loc_77E10C
0x77E0EA: mov     [esi+0Ch], eax
0x77E0ED: mov     ecx, [eax]
0x77E0EF: mov     edx, [ecx+4]
0x77E0F2: push    eax
0x77E0F3: call    edx
0x77E0F5: mov     eax, [esp+8+arg_8]
0x77E0F9: mov     ecx, [esp+8+arg_C]
0x77E0FD: mov     [esi+4], eax
0x77E100: pop     edi
0x77E101: mov     [esi], ecx
0x77E103: mov     eax, esi
0x77E105: pop     esi
0x77E106: retn
0x77E107: pop     edi
0x77E108: xor     eax, eax
0x77E10A: pop     esi
0x77E10B: retn
0x77E10C: mov     eax, [esp+8+arg_8]
0x77E110: mov     ecx, [esp+8+arg_C]
0x77E114: mov     [esi+0Ch], edi
0x77E117: mov     [esi+4], eax
0x77E11A: pop     edi
0x77E11B: mov     [esi], ecx
0x77E11D: mov     eax, esi
0x77E11F: pop     esi
0x77E120: retn
