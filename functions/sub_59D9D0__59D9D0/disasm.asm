0x59D9D0: push    esi
0x59D9D1: mov     esi, ecx
0x59D9D3: mov     eax, [esi]
0x59D9D5: mov     edx, [eax+34h]
0x59D9D8: push    edi
0x59D9D9: call    edx
0x59D9DB: mov     edi, eax
0x59D9DD: call    sub_578FE0
0x59D9E2: cmp     eax, edi
0x59D9E4: jnz     short loc_59DA26
0x59D9E6: mov     ecx, [esi+34h]
0x59D9E9: test    ecx, ecx
0x59D9EB: jz      short loc_59DA26
0x59D9ED: push    0FA1h
0x59D9F2: call    Tile_GetFloat
0x59D9F7: fcomp   dword ptr ds:0A379B4h
0x59D9FD: fnstsw  ax
0x59D9FF: test    ah, 44h
0x59DA02: jp      short loc_59DA26
0x59DA04: mov     eax, [esp+8+arg_0]
0x59DA08: add     eax, 0FFFFFFF7h
0x59DA0B: cmp     eax, 3
0x59DA0E: ja      short loc_59DA26
0x59DA10: mov     eax, [esi+34h]
0x59DA13: mov     edx, [esi]
0x59DA15: mov     edx, [edx+0Ch]
0x59DA18: push    eax
0x59DA19: push    4
0x59DA1B: mov     ecx, esi
0x59DA1D: call    edx
0x59DA1F: pop     edi
0x59DA20: mov     al, 1
0x59DA22: pop     esi
0x59DA23: retn    8
0x59DA26: pop     edi
0x59DA27: xor     al, al
0x59DA29: pop     esi
0x59DA2A: retn    8
