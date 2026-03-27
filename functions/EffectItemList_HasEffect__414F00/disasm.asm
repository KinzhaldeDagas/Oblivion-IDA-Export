0x414F00: cmp     dword ptr [ecx+8], 0
0x414F04: jnz     short loc_414F11
0x414F06: cmp     dword ptr [ecx+4], 0
0x414F0A: jnz     short loc_414F11
0x414F0C: xor     al, al
0x414F0E: retn    8
0x414F11: xor     al, al
0x414F13: test    ecx, ecx
0x414F15: jz      short locret_414F6F
0x414F17: push    esi
0x414F18: mov     esi, [esp+4+arg_4]
0x414F1C: push    edi
0x414F1D: mov     edi, [esp+8+arg_0]
0x414F21: push    ebx
0x414F22: push    ebp
0x414F23: test    al, al
0x414F25: jnz     short loc_414F6B
0x414F27: mov     edx, [ecx+4]
0x414F2A: test    edx, edx
0x414F2C: mov     bl, 1
0x414F2E: jz      short loc_414F5F
0x414F30: cmp     esi, 48h ; 'H'
0x414F33: jz      short loc_414F47
0x414F35: mov     ebp, [edx+1Ch]
0x414F38: test    dword ptr [ebp+58h], 180000h
0x414F3F: jz      short loc_414F47
0x414F41: cmp     [edx+14h], esi
0x414F44: setz    bl
0x414F47: cmp     [edx], edi
0x414F49: jnz     short loc_414F5F
0x414F4B: mov     edx, [edx+1Ch]
0x414F4E: mov     edx, [edx+58h]
0x414F51: shr     edx, 16h
0x414F54: test    dl, 1
0x414F57: jnz     short loc_414F5F
0x414F59: test    bl, bl
0x414F5B: jz      short loc_414F5F
0x414F5D: mov     al, 1
0x414F5F: mov     ecx, [ecx+8]
0x414F62: test    ecx, ecx
0x414F64: jz      short loc_414F6B
0x414F66: add     ecx, 0FFFFFFFCh
0x414F69: jnz     short loc_414F23
0x414F6B: pop     ebp
0x414F6C: pop     ebx
0x414F6D: pop     edi
0x414F6E: pop     esi
0x414F6F: retn    8
