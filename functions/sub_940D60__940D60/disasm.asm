0x940D60: mov     eax, [esp+arg_8]
0x940D64: push    esi
0x940D65: mov     esi, ecx
0x940D67: mov     ecx, ds:0BA94BCh
0x940D6D: mov     edx, [ecx]
0x940D6F: push    edi
0x940D70: mov     edi, [esi]
0x940D72: push    eax
0x940D73: call    dword ptr [edx+10h]
0x940D76: mov     ecx, [esp+8+arg_4]
0x940D7A: push    eax
0x940D7B: mov     eax, [esp+0Ch+arg_8]
0x940D7F: push    eax
0x940D80: push    ecx
0x940D81: mov     ecx, esi
0x940D83: call    dword ptr [edi+8]
0x940D86: pop     edi
0x940D87: pop     esi
0x940D88: retn    0Ch
