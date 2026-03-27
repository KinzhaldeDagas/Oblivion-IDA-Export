0x954D20: push    ebx
0x954D21: push    ebp
0x954D22: mov     ebp, [esp+8+arg_0]
0x954D26: push    esi
0x954D27: mov     ebx, ecx
0x954D29: push    edi
0x954D2A: mov     ecx, 12h
0x954D2F: mov     esi, ebp
0x954D31: mov     edi, ebx
0x954D33: rep movsd
0x954D35: mov     esi, [esp+10h+arg_4]
0x954D39: push    esi
0x954D3A: mov     ecx, ebx
0x954D3C: call    sub_954710
0x954D41: mov     eax, [esp+10h+arg_8]
0x954D45: push    eax
0x954D46: push    esi
0x954D47: mov     ecx, ebx
0x954D49: call    sub_954C10
0x954D4E: mov     ecx, [ebp+0]
0x954D51: inc     ecx
0x954D52: mov     [ebx], ecx
0x954D54: mov     ecx, ebx
0x954D56: mov     byte ptr [ebx+4], 0
0x954D5A: call    sub_954CA0
0x954D5F: pop     edi
0x954D60: pop     esi
0x954D61: pop     ebp
0x954D62: mov     eax, ebx
0x954D64: pop     ebx
0x954D65: retn    0Ch
