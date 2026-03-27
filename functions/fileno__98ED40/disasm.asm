0x98ED40: mov     eax, [esp+File]
0x98ED44: push    esi
0x98ED45: xor     esi, esi
0x98ED47: cmp     eax, esi
0x98ED49: jnz     short loc_98ED68
0x98ED4B: call    __errno
0x98ED50: push    esi
0x98ED51: push    esi
0x98ED52: push    esi
0x98ED53: push    esi
0x98ED54: push    esi
0x98ED55: mov     dword ptr [eax], 16h
0x98ED5B: call    __invalid_parameter
0x98ED60: add     esp, 14h
0x98ED63: or      eax, 0FFFFFFFFh
0x98ED66: pop     esi
0x98ED67: retn
0x98ED68: mov     eax, [eax+10h]
0x98ED6B: pop     esi
0x98ED6C: retn
