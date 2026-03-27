0x6FDB00: sub     esp, 8
0x6FDB03: push    ebx
0x6FDB04: push    ebp
0x6FDB05: push    esi
0x6FDB06: mov     esi, [esp+14h+arg_0]
0x6FDB0A: push    esi
0x6FDB0B: mov     ebp, ecx
0x6FDB0D: call    sub_716050
0x6FDB12: mov     eax, [esi+220h]
0x6FDB18: push    1
0x6FDB1A: lea     ecx, [esp+18h+arg_0]
0x6FDB1E: push    ecx
0x6FDB1F: mov     ebx, 4
0x6FDB24: push    ebx
0x6FDB25: lea     edx, [ebp+3Ch]
0x6FDB28: push    edx
0x6FDB29: push    eax
0x6FDB2A: mov     eax, [eax+8]
0x6FDB2D: mov     [esp+28h+arg_0], ebx
0x6FDB31: call    eax
0x6FDB33: mov     eax, [esi+220h]
0x6FDB39: push    1
0x6FDB3B: lea     ecx, [esp+2Ch+arg_0]
0x6FDB3F: push    ecx
0x6FDB40: push    ebx
0x6FDB41: lea     edx, [ebp+40h]
0x6FDB44: push    edx
0x6FDB45: push    eax
0x6FDB46: mov     eax, [eax+8]
0x6FDB49: mov     [esp+3Ch+arg_0], ebx
0x6FDB4D: call    eax
0x6FDB4F: movzx   ecx, word ptr [ebp+4Eh]
0x6FDB53: mov     eax, [esi+220h]
0x6FDB59: push    1
0x6FDB5B: lea     edx, [esp+40h+arg_0]
0x6FDB5F: push    edx
0x6FDB60: mov     [esp+44h+var_8], ecx
0x6FDB64: mov     edx, [eax+8]
0x6FDB67: push    ebx
0x6FDB68: lea     ecx, [esp+48h+var_8]
0x6FDB6C: push    ecx
0x6FDB6D: push    eax
0x6FDB6E: mov     [esp+50h+arg_0], ebx
0x6FDB72: call    edx
0x6FDB74: add     esp, 3Ch
0x6FDB77: cmp     word ptr [ebp+4Eh], 0
0x6FDB7C: mov     [esp+14h+arg_0], 0
0x6FDB84: jbe     short loc_6FDC00
0x6FDB86: push    edi
0x6FDB87: jmp     short loc_6FDB90
0x6FDB89: align 10h
0x6FDB90: mov     eax, [ebp+48h]
0x6FDB93: mov     ecx, [esp+18h+arg_0]
0x6FDB97: mov     edi, [eax+ecx*4]
0x6FDB9A: test    edi, edi
0x6FDB9C: mov     eax, [esi+220h]
0x6FDBA2: push    1
0x6FDBA4: jz      short loc_6FDC09
0x6FDBA6: mov     edx, [edi+8]
0x6FDBA9: lea     ecx, [esp+1Ch+var_8]
0x6FDBAD: push    ecx
0x6FDBAE: mov     [esp+20h+var_4], edx
0x6FDBB2: push    ebx
0x6FDBB3: lea     edx, [esp+24h+var_4]
0x6FDBB7: push    edx
0x6FDBB8: push    eax
0x6FDBB9: mov     eax, [eax+8]
0x6FDBBC: mov     [esp+2Ch+var_8], ebx
0x6FDBC0: call    eax
0x6FDBC2: xor     ebx, ebx
0x6FDBC4: add     esp, 14h
0x6FDBC7: cmp     [edi+8], ebx
0x6FDBCA: jbe     short loc_6FDBE7
0x6FDBCC: lea     esp, [esp+0]
0x6FDBD0: mov     eax, [edi]
0x6FDBD2: mov     ecx, [eax+ebx*4]
0x6FDBD5: mov     edx, [esi]
0x6FDBD7: mov     edx, [edx+2Ch]
0x6FDBDA: push    ecx
0x6FDBDB: mov     ecx, esi
0x6FDBDD: call    edx
0x6FDBDF: add     ebx, 1
0x6FDBE2: cmp     ebx, [edi+8]
0x6FDBE5: jb      short loc_6FDBD0
0x6FDBE7: mov     ebx, 4
0x6FDBEC: mov     eax, [esp+18h+arg_0]
0x6FDBF0: movzx   ecx, word ptr [ebp+4Eh]
0x6FDBF4: add     eax, 1
0x6FDBF7: cmp     eax, ecx
0x6FDBF9: mov     [esp+18h+arg_0], eax
0x6FDBFD: jb      short loc_6FDB90
0x6FDBFF: pop     edi
0x6FDC00: pop     esi
0x6FDC01: pop     ebp
0x6FDC02: pop     ebx
0x6FDC03: add     esp, 8
0x6FDC06: retn    4
0x6FDC09: lea     ecx, [esp+1Ch+var_4]
0x6FDC0D: push    ecx
0x6FDC0E: push    ebx
0x6FDC0F: lea     edx, [esp+24h+var_8]
0x6FDC13: push    edx
0x6FDC14: mov     [esp+28h+var_8], 0
0x6FDC1C: push    eax
0x6FDC1D: mov     eax, [eax+8]
0x6FDC20: mov     [esp+2Ch+var_4], ebx
0x6FDC24: call    eax
0x6FDC26: add     esp, 14h
0x6FDC29: jmp     short loc_6FDBEC
