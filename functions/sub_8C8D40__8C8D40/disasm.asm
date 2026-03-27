0x8C8D40: push    ebx
0x8C8D41: push    esi
0x8C8D42: mov     esi, ecx
0x8C8D44: xor     ebx, ebx
0x8C8D46: cmp     [esi+0Ch], ebx
0x8C8D49: jnz     short loc_8C8D9E
0x8C8D4B: push    20h ; ' '; Size
0x8C8D4D: call    FormHeapAlloc
0x8C8D52: add     esp, 4
0x8C8D55: cmp     eax, ebx
0x8C8D57: jz      short loc_8C8D7D
0x8C8D59: mov     [eax], ebx
0x8C8D5B: fld     dword ptr ds:0B2EFC4h
0x8C8D61: fstp    dword ptr [eax+4]
0x8C8D64: mov     ecx, 80000000h
0x8C8D69: mov     [eax+8], ebx
0x8C8D6C: mov     [eax+0Ch], ebx
0x8C8D6F: mov     [eax+10h], ecx
0x8C8D72: mov     [eax+14h], ebx
0x8C8D75: mov     [eax+18h], ebx
0x8C8D78: mov     [eax+1Ch], ecx
0x8C8D7B: jmp     short loc_8C8D7F
0x8C8D7D: xor     eax, eax
0x8C8D7F: cmp     [esi+8], ebx
0x8C8D82: mov     [esi+0Ch], eax
0x8C8D85: jz      short loc_8C8D8F
0x8C8D87: push    eax
0x8C8D88: mov     ecx, esi
0x8C8D8A: call    sub_8C8C50
0x8C8D8F: mov     eax, [esp+8+arg_0]
0x8C8D93: mov     byte ptr [eax], 1
0x8C8D96: mov     eax, [esi+0Ch]
0x8C8D99: pop     esi
0x8C8D9A: pop     ebx
0x8C8D9B: retn    4
0x8C8D9E: mov     ecx, [esp+8+arg_0]
0x8C8DA2: mov     [ecx], bl
0x8C8DA4: mov     eax, [esi+0Ch]
0x8C8DA7: pop     esi
0x8C8DA8: pop     ebx
0x8C8DA9: retn    4
