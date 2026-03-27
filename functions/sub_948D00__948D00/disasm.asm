0x948D00: mov     eax, ds:0BA9DE4h
0x948D05: push    esi
0x948D06: mov     esi, ecx
0x948D08: mov     ecx, large fs:2Ch
0x948D0F: mov     edx, [ecx+eax*4]
0x948D12: mov     word ptr [esi+6], 1
0x948D18: mov     dword ptr [esi+8], offset off_AA2B5C
0x948D1F: mov     dword ptr [esi], offset off_AA2B8C
0x948D25: mov     dword ptr [esi+8], offset off_AA2B74
0x948D2C: mov     eax, [edx+19Ch]
0x948D32: test    eax, eax
0x948D34: push    edi
0x948D35: lea     edi, [esi+0Ch]
0x948D38: jnz     short loc_948D3F
0x948D3A: mov     eax, ds:0BA7D9Ch
0x948D3F: push    ebx
0x948D40: mov     ebx, [esp+0Ch+arg_0]
0x948D44: push    14h
0x948D46: push    ebx
0x948D47: mov     ecx, eax
0x948D49: call    sub_8A7560
0x948D4E: lea     ecx, [esi+18h]
0x948D51: mov     [edi], eax
0x948D53: mov     [edi+4], ebx
0x948D56: mov     [edi+8], ebx
0x948D59: call    sub_8B0E10
0x948D5E: mov     eax, [edi+8]
0x948D61: and     eax, 3FFFFFFFh
0x948D66: pop     ebx
0x948D67: jge     short loc_948D81
0x948D69: add     eax, eax
0x948D6B: xor     ecx, ecx
0x948D6D: test    eax, eax
0x948D6F: setle   cl
0x948D72: push    1
0x948D74: dec     ecx
0x948D75: and     eax, ecx
0x948D77: push    eax
0x948D78: push    edi
0x948D79: call    sub_8A6E40
0x948D7E: add     esp, 0Ch
0x948D81: mov     dword ptr [edi+4], 0
0x948D88: pop     edi
0x948D89: mov     eax, esi
0x948D8B: pop     esi
0x948D8C: retn    4
