0x6DE790: sub     esp, 0Ch
0x6DE793: push    ebx
0x6DE794: push    ebp
0x6DE795: push    esi
0x6DE796: push    edi
0x6DE797: mov     edi, [esp+1Ch+arg_0]
0x6DE79B: push    edi
0x6DE79C: mov     ebx, ecx
0x6DE79E: call    nullsub_returnvVoid_1arg
0x6DE7A3: mov     eax, [edi+220h]
0x6DE7A9: mov     edx, [eax+8]
0x6DE7AC: push    1
0x6DE7AE: lea     ecx, [esp+20h+var_8]
0x6DE7B2: push    ecx
0x6DE7B3: mov     ebp, 4
0x6DE7B8: push    ebp
0x6DE7B9: lea     esi, [ebx+8]
0x6DE7BC: push    esi
0x6DE7BD: push    eax
0x6DE7BE: mov     [esp+30h+var_8], ebp
0x6DE7C2: call    edx
0x6DE7C4: mov     eax, [edi+220h]
0x6DE7CA: push    1
0x6DE7CC: lea     edx, [esp+34h+var_8]
0x6DE7D0: push    edx
0x6DE7D1: lea     ecx, [ebx+0Ch]
0x6DE7D4: push    ebp
0x6DE7D5: push    ecx
0x6DE7D6: push    eax
0x6DE7D7: mov     eax, [eax+8]
0x6DE7DA: mov     [esp+44h+var_8], ebp
0x6DE7DE: call    eax
0x6DE7E0: mov     cl, [ebx+14h]
0x6DE7E3: mov     eax, [edi+220h]
0x6DE7E9: push    1
0x6DE7EB: lea     edx, [esp+48h+var_8]
0x6DE7EF: push    edx
0x6DE7F0: mov     byte ptr [esp+4Ch+arg_0], cl
0x6DE7F4: mov     edx, [eax+8]
0x6DE7F7: push    1
0x6DE7F9: lea     ecx, [esp+50h+arg_0]
0x6DE7FD: push    ecx
0x6DE7FE: push    eax
0x6DE7FF: mov     [esp+58h+var_8], 1
0x6DE807: call    edx
0x6DE809: xor     eax, eax
0x6DE80B: add     esp, 3Ch
0x6DE80E: cmp     [esi], eax
0x6DE810: mov     [esp+1Ch+var_8], eax
0x6DE814: jbe     short loc_6DE878
0x6DE816: mov     [esp+1Ch+var_C], eax
0x6DE81A: lea     ebx, [ebx+0]
0x6DE820: mov     esi, [ebx+10h]
0x6DE823: add     esi, [esp+1Ch+var_C]
0x6DE827: mov     ebp, [ebx+0Ch]
0x6DE82A: mov     eax, [esi+4]
0x6DE82D: push    eax
0x6DE82E: mov     ecx, edi
0x6DE830: call    sub_713720
0x6DE835: test    ebp, ebp
0x6DE837: jz      short loc_6DE863
0x6DE839: mov     eax, [edi+220h]
0x6DE83F: push    1
0x6DE841: lea     edx, [ebp+ebp*2+0]
0x6DE845: add     edx, edx
0x6DE847: lea     ecx, [esp+20h+var_4]
0x6DE84B: push    ecx
0x6DE84C: mov     ecx, [esi]
0x6DE84E: add     edx, edx
0x6DE850: push    edx
0x6DE851: mov     edx, [eax+8]
0x6DE854: push    ecx
0x6DE855: push    eax
0x6DE856: mov     [esp+30h+var_4], 4
0x6DE85E: call    edx
0x6DE860: add     esp, 14h
0x6DE863: mov     eax, [esp+1Ch+var_8]
0x6DE867: add     [esp+1Ch+var_C], 0Ch
0x6DE86C: add     eax, 1
0x6DE86F: cmp     eax, [ebx+8]
0x6DE872: mov     [esp+1Ch+var_8], eax
0x6DE876: jb      short loc_6DE820
0x6DE878: pop     edi
0x6DE879: pop     esi
0x6DE87A: pop     ebp
0x6DE87B: pop     ebx
0x6DE87C: add     esp, 0Ch
0x6DE87F: retn    4
