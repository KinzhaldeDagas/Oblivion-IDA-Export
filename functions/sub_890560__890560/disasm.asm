0x890560: push    esi
0x890561: mov     esi, [esp+4+arg_0]
0x890565: push    edi
0x890566: mov     edi, ecx
0x890568: mov     ecx, [edi+90h]
0x89056E: cmp     ecx, esi
0x890570: jz      short loc_8905A9
0x890572: test    ecx, ecx
0x890574: jz      short loc_890593
0x890576: cmp     word ptr [ecx+4], 0
0x89057B: jz      short loc_890593
0x89057D: add     word ptr [ecx+6], 0FFFFh
0x890582: movzx   eax, word ptr [ecx+6]
0x890586: test    ax, ax
0x890589: jnz     short loc_890593
0x89058B: mov     eax, [ecx]
0x89058D: mov     edx, [eax]
0x89058F: push    1
0x890591: call    edx
0x890593: test    esi, esi
0x890595: mov     [edi+90h], esi
0x89059B: jz      short loc_8905A9
0x89059D: cmp     word ptr [esi+4], 0
0x8905A2: jz      short loc_8905A9
0x8905A4: add     word ptr [esi+6], 1
0x8905A9: pop     edi
0x8905AA: pop     esi
0x8905AB: retn    4
