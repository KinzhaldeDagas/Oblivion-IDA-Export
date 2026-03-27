0x5E0550: push    esi
0x5E0551: mov     esi, ecx
0x5E0553: cmp     dword ptr [esi+58h], 0
0x5E0557: jz      short loc_5E0583
0x5E0559: mov     ecx, [esi+58h]
0x5E055C: mov     eax, [ecx]
0x5E055E: mov     edx, [eax+2C0h]
0x5E0564: call    edx
0x5E0566: test    ax, 400h
0x5E056A: jz      short loc_5E0583
0x5E056C: mov     ecx, [esi+58h]
0x5E056F: mov     eax, [ecx]
0x5E0571: mov     edx, [eax+2C0h]
0x5E0577: call    edx
0x5E0579: test    ax, 800h
0x5E057D: jnz     short loc_5E0583
0x5E057F: mov     al, 1
0x5E0581: pop     esi
0x5E0582: retn
0x5E0583: xor     al, al
0x5E0585: pop     esi
0x5E0586: retn
