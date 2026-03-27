0x596C20: mov     eax, [esp+arg_4]
0x596C24: mov     eax, [eax+1Ch]
0x596C27: test    eax, eax
0x596C29: jnz     short loc_596C30
0x596C2B: mov     eax, offset EmptyString
0x596C30: mov     ecx, [esp+arg_0]
0x596C34: mov     ecx, [ecx+1Ch]
0x596C37: test    ecx, ecx
0x596C39: jnz     short loc_596C40
0x596C3B: mov     ecx, offset EmptyString
0x596C40: mov     [esp+arg_4], eax; unsigned __int8 *
0x596C44: mov     [esp+arg_0], ecx; unsigned __int8 *
0x596C48: jmp     __mbsicmp
