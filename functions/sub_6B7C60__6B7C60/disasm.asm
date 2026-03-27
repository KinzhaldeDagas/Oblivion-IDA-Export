0x6B7C60: xor     eax, eax
0x6B7C62: test    ecx, ecx
0x6B7C64: push    esi; ArgList
0x6B7C65: jz      short loc_6B7C88
0x6B7C67: mov     esi, [esp+4+arg_0]
0x6B7C6B: jmp     short loc_6B7C70
0x6B7C6D: align 10h
0x6B7C70: mov     edx, [ecx+4]
0x6B7C73: test    edx, edx
0x6B7C75: jnz     short loc_6B7C7B
0x6B7C77: cmp     [ecx], edx
0x6B7C79: jz      short loc_6B7C88
0x6B7C7B: cmp     esi, [ecx]
0x6B7C7D: jz      short loc_6B7C98
0x6B7C7F: mov     ecx, edx
0x6B7C81: add     eax, 1
0x6B7C84: test    ecx, ecx
0x6B7C86: jnz     short loc_6B7C70
0x6B7C88: push    offset aWhenTryingTo_6; "When trying to get a dialogue response "...
0x6B7C8D: call    PrintError
0x6B7C92: add     esp, 4
0x6B7C95: xor     ax, ax
0x6B7C98: pop     esi
0x6B7C99: retn    4
