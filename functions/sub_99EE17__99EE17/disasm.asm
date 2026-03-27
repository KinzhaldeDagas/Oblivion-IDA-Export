0x99EE17: mov     eax, [esp+arg_0]
0x99EE1B: push    esi
0x99EE1C: xor     esi, esi
0x99EE1E: cmp     eax, esi
0x99EE20: jnz     short loc_99EE3F
0x99EE22: call    __errno
0x99EE27: push    esi
0x99EE28: push    esi
0x99EE29: push    esi
0x99EE2A: push    esi
0x99EE2B: push    esi
0x99EE2C: mov     dword ptr [eax], 16h
0x99EE32: call    __invalid_parameter
0x99EE37: add     esp, 14h
0x99EE3A: push    16h
0x99EE3C: pop     eax
0x99EE3D: pop     esi
0x99EE3E: retn
0x99EE3F: mov     ecx, dword_B31FE8
0x99EE45: mov     [eax], ecx
0x99EE47: xor     eax, eax
0x99EE49: pop     esi
0x99EE4A: retn
