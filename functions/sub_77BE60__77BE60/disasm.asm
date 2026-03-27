0x77BE60: mov     eax, ds:0B28E04h
0x77BE65: test    eax, eax
0x77BE67: push    esi
0x77BE68: mov     esi, [esp+4+arg_0]
0x77BE6C: jz      short loc_77BE86
0x77BE6E: mov     edi, edi
0x77BE70: cmp     esi, [eax+8]
0x77BE73: lea     ecx, [eax+8]
0x77BE76: mov     edx, eax
0x77BE78: mov     eax, [eax]
0x77BE7A: jz      short loc_77BE82
0x77BE7C: test    eax, eax
0x77BE7E: jnz     short loc_77BE70
0x77BE80: jmp     short loc_77BE86
0x77BE82: test    edx, edx
0x77BE84: jnz     short loc_77BED2
0x77BE86: mov     eax, ds:0B28E00h
0x77BE8B: mov     edx, [eax+4]
0x77BE8E: mov     ecx, offset off_B28E00
0x77BE93: call    edx
0x77BE95: mov     [eax+8], esi
0x77BE98: mov     dword ptr [eax], 0
0x77BE9E: mov     ecx, ds:0B28E08h
0x77BEA4: mov     [eax+4], ecx
0x77BEA7: mov     ecx, ds:0B28E08h
0x77BEAD: test    ecx, ecx
0x77BEAF: jz      short loc_77BEC1
0x77BEB1: mov     [ecx], eax
0x77BEB3: add     dword ptr ds:0B28E0Ch, 1
0x77BEBA: mov     ds:0B28E08h, eax
0x77BEBF: pop     esi
0x77BEC0: retn
0x77BEC1: add     dword ptr ds:0B28E0Ch, 1
0x77BEC8: mov     ds:0B28E04h, eax
0x77BECD: mov     ds:0B28E08h, eax
0x77BED2: pop     esi
0x77BED3: retn
