0x8B9D60: push    ebx
0x8B9D61: push    esi
0x8B9D62: push    edi
0x8B9D63: mov     esi, ecx
0x8B9D65: xor     edi, edi
0x8B9D67: cmp     [esi+90h], edi
0x8B9D6D: jle     short loc_8B9D8C
0x8B9D6F: lea     ebx, [esi+8]
0x8B9D72: mov     eax, [esi+8Ch]
0x8B9D78: mov     ecx, [eax+edi*4]
0x8B9D7B: push    ebx
0x8B9D7C: call    sub_8A6300
0x8B9D81: add     edi, 1
0x8B9D84: cmp     edi, [esi+90h]
0x8B9D8A: jl      short loc_8B9D72
0x8B9D8C: xor     edi, edi
0x8B9D8E: cmp     [esi+9Ch], edi
0x8B9D94: mov     dword ptr [esi+90h], 0
0x8B9D9E: jle     short loc_8B9DBD
0x8B9DA0: lea     ebx, [esi+0Ch]
0x8B9DA3: mov     ecx, [esi+98h]
0x8B9DA9: mov     ecx, [ecx+edi*4]
0x8B9DAC: push    ebx
0x8B9DAD: call    sub_8DE670
0x8B9DB2: add     edi, 1
0x8B9DB5: cmp     edi, [esi+9Ch]
0x8B9DBB: jl      short loc_8B9DA3
0x8B9DBD: pop     edi
0x8B9DBE: mov     dword ptr [esi+9Ch], 0
0x8B9DC8: pop     esi
0x8B9DC9: pop     ebx
0x8B9DCA: retn
