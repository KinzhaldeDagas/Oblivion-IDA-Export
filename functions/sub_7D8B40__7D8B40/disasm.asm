0x7D8B40: push    ecx
0x7D8B41: cmp     byte ptr ds:0B43074h, 0
0x7D8B48: mov     [esp+4+var_4], 0
0x7D8B4F: jnz     short loc_7D8B73
0x7D8B51: cmp     dword ptr ds:0B43108h, 0
0x7D8B58: jz      short loc_7D8B73
0x7D8B5A: test    byte ptr ds:0B42F40h, 20h
0x7D8B61: jz      short loc_7D8B73
0x7D8B63: cmp     dword ptr ds:0B42F48h, 2
0x7D8B6A: jl      short loc_7D8B73
0x7D8B6C: mov     eax, 1
0x7D8B71: jmp     short loc_7D8B75
0x7D8B73: xor     eax, eax
0x7D8B75: mov     edx, [ecx]
0x7D8B77: mov     edx, [edx+5Ch]
0x7D8B7A: neg     al
0x7D8B7C: push    esi
0x7D8B7D: push    0
0x7D8B7F: lea     esi, [esp+0Ch+var_4]
0x7D8B83: push    esi
0x7D8B84: sbb     eax, eax
0x7D8B86: and     eax, 20h
0x7D8B89: add     eax, 0Fh
0x7D8B8C: push    eax
0x7D8B8D: mov     eax, [esp+14h+arg_0]
0x7D8B91: push    eax
0x7D8B92: call    edx
0x7D8B94: mov     ax, word ptr [esp+8+var_4]
0x7D8B99: pop     esi
0x7D8B9A: pop     ecx
0x7D8B9B: retn    4
