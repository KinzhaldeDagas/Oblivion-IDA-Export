0x4B6D50: push    edi
0x4B6D51: mov     edi, [esp+4+arg_0]
0x4B6D55: test    edi, edi
0x4B6D57: jz      short loc_4B6D8C
0x4B6D59: push    esi
0x4B6D5A: mov     ecx, edi; this
0x4B6D5C: call    GetTeleportExtraData
0x4B6D61: mov     esi, eax
0x4B6D63: test    esi, esi
0x4B6D65: jz      short loc_4B6D8B
0x4B6D67: push    edi
0x4B6D68: call    sub_67F340
0x4B6D6D: add     esp, 4
0x4B6D70: mov     ecx, esi
0x4B6D72: call    sub_42B410
0x4B6D77: test    eax, eax
0x4B6D79: jz      short loc_4B6D82
0x4B6D7B: mov     ecx, eax
0x4B6D7D: call    sub_4D76D0
0x4B6D82: pop     esi
0x4B6D83: mov     ecx, edi
0x4B6D85: pop     edi
0x4B6D86: jmp     sub_4D76D0
0x4B6D8B: pop     esi
0x4B6D8C: pop     edi
0x4B6D8D: retn
