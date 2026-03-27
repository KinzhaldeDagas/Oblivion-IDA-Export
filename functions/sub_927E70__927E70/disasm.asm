0x927E70: mov     eax, [ecx+4]
0x927E73: test    eax, eax
0x927E75: jz      short loc_927E9D
0x927E77: mov     edx, [esp+arg_8]
0x927E7B: push    edx
0x927E7C: mov     edx, [esp+4+arg_4]
0x927E80: push    edx
0x927E81: lea     ecx, [eax+14h]
0x927E84: mov     eax, [ecx]
0x927E86: lea     edx, [esp+8+arg_8]
0x927E8A: push    edx
0x927E8B: call    dword ptr [eax]
0x927E8D: cmp     byte ptr [eax], 0
0x927E90: jnz     short loc_927E9D
0x927E92: mov     eax, [esp+arg_0]
0x927E96: xor     cl, cl
0x927E98: mov     [eax], cl
0x927E9A: retn    0Ch
0x927E9D: mov     eax, [esp+arg_0]
0x927EA1: mov     cl, 1
0x927EA3: mov     [eax], cl
0x927EA5: retn    0Ch
