0x631C50: mov     ecx, [ecx+18Ch]
0x631C56: xor     eax, eax
0x631C58: test    ecx, ecx
0x631C5A: jz      short locret_631C79
0x631C5C: push    esi
0x631C5D: mov     esi, [esp+4+arg_0]
0x631C61: mov     edx, [ecx]
0x631C63: test    edx, edx
0x631C65: jz      short loc_631C78
0x631C67: test    eax, eax
0x631C69: jnz     short loc_631C78
0x631C6B: cmp     [edx], esi
0x631C6D: jnz     short loc_631C71
0x631C6F: mov     eax, edx
0x631C71: mov     ecx, [ecx+4]
0x631C74: test    ecx, ecx
0x631C76: jnz     short loc_631C61
0x631C78: pop     esi
0x631C79: retn    4
