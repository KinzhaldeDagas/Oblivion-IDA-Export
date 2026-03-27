0x4A5000: mov     eax, [ecx]
0x4A5002: mov     edx, [eax+10h]
0x4A5005: push    esi
0x4A5006: call    edx
0x4A5008: mov     ecx, [esp+4+arg_0]
0x4A500C: mov     esi, eax
0x4A500E: mov     eax, [esi]
0x4A5010: mov     edx, [eax+18h]
0x4A5013: push    2
0x4A5015: push    ecx
0x4A5016: mov     ecx, esi
0x4A5018: call    edx
0x4A501A: mov     eax, esi
0x4A501C: pop     esi
0x4A501D: retn    4
