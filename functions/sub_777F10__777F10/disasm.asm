0x777F10: push    esi
0x777F11: mov     esi, [ecx+1Ch]
0x777F14: test    esi, esi
0x777F16: jnz     short loc_777F1C
0x777F18: xor     al, al
0x777F1A: pop     esi
0x777F1B: retn
0x777F1C: xor     edx, edx
0x777F1E: test    esi, esi
0x777F20: jbe     short loc_777F3C
0x777F22: mov     eax, [ecx+24h]
0x777F25: cmp     dword ptr [eax], 0
0x777F28: jz      short loc_777F18
0x777F2A: mov     ecx, [eax]
0x777F2C: cmp     dword ptr [ecx+8], 0
0x777F30: jz      short loc_777F18
0x777F32: add     edx, 1
0x777F35: add     eax, 4
0x777F38: cmp     edx, esi
0x777F3A: jb      short loc_777F25
0x777F3C: mov     al, 1
0x777F3E: pop     esi
0x777F3F: retn
