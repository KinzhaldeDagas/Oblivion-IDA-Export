0x9A0B2A: mov     eax, [esp+arg_0]
0x9A0B2E: push    esi
0x9A0B2F: xor     esi, esi
0x9A0B31: cmp     eax, esi
0x9A0B33: jnz     short loc_9A0B52
0x9A0B35: call    __errno
0x9A0B3A: push    esi
0x9A0B3B: push    esi
0x9A0B3C: push    esi
0x9A0B3D: push    esi
0x9A0B3E: push    esi
0x9A0B3F: mov     dword ptr [eax], 16h
0x9A0B45: call    __invalid_parameter
0x9A0B4A: add     esp, 14h
0x9A0B4D: push    16h
0x9A0B4F: pop     eax
0x9A0B50: pop     esi
0x9A0B51: retn
0x9A0B52: mov     ecx, dword_BAA878
0x9A0B58: mov     [eax], ecx
0x9A0B5A: xor     eax, eax
0x9A0B5C: pop     esi
0x9A0B5D: retn
