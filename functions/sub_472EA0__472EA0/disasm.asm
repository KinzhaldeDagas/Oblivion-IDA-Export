0x472EA0: cmp     dword ptr [ecx+0D0h], 0
0x472EA7: jz      short loc_472EAC
0x472EA9: xor     al, al
0x472EAB: retn
0x472EAC: mov     eax, [ecx+0CCh]
0x472EB2: test    eax, eax
0x472EB4: jnz     short loc_472EB9
0x472EB6: mov     al, 1
0x472EB8: retn
0x472EB9: cmp     dword ptr [eax+10h], 0
0x472EBD: jz      short loc_472EA9
0x472EBF: cmp     dword ptr [eax], 3
0x472EC2: setz    al
0x472EC5: retn
