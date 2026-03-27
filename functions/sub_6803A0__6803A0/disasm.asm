0x6803A0: mov     edx, [esp+arg_0]
0x6803A4: xor     al, al
0x6803A6: test    edx, edx
0x6803A8: jz      short locret_6803E0
0x6803AA: cmp     [ecx+8], edx
0x6803AD: jnz     short loc_6803B4
0x6803AF: mov     ecx, [ecx+4]
0x6803B2: jmp     short loc_6803BC
0x6803B4: cmp     [ecx+10h], edx
0x6803B7: jnz     short locret_6803E0
0x6803B9: mov     ecx, [ecx+0Ch]
0x6803BC: test    ecx, ecx
0x6803BE: jz      short locret_6803E0
0x6803C0: mov     eax, [ecx]
0x6803C2: mov     edx, [eax+174h]
0x6803C8: call    edx
0x6803CA: mov     edx, [eax]
0x6803CC: mov     ecx, [esp+arg_4]
0x6803D0: mov     [ecx], edx
0x6803D2: mov     edx, [eax+4]
0x6803D5: mov     [ecx+4], edx
0x6803D8: mov     eax, [eax+8]
0x6803DB: mov     [ecx+8], eax
0x6803DE: mov     al, 1
0x6803E0: retn    8
