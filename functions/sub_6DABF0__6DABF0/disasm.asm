0x6DABF0: push    ebx
0x6DABF1: push    esi
0x6DABF2: mov     ebx, ecx
0x6DABF4: mov     esi, [ebx+1Ch]
0x6DABF7: push    edi
0x6DABF8: mov     edi, [esp+0Ch+arg_0]
0x6DABFC: cmp     esi, edi
0x6DABFE: jz      short loc_6DAC31
0x6DAC00: test    esi, esi
0x6DAC02: jz      short loc_6DAC20
0x6DAC04: lea     eax, [esi+4]
0x6DAC07: push    eax; lpAddend
0x6DAC08: call    dword ptr ds:0A2807Ch
0x6DAC0E: test    eax, eax
0x6DAC10: jnz     short loc_6DAC20
0x6DAC12: test    esi, esi
0x6DAC14: jz      short loc_6DAC20
0x6DAC16: mov     edx, [esi]
0x6DAC18: mov     eax, [edx]
0x6DAC1A: push    1
0x6DAC1C: mov     ecx, esi
0x6DAC1E: call    eax
0x6DAC20: test    edi, edi
0x6DAC22: mov     [ebx+1Ch], edi
0x6DAC25: jz      short loc_6DAC31
0x6DAC27: add     edi, 4
0x6DAC2A: push    edi; lpAddend
0x6DAC2B: call    dword ptr ds:0A28078h
0x6DAC31: pop     edi
0x6DAC32: pop     esi
0x6DAC33: pop     ebx
0x6DAC34: retn    4
