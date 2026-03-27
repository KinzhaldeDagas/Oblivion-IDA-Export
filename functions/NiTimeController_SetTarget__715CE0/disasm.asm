0x715CE0: push    esi
0x715CE1: push    edi
0x715CE2: mov     edi, [esp+8+arg_0]
0x715CE6: mov     esi, ecx
0x715CE8: cmp     [esi+30h], edi
0x715CEB: jz      loc_715D71
0x715CF1: push    ebx
0x715CF2: lea     ebx, [esi+4]
0x715CF5: push    ebx; lpAddend
0x715CF6: call    dword ptr ds:0A28078h
0x715CFC: mov     ecx, [esi+30h]
0x715CFF: test    ecx, ecx
0x715D01: jz      short loc_715D0F
0x715D03: cmp     dword ptr [ecx+0Ch], 0
0x715D07: jz      short loc_715D0F
0x715D09: push    esi
0x715D0A: call    sub_6FFE90
0x715D0F: test    edi, edi
0x715D11: mov     [esi+30h], edi
0x715D14: jz      short loc_715D5B
0x715D16: mov     eax, [edi+0Ch]
0x715D19: test    eax, eax
0x715D1B: jz      short loc_715D2B
0x715D1D: lea     ecx, [ecx+0]
0x715D20: cmp     eax, esi
0x715D22: jz      short loc_715D70
0x715D24: mov     eax, [eax+34h]
0x715D27: test    eax, eax
0x715D29: jnz     short loc_715D20
0x715D2B: push    esi
0x715D2C: mov     ecx, edi
0x715D2E: call    sub_6FFE60
0x715D33: mov     eax, [esi]
0x715D35: mov     edx, [eax+60h]
0x715D38: mov     ecx, esi
0x715D3A: call    edx
0x715D3C: test    al, al
0x715D3E: jz      short loc_715D5B
0x715D40: mov     eax, [esi+30h]
0x715D43: mov     eax, [eax+0B4h]
0x715D49: mov     cx, [eax+2Eh]
0x715D4D: and     cx, 0FFFh
0x715D52: or      cx, 8000h
0x715D57: mov     [eax+2Eh], cx
0x715D5B: push    ebx; lpAddend
0x715D5C: call    dword ptr ds:0A2807Ch
0x715D62: test    eax, eax
0x715D64: jnz     short loc_715D70
0x715D66: mov     edx, [esi]
0x715D68: mov     eax, [edx]
0x715D6A: push    1
0x715D6C: mov     ecx, esi
0x715D6E: call    eax
0x715D70: pop     ebx
0x715D71: pop     edi
0x715D72: pop     esi
0x715D73: retn    4
