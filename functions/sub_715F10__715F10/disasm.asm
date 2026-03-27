0x715F10: push    esi
0x715F11: push    edi
0x715F12: mov     edi, [esp+8+a2]
0x715F16: push    edi; a2
0x715F17: mov     esi, ecx
0x715F19: call    sub_700650
0x715F1E: test    al, al
0x715F20: jnz     short loc_715F27
0x715F22: pop     edi
0x715F23: pop     esi
0x715F24: retn    4
0x715F27: mov     ecx, [esi+34h]
0x715F2A: test    ecx, ecx
0x715F2C: jz      short loc_715F36
0x715F2E: mov     eax, [ecx]
0x715F30: mov     edx, [eax+24h]
0x715F33: push    edi
0x715F34: call    edx
0x715F36: pop     edi
0x715F37: mov     al, 1
0x715F39: pop     esi
0x715F3A: retn    4
