0x809890: push    ebx
0x809891: push    esi
0x809892: mov     ebx, ecx
0x809894: push    edi
0x809895: lea     esi, [ebx+9Ch]
0x80989B: mov     edi, 14h
0x8098A0: mov     ecx, [esi]
0x8098A2: test    ecx, ecx
0x8098A4: jz      short loc_8098AD
0x8098A6: mov     eax, [ecx]
0x8098A8: mov     edx, [eax+5Ch]
0x8098AB: call    edx
0x8098AD: add     esi, 4
0x8098B0: sub     edi, 1
0x8098B3: jnz     short loc_8098A0
0x8098B5: lea     esi, [ebx+0ECh]
0x8098BB: mov     edi, 0Ah
0x8098C0: mov     ecx, [esi]
0x8098C2: test    ecx, ecx
0x8098C4: jz      short loc_8098CD
0x8098C6: mov     eax, [ecx]
0x8098C8: mov     edx, [eax+44h]
0x8098CB: call    edx
0x8098CD: add     esi, 4
0x8098D0: sub     edi, 1
0x8098D3: jnz     short loc_8098C0
0x8098D5: pop     edi
0x8098D6: pop     esi
0x8098D7: mov     ecx, ebx
0x8098D9: pop     ebx
0x8098DA: jmp     sub_7C90B0
