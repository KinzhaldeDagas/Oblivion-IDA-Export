0x70AC60: mov     eax, [esp+arg_4]
0x70AC64: push    ebx
0x70AC65: mov     ebx, [esp+4+arg_0]
0x70AC69: push    ebp
0x70AC6A: push    esi
0x70AC6B: push    eax
0x70AC6C: push    ebx
0x70AC6D: mov     ebp, ecx
0x70AC6F: call    sub_707E90
0x70AC74: xor     esi, esi
0x70AC76: cmp     [ebp+0B6h], si
0x70AC7D: jbe     short loc_70ACE1
0x70AC7F: push    edi
0x70AC80: mov     ecx, [ebp+0B0h]
0x70AC86: mov     ecx, [ecx+esi*4]
0x70AC89: test    ecx, ecx
0x70AC8B: jz      short loc_70ACD2
0x70AC8D: mov     edx, [ecx]
0x70AC8F: mov     eax, [esp+10h+arg_4]
0x70AC93: mov     edx, [edx+18h]
0x70AC96: push    eax
0x70AC97: call    edx
0x70AC99: mov     edx, [ebx]
0x70AC9B: mov     edx, [edx+90h]
0x70ACA1: push    eax
0x70ACA2: push    esi
0x70ACA3: lea     eax, [esp+18h+arg_0]
0x70ACA7: push    eax
0x70ACA8: mov     ecx, ebx
0x70ACAA: call    edx
0x70ACAC: mov     eax, [esp+10h+arg_0]
0x70ACB0: test    eax, eax
0x70ACB2: jz      short loc_70ACD2
0x70ACB4: mov     edi, eax
0x70ACB6: add     eax, 4
0x70ACB9: push    eax; lpAddend
0x70ACBA: call    dword ptr ds:0A2807Ch
0x70ACC0: test    eax, eax
0x70ACC2: jnz     short loc_70ACD2
0x70ACC4: test    edi, edi
0x70ACC6: jz      short loc_70ACD2
0x70ACC8: mov     eax, [edi]
0x70ACCA: mov     edx, [eax]
0x70ACCC: push    1
0x70ACCE: mov     ecx, edi
0x70ACD0: call    edx
0x70ACD2: movzx   eax, word ptr [ebp+0B6h]
0x70ACD9: add     esi, 1
0x70ACDC: cmp     esi, eax
0x70ACDE: jb      short loc_70AC80
0x70ACE0: pop     edi
0x70ACE1: pop     esi
0x70ACE2: pop     ebp
0x70ACE3: pop     ebx
0x70ACE4: retn    8
