0x6D5AD0: push    ebx
0x6D5AD1: push    esi
0x6D5AD2: mov     ebx, ecx
0x6D5AD4: mov     esi, [ebx+2Ch]
0x6D5AD7: push    edi
0x6D5AD8: mov     edi, [esp+0Ch+arg_0]
0x6D5ADC: cmp     esi, edi
0x6D5ADE: jz      short loc_6D5B11
0x6D5AE0: test    esi, esi
0x6D5AE2: jz      short loc_6D5B00
0x6D5AE4: lea     eax, [esi+4]
0x6D5AE7: push    eax; lpAddend
0x6D5AE8: call    dword ptr ds:0A2807Ch
0x6D5AEE: test    eax, eax
0x6D5AF0: jnz     short loc_6D5B00
0x6D5AF2: test    esi, esi
0x6D5AF4: jz      short loc_6D5B00
0x6D5AF6: mov     edx, [esi]
0x6D5AF8: mov     eax, [edx]
0x6D5AFA: push    1
0x6D5AFC: mov     ecx, esi
0x6D5AFE: call    eax
0x6D5B00: test    edi, edi
0x6D5B02: mov     [ebx+2Ch], edi
0x6D5B05: jz      short loc_6D5B11
0x6D5B07: add     edi, 4
0x6D5B0A: push    edi; lpAddend
0x6D5B0B: call    dword ptr ds:0A28078h
0x6D5B11: pop     edi
0x6D5B12: pop     esi
0x6D5B13: pop     ebx
0x6D5B14: retn    4
