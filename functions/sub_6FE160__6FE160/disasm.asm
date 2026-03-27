0x6FE160: push    ebx
0x6FE161: push    esi
0x6FE162: push    edi
0x6FE163: mov     edi, [esp+0Ch+arg_0]
0x6FE167: push    edi
0x6FE168: mov     ebx, ecx
0x6FE16A: call    nullsub_returnvVoid_1arg
0x6FE16F: mov     ecx, edi
0x6FE171: call    sub_7124D0
0x6FE176: mov     esi, eax
0x6FE178: test    esi, esi
0x6FE17A: jz      short loc_6FE1BC
0x6FE17C: push    esi
0x6FE17D: lea     ecx, [ebx+8]
0x6FE180: call    NiTArray_SetSize
0x6FE185: shr     esi, 1
0x6FE187: jz      short loc_6FE1BC
0x6FE189: mov     ebx, esi
0x6FE18B: jmp     short loc_6FE190
0x6FE18D: align 10h
0x6FE190: mov     ecx, edi
0x6FE192: call    sub_7124A0
0x6FE197: mov     ecx, edi
0x6FE199: mov     esi, eax
0x6FE19B: call    sub_7124A0
0x6FE1A0: test    esi, esi
0x6FE1A2: jz      short loc_6FE1B7
0x6FE1A4: test    eax, eax
0x6FE1A6: jz      short loc_6FE1B7
0x6FE1A8: mov     edx, [esi]
0x6FE1AA: push    0
0x6FE1AC: push    eax
0x6FE1AD: mov     eax, [edx+84h]
0x6FE1B3: mov     ecx, esi
0x6FE1B5: call    eax
0x6FE1B7: sub     ebx, 1
0x6FE1BA: jnz     short loc_6FE190
0x6FE1BC: pop     edi
0x6FE1BD: pop     esi
0x6FE1BE: pop     ebx
0x6FE1BF: retn    4
