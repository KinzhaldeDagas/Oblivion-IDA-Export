0x55E000: push    ebx
0x55E001: mov     ebx, [esp+4+arg_0]
0x55E005: push    esi
0x55E006: mov     esi, ecx
0x55E008: mov     eax, [esi]
0x55E00A: mov     edx, [eax+4]
0x55E00D: push    edi
0x55E00E: push    ebx
0x55E00F: call    edx
0x55E011: mov     ecx, [esi+8]
0x55E014: mov     edi, [ecx+eax*4]
0x55E017: test    edi, edi
0x55E019: jz      short loc_55E038
0x55E01B: jmp     short loc_55E020
0x55E01D: align 10h
0x55E020: mov     eax, [edi+4]
0x55E023: mov     edx, [esi]
0x55E025: mov     edx, [edx+8]
0x55E028: push    eax
0x55E029: push    ebx
0x55E02A: mov     ecx, esi
0x55E02C: call    edx
0x55E02E: test    al, al
0x55E030: jnz     short loc_55E040
0x55E032: mov     edi, [edi]
0x55E034: test    edi, edi
0x55E036: jnz     short loc_55E020
0x55E038: pop     edi
0x55E039: pop     esi
0x55E03A: xor     al, al
0x55E03C: pop     ebx
0x55E03D: retn    8
0x55E040: mov     eax, [edi+8]
0x55E043: mov     ecx, [esp+0Ch+arg_4]
0x55E047: pop     edi
0x55E048: pop     esi
0x55E049: mov     [ecx], eax
0x55E04B: mov     al, 1
0x55E04D: pop     ebx
0x55E04E: retn    8
