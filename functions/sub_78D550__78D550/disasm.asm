0x78D550: sub     esp, 8
0x78D553: push    ebx
0x78D554: push    esi
0x78D555: mov     esi, ecx
0x78D557: mov     ebx, [esi+4]
0x78D55A: test    ebx, ebx
0x78D55C: push    edi
0x78D55D: jnz     short loc_78D563
0x78D55F: xor     edi, edi
0x78D561: jmp     short loc_78D57B
0x78D563: mov     ecx, [esi+8]
0x78D566: sub     ecx, ebx
0x78D568: mov     eax, 92492493h
0x78D56D: imul    ecx
0x78D56F: add     edx, ecx
0x78D571: sar     edx, 4
0x78D574: mov     edi, edx
0x78D576: shr     edi, 1Fh
0x78D579: add     edi, edx
0x78D57B: test    ebx, ebx
0x78D57D: jz      short loc_78D5CD
0x78D57F: mov     ecx, [esi+0Ch]
0x78D582: sub     ecx, ebx
0x78D584: mov     eax, 92492493h
0x78D589: imul    ecx
0x78D58B: add     edx, ecx
0x78D58D: sar     edx, 4
0x78D590: mov     eax, edx
0x78D592: shr     eax, 1Fh
0x78D595: add     eax, edx
0x78D597: cmp     edi, eax
0x78D599: jnb     short loc_78D5CD
0x78D59B: mov     ecx, [esp+14h+arg_0]
0x78D59F: mov     edx, [esp+14h+arg_0]
0x78D5A3: mov     edi, [esi+8]
0x78D5A6: mov     byte ptr [esp+14h+var_8], 0
0x78D5AB: mov     eax, [esp+14h+var_8]
0x78D5AF: push    eax
0x78D5B0: push    ecx
0x78D5B1: push    esi
0x78D5B2: push    edx
0x78D5B3: push    1
0x78D5B5: push    edi
0x78D5B6: call    sub_788AE0
0x78D5BB: add     esp, 18h
0x78D5BE: add     edi, 1Ch
0x78D5C1: mov     [esi+8], edi
0x78D5C4: pop     edi
0x78D5C5: pop     esi
0x78D5C6: pop     ebx
0x78D5C7: add     esp, 8
0x78D5CA: retn    4
0x78D5CD: mov     edi, [esi+8]
0x78D5D0: cmp     ebx, edi
0x78D5D2: jbe     short loc_78D5D9
0x78D5D4: call    __invalid_parameter_noinfo
0x78D5D9: mov     eax, [esp+14h+arg_0]
0x78D5DD: push    eax
0x78D5DE: push    edi
0x78D5DF: push    esi
0x78D5E0: lea     ecx, [esp+20h+var_8]
0x78D5E4: push    ecx
0x78D5E5: mov     ecx, esi
0x78D5E7: call    sub_78C8F0
0x78D5EC: pop     edi
0x78D5ED: pop     esi
0x78D5EE: pop     ebx
0x78D5EF: add     esp, 8
0x78D5F2: retn    4
