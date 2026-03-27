0x8B6730: push    esi
0x8B6731: push    edi
0x8B6732: mov     edi, [esp+8+arg_0]
0x8B6736: push    edi
0x8B6737: mov     esi, ecx
0x8B6739: call    sub_8AEA60
0x8B673E: test    esi, esi
0x8B6740: jz      short loc_8B674E
0x8B6742: mov     eax, [esi+8]
0x8B6745: test    eax, eax
0x8B6747: jz      short loc_8B674E
0x8B6749: add     eax, 10h
0x8B674C: jmp     short loc_8B6753
0x8B674E: mov     eax, offset stru_BA7A40
0x8B6753: push    eax
0x8B6754: lea     ecx, [edi+10h]
0x8B6757: call    sub_47DCD0
0x8B675C: test    esi, esi
0x8B675E: jz      short loc_8B676A
0x8B6760: mov     esi, [esi+8]
0x8B6763: test    esi, esi
0x8B6765: lea     eax, [esi+20h]
0x8B6768: jnz     short loc_8B676F
0x8B676A: mov     eax, offset stru_BA7A40
0x8B676F: push    eax
0x8B6770: lea     ecx, [edi+20h]
0x8B6773: call    sub_47DCD0
0x8B6778: pop     edi
0x8B6779: pop     esi
0x8B677A: retn    4
