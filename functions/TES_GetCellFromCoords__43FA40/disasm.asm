0x43FA40: mov     edx, ds:0B06A2Ch
0x43FA46: push    ebx
0x43FA47: mov     ebx, [esp+4+a2]
0x43FA4B: push    ebp
0x43FA4C: mov     ebp, [esp+8+a3]
0x43FA50: mov     eax, edx
0x43FA52: shr     eax, 1
0x43FA54: push    esi
0x43FA55: mov     esi, ecx
0x43FA57: mov     ecx, eax
0x43FA59: sub     eax, [esi+24h]
0x43FA5C: sub     ecx, [esi+20h]
0x43FA5F: add     eax, ebp
0x43FA61: push    edi
0x43FA62: add     ecx, ebx
0x43FA64: mov     edi, eax
0x43FA66: xor     eax, eax
0x43FA68: cmp     ecx, edx
0x43FA6A: jnb     short loc_43FA88
0x43FA6C: cmp     edi, edx
0x43FA6E: jnb     short loc_43FA88
0x43FA70: test    ecx, ecx
0x43FA72: jl      short loc_43FA88
0x43FA74: test    edi, edi
0x43FA76: jl      short loc_43FA88
0x43FA78: push    edi
0x43FA79: push    ecx
0x43FA7A: mov     ecx, [esi+8]
0x43FA7D: call    GetGridEntry
0x43FA82: mov     eax, [eax]
0x43FA84: test    eax, eax
0x43FA86: jnz     short loc_43FA9F
0x43FA88: mov     esi, [esi+74h]
0x43FA8B: test    esi, esi
0x43FA8D: jz      short loc_43FA9F
0x43FA8F: mov     ecx, ds:0B33A98h
0x43FA95: push    0
0x43FA97: push    esi
0x43FA98: push    ebp
0x43FA99: push    ebx
0x43FA9A: call    sub_447740
0x43FA9F: pop     edi
0x43FAA0: pop     esi
0x43FAA1: pop     ebp
0x43FAA2: pop     ebx
0x43FAA3: retn    8
