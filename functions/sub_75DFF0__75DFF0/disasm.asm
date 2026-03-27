0x75DFF0: push    ebx
0x75DFF1: mov     ebx, [esp+4+arg_0]
0x75DFF5: push    esi
0x75DFF6: push    edi
0x75DFF7: mov     edi, ecx
0x75DFF9: mov     esi, [edi+0Ch]
0x75DFFC: cmp     esi, ebx
0x75DFFE: jz      short loc_75E031
0x75E000: test    esi, esi
0x75E002: jz      short loc_75E020
0x75E004: lea     eax, [esi+4]
0x75E007: push    eax; lpAddend
0x75E008: call    dword ptr ds:0A2807Ch
0x75E00E: test    eax, eax
0x75E010: jnz     short loc_75E020
0x75E012: test    esi, esi
0x75E014: jz      short loc_75E020
0x75E016: mov     edx, [esi]
0x75E018: mov     eax, [edx]
0x75E01A: push    1
0x75E01C: mov     ecx, esi
0x75E01E: call    eax
0x75E020: test    ebx, ebx
0x75E022: mov     [edi+0Ch], ebx
0x75E025: jz      short loc_75E031
0x75E027: add     ebx, 4
0x75E02A: push    ebx; lpAddend
0x75E02B: call    dword ptr ds:0A28078h
0x75E031: fld     [esp+0Ch+arg_4]
0x75E035: fstp    dword ptr [edi+10h]
0x75E038: pop     edi
0x75E039: pop     esi
0x75E03A: pop     ebx
0x75E03B: retn    8
