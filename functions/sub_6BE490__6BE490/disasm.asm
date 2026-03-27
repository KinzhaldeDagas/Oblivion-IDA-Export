0x6BE490: push    ebx
0x6BE491: push    esi
0x6BE492: push    edi
0x6BE493: lea     esi, [ecx+30h]
0x6BE496: mov     ebx, 3
0x6BE49B: xor     edi, edi
0x6BE49D: lea     ecx, [ecx+0]
0x6BE4A0: mov     eax, [esi]
0x6BE4A2: cmp     eax, edi
0x6BE4A4: jz      short loc_6BE4B6
0x6BE4A6: mov     ecx, [esi-10h]
0x6BE4A9: mov     edx, ds:0B3D2C8h[ecx*4]
0x6BE4B0: push    eax
0x6BE4B1: call    edx ; dword_B3D2C8
0x6BE4B3: add     esp, 4
0x6BE4B6: mov     [esi], edi
0x6BE4B8: mov     [esi-1Ch], edi
0x6BE4BB: mov     [esi-10h], edi
0x6BE4BE: add     esi, 4
0x6BE4C1: sub     ebx, 1
0x6BE4C4: jnz     short loc_6BE4A0
0x6BE4C6: pop     edi
0x6BE4C7: pop     esi
0x6BE4C8: pop     ebx
0x6BE4C9: retn
