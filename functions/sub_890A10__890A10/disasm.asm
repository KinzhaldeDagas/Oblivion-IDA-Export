0x890A10: test    ecx, ecx
0x890A12: push    esi
0x890A13: jz      short loc_890A3E
0x890A15: mov     ecx, [ecx+8]
0x890A18: test    ecx, ecx
0x890A1A: jz      short loc_890A3E
0x890A1C: mov     edx, [ecx+48h]
0x890A1F: xor     eax, eax
0x890A21: test    edx, edx
0x890A23: jle     short loc_890A3E
0x890A25: mov     ecx, [ecx+44h]
0x890A28: mov     esi, [esp+4+arg_0]
0x890A2C: lea     esp, [esp+0]
0x890A30: cmp     [ecx], esi
0x890A32: jz      short loc_890A54
0x890A34: add     eax, 1
0x890A37: add     ecx, 10h
0x890A3A: cmp     eax, edx
0x890A3C: jl      short loc_890A30
0x890A3E: lea     eax, [esp+4+arg_0]
0x890A42: xor     ecx, ecx
0x890A44: mov     byte ptr [esp+4+arg_0], 0
0x890A49: cmp     [eax], cl
0x890A4B: pop     esi
0x890A4C: setnz   cl
0x890A4F: mov     al, cl
0x890A51: retn    4
0x890A54: lea     eax, [esp+4+arg_0]
0x890A58: xor     ecx, ecx
0x890A5A: mov     byte ptr [esp+4+arg_0], 1
0x890A5F: cmp     [eax], cl
0x890A61: pop     esi
0x890A62: setnz   cl
0x890A65: mov     al, cl
0x890A67: retn    4
