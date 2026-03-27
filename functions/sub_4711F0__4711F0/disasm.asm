0x4711F0: mov     eax, [ecx+0CCh]
0x4711F6: test    eax, eax
0x4711F8: jnz     short loc_4711FD
0x4711FA: xor     al, al
0x4711FC: retn
0x4711FD: xor     ecx, ecx
0x4711FF: cmp     dword ptr [eax], 1
0x471202: setz    cl
0x471205: mov     al, cl
0x471207: retn
