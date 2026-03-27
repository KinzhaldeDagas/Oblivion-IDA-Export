0x899D60: mov     eax, [ecx+150h]
0x899D66: push    esi
0x899D67: lea     esi, [ecx+148h]
0x899D6D: mov     ecx, [esi+4]
0x899D70: and     eax, 3FFFFFFFh
0x899D75: cmp     ecx, eax
0x899D77: jnz     short loc_899D84
0x899D79: push    4
0x899D7B: push    esi
0x899D7C: call    sub_8A6EE0
0x899D81: add     esp, 8
0x899D84: mov     ecx, [esi+4]
0x899D87: mov     edx, [esi]
0x899D89: mov     eax, [esp+4+arg_0]
0x899D8D: mov     [edx+ecx*4], eax
0x899D90: inc     dword ptr [esi+4]
0x899D93: pop     esi
0x899D94: retn    4
