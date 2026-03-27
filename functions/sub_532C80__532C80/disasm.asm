0x532C80: mov     eax, [esp+arg_0]
0x532C84: test    eax, eax
0x532C86: jz      short loc_532C98
0x532C88: mov     edx, [eax]
0x532C8A: push    ecx
0x532C8B: mov     ecx, eax
0x532C8D: mov     eax, [edx+5Ch]
0x532C90: call    eax
0x532C92: movzx   eax, al
0x532C95: retn    4
0x532C98: xor     eax, eax
0x532C9A: retn    4
