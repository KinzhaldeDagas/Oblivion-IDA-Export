0x889CD0: mov     ecx, [ecx+50h]
0x889CD3: test    ecx, ecx
0x889CD5: jz      short loc_889CE3
0x889CD7: cmp     byte ptr [ecx+18h], 1
0x889CDB: jnz     short loc_889CE3
0x889CDD: mov     eax, [ecx+10h]
0x889CE0: add     eax, ecx
0x889CE2: retn
0x889CE3: xor     eax, eax
0x889CE5: retn
