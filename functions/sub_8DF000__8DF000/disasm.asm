0x8DF000: sub     ecx, 8
0x8DF003: jmp     loc_8DF020
0x8DF008: align 10h
0x8DF010: sub     ecx, 0Ch
0x8DF013: jmp     loc_8DF020
0x8DF018: align 10h
0x8DF020: push    esi
0x8DF021: mov     esi, ecx
0x8DF023: call    sub_8DEED0
0x8DF028: test    [esp+4+arg_0], 1
0x8DF02D: jz      short loc_8DF042
0x8DF02F: movzx   edx, word ptr [esi+4]
0x8DF033: mov     ecx, ds:0BA7D98h
0x8DF039: mov     eax, [ecx]
0x8DF03B: push    0Ch
0x8DF03D: push    edx
0x8DF03E: push    esi
0x8DF03F: call    dword ptr [eax+14h]
0x8DF042: mov     eax, esi
0x8DF044: pop     esi
0x8DF045: retn    4
