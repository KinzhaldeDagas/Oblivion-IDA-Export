0x8067A0: push    ebx
0x8067A1: push    esi
0x8067A2: mov     ebx, ecx
0x8067A4: push    edi
0x8067A5: lea     esi, [ebx+9Ch]
0x8067AB: mov     edi, 24h ; '$'
0x8067B0: mov     ecx, [esi]
0x8067B2: test    ecx, ecx
0x8067B4: jz      short loc_8067BD
0x8067B6: mov     eax, [ecx]
0x8067B8: mov     edx, [eax+5Ch]
0x8067BB: call    edx
0x8067BD: add     esi, 4
0x8067C0: sub     edi, 1
0x8067C3: jnz     short loc_8067B0
0x8067C5: lea     esi, [ebx+12Ch]
0x8067CB: mov     edi, 1Eh
0x8067D0: mov     ecx, [esi]
0x8067D2: test    ecx, ecx
0x8067D4: jz      short loc_8067DD
0x8067D6: mov     eax, [ecx]
0x8067D8: mov     edx, [eax+44h]
0x8067DB: call    edx
0x8067DD: add     esi, 4
0x8067E0: sub     edi, 1
0x8067E3: jnz     short loc_8067D0
0x8067E5: pop     edi
0x8067E6: pop     esi
0x8067E7: mov     ecx, ebx
0x8067E9: pop     ebx
0x8067EA: jmp     sub_7C90B0
