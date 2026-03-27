0x412D30: push    ebx
0x412D31: mov     ebx, [esp+4+arg_0]
0x412D35: push    ebp
0x412D36: push    esi
0x412D37: mov     esi, ecx
0x412D39: mov     eax, [esi]
0x412D3B: mov     edx, [eax+4]
0x412D3E: push    edi
0x412D3F: push    ebx
0x412D40: call    edx
0x412D42: mov     ebp, eax
0x412D44: mov     eax, [esi+8]
0x412D47: mov     edi, [eax+ebp*4]
0x412D4A: test    edi, edi
0x412D4C: jz      short loc_412D68
0x412D4E: mov     edi, edi
0x412D50: mov     eax, [edi+4]
0x412D53: mov     edx, [esi]
0x412D55: mov     edx, [edx+8]
0x412D58: push    eax
0x412D59: push    ebx
0x412D5A: mov     ecx, esi
0x412D5C: call    edx
0x412D5E: test    al, al
0x412D60: jnz     short loc_412D9C
0x412D62: mov     edi, [edi]
0x412D64: test    edi, edi
0x412D66: jnz     short loc_412D50
0x412D68: mov     edx, [esi]
0x412D6A: mov     eax, [edx+14h]
0x412D6D: mov     ecx, esi
0x412D6F: call    eax
0x412D71: mov     edx, [esi]
0x412D73: mov     edx, [edx+0Ch]
0x412D76: mov     edi, eax
0x412D78: mov     eax, [esp+10h+arg_4]
0x412D7C: push    eax
0x412D7D: push    ebx
0x412D7E: push    edi
0x412D7F: mov     ecx, esi
0x412D81: call    edx
0x412D83: mov     eax, [esi+8]
0x412D86: mov     ecx, [eax+ebp*4]
0x412D89: mov     [edi], ecx
0x412D8B: mov     edx, [esi+8]
0x412D8E: mov     [edx+ebp*4], edi
0x412D91: add     dword ptr [esi+0Ch], 1
0x412D95: pop     edi
0x412D96: pop     esi
0x412D97: pop     ebp
0x412D98: pop     ebx
0x412D99: retn    8
0x412D9C: cmp     byte ptr [esi+10h], 0
0x412DA0: jnz     short loc_412DA5
0x412DA2: mov     [edi+4], ebx
0x412DA5: mov     eax, [esp+10h+arg_4]
0x412DA9: mov     [edi+8], eax
0x412DAC: pop     edi
0x412DAD: pop     esi
0x412DAE: pop     ebp
0x412DAF: pop     ebx
0x412DB0: retn    8
