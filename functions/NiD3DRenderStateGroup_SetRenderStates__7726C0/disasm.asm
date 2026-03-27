0x7726C0: push    esi
0x7726C1: push    edi
0x7726C2: mov     edi, ecx
0x7726C4: mov     esi, [edi+8]
0x7726C7: test    esi, esi
0x7726C9: jz      short loc_7726ED
0x7726CB: jmp     short loc_7726D0
0x7726CD: align 10h
0x7726D0: mov     edx, [esi+4]
0x7726D3: mov     ecx, ds:0B427A4h
0x7726D9: mov     eax, [ecx]
0x7726DB: mov     eax, [eax+64h]
0x7726DE: push    0
0x7726E0: push    edx
0x7726E1: mov     edx, [esi]
0x7726E3: push    edx
0x7726E4: call    eax
0x7726E6: mov     esi, [esi+8]
0x7726E9: test    esi, esi
0x7726EB: jnz     short loc_7726D0
0x7726ED: mov     esi, [edi+10h]
0x7726F0: test    esi, esi
0x7726F2: jz      short loc_772711
0x7726F4: mov     eax, [esi+4]
0x7726F7: mov     ecx, ds:0B427A4h
0x7726FD: mov     edx, [ecx]
0x7726FF: mov     edx, [edx+64h]
0x772702: push    1
0x772704: push    eax
0x772705: mov     eax, [esi]
0x772707: push    eax
0x772708: call    edx
0x77270A: mov     esi, [esi+8]
0x77270D: test    esi, esi
0x77270F: jnz     short loc_7726F4
0x772711: pop     edi
0x772712: xor     eax, eax
0x772714: pop     esi
0x772715: retn
