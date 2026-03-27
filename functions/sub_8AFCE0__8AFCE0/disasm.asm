0x8AFCE0: mov     eax, [esp+arg_0]
0x8AFCE4: mov     dl, [eax+18h]
0x8AFCE7: sub     esp, 8
0x8AFCEA: push    edi
0x8AFCEB: xor     edi, edi
0x8AFCED: cmp     dl, 1
0x8AFCF0: jnz     short loc_8AFD18
0x8AFCF2: mov     ecx, [eax+10h]
0x8AFCF5: add     ecx, eax
0x8AFCF7: jz      short loc_8AFD18
0x8AFCF9: push    offset dword_BA7B80
0x8AFCFE: lea     eax, [esp+10h+var_8]
0x8AFD02: push    eax
0x8AFD03: call    sub_47F990
0x8AFD08: mov     ecx, [eax]
0x8AFD0A: test    ecx, ecx
0x8AFD0C: jz      short loc_8AFD63
0x8AFD0E: call    sub_452A60
0x8AFD13: pop     edi
0x8AFD14: add     esp, 8
0x8AFD17: retn
0x8AFD18: cmp     dl, 2
0x8AFD1B: jnz     short loc_8AFD63
0x8AFD1D: push    esi
0x8AFD1E: mov     esi, [eax+10h]
0x8AFD21: add     esi, eax
0x8AFD23: jz      short loc_8AFD5B
0x8AFD25: push    offset dword_BA7B80
0x8AFD2A: lea     ecx, [esp+14h+var_8]
0x8AFD2E: push    ecx
0x8AFD2F: mov     ecx, esi
0x8AFD31: call    sub_47F990
0x8AFD36: mov     ecx, [eax]
0x8AFD38: test    ecx, ecx
0x8AFD3A: jz      short loc_8AFD47
0x8AFD3C: call    sub_452A60
0x8AFD41: pop     esi
0x8AFD42: pop     edi
0x8AFD43: add     esp, 8
0x8AFD46: retn
0x8AFD47: mov     ecx, [esi+0Ch]
0x8AFD4A: test    ecx, ecx
0x8AFD4C: jz      short loc_8AFD5B
0x8AFD4E: push    0
0x8AFD50: call    sub_89F6B0
0x8AFD55: pop     esi
0x8AFD56: pop     edi
0x8AFD57: add     esp, 8
0x8AFD5A: retn
0x8AFD5B: pop     esi
0x8AFD5C: mov     eax, edi
0x8AFD5E: pop     edi
0x8AFD5F: add     esp, 8
0x8AFD62: retn
0x8AFD63: mov     eax, edi
0x8AFD65: pop     edi
0x8AFD66: add     esp, 8
0x8AFD69: retn
