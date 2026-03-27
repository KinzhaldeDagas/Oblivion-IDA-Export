0x746D90: movzx   edx, word ptr [ecx+0A0h]
0x746D97: movzx   eax, word ptr [ecx+0A4h]
0x746D9E: add     eax, edx
0x746DA0: movzx   edx, word ptr [ecx+9Ch]
0x746DA7: add     eax, edx
0x746DA9: movzx   edx, word ptr [ecx+98h]
0x746DB0: add     eax, edx
0x746DB2: movzx   edx, word ptr [ecx+94h]
0x746DB9: add     eax, edx
0x746DBB: movzx   edx, word ptr [ecx+90h]
0x746DC2: add     eax, edx
0x746DC4: movzx   edx, word ptr [ecx+8Ch]
0x746DCB: push    ebx
0x746DCC: push    esi
0x746DCD: xor     esi, esi
0x746DCF: push    edi
0x746DD0: add     eax, edx
0x746DD2: lea     edx, [ecx+0A8h]
0x746DD8: mov     edi, 79h ; 'y'
0x746DDD: lea     ecx, [ecx+0]
0x746DE0: movzx   ebx, word ptr [edx]
0x746DE3: add     esi, ebx
0x746DE5: add     edx, 4
0x746DE8: sub     edi, 1
0x746DEB: jnz     short loc_746DE0
0x746DED: lea     edx, [ecx+28Ch]
0x746DF3: mov     edi, 80h ; '€'
0x746DF8: movzx   ebx, word ptr [edx]
0x746DFB: add     eax, ebx
0x746DFD: add     edx, 4
0x746E00: sub     edi, 1
0x746E03: jnz     short loc_746DF8
0x746E05: shr     esi, 2
0x746E08: cmp     eax, esi
0x746E0A: pop     edi
0x746E0B: setbe   al
0x746E0E: pop     esi
0x746E0F: mov     [ecx+1Ch], al
0x746E12: pop     ebx
0x746E13: retn
