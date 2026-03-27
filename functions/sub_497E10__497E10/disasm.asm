0x497E10: mov     ecx, [ecx+880h]
0x497E16: mov     eax, [ecx]
0x497E18: mov     edx, [eax+70h]
0x497E1B: push    esi
0x497E1C: push    0
0x497E1E: call    edx
0x497E20: mov     esi, [eax+10h]
0x497E23: test    esi, esi
0x497E25: jnz     short loc_497E30
0x497E27: xor     eax, eax
0x497E29: mov     eax, 14h
0x497E2E: pop     esi
0x497E2F: retn
0x497E30: mov     eax, [esi]
0x497E32: mov     edx, [eax+10h]
0x497E35: mov     ecx, esi
0x497E37: call    edx
0x497E39: test    eax, eax
0x497E3B: jz      short loc_497E4E
0x497E3D: lea     ecx, [ecx+0]
0x497E40: cmp     eax, offset unk_B4265C
0x497E45: jz      short loc_497E5B
0x497E47: mov     eax, [eax+4]
0x497E4A: test    eax, eax
0x497E4C: jnz     short loc_497E40
0x497E4E: xor     al, al
0x497E50: neg     al
0x497E52: sbb     eax, eax
0x497E54: and     eax, esi
0x497E56: add     eax, 14h
0x497E59: pop     esi
0x497E5A: retn
0x497E5B: mov     al, 1
0x497E5D: neg     al
0x497E5F: sbb     eax, eax
0x497E61: and     eax, esi
0x497E63: add     eax, 14h
0x497E66: pop     esi
0x497E67: retn
