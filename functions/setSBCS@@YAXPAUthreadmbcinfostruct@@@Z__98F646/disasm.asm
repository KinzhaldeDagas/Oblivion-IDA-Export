0x98F646: push    ebx
0x98F647: push    ebp
0x98F648: push    esi
0x98F649: push    edi
0x98F64A: mov     ebp, 101h
0x98F64F: mov     esi, eax
0x98F651: push    ebp
0x98F652: xor     edi, edi
0x98F654: lea     ebx, [esi+1Ch]
0x98F657: push    edi
0x98F658: push    ebx
0x98F659: call    __memset
0x98F65E: mov     [esi+4], edi
0x98F661: mov     [esi+8], edi
0x98F664: mov     [esi+0Ch], edi
0x98F667: xor     eax, eax
0x98F669: lea     edi, [esi+10h]
0x98F66C: stosd
0x98F66D: stosd
0x98F66E: stosd
0x98F66F: mov     eax, offset dword_B31390
0x98F674: add     esp, 0Ch
0x98F677: sub     eax, esi
0x98F679: mov     cl, [eax+ebx]
0x98F67C: mov     [ebx], cl
0x98F67E: inc     ebx
0x98F67F: dec     ebp
0x98F680: jnz     short loc_98F679
0x98F682: lea     ecx, [esi+11Dh]
0x98F688: mov     esi, 100h
0x98F68D: mov     dl, [ecx+eax]
0x98F690: mov     [ecx], dl
0x98F692: inc     ecx
0x98F693: dec     esi
0x98F694: jnz     short loc_98F68D
0x98F696: pop     edi
0x98F697: pop     esi
0x98F698: pop     ebp
0x98F699: pop     ebx
0x98F69A: retn
