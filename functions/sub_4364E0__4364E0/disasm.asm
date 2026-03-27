0x4364E0: mov     ecx, [ecx+1Ch]
0x4364E3: test    ecx, ecx
0x4364E5: jz      short loc_4364F1
0x4364E7: mov     eax, [ecx]
0x4364E9: mov     edx, [eax+0F4h]
0x4364EF: jmp     edx
0x4364F1: xor     al, al
0x4364F3: retn
