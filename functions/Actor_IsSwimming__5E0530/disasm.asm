0x5E0530: cmp     dword ptr [ecx+58h], 0
0x5E0534: jz      short loc_5E054C
0x5E0536: mov     ecx, [ecx+58h]
0x5E0539: mov     eax, [ecx]
0x5E053B: mov     edx, [eax+2C0h]
0x5E0541: call    edx
0x5E0543: test    ax, 800h
0x5E0547: jz      short loc_5E054C
0x5E0549: mov     al, 1
0x5E054B: retn
0x5E054C: xor     al, al
0x5E054E: retn
