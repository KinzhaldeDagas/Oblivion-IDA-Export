0x9A0BEC: xor     eax, eax
0x9A0BEE: test    dl, 10h
0x9A0BF1: jz      short loc_9A0BF8
0x9A0BF3: mov     eax, 80h ; '€'
0x9A0BF8: test    dl, 8
0x9A0BFB: push    ebx
0x9A0BFC: push    esi
0x9A0BFD: push    edi
0x9A0BFE: mov     ebx, 200h
0x9A0C03: jz      short loc_9A0C07
0x9A0C05: or      eax, ebx
0x9A0C07: test    dl, 4
0x9A0C0A: jz      short loc_9A0C11
0x9A0C0C: or      eax, 400h
0x9A0C11: test    dl, 2
0x9A0C14: jz      short loc_9A0C1B
0x9A0C16: or      eax, 800h
0x9A0C1B: test    dl, 1
0x9A0C1E: jz      short loc_9A0C25
0x9A0C20: or      eax, 1000h
0x9A0C25: test    edx, 80000h
0x9A0C2B: mov     edi, 100h
0x9A0C30: jz      short loc_9A0C34
0x9A0C32: or      eax, edi
0x9A0C34: mov     ecx, edx
0x9A0C36: mov     esi, 300h
0x9A0C3B: and     ecx, esi
0x9A0C3D: jz      short loc_9A0C5E
0x9A0C3F: cmp     ecx, edi
0x9A0C41: jz      short loc_9A0C59
0x9A0C43: cmp     ecx, ebx
0x9A0C45: jz      short loc_9A0C52
0x9A0C47: cmp     ecx, esi
0x9A0C49: jnz     short loc_9A0C5E
0x9A0C4B: or      eax, 6000h
0x9A0C50: jmp     short loc_9A0C5E
0x9A0C52: or      eax, 4000h
0x9A0C57: jmp     short loc_9A0C5E
0x9A0C59: or      eax, 2000h
0x9A0C5E: mov     ecx, 3000000h
0x9A0C63: pop     edi
0x9A0C64: and     edx, ecx
0x9A0C66: cmp     edx, 1000000h
0x9A0C6C: pop     esi
0x9A0C6D: pop     ebx
0x9A0C6E: jz      short loc_9A0C86
0x9A0C70: cmp     edx, 2000000h
0x9A0C76: jz      short loc_9A0C82
0x9A0C78: cmp     edx, ecx
0x9A0C7A: jnz     short locret_9A0C8B
0x9A0C7C: or      eax, 8000h
0x9A0C81: retn
0x9A0C82: or      eax, 40h
0x9A0C85: retn
0x9A0C86: or      eax, 8040h
0x9A0C8B: retn
