0x5E0F30: cmp     dword ptr [ecx+58h], 0
0x5E0F34: jz      short loc_5E0F4A
0x5E0F36: mov     ecx, [ecx+58h]
0x5E0F39: mov     eax, [ecx]
0x5E0F3B: mov     edx, [eax+36Ch]
0x5E0F41: call    edx
0x5E0F43: cmp     eax, 9
0x5E0F46: setz    al
0x5E0F49: retn
0x5E0F4A: xor     al, al
0x5E0F4C: retn
