0x614D10: push    edi
0x614D11: mov     edi, [esp+4+arg_0]
0x614D15: test    edi, edi
0x614D17: jz      short loc_614D57
0x614D19: push    esi
0x614D1A: lea     ebx, [ebx+0]
0x614D20: cmp     dword ptr [edi+4], 0
0x614D24: mov     esi, [edi]
0x614D26: jnz     short loc_614D2E
0x614D28: test    esi, esi
0x614D2A: jz      short loc_614D56
0x614D2C: jmp     short loc_614D32
0x614D2E: test    esi, esi
0x614D30: jz      short loc_614D4F
0x614D32: mov     ecx, [esi+4]
0x614D35: test    ecx, ecx
0x614D37: jz      short loc_614D3E
0x614D39: call    sub_485BC0
0x614D3E: mov     eax, [esi]
0x614D40: test    eax, eax
0x614D42: jz      short loc_614D4F
0x614D44: push    eax
0x614D45: call    MagicItem_LookupByFormID
0x614D4A: add     esp, 4
0x614D4D: mov     [esi], eax
0x614D4F: mov     edi, [edi+4]
0x614D52: test    edi, edi
0x614D54: jnz     short loc_614D20
0x614D56: pop     esi
0x614D57: pop     edi
0x614D58: retn    4
