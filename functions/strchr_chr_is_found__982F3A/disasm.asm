0x982F3A: mov     eax, [edx-4]
0x982F3D: cmp     al, bl
0x982F3F: jz      short loc_982F77
0x982F41: test    al, al
0x982F43: jz      short _strchr___retnull
0x982F45: cmp     ah, bl
0x982F47: jz      short loc_982F70
0x982F49: test    ah, ah
0x982F4B: jz      short _strchr___retnull
0x982F4D: shr     eax, 10h
0x982F50: cmp     al, bl
0x982F52: jz      short loc_982F69
0x982F54: test    al, al
0x982F56: jz      short _strchr___retnull
0x982F58: cmp     ah, bl
0x982F5A: jz      short loc_982F62
0x982F5C: test    ah, ah
0x982F5E: jz      short _strchr___retnull
0x982F60: jmp     short _strchr___main_loop_0
0x982F62: pop     esi
0x982F63: pop     edi
0x982F64: lea     eax, [edx-1]
0x982F67: pop     ebx
0x982F68: retn
0x982F69: lea     eax, [edx-2]
0x982F6C: pop     esi
0x982F6D: pop     edi
0x982F6E: pop     ebx
0x982F6F: retn
0x982F70: lea     eax, [edx-3]
0x982F73: pop     esi
0x982F74: pop     edi
0x982F75: pop     ebx
0x982F76: retn
0x982F77: lea     eax, [edx-4]
0x982F7A: pop     esi
0x982F7B: pop     edi
0x982F7C: pop     ebx
0x982F7D: retn
