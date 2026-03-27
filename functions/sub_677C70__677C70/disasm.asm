0x677C70: push    ecx
0x677C71: mov     eax, [ecx]
0x677C73: test    eax, eax
0x677C75: push    esi
0x677C76: mov     esi, [esp+8+arg_0]
0x677C7A: mov     [esp+8+var_4], 0
0x677C82: mov     [esi], eax
0x677C84: jz      short loc_677C90
0x677C86: add     eax, 4
0x677C89: push    eax; lpAddend
0x677C8A: call    dword ptr ds:0A28078h
0x677C90: mov     eax, esi
0x677C92: pop     esi
0x677C93: pop     ecx
0x677C94: retn    4
