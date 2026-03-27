0x927E30: mov     eax, [ecx+8]
0x927E33: test    eax, eax
0x927E35: jz      short loc_927E62
0x927E37: mov     edx, [esp+arg_C]
0x927E3B: push    edx
0x927E3C: mov     edx, [esp+4+arg_8]
0x927E40: push    edx
0x927E41: mov     edx, [esp+8+arg_4]
0x927E45: push    edx
0x927E46: lea     ecx, [eax+10h]
0x927E49: mov     eax, [ecx]
0x927E4B: lea     edx, [esp+0Ch+arg_C]
0x927E4F: push    edx
0x927E50: call    dword ptr [eax]
0x927E52: cmp     byte ptr [eax], 0
0x927E55: jnz     short loc_927E62
0x927E57: mov     eax, [esp+arg_0]
0x927E5B: xor     cl, cl
0x927E5D: mov     [eax], cl
0x927E5F: retn    10h
0x927E62: mov     eax, [esp+arg_0]
0x927E66: mov     cl, 1
0x927E68: mov     [eax], cl
0x927E6A: retn    10h
