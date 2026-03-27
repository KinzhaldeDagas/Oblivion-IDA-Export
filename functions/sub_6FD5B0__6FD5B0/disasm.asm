0x6FD5B0: cmp     dword ptr [ecx+30h], 0
0x6FD5B4: jz      short loc_6FD5C7
0x6FD5B6: mov     ecx, [ecx+30h]
0x6FD5B9: mov     eax, [ecx]
0x6FD5BB: mov     edx, [eax+8]
0x6FD5BE: call    edx
0x6FD5C0: test    eax, eax
0x6FD5C2: jz      short loc_6FD5C7
0x6FD5C4: mov     al, 1
0x6FD5C6: retn
0x6FD5C7: xor     al, al
0x6FD5C9: retn
