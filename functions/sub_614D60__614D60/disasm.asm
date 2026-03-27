0x614D60: push    esi
0x614D61: mov     esi, [esp+4+arg_4]
0x614D65: push    edi
0x614D66: xor     edi, edi
0x614D68: test    esi, esi
0x614D6A: jz      short loc_614D9F
0x614D6C: push    ebx
0x614D6D: mov     ebx, [esp+0Ch+arg_0]
0x614D71: cmp     dword ptr [esi+4], 0
0x614D75: jnz     short loc_614D7C
0x614D77: cmp     dword ptr [esi], 0
0x614D7A: jz      short loc_614D9E
0x614D7C: test    edi, edi
0x614D7E: jnz     short loc_614D9E
0x614D80: mov     eax, [esi]
0x614D82: test    eax, eax
0x614D84: jz      short loc_614D97
0x614D86: cmp     [eax], edi
0x614D88: jz      short loc_614D97
0x614D8A: mov     ecx, [eax]; int
0x614D8C: call    MagicItem_GetFormID
0x614D91: cmp     eax, ebx
0x614D93: jnz     short loc_614D97
0x614D95: mov     edi, [esi]
0x614D97: mov     esi, [esi+4]
0x614D9A: test    esi, esi
0x614D9C: jnz     short loc_614D71
0x614D9E: pop     ebx
0x614D9F: mov     eax, edi
0x614DA1: pop     edi
0x614DA2: pop     esi
0x614DA3: retn    8
