0x8A0570: push    esi
0x8A0571: mov     esi, ecx
0x8A0573: test    esi, esi
0x8A0575: push    edi
0x8A0576: jz      short loc_8A057D
0x8A0578: mov     eax, [esi+8]
0x8A057B: jmp     short loc_8A057F
0x8A057D: xor     eax, eax
0x8A057F: mov     edi, [esp+8+arg_0]
0x8A0583: cmp     edi, eax
0x8A0585: jz      short loc_8A05A2
0x8A0587: test    eax, eax
0x8A0589: jz      short loc_8A059A
0x8A058B: mov     ecx, [eax+8]
0x8A058E: test    ecx, ecx
0x8A0590: jz      short loc_8A059A
0x8A0592: mov     edx, [ecx]
0x8A0594: push    eax
0x8A0595: mov     eax, [edx+8]
0x8A0598: call    eax
0x8A059A: push    edi
0x8A059B: mov     ecx, esi
0x8A059D: call    sub_89D400
0x8A05A2: pop     edi
0x8A05A3: pop     esi
0x8A05A4: retn    4
