0x5E1AB0: push    ebx
0x5E1AB1: push    esi
0x5E1AB2: mov     esi, ecx
0x5E1AB4: mov     eax, [esi]
0x5E1AB6: mov     edx, [eax+170h]
0x5E1ABC: push    edi
0x5E1ABD: xor     ebx, ebx
0x5E1ABF: call    edx
0x5E1AC1: mov     edi, eax
0x5E1AC3: test    edi, edi
0x5E1AC5: jz      short loc_5E1AD9
0x5E1AC7: mov     eax, [esi]
0x5E1AC9: mov     edx, [eax+190h]
0x5E1ACF: mov     ecx, esi
0x5E1AD1: call    edx
0x5E1AD3: test    al, al
0x5E1AD5: jz      short loc_5E1AD9
0x5E1AD7: mov     ebx, edi
0x5E1AD9: mov     eax, [ebx+24h]
0x5E1ADC: mov     edx, [eax+10h]
0x5E1ADF: lea     ecx, [ebx+24h]
0x5E1AE2: pop     edi
0x5E1AE3: pop     esi
0x5E1AE4: pop     ebx
0x5E1AE5: jmp     edx
